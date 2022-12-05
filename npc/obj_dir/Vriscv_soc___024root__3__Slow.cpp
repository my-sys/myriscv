// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

void Vriscv_soc___024root___settle__TOP__4(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___settle__TOP__4\n"); );
    // Variables
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_167;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_182;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_197;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_232;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_247;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_299;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_314;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_329;
    VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp89;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp93;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    VlWide<3>/*95:0*/ __Vtemp100;
    VlWide<3>/*95:0*/ __Vtemp101;
    VlWide<3>/*95:0*/ __Vtemp104;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp133;
    VlWide<3>/*95:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp144;
    VlWide<3>/*95:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp157;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<3>/*95:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp168;
    VlWide<3>/*95:0*/ __Vtemp169;
    VlWide<3>/*95:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp173;
    VlWide<3>/*95:0*/ __Vtemp176;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp180;
    VlWide<3>/*95:0*/ __Vtemp181;
    VlWide<3>/*95:0*/ __Vtemp184;
    VlWide<3>/*95:0*/ __Vtemp185;
    VlWide<3>/*95:0*/ __Vtemp188;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp192;
    VlWide<3>/*95:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp196;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp200;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp204;
    VlWide<3>/*95:0*/ __Vtemp205;
    VlWide<3>/*95:0*/ __Vtemp208;
    VlWide<3>/*95:0*/ __Vtemp209;
    VlWide<3>/*95:0*/ __Vtemp212;
    VlWide<3>/*95:0*/ __Vtemp213;
    VlWide<3>/*95:0*/ __Vtemp216;
    VlWide<3>/*95:0*/ __Vtemp217;
    VlWide<3>/*95:0*/ __Vtemp220;
    VlWide<3>/*95:0*/ __Vtemp221;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp225;
    VlWide<3>/*95:0*/ __Vtemp228;
    VlWide<3>/*95:0*/ __Vtemp229;
    VlWide<3>/*95:0*/ __Vtemp232;
    VlWide<3>/*95:0*/ __Vtemp233;
    VlWide<3>/*95:0*/ __Vtemp236;
    VlWide<3>/*95:0*/ __Vtemp237;
    VlWide<3>/*95:0*/ __Vtemp240;
    VlWide<3>/*95:0*/ __Vtemp241;
    VlWide<3>/*95:0*/ __Vtemp244;
    VlWide<3>/*95:0*/ __Vtemp245;
    VlWide<3>/*95:0*/ __Vtemp248;
    VlWide<3>/*95:0*/ __Vtemp249;
    VlWide<3>/*95:0*/ __Vtemp252;
    VlWide<3>/*95:0*/ __Vtemp253;
    VlWide<3>/*95:0*/ __Vtemp256;
    VlWide<3>/*95:0*/ __Vtemp257;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<3>/*95:0*/ __Vtemp276;
    VlWide<3>/*95:0*/ __Vtemp277;
    VlWide<3>/*95:0*/ __Vtemp280;
    VlWide<3>/*95:0*/ __Vtemp281;
    VlWide<3>/*95:0*/ __Vtemp284;
    VlWide<3>/*95:0*/ __Vtemp285;
    VlWide<3>/*95:0*/ __Vtemp288;
    VlWide<3>/*95:0*/ __Vtemp289;
    VlWide<3>/*95:0*/ __Vtemp292;
    VlWide<3>/*95:0*/ __Vtemp293;
    VlWide<3>/*95:0*/ __Vtemp296;
    VlWide<3>/*95:0*/ __Vtemp297;
    VlWide<3>/*95:0*/ __Vtemp300;
    VlWide<3>/*95:0*/ __Vtemp301;
    VlWide<3>/*95:0*/ __Vtemp304;
    VlWide<3>/*95:0*/ __Vtemp305;
    VlWide<3>/*95:0*/ __Vtemp308;
    VlWide<3>/*95:0*/ __Vtemp309;
    VlWide<3>/*95:0*/ __Vtemp312;
    VlWide<3>/*95:0*/ __Vtemp313;
    VlWide<3>/*95:0*/ __Vtemp316;
    VlWide<3>/*95:0*/ __Vtemp317;
    VlWide<3>/*95:0*/ __Vtemp320;
    VlWide<3>/*95:0*/ __Vtemp321;
    VlWide<3>/*95:0*/ __Vtemp324;
    VlWide<3>/*95:0*/ __Vtemp325;
    VlWide<3>/*95:0*/ __Vtemp328;
    VlWide<3>/*95:0*/ __Vtemp329;
    VlWide<3>/*95:0*/ __Vtemp332;
    VlWide<3>/*95:0*/ __Vtemp333;
    VlWide<3>/*95:0*/ __Vtemp336;
    VlWide<3>/*95:0*/ __Vtemp337;
    VlWide<3>/*95:0*/ __Vtemp340;
    VlWide<3>/*95:0*/ __Vtemp341;
    VlWide<3>/*95:0*/ __Vtemp344;
    VlWide<3>/*95:0*/ __Vtemp345;
    VlWide<3>/*95:0*/ __Vtemp348;
    VlWide<3>/*95:0*/ __Vtemp349;
    VlWide<3>/*95:0*/ __Vtemp352;
    VlWide<3>/*95:0*/ __Vtemp353;
    VlWide<3>/*95:0*/ __Vtemp356;
    VlWide<3>/*95:0*/ __Vtemp357;
    VlWide<3>/*95:0*/ __Vtemp360;
    VlWide<3>/*95:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp365;
    VlWide<3>/*95:0*/ __Vtemp368;
    VlWide<3>/*95:0*/ __Vtemp369;
    VlWide<3>/*95:0*/ __Vtemp372;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<3>/*95:0*/ __Vtemp376;
    VlWide<3>/*95:0*/ __Vtemp377;
    VlWide<3>/*95:0*/ __Vtemp380;
    VlWide<3>/*95:0*/ __Vtemp381;
    VlWide<3>/*95:0*/ __Vtemp384;
    VlWide<3>/*95:0*/ __Vtemp385;
    VlWide<3>/*95:0*/ __Vtemp388;
    VlWide<3>/*95:0*/ __Vtemp389;
    VlWide<3>/*95:0*/ __Vtemp392;
    VlWide<3>/*95:0*/ __Vtemp393;
    VlWide<3>/*95:0*/ __Vtemp396;
    VlWide<3>/*95:0*/ __Vtemp397;
    VlWide<3>/*95:0*/ __Vtemp400;
    VlWide<3>/*95:0*/ __Vtemp401;
    VlWide<3>/*95:0*/ __Vtemp404;
    VlWide<3>/*95:0*/ __Vtemp405;
    VlWide<3>/*95:0*/ __Vtemp408;
    VlWide<3>/*95:0*/ __Vtemp409;
    VlWide<3>/*95:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp413;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp420;
    VlWide<3>/*95:0*/ __Vtemp421;
    VlWide<3>/*95:0*/ __Vtemp424;
    VlWide<3>/*95:0*/ __Vtemp425;
    VlWide<3>/*95:0*/ __Vtemp428;
    VlWide<3>/*95:0*/ __Vtemp429;
    VlWide<3>/*95:0*/ __Vtemp432;
    VlWide<3>/*95:0*/ __Vtemp433;
    VlWide<3>/*95:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp437;
    VlWide<3>/*95:0*/ __Vtemp440;
    VlWide<3>/*95:0*/ __Vtemp441;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp445;
    VlWide<3>/*95:0*/ __Vtemp448;
    VlWide<3>/*95:0*/ __Vtemp449;
    VlWide<3>/*95:0*/ __Vtemp452;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<3>/*95:0*/ __Vtemp456;
    VlWide<3>/*95:0*/ __Vtemp457;
    VlWide<3>/*95:0*/ __Vtemp460;
    VlWide<3>/*95:0*/ __Vtemp461;
    VlWide<3>/*95:0*/ __Vtemp464;
    VlWide<3>/*95:0*/ __Vtemp465;
    VlWide<3>/*95:0*/ __Vtemp468;
    VlWide<3>/*95:0*/ __Vtemp469;
    VlWide<3>/*95:0*/ __Vtemp472;
    VlWide<3>/*95:0*/ __Vtemp473;
    VlWide<3>/*95:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp477;
    VlWide<3>/*95:0*/ __Vtemp480;
    VlWide<3>/*95:0*/ __Vtemp481;
    VlWide<3>/*95:0*/ __Vtemp484;
    VlWide<3>/*95:0*/ __Vtemp485;
    VlWide<3>/*95:0*/ __Vtemp488;
    VlWide<3>/*95:0*/ __Vtemp489;
    VlWide<3>/*95:0*/ __Vtemp492;
    VlWide<3>/*95:0*/ __Vtemp493;
    VlWide<3>/*95:0*/ __Vtemp496;
    VlWide<3>/*95:0*/ __Vtemp497;
    VlWide<3>/*95:0*/ __Vtemp500;
    VlWide<3>/*95:0*/ __Vtemp501;
    VlWide<3>/*95:0*/ __Vtemp504;
    VlWide<3>/*95:0*/ __Vtemp505;
    VlWide<3>/*95:0*/ __Vtemp508;
    VlWide<3>/*95:0*/ __Vtemp509;
    VlWide<3>/*95:0*/ __Vtemp512;
    VlWide<3>/*95:0*/ __Vtemp513;
    VlWide<3>/*95:0*/ __Vtemp516;
    VlWide<3>/*95:0*/ __Vtemp517;
    VlWide<3>/*95:0*/ __Vtemp520;
    VlWide<3>/*95:0*/ __Vtemp521;
    VlWide<3>/*95:0*/ __Vtemp524;
    VlWide<3>/*95:0*/ __Vtemp525;
    VlWide<3>/*95:0*/ __Vtemp528;
    VlWide<3>/*95:0*/ __Vtemp529;
    VlWide<3>/*95:0*/ __Vtemp537;
    VlWide<3>/*95:0*/ __Vtemp538;
    VlWide<3>/*95:0*/ __Vtemp548;
    VlWide<3>/*95:0*/ __Vtemp549;
    VlWide<3>/*95:0*/ __Vtemp570;
    VlWide<3>/*95:0*/ __Vtemp572;
    VlWide<3>/*95:0*/ __Vtemp574;
    VlWide<3>/*95:0*/ __Vtemp578;
    VlWide<3>/*95:0*/ __Vtemp579;
    VlWide<3>/*95:0*/ __Vtemp581;
    VlWide<3>/*95:0*/ __Vtemp582;
    VlWide<3>/*95:0*/ __Vtemp584;
    VlWide<3>/*95:0*/ __Vtemp585;
    VlWide<3>/*95:0*/ __Vtemp589;
    VlWide<3>/*95:0*/ __Vtemp590;
    VlWide<3>/*95:0*/ __Vtemp607;
    VlWide<3>/*95:0*/ __Vtemp608;
    VlWide<3>/*95:0*/ __Vtemp616;
    VlWide<4>/*127:0*/ __Vtemp617;
    VlWide<3>/*95:0*/ __Vtemp618;
    VlWide<4>/*127:0*/ __Vtemp619;
    VlWide<3>/*95:0*/ __Vtemp620;
    VlWide<4>/*127:0*/ __Vtemp621;
    VlWide<3>/*95:0*/ __Vtemp622;
    VlWide<4>/*127:0*/ __Vtemp623;
    VlWide<3>/*95:0*/ __Vtemp624;
    VlWide<4>/*127:0*/ __Vtemp625;
    VlWide<4>/*127:0*/ __Vtemp627;
    VlWide<4>/*127:0*/ __Vtemp628;
    VlWide<4>/*127:0*/ __Vtemp631;
    VlWide<3>/*95:0*/ __Vtemp644;
    VlWide<4>/*127:0*/ __Vtemp645;
    VlWide<3>/*95:0*/ __Vtemp646;
    VlWide<4>/*127:0*/ __Vtemp647;
    VlWide<3>/*95:0*/ __Vtemp648;
    VlWide<4>/*127:0*/ __Vtemp649;
    // Body
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_28 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_28) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_28 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->io_difftest_reg_29) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_difftest_reg_29)))));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_29 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_29) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_29 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->io_difftest_reg_30) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30)))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_difftest_reg_30)))));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_30 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_30) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_30 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->io_difftest_reg_31) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31)))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_difftest_reg_31)))));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_reg_31 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_reg_31) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_reg_31 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->io_difftest_pc) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc)))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_difftest_pc)))));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 1U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 2U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 3U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 4U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 5U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 6U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 7U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 8U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 9U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0xaU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0xbU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0xcU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0xdU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0xeU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0xfU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x10U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x11U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x12U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x13U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x14U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x15U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x16U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x17U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x18U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x19U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x1aU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x1bU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x1cU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x1dU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x1eU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x1fU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x20U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x21U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x22U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x23U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x24U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x25U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x26U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x27U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x28U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x29U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x2aU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x2bU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x2cU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x2dU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x2eU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x2fU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x30U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x31U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x32U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x33U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x34U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x35U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x36U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x37U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x38U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x39U)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x3aU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x3bU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x3cU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x3dU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x3eU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_difftest_pc >> 0x3fU)) 
               ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_difftest_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 1U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[6235]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (2U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 1U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 2U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 2U)))) {
        ++(vlSymsp->__Vcoverage[6236]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 2U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 3U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 3U)))) {
        ++(vlSymsp->__Vcoverage[6237]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (8U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 3U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 4U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[6238]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x10U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 4U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 5U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 5U)))) {
        ++(vlSymsp->__Vcoverage[6239]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x20U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 5U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 6U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[6240]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x40U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 6U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 7U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 7U)))) {
        ++(vlSymsp->__Vcoverage[6241]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x80U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 7U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 8U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 8U)))) {
        ++(vlSymsp->__Vcoverage[6242]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x100U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 8U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 9U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 9U)))) {
        ++(vlSymsp->__Vcoverage[6243]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x200U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 9U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xaU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[6244]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x400U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xbU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[6245]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x800U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xcU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[6246]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x1000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xdU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[6247]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x2000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xeU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[6248]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x4000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xfU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[6249]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x8000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x10U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[6250]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x10000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x11U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[6251]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x20000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x12U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[6252]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x40000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x13U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[6253]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x80000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x14U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[6254]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x100000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x14U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x15U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[6255]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x200000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x15U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x16U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[6256]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x400000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x16U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x17U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[6257]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x800000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x17U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x18U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[6258]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x1000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x18U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x19U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[6259]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x2000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x19U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1aU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[6260]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x4000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x1aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1bU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[6261]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x8000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x1bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1cU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[6262]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x10000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x1cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1dU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[6263]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x20000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x1dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1eU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[6264]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x40000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x1eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1fU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[6265]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                           >> 0x1fU)) << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x20U)) ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]))) {
        ++(vlSymsp->__Vcoverage[6266]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                >> 0x20U))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x21U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 1U)))) {
        ++(vlSymsp->__Vcoverage[6267]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (2U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 0x21U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x22U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 2U)))) {
        ++(vlSymsp->__Vcoverage[6268]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 0x22U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x23U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[6269]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (8U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 0x23U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x24U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 4U)))) {
        ++(vlSymsp->__Vcoverage[6270]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x10U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x24U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x25U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 5U)))) {
        ++(vlSymsp->__Vcoverage[6271]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x20U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x25U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x26U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 6U)))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x40U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x26U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x27U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 7U)))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x80U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x27U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x28U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 8U)))) {
        ++(vlSymsp->__Vcoverage[6274]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x100U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x28U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x29U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 9U)))) {
        ++(vlSymsp->__Vcoverage[6275]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x200U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x29U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2aU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[6276]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x400U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x2aU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2bU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[6277]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x800U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x2bU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2cU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[6278]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x1000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2cU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2dU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x2000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2dU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2eU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x4000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2eU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2fU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x8000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2fU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x30U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x10000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x30U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x31U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x20000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x31U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x32U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x40000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x32U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x33U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[6285]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x80000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x33U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x34U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[6286]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x100000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x34U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x35U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[6287]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x200000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x35U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x36U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[6288]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x400000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x36U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x37U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[6289]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x800000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x37U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x38U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[6290]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x1000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x38U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x39U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[6291]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x2000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x39U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3aU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[6292]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x4000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x3aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3bU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[6293]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x8000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x3bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3cU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[6294]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x10000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x3cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3dU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[6295]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x20000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x3dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3eU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[6296]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x40000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x3eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3fU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[6297]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                           >> 0x3fU)) << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result)))) {
        ++(vlSymsp->__Vcoverage[5682]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5683]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5684]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5685]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5686]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5687]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5688]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5689]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5690]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5691]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5692]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5693]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5694]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5695]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5696]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5697]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5698]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5699]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5700]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5701]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5702]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5703]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5704]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5705]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5706]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5707]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5708]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5709]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5710]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5711]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5712]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5713]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5714]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5715]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5716]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5717]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5718]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5719]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5720]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5721]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5722]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5723]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5724]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5725]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5726]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5727]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5728]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5729]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5730]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5731]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5732]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5733]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5734]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5735]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5736]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5737]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5738]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5739]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5740]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5741]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5742]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5743]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5744]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5745]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                >> 1U) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_valid)))) {
        ++(vlSymsp->__Vcoverage[5681]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_valid 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                     >> 1U));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)))) {
        ++(vlSymsp->__Vcoverage[5806]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid 
            = ((0xeU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)))) {
        ++(vlSymsp->__Vcoverage[5807]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid 
            = ((0xdU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)))) {
        ++(vlSymsp->__Vcoverage[5808]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid 
            = ((0xbU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)))) {
        ++(vlSymsp->__Vcoverage[5809]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid 
            = ((7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                  >> 1U) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                            >> 3U)));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__is_read_mem) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__is_read_mem))) {
        ++(vlSymsp->__Vcoverage[5528]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__is_read_mem 
            = vlSelf->riscv_soc__DOT__core__DOT__is_read_mem;
    }
    vlSelf->riscv_soc__DOT__core_io_out_raddr = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__is_read_mem)
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_addr
                                                  : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC);
    vlSelf->riscv_soc__DOT__core__DOT__is_read_inst 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__is_read_mem)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_28 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                                             ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb))
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid)
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb
                                                 : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb)))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[6659]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6660]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6661]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6662]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6663]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6664]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6665]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6666]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6667]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6668]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6669]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6670]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6671]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6672]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6673]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6674]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6675]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6676]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6677]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6678]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6679]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6680]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6681]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6682]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6683]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6684]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6685]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6686]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6687]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6688]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6689]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6690]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6691]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6692]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6693]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6694]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6695]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6696]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6697]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6698]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6699]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6700]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6701]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6702]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6703]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6704]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6705]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6706]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6707]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6708]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6709]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6710]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6711]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6712]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6713]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6714]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6715]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6716]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6717]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6718]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6719]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6720]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6721]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6722]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    __Vtemp8[0U] = 1U;
    __Vtemp8[1U] = 0U;
    __Vtemp8[2U] = 0U;
    VL_ADD_W(3, __Vtemp9, __Vtemp8, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((1U & ((~ (1U & __Vtemp9[2U])) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2)))) {
        ++(vlSymsp->__Vcoverage[6042]);
        __Vtemp12[0U] = 1U;
        __Vtemp12[1U] = 0U;
        __Vtemp12[2U] = 0U;
        VL_ADD_W(3, __Vtemp13, __Vtemp12, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2 
            = (1U & (~ (1U & __Vtemp13[2U])));
    }
    if ((1U & (((IData)(1U) + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U]) 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5977]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (1U & ((IData)(1U) + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U])));
    }
    __Vtemp16[0U] = 1U;
    __Vtemp16[1U] = 0U;
    __Vtemp16[2U] = 0U;
    VL_ADD_W(3, __Vtemp17, __Vtemp16, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((2U & (__Vtemp17[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5978]);
        __Vtemp20[0U] = 1U;
        __Vtemp20[1U] = 0U;
        __Vtemp20[2U] = 0U;
        VL_ADD_W(3, __Vtemp21, __Vtemp20, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (2U & __Vtemp21[0U]));
    }
    __Vtemp24[0U] = 1U;
    __Vtemp24[1U] = 0U;
    __Vtemp24[2U] = 0U;
    VL_ADD_W(3, __Vtemp25, __Vtemp24, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((4U & (__Vtemp25[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5979]);
        __Vtemp28[0U] = 1U;
        __Vtemp28[1U] = 0U;
        __Vtemp28[2U] = 0U;
        VL_ADD_W(3, __Vtemp29, __Vtemp28, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (4U & __Vtemp29[0U]));
    }
    __Vtemp32[0U] = 1U;
    __Vtemp32[1U] = 0U;
    __Vtemp32[2U] = 0U;
    VL_ADD_W(3, __Vtemp33, __Vtemp32, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((8U & (__Vtemp33[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5980]);
        __Vtemp36[0U] = 1U;
        __Vtemp36[1U] = 0U;
        __Vtemp36[2U] = 0U;
        VL_ADD_W(3, __Vtemp37, __Vtemp36, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (8U & __Vtemp37[0U]));
    }
    __Vtemp40[0U] = 1U;
    __Vtemp40[1U] = 0U;
    __Vtemp40[2U] = 0U;
    VL_ADD_W(3, __Vtemp41, __Vtemp40, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10U & (__Vtemp41[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5981]);
        __Vtemp44[0U] = 1U;
        __Vtemp44[1U] = 0U;
        __Vtemp44[2U] = 0U;
        VL_ADD_W(3, __Vtemp45, __Vtemp44, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10U & __Vtemp45[0U]));
    }
    __Vtemp48[0U] = 1U;
    __Vtemp48[1U] = 0U;
    __Vtemp48[2U] = 0U;
    VL_ADD_W(3, __Vtemp49, __Vtemp48, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20U & (__Vtemp49[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5982]);
        __Vtemp52[0U] = 1U;
        __Vtemp52[1U] = 0U;
        __Vtemp52[2U] = 0U;
        VL_ADD_W(3, __Vtemp53, __Vtemp52, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20U & __Vtemp53[0U]));
    }
    __Vtemp56[0U] = 1U;
    __Vtemp56[1U] = 0U;
    __Vtemp56[2U] = 0U;
    VL_ADD_W(3, __Vtemp57, __Vtemp56, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40U & (__Vtemp57[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5983]);
        __Vtemp60[0U] = 1U;
        __Vtemp60[1U] = 0U;
        __Vtemp60[2U] = 0U;
        VL_ADD_W(3, __Vtemp61, __Vtemp60, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40U & __Vtemp61[0U]));
    }
    __Vtemp64[0U] = 1U;
    __Vtemp64[1U] = 0U;
    __Vtemp64[2U] = 0U;
    VL_ADD_W(3, __Vtemp65, __Vtemp64, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80U & (__Vtemp65[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5984]);
        __Vtemp68[0U] = 1U;
        __Vtemp68[1U] = 0U;
        __Vtemp68[2U] = 0U;
        VL_ADD_W(3, __Vtemp69, __Vtemp68, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80U & __Vtemp69[0U]));
    }
    __Vtemp72[0U] = 1U;
    __Vtemp72[1U] = 0U;
    __Vtemp72[2U] = 0U;
    VL_ADD_W(3, __Vtemp73, __Vtemp72, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100U & (__Vtemp73[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5985]);
        __Vtemp76[0U] = 1U;
        __Vtemp76[1U] = 0U;
        __Vtemp76[2U] = 0U;
        VL_ADD_W(3, __Vtemp77, __Vtemp76, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x100U & __Vtemp77[0U]));
    }
    __Vtemp80[0U] = 1U;
    __Vtemp80[1U] = 0U;
    __Vtemp80[2U] = 0U;
    VL_ADD_W(3, __Vtemp81, __Vtemp80, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200U & (__Vtemp81[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5986]);
        __Vtemp84[0U] = 1U;
        __Vtemp84[1U] = 0U;
        __Vtemp84[2U] = 0U;
        VL_ADD_W(3, __Vtemp85, __Vtemp84, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x200U & __Vtemp85[0U]));
    }
    __Vtemp88[0U] = 1U;
    __Vtemp88[1U] = 0U;
    __Vtemp88[2U] = 0U;
    VL_ADD_W(3, __Vtemp89, __Vtemp88, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400U & (__Vtemp89[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5987]);
        __Vtemp92[0U] = 1U;
        __Vtemp92[1U] = 0U;
        __Vtemp92[2U] = 0U;
        VL_ADD_W(3, __Vtemp93, __Vtemp92, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x400U & __Vtemp93[0U]));
    }
    __Vtemp96[0U] = 1U;
    __Vtemp96[1U] = 0U;
    __Vtemp96[2U] = 0U;
    VL_ADD_W(3, __Vtemp97, __Vtemp96, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800U & (__Vtemp97[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5988]);
        __Vtemp100[0U] = 1U;
        __Vtemp100[1U] = 0U;
        __Vtemp100[2U] = 0U;
        VL_ADD_W(3, __Vtemp101, __Vtemp100, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x800U & __Vtemp101[0U]));
    }
    __Vtemp104[0U] = 1U;
    __Vtemp104[1U] = 0U;
    __Vtemp104[2U] = 0U;
    VL_ADD_W(3, __Vtemp105, __Vtemp104, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000U & (__Vtemp105[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5989]);
        __Vtemp108[0U] = 1U;
        __Vtemp108[1U] = 0U;
        __Vtemp108[2U] = 0U;
        VL_ADD_W(3, __Vtemp109, __Vtemp108, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x1000U & __Vtemp109[0U]));
    }
    __Vtemp112[0U] = 1U;
    __Vtemp112[1U] = 0U;
    __Vtemp112[2U] = 0U;
    VL_ADD_W(3, __Vtemp113, __Vtemp112, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000U & (__Vtemp113[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5990]);
        __Vtemp116[0U] = 1U;
        __Vtemp116[1U] = 0U;
        __Vtemp116[2U] = 0U;
        VL_ADD_W(3, __Vtemp117, __Vtemp116, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x2000U & __Vtemp117[0U]));
    }
    __Vtemp120[0U] = 1U;
    __Vtemp120[1U] = 0U;
    __Vtemp120[2U] = 0U;
    VL_ADD_W(3, __Vtemp121, __Vtemp120, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000U & (__Vtemp121[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5991]);
        __Vtemp124[0U] = 1U;
        __Vtemp124[1U] = 0U;
        __Vtemp124[2U] = 0U;
        VL_ADD_W(3, __Vtemp125, __Vtemp124, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x4000U & __Vtemp125[0U]));
    }
    __Vtemp128[0U] = 1U;
    __Vtemp128[1U] = 0U;
    __Vtemp128[2U] = 0U;
    VL_ADD_W(3, __Vtemp129, __Vtemp128, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000U & (__Vtemp129[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5992]);
        __Vtemp132[0U] = 1U;
        __Vtemp132[1U] = 0U;
        __Vtemp132[2U] = 0U;
        VL_ADD_W(3, __Vtemp133, __Vtemp132, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x8000U & __Vtemp133[0U]));
    }
    __Vtemp136[0U] = 1U;
    __Vtemp136[1U] = 0U;
    __Vtemp136[2U] = 0U;
    VL_ADD_W(3, __Vtemp137, __Vtemp136, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000U & (__Vtemp137[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5993]);
        __Vtemp140[0U] = 1U;
        __Vtemp140[1U] = 0U;
        __Vtemp140[2U] = 0U;
        VL_ADD_W(3, __Vtemp141, __Vtemp140, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10000U & __Vtemp141[0U]));
    }
    __Vtemp144[0U] = 1U;
    __Vtemp144[1U] = 0U;
    __Vtemp144[2U] = 0U;
    VL_ADD_W(3, __Vtemp145, __Vtemp144, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000U & (__Vtemp145[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5994]);
        __Vtemp148[0U] = 1U;
        __Vtemp148[1U] = 0U;
        __Vtemp148[2U] = 0U;
        VL_ADD_W(3, __Vtemp149, __Vtemp148, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20000U & __Vtemp149[0U]));
    }
    __Vtemp152[0U] = 1U;
    __Vtemp152[1U] = 0U;
    __Vtemp152[2U] = 0U;
    VL_ADD_W(3, __Vtemp153, __Vtemp152, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000U & (__Vtemp153[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5995]);
        __Vtemp156[0U] = 1U;
        __Vtemp156[1U] = 0U;
        __Vtemp156[2U] = 0U;
        VL_ADD_W(3, __Vtemp157, __Vtemp156, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40000U & __Vtemp157[0U]));
    }
    __Vtemp160[0U] = 1U;
    __Vtemp160[1U] = 0U;
    __Vtemp160[2U] = 0U;
    VL_ADD_W(3, __Vtemp161, __Vtemp160, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80000U & (__Vtemp161[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5996]);
        __Vtemp164[0U] = 1U;
        __Vtemp164[1U] = 0U;
        __Vtemp164[2U] = 0U;
        VL_ADD_W(3, __Vtemp165, __Vtemp164, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80000U & __Vtemp165[0U]));
    }
    __Vtemp168[0U] = 1U;
    __Vtemp168[1U] = 0U;
    __Vtemp168[2U] = 0U;
    VL_ADD_W(3, __Vtemp169, __Vtemp168, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100000U & (__Vtemp169[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5997]);
        __Vtemp172[0U] = 1U;
        __Vtemp172[1U] = 0U;
        __Vtemp172[2U] = 0U;
        VL_ADD_W(3, __Vtemp173, __Vtemp172, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x100000U & __Vtemp173[0U]));
    }
    __Vtemp176[0U] = 1U;
    __Vtemp176[1U] = 0U;
    __Vtemp176[2U] = 0U;
    VL_ADD_W(3, __Vtemp177, __Vtemp176, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200000U & (__Vtemp177[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5998]);
        __Vtemp180[0U] = 1U;
        __Vtemp180[1U] = 0U;
        __Vtemp180[2U] = 0U;
        VL_ADD_W(3, __Vtemp181, __Vtemp180, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x200000U & __Vtemp181[0U]));
    }
    __Vtemp184[0U] = 1U;
    __Vtemp184[1U] = 0U;
    __Vtemp184[2U] = 0U;
    VL_ADD_W(3, __Vtemp185, __Vtemp184, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400000U & (__Vtemp185[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[5999]);
        __Vtemp188[0U] = 1U;
        __Vtemp188[1U] = 0U;
        __Vtemp188[2U] = 0U;
        VL_ADD_W(3, __Vtemp189, __Vtemp188, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x400000U & __Vtemp189[0U]));
    }
    __Vtemp192[0U] = 1U;
    __Vtemp192[1U] = 0U;
    __Vtemp192[2U] = 0U;
    VL_ADD_W(3, __Vtemp193, __Vtemp192, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800000U & (__Vtemp193[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6000]);
        __Vtemp196[0U] = 1U;
        __Vtemp196[1U] = 0U;
        __Vtemp196[2U] = 0U;
        VL_ADD_W(3, __Vtemp197, __Vtemp196, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x800000U & __Vtemp197[0U]));
    }
    __Vtemp200[0U] = 1U;
    __Vtemp200[1U] = 0U;
    __Vtemp200[2U] = 0U;
    VL_ADD_W(3, __Vtemp201, __Vtemp200, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000000U & (__Vtemp201[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6001]);
        __Vtemp204[0U] = 1U;
        __Vtemp204[1U] = 0U;
        __Vtemp204[2U] = 0U;
        VL_ADD_W(3, __Vtemp205, __Vtemp204, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x1000000U & __Vtemp205[0U]));
    }
    __Vtemp208[0U] = 1U;
    __Vtemp208[1U] = 0U;
    __Vtemp208[2U] = 0U;
    VL_ADD_W(3, __Vtemp209, __Vtemp208, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000000U & (__Vtemp209[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6002]);
        __Vtemp212[0U] = 1U;
        __Vtemp212[1U] = 0U;
        __Vtemp212[2U] = 0U;
        VL_ADD_W(3, __Vtemp213, __Vtemp212, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x2000000U & __Vtemp213[0U]));
    }
    __Vtemp216[0U] = 1U;
    __Vtemp216[1U] = 0U;
    __Vtemp216[2U] = 0U;
    VL_ADD_W(3, __Vtemp217, __Vtemp216, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000000U & (__Vtemp217[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6003]);
        __Vtemp220[0U] = 1U;
        __Vtemp220[1U] = 0U;
        __Vtemp220[2U] = 0U;
        VL_ADD_W(3, __Vtemp221, __Vtemp220, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x4000000U & __Vtemp221[0U]));
    }
    __Vtemp224[0U] = 1U;
    __Vtemp224[1U] = 0U;
    __Vtemp224[2U] = 0U;
    VL_ADD_W(3, __Vtemp225, __Vtemp224, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000000U & (__Vtemp225[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6004]);
        __Vtemp228[0U] = 1U;
        __Vtemp228[1U] = 0U;
        __Vtemp228[2U] = 0U;
        VL_ADD_W(3, __Vtemp229, __Vtemp228, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x8000000U & __Vtemp229[0U]));
    }
    __Vtemp232[0U] = 1U;
    __Vtemp232[1U] = 0U;
    __Vtemp232[2U] = 0U;
    VL_ADD_W(3, __Vtemp233, __Vtemp232, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000000U & (__Vtemp233[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6005]);
        __Vtemp236[0U] = 1U;
        __Vtemp236[1U] = 0U;
        __Vtemp236[2U] = 0U;
        VL_ADD_W(3, __Vtemp237, __Vtemp236, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10000000U & __Vtemp237[0U]));
    }
    __Vtemp240[0U] = 1U;
    __Vtemp240[1U] = 0U;
    __Vtemp240[2U] = 0U;
    VL_ADD_W(3, __Vtemp241, __Vtemp240, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000000U & (__Vtemp241[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6006]);
        __Vtemp244[0U] = 1U;
        __Vtemp244[1U] = 0U;
        __Vtemp244[2U] = 0U;
        VL_ADD_W(3, __Vtemp245, __Vtemp244, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20000000U & __Vtemp245[0U]));
    }
    __Vtemp248[0U] = 1U;
    __Vtemp248[1U] = 0U;
    __Vtemp248[2U] = 0U;
    VL_ADD_W(3, __Vtemp249, __Vtemp248, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000000U & (__Vtemp249[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6007]);
        __Vtemp252[0U] = 1U;
        __Vtemp252[1U] = 0U;
        __Vtemp252[2U] = 0U;
        VL_ADD_W(3, __Vtemp253, __Vtemp252, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40000000U & __Vtemp253[0U]));
    }
    __Vtemp256[0U] = 1U;
    __Vtemp256[1U] = 0U;
    __Vtemp256[2U] = 0U;
    VL_ADD_W(3, __Vtemp257, __Vtemp256, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if (((__Vtemp257[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6008]);
        __Vtemp260[0U] = 1U;
        __Vtemp260[1U] = 0U;
        __Vtemp260[2U] = 0U;
        VL_ADD_W(3, __Vtemp261, __Vtemp260, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80000000U & __Vtemp261[0U]));
    }
    __Vtemp264[0U] = 1U;
    __Vtemp264[1U] = 0U;
    __Vtemp264[2U] = 0U;
    VL_ADD_W(3, __Vtemp265, __Vtemp264, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((1U & (__Vtemp265[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6009]);
        __Vtemp268[0U] = 1U;
        __Vtemp268[1U] = 0U;
        __Vtemp268[2U] = 0U;
        VL_ADD_W(3, __Vtemp269, __Vtemp268, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (1U & __Vtemp269[1U]));
    }
    __Vtemp272[0U] = 1U;
    __Vtemp272[1U] = 0U;
    __Vtemp272[2U] = 0U;
    VL_ADD_W(3, __Vtemp273, __Vtemp272, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((2U & (__Vtemp273[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6010]);
        __Vtemp276[0U] = 1U;
        __Vtemp276[1U] = 0U;
        __Vtemp276[2U] = 0U;
        VL_ADD_W(3, __Vtemp277, __Vtemp276, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (2U & __Vtemp277[1U]));
    }
    __Vtemp280[0U] = 1U;
    __Vtemp280[1U] = 0U;
    __Vtemp280[2U] = 0U;
    VL_ADD_W(3, __Vtemp281, __Vtemp280, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((4U & (__Vtemp281[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6011]);
        __Vtemp284[0U] = 1U;
        __Vtemp284[1U] = 0U;
        __Vtemp284[2U] = 0U;
        VL_ADD_W(3, __Vtemp285, __Vtemp284, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (4U & __Vtemp285[1U]));
    }
    __Vtemp288[0U] = 1U;
    __Vtemp288[1U] = 0U;
    __Vtemp288[2U] = 0U;
    VL_ADD_W(3, __Vtemp289, __Vtemp288, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((8U & (__Vtemp289[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6012]);
        __Vtemp292[0U] = 1U;
        __Vtemp292[1U] = 0U;
        __Vtemp292[2U] = 0U;
        VL_ADD_W(3, __Vtemp293, __Vtemp292, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (8U & __Vtemp293[1U]));
    }
    __Vtemp296[0U] = 1U;
    __Vtemp296[1U] = 0U;
    __Vtemp296[2U] = 0U;
    VL_ADD_W(3, __Vtemp297, __Vtemp296, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10U & (__Vtemp297[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6013]);
        __Vtemp300[0U] = 1U;
        __Vtemp300[1U] = 0U;
        __Vtemp300[2U] = 0U;
        VL_ADD_W(3, __Vtemp301, __Vtemp300, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10U & __Vtemp301[1U]));
    }
    __Vtemp304[0U] = 1U;
    __Vtemp304[1U] = 0U;
    __Vtemp304[2U] = 0U;
    VL_ADD_W(3, __Vtemp305, __Vtemp304, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20U & (__Vtemp305[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6014]);
        __Vtemp308[0U] = 1U;
        __Vtemp308[1U] = 0U;
        __Vtemp308[2U] = 0U;
        VL_ADD_W(3, __Vtemp309, __Vtemp308, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20U & __Vtemp309[1U]));
    }
    __Vtemp312[0U] = 1U;
    __Vtemp312[1U] = 0U;
    __Vtemp312[2U] = 0U;
    VL_ADD_W(3, __Vtemp313, __Vtemp312, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40U & (__Vtemp313[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6015]);
        __Vtemp316[0U] = 1U;
        __Vtemp316[1U] = 0U;
        __Vtemp316[2U] = 0U;
        VL_ADD_W(3, __Vtemp317, __Vtemp316, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40U & __Vtemp317[1U]));
    }
    __Vtemp320[0U] = 1U;
    __Vtemp320[1U] = 0U;
    __Vtemp320[2U] = 0U;
    VL_ADD_W(3, __Vtemp321, __Vtemp320, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80U & (__Vtemp321[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6016]);
        __Vtemp324[0U] = 1U;
        __Vtemp324[1U] = 0U;
        __Vtemp324[2U] = 0U;
        VL_ADD_W(3, __Vtemp325, __Vtemp324, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80U & __Vtemp325[1U]));
    }
    __Vtemp328[0U] = 1U;
    __Vtemp328[1U] = 0U;
    __Vtemp328[2U] = 0U;
    VL_ADD_W(3, __Vtemp329, __Vtemp328, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100U & (__Vtemp329[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6017]);
        __Vtemp332[0U] = 1U;
        __Vtemp332[1U] = 0U;
        __Vtemp332[2U] = 0U;
        VL_ADD_W(3, __Vtemp333, __Vtemp332, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x100U & __Vtemp333[1U]));
    }
    __Vtemp336[0U] = 1U;
    __Vtemp336[1U] = 0U;
    __Vtemp336[2U] = 0U;
    VL_ADD_W(3, __Vtemp337, __Vtemp336, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200U & (__Vtemp337[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6018]);
        __Vtemp340[0U] = 1U;
        __Vtemp340[1U] = 0U;
        __Vtemp340[2U] = 0U;
        VL_ADD_W(3, __Vtemp341, __Vtemp340, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x200U & __Vtemp341[1U]));
    }
    __Vtemp344[0U] = 1U;
    __Vtemp344[1U] = 0U;
    __Vtemp344[2U] = 0U;
    VL_ADD_W(3, __Vtemp345, __Vtemp344, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400U & (__Vtemp345[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6019]);
        __Vtemp348[0U] = 1U;
        __Vtemp348[1U] = 0U;
        __Vtemp348[2U] = 0U;
        VL_ADD_W(3, __Vtemp349, __Vtemp348, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x400U & __Vtemp349[1U]));
    }
    __Vtemp352[0U] = 1U;
    __Vtemp352[1U] = 0U;
    __Vtemp352[2U] = 0U;
    VL_ADD_W(3, __Vtemp353, __Vtemp352, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800U & (__Vtemp353[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6020]);
        __Vtemp356[0U] = 1U;
        __Vtemp356[1U] = 0U;
        __Vtemp356[2U] = 0U;
        VL_ADD_W(3, __Vtemp357, __Vtemp356, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x800U & __Vtemp357[1U]));
    }
    __Vtemp360[0U] = 1U;
    __Vtemp360[1U] = 0U;
    __Vtemp360[2U] = 0U;
    VL_ADD_W(3, __Vtemp361, __Vtemp360, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000U & (__Vtemp361[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6021]);
        __Vtemp364[0U] = 1U;
        __Vtemp364[1U] = 0U;
        __Vtemp364[2U] = 0U;
        VL_ADD_W(3, __Vtemp365, __Vtemp364, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x1000U & __Vtemp365[1U]));
    }
    __Vtemp368[0U] = 1U;
    __Vtemp368[1U] = 0U;
    __Vtemp368[2U] = 0U;
    VL_ADD_W(3, __Vtemp369, __Vtemp368, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000U & (__Vtemp369[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6022]);
        __Vtemp372[0U] = 1U;
        __Vtemp372[1U] = 0U;
        __Vtemp372[2U] = 0U;
        VL_ADD_W(3, __Vtemp373, __Vtemp372, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x2000U & __Vtemp373[1U]));
    }
    __Vtemp376[0U] = 1U;
    __Vtemp376[1U] = 0U;
    __Vtemp376[2U] = 0U;
    VL_ADD_W(3, __Vtemp377, __Vtemp376, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000U & (__Vtemp377[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6023]);
        __Vtemp380[0U] = 1U;
        __Vtemp380[1U] = 0U;
        __Vtemp380[2U] = 0U;
        VL_ADD_W(3, __Vtemp381, __Vtemp380, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x4000U & __Vtemp381[1U]));
    }
    __Vtemp384[0U] = 1U;
    __Vtemp384[1U] = 0U;
    __Vtemp384[2U] = 0U;
    VL_ADD_W(3, __Vtemp385, __Vtemp384, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000U & (__Vtemp385[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6024]);
        __Vtemp388[0U] = 1U;
        __Vtemp388[1U] = 0U;
        __Vtemp388[2U] = 0U;
        VL_ADD_W(3, __Vtemp389, __Vtemp388, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x8000U & __Vtemp389[1U]));
    }
    __Vtemp392[0U] = 1U;
    __Vtemp392[1U] = 0U;
    __Vtemp392[2U] = 0U;
    VL_ADD_W(3, __Vtemp393, __Vtemp392, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000U & (__Vtemp393[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6025]);
        __Vtemp396[0U] = 1U;
        __Vtemp396[1U] = 0U;
        __Vtemp396[2U] = 0U;
        VL_ADD_W(3, __Vtemp397, __Vtemp396, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10000U & __Vtemp397[1U]));
    }
    __Vtemp400[0U] = 1U;
    __Vtemp400[1U] = 0U;
    __Vtemp400[2U] = 0U;
    VL_ADD_W(3, __Vtemp401, __Vtemp400, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000U & (__Vtemp401[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6026]);
        __Vtemp404[0U] = 1U;
        __Vtemp404[1U] = 0U;
        __Vtemp404[2U] = 0U;
        VL_ADD_W(3, __Vtemp405, __Vtemp404, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20000U & __Vtemp405[1U]));
    }
    __Vtemp408[0U] = 1U;
    __Vtemp408[1U] = 0U;
    __Vtemp408[2U] = 0U;
    VL_ADD_W(3, __Vtemp409, __Vtemp408, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000U & (__Vtemp409[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6027]);
        __Vtemp412[0U] = 1U;
        __Vtemp412[1U] = 0U;
        __Vtemp412[2U] = 0U;
        VL_ADD_W(3, __Vtemp413, __Vtemp412, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40000U & __Vtemp413[1U]));
    }
    __Vtemp416[0U] = 1U;
    __Vtemp416[1U] = 0U;
    __Vtemp416[2U] = 0U;
    VL_ADD_W(3, __Vtemp417, __Vtemp416, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80000U & (__Vtemp417[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6028]);
        __Vtemp420[0U] = 1U;
        __Vtemp420[1U] = 0U;
        __Vtemp420[2U] = 0U;
        VL_ADD_W(3, __Vtemp421, __Vtemp420, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80000U & __Vtemp421[1U]));
    }
    __Vtemp424[0U] = 1U;
    __Vtemp424[1U] = 0U;
    __Vtemp424[2U] = 0U;
    VL_ADD_W(3, __Vtemp425, __Vtemp424, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100000U & (__Vtemp425[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6029]);
        __Vtemp428[0U] = 1U;
        __Vtemp428[1U] = 0U;
        __Vtemp428[2U] = 0U;
        VL_ADD_W(3, __Vtemp429, __Vtemp428, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x100000U & __Vtemp429[1U]));
    }
    __Vtemp432[0U] = 1U;
    __Vtemp432[1U] = 0U;
    __Vtemp432[2U] = 0U;
    VL_ADD_W(3, __Vtemp433, __Vtemp432, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200000U & (__Vtemp433[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6030]);
        __Vtemp436[0U] = 1U;
        __Vtemp436[1U] = 0U;
        __Vtemp436[2U] = 0U;
        VL_ADD_W(3, __Vtemp437, __Vtemp436, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x200000U & __Vtemp437[1U]));
    }
    __Vtemp440[0U] = 1U;
    __Vtemp440[1U] = 0U;
    __Vtemp440[2U] = 0U;
    VL_ADD_W(3, __Vtemp441, __Vtemp440, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400000U & (__Vtemp441[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6031]);
        __Vtemp444[0U] = 1U;
        __Vtemp444[1U] = 0U;
        __Vtemp444[2U] = 0U;
        VL_ADD_W(3, __Vtemp445, __Vtemp444, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x400000U & __Vtemp445[1U]));
    }
    __Vtemp448[0U] = 1U;
    __Vtemp448[1U] = 0U;
    __Vtemp448[2U] = 0U;
    VL_ADD_W(3, __Vtemp449, __Vtemp448, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800000U & (__Vtemp449[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6032]);
        __Vtemp452[0U] = 1U;
        __Vtemp452[1U] = 0U;
        __Vtemp452[2U] = 0U;
        VL_ADD_W(3, __Vtemp453, __Vtemp452, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x800000U & __Vtemp453[1U]));
    }
    __Vtemp456[0U] = 1U;
    __Vtemp456[1U] = 0U;
    __Vtemp456[2U] = 0U;
    VL_ADD_W(3, __Vtemp457, __Vtemp456, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000000U & (__Vtemp457[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6033]);
        __Vtemp460[0U] = 1U;
        __Vtemp460[1U] = 0U;
        __Vtemp460[2U] = 0U;
        VL_ADD_W(3, __Vtemp461, __Vtemp460, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x1000000U & __Vtemp461[1U]));
    }
    __Vtemp464[0U] = 1U;
    __Vtemp464[1U] = 0U;
    __Vtemp464[2U] = 0U;
    VL_ADD_W(3, __Vtemp465, __Vtemp464, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000000U & (__Vtemp465[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6034]);
        __Vtemp468[0U] = 1U;
        __Vtemp468[1U] = 0U;
        __Vtemp468[2U] = 0U;
        VL_ADD_W(3, __Vtemp469, __Vtemp468, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x2000000U & __Vtemp469[1U]));
    }
    __Vtemp472[0U] = 1U;
    __Vtemp472[1U] = 0U;
    __Vtemp472[2U] = 0U;
    VL_ADD_W(3, __Vtemp473, __Vtemp472, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000000U & (__Vtemp473[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6035]);
        __Vtemp476[0U] = 1U;
        __Vtemp476[1U] = 0U;
        __Vtemp476[2U] = 0U;
        VL_ADD_W(3, __Vtemp477, __Vtemp476, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x4000000U & __Vtemp477[1U]));
    }
    __Vtemp480[0U] = 1U;
    __Vtemp480[1U] = 0U;
    __Vtemp480[2U] = 0U;
    VL_ADD_W(3, __Vtemp481, __Vtemp480, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000000U & (__Vtemp481[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6036]);
        __Vtemp484[0U] = 1U;
        __Vtemp484[1U] = 0U;
        __Vtemp484[2U] = 0U;
        VL_ADD_W(3, __Vtemp485, __Vtemp484, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x8000000U & __Vtemp485[1U]));
    }
    __Vtemp488[0U] = 1U;
    __Vtemp488[1U] = 0U;
    __Vtemp488[2U] = 0U;
    VL_ADD_W(3, __Vtemp489, __Vtemp488, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000000U & (__Vtemp489[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6037]);
        __Vtemp492[0U] = 1U;
        __Vtemp492[1U] = 0U;
        __Vtemp492[2U] = 0U;
        VL_ADD_W(3, __Vtemp493, __Vtemp492, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10000000U & __Vtemp493[1U]));
    }
    __Vtemp496[0U] = 1U;
    __Vtemp496[1U] = 0U;
    __Vtemp496[2U] = 0U;
    VL_ADD_W(3, __Vtemp497, __Vtemp496, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000000U & (__Vtemp497[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6038]);
        __Vtemp500[0U] = 1U;
        __Vtemp500[1U] = 0U;
        __Vtemp500[2U] = 0U;
        VL_ADD_W(3, __Vtemp501, __Vtemp500, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20000000U & __Vtemp501[1U]));
    }
    __Vtemp504[0U] = 1U;
    __Vtemp504[1U] = 0U;
    __Vtemp504[2U] = 0U;
    VL_ADD_W(3, __Vtemp505, __Vtemp504, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000000U & (__Vtemp505[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6039]);
        __Vtemp508[0U] = 1U;
        __Vtemp508[1U] = 0U;
        __Vtemp508[2U] = 0U;
        VL_ADD_W(3, __Vtemp509, __Vtemp508, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40000000U & __Vtemp509[1U]));
    }
    __Vtemp512[0U] = 1U;
    __Vtemp512[1U] = 0U;
    __Vtemp512[2U] = 0U;
    VL_ADD_W(3, __Vtemp513, __Vtemp512, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if (((__Vtemp513[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6040]);
        __Vtemp516[0U] = 1U;
        __Vtemp516[1U] = 0U;
        __Vtemp516[2U] = 0U;
        VL_ADD_W(3, __Vtemp517, __Vtemp516, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80000000U & __Vtemp517[1U]));
    }
    __Vtemp520[0U] = 1U;
    __Vtemp520[1U] = 0U;
    __Vtemp520[2U] = 0U;
    VL_ADD_W(3, __Vtemp521, __Vtemp520, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((1U & ((1U & __Vtemp521[2U]) ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[2U]))) {
        ++(vlSymsp->__Vcoverage[6041]);
        __Vtemp524[0U] = 1U;
        __Vtemp524[1U] = 0U;
        __Vtemp524[2U] = 0U;
        VL_ADD_W(3, __Vtemp525, __Vtemp524, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[2U] 
            = (1U & __Vtemp525[2U]);
    }
    __Vtemp528[0U] = 1U;
    __Vtemp528[1U] = 0U;
    __Vtemp528[2U] = 0U;
    VL_ADD_W(3, __Vtemp529, __Vtemp528, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                             >> 0x3fU)) : (__Vtemp529[1U] 
                                           >> 0x1fU)));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data)))) {
        ++(vlSymsp->__Vcoverage[5913]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5914]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5915]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5916]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5917]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5918]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5919]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5920]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5921]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5922]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5923]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5924]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5925]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5926]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5927]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5928]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5929]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5930]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5931]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5932]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5933]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5934]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5935]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5936]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5937]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5938]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5939]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5940]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5941]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5942]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5943]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5944]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5945]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5946]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5947]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5948]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5949]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5950]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5951]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5952]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5953]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5954]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5955]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5956]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5957]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5958]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5959]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5960]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5961]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5962]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5963]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5964]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5965]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5966]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5967]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5968]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5969]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5970]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5971]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5972]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5973]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5974]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5975]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5976]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data) 
           >> (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
        = VL_SHIFTRS_IIQ(32,32,64, (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data), 
                         (0x1fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)) 
                                    << (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_232 
        = ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0x1cU : ((0x40005013U == (0xfc00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                        ? 0x1dU : ((0x4000501bU == 
                                    (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                    ? 0x1fU : ((0x4000503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0x1eU
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0x20U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0x21U
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 0x23U
                                                      : 
                                                     ((0x503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 0x22U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0x16U
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0x24U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0x25U
                                                            : 
                                                           ((0x4033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0x28U
                                                             : 
                                                            ((0x4013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                              ? 0x29U
                                                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_217))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_167 
        = ((0x3013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x3033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 0U : ((0x40005033U == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 0U : ((0x40005013U 
                                       == (0xfc00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 0U : ((0x4000501bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0U
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 0U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 0U
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0U
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0U
                                                         : 
                                                        ((0x4000003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0U
                                                          : 
                                                         ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 1U
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_152))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_299 
        = ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 6U : ((0x40005013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 4U : ((0x4000501bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 4U : ((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 6U : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 6U
                                                : (
                                                   (0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 4U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 4U
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 6U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 6U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 6U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 3U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 6U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 6U
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284))))))))))))))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data)))) {
        ++(vlSymsp->__Vcoverage[6364]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6365]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6366]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6367]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6368]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6369]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6370]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6371]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6372]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6373]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6374]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6375]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6376]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6377]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6378]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6379]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6380]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6381]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6382]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6383]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6384]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6385]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6386]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6387]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6388]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6389]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6390]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6391]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6392]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6393]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6394]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6395]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6396]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6397]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6398]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6399]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6400]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6401]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6402]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6403]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6404]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6405]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6406]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6407]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6408]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6409]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6410]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6411]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6412]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6413]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6414]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6415]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6416]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6417]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6418]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6419]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6420]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6421]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6422]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6423]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6424]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6425]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6426]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6427]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data)))) {
        ++(vlSymsp->__Vcoverage[6428]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6429]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6430]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6431]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6432]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6433]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6434]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6435]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6436]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6437]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6438]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6439]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6440]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6441]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6442]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6443]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6444]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6445]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6446]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6447]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6448]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6449]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6450]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6451]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6452]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6453]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6454]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6455]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6456]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6457]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6458]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6459]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6460]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6461]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6462]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6463]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6464]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6465]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6466]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6467]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6468]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6469]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6478]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6479]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6480]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6481]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6482]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6483]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6484]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6485]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6486]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6487]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6488]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6489]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6490]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6491]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data)))) {
        ++(vlSymsp->__Vcoverage[6595]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6596]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6597]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6598]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6599]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6600]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6601]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6602]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6603]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6604]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6605]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6606]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6607]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6608]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6609]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6610]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6611]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6612]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6613]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6614]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6615]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6616]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6617]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6618]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6619]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6620]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6621]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6622]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6623]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6624]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6625]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6626]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6627]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6628]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6629]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6630]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6631]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6632]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6633]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6634]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6635]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6636]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6637]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6638]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6639]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6640]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6641]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6642]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6643]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6644]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6645]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6646]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6647]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6648]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6649]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6650]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6651]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6652]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6653]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6654]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6655]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6656]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6657]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6658]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_MPORT_32_en) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_MPORT_32_en))) {
        ++(vlSymsp->__Vcoverage[6492]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_MPORT_32_en 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_MPORT_32_en;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_w_mem_en))) {
        ++(vlSymsp->__Vcoverage[5746]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_w_mem_en 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en;
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core_io_out_raddr) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr)))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core_io_out_raddr)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_out_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core_io_out_raddr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__is_read_inst) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__is_read_inst))) {
        ++(vlSymsp->__Vcoverage[5529]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__is_read_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__is_read_inst;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2))) {
        ++(vlSymsp->__Vcoverage[6043]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    }
    __Vtemp537[0U] = 1U;
    __Vtemp537[1U] = 0U;
    __Vtemp537[2U] = 0U;
    VL_ADD_W(3, __Vtemp538, __Vtemp537, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp548[0U] = 1U;
    __Vtemp548[1U] = 0U;
    __Vtemp548[2U] = 0U;
    VL_ADD_W(3, __Vtemp549, __Vtemp548, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp570[1U] = ((0x1aU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 1U))) ? 
                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                        ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                   >> 0x20U)) : 0U)
                       : ((0x19U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 1U)))
                           ? ((1U & __Vtemp549[2U])
                               ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                          >> 0x20U))
                               : 0U) : ((0x18U == (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 1U)))
                                         ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                             ? 0U : (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                             >> 0x20U)))
                                         : ((0x16U 
                                             == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 1U)))
                                             ? ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)
                                                 ? (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                            >> 0x20U))
                                                 : 0U)
                                             : 0U))));
    __Vtemp572[0U] = ((0x1bU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 1U))) ? 
                      ((1U & __Vtemp538[2U]) ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5))
                       : ((0x1aU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 1U)))
                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                               : 0U) : ((0x19U == (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 1U)))
                                         ? ((1U & __Vtemp549[2U])
                                             ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                                             : 0U) : 
                                        ((0x18U == 
                                          (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U)))
                                          ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                              ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5))
                                          : ((0x16U 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 1U)))
                                              ? ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                  == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)
                                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                                                  : 0U)
                                              : 0U)))));
    __Vtemp574[2U] = ((0x17U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 1U))) ? 
                      ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)
                        ? 0U : 1U) : ((0x1bU == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 1U)))
                                       ? ((1U & __Vtemp538[2U])
                                           ? 0U : 1U)
                                       : ((0x1aU == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 1U)))
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                               ? 1U
                                               : 0U)
                                           : ((0x19U 
                                               == (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 1U)))
                                               ? ((1U 
                                                   & __Vtemp549[2U])
                                                   ? 1U
                                                   : 0U)
                                               : ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 1U)))
                                                   ? 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 1U)))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                     == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))))));
    if ((0x1cU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                            >> 1U)))) {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                       >> 0x20U));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[2U] = 1U;
    } else {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[0U] 
            = ((0x17U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 1U))) ? ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)
                                                ? 0U
                                                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5))
                : __Vtemp572[0U]);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[1U] 
            = ((0x17U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 1U))) ? ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)
                                                ? 0U
                                                : (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                           >> 0x20U)))
                : ((0x1bU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & __Vtemp538[2U])
                                                    ? 0U
                                                    : (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                               >> 0x20U)))
                    : __Vtemp570[1U]));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[2U] 
            = __Vtemp574[2U];
    }
    __Vtemp578[0U] = 1U;
    __Vtemp578[1U] = 0U;
    __Vtemp578[2U] = 0U;
    VL_ADD_W(3, __Vtemp579, __Vtemp578, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp581[0U] = (IData)(((__Vtemp579[0U] >> 0x1fU)
                               ? (0xffffffff00000000ULL 
                                  | (QData)((IData)(
                                                    ((IData)(1U) 
                                                     + 
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U]))))
                               : (QData)((IData)(((IData)(1U) 
                                                  + 
                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U])))));
    __Vtemp581[1U] = (IData)((((__Vtemp579[0U] >> 0x1fU)
                                ? (0xffffffff00000000ULL 
                                   | (QData)((IData)(
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U]))))
                                : (QData)((IData)(((IData)(1U) 
                                                   + 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U])))) 
                              >> 0x20U));
    __Vtemp581[2U] = 1U;
    VL_EXTEND_WW(66,65, __Vtemp582, __Vtemp581);
    __Vtemp584[0U] = 1U;
    __Vtemp584[1U] = 0U;
    __Vtemp584[2U] = 0U;
    VL_ADD_W(3, __Vtemp585, __Vtemp584, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp589[0U] = 1U;
    __Vtemp589[1U] = 0U;
    __Vtemp589[2U] = 0U;
    VL_ADD_W(3, __Vtemp590, __Vtemp589, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((4U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                        >> 2U)))) {
        __Vtemp607[0U] = (1U & (~ (1U & __Vtemp590[2U])));
        __Vtemp607[1U] = 0U;
        __Vtemp607[2U] = 1U;
    } else {
        __Vtemp607[0U] = ((3U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                           : ((2U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U)))
                               ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                          & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                               : ((1U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                                   : ((0U == (0xfU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                       ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                  + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                                       : 0U))));
        __Vtemp607[1U] = ((3U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))) ? 0U
                           : ((2U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U)))
                               ? (IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                          >> 0x20U))
                               : ((1U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                   ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                              >> 0x20U))
                                   : ((0U == (0xfU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                       ? (IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                   + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                                  >> 0x20U))
                                       : 0U))));
        __Vtemp607[2U] = ((3U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))) ? 1U
                           : ((2U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U)))
                               ? 1U : ((1U == (0xfU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                        ? 1U : ((0U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0U))));
    }
    VL_EXTEND_WW(66,65, __Vtemp608, __Vtemp607);
    if ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                        >> 2U)))) {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69[0U] 
            = __Vtemp582[0U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69[1U] 
            = __Vtemp582[1U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69[2U] 
            = __Vtemp582[2U];
    } else {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69[0U] 
            = ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp585[0U]
                : __Vtemp608[0U]);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69[1U] 
            = ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp585[1U]
                : __Vtemp608[1U]);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69[2U] 
            = ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? (2U | (1U 
                                                 & __Vtemp585[2U]))
                : __Vtemp608[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6107]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6108]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6109]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6110]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6111]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6145]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6146]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6147]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6148]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6149]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6150]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6151]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6152]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6153]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6154]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6155]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6156]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6157]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6158]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6159]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6160]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6161]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6162]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6163]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6164]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6165]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6166]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6167]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6168]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6169]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6170]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp)))) {
        ++(vlSymsp->__Vcoverage[6044]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6045]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6046]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6047]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6048]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6049]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6050]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6051]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6052]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6053]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6054]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6055]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6056]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6057]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6058]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6059]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6060]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6061]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6062]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6065]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6066]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6067]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6068]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6069]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6070]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6071]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6072]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6073]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6074]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6075]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6076]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6077]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6078]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6079]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6080]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6081]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6082]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6083]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6084]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6085]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6086]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6087]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6088]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6089]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6090]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6091]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6092]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6093]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6094]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6095]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6096]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6097]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6098]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6099]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7f7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7effffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7dffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7bffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x77ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6104]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x6fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6105]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x5fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6106]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x3fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    riscv_soc__DOT__core__DOT__decode__DOT___T_247 
        = ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 4U : ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 0x3cU : ((0x2003U == (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                 ? 6U : ((0x6003U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                          ? 7U : ((0x3023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                   ? 8U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 9U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0xaU
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 0x18U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 0x19U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0x1bU
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0x1aU
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0xdU
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0x11U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0x10U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_232))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_182 
        = ((0x4003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 1U : ((0x1003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 1U : ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 1U : ((0x37U == (0x7fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 0U : ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 1U
                                                : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 1U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 1U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 1U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 1U
                                                       : 
                                                      ((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0U
                                                        : 
                                                       ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0U
                                                         : 
                                                        ((0x101bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0U
                                                          : 
                                                         ((0x103bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_167))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_314 
        = ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 1U : ((0x2003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 0U : ((0x6003U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 0U : ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 3U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 3U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 3U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 6U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 4U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 4U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 6U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 6U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 6U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_299))))))))))))))));
    if ((0x1dU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                            >> 1U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = (IData)((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = (IData)(((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] = 1U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24[2U];
    }
    __Vtemp616[0U] = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                 >> 0x1fU)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))));
    __Vtemp616[1U] = (IData)(((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))) 
                              >> 0x20U));
    __Vtemp616[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp617, __Vtemp616);
    __Vtemp618[0U] = (IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data, 
                                            (0x3fU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    __Vtemp618[1U] = (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data, 
                                             (0x3fU 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                              >> 0x20U));
    __Vtemp618[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp619, __Vtemp618);
    __Vtemp620[0U] = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                 >> 0x1fU)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))));
    __Vtemp620[1U] = (IData)(((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))) 
                              >> 0x20U));
    __Vtemp620[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp621, __Vtemp620);
    __Vtemp622[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                              >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    __Vtemp622[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                               >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                              >> 0x20U));
    __Vtemp622[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp623, __Vtemp622);
    __Vtemp624[0U] = (IData)((((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                            >> 0x1fU)))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))));
    __Vtemp624[1U] = (IData)(((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                             >> 0x1fU)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))) 
                              >> 0x20U));
    __Vtemp624[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp625, __Vtemp624);
    VL_EXTEND_WQ(127,64, __Vtemp627, vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    VL_SHIFTL_WWI(127,127,6, __Vtemp628, __Vtemp627, 
                  (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    VL_EXTEND_WW(128,66, __Vtemp631, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_69);
    if ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                        >> 2U)))) {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[0U] 
            = __Vtemp617[0U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[1U] 
            = __Vtemp617[1U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[2U] 
            = __Vtemp617[2U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[3U] 
            = __Vtemp617[3U];
    } else {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[0U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp619[0U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))) ? __Vtemp621[0U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                       >> 2U))) ? __Vtemp623[0U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U)))
                            ? __Vtemp625[0U] : ((6U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                __Vtemp628[0U]
                                                 : 
                                                __Vtemp631[0U])))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[1U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp619[1U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))) ? __Vtemp621[1U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                       >> 2U))) ? __Vtemp623[1U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U)))
                            ? __Vtemp625[1U] : ((6U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                __Vtemp628[1U]
                                                 : 
                                                __Vtemp631[1U])))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[2U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp619[2U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))) ? __Vtemp621[2U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                       >> 2U))) ? __Vtemp623[2U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U)))
                            ? __Vtemp625[2U] : ((6U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                __Vtemp628[2U]
                                                 : 
                                                __Vtemp631[2U])))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[3U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp619[3U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                   >> 2U))) ? __Vtemp621[3U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                       >> 2U))) ? __Vtemp623[3U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                           >> 2U)))
                            ? __Vtemp625[3U] : ((6U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                (0x80000000U 
                                                 | (0x7fffffffU 
                                                    & __Vtemp628[3U]))
                                                 : 
                                                __Vtemp631[3U])))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_262 
        = ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0x30U : ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                        ? 0x32U : ((0x4063U == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                    ? 0x34U : ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0x36U
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x3073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0U
                                                     : 
                                                    ((0x7073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 1U
                                                      : 
                                                     ((0x2073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 2U
                                                       : 
                                                      ((0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 3U
                                                        : 
                                                       ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 4U
                                                         : 
                                                        ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 5U
                                                          : 
                                                         ((0x3003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 1U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 2U
                                                             : 
                                                            ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                              ? 3U
                                                              : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_247))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_197 
        = ((0x17U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x63U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 0U : ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 0U : ((0x7063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 0U : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0U
                                                     : 
                                                    ((0x3073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 2U
                                                      : 
                                                     ((0x7073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 2U
                                                       : 
                                                      ((0x2073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 2U
                                                        : 
                                                       ((0x6073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 2U
                                                         : 
                                                        ((0x1073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 2U
                                                          : 
                                                         ((0x5073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 2U
                                                           : 
                                                          ((0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 1U
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 1U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_182))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_329 
        = ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 7U : ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 7U : ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 7U : ((0x6063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 7U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 7U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 5U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 5U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 5U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 5U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 5U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 5U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_314))))))))))))))));
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid)))) {
        ++(vlSymsp->__Vcoverage[5679]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U]))) {
        ++(vlSymsp->__Vcoverage[6299]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc)))) {
        ++(vlSymsp->__Vcoverage[5615]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | (IData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]))));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5616]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5617]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5618]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5619]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5620]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5621]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5622]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5623]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5624]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5625]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5626]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5627]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5628]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5629]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5630]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5631]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5632]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5633]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5634]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5635]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5636]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5637]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5638]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5639]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5640]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5641]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5642]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5643]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5644]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5645]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5646]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5647]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5648]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5649]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5650]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5651]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5652]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5653]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5654]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5655]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5656]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5657]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5658]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5659]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5660]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5661]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5662]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5663]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5665]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5667]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5668]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5669]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5670]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5671]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5672]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5673]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5674]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5675]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5677]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5678]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    __Vtemp644[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm);
    __Vtemp644[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                              >> 0x20U));
    __Vtemp644[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp645, __Vtemp644);
    __Vtemp646[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp646[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                               | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                              >> 0x20U));
    __Vtemp646[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp647, __Vtemp646);
    __Vtemp648[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp648[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                              >> 0x20U));
    __Vtemp648[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp649, __Vtemp648);
    if ((0xfU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = __Vtemp645[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = __Vtemp645[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = __Vtemp645[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
            = __Vtemp645[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp647[0U]
                : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? __Vtemp649[0U]
                    : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp647[1U]
                : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? __Vtemp649[1U]
                    : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp647[2U]
                : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? __Vtemp649[2U]
                    : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
            = ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) ? __Vtemp647[3U]
                : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? __Vtemp649[3U]
                    : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_81[3U]));
    }
    if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType = 6U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType 
            = ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                ? 0U : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                         ? 0U : ((0x3bU == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                  ? 0U : ((0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                           ? 0U : (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_197))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
            = ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                ? 0U : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                         ? 0U : ((0x3bU == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                  ? 6U : ((0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                           ? 6U : (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 1U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 7U
                                                      : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_329))))))));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[5680]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data)))) {
        ++(vlSymsp->__Vcoverage[5551]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | (IData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]))));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5552]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5553]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5554]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5555]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5556]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5557]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5558]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5559]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5560]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5561]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5562]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5563]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5564]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5565]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5566]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5567]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5568]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5569]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5570]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5571]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5572]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5573]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5574]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5575]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5576]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5577]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5578]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5579]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5580]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5581]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5582]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5583]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5584]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5585]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5586]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5587]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5588]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5589]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5590]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5591]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5592]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5593]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5594]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5595]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5596]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5597]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5598]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5599]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5600]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5601]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5602]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5603]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5604]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5605]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5606]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5607]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5608]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5609]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5610]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5611]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5612]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5613]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5614]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6171]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6172]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6173]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6174]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6175]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6176]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6177]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6178]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6179]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6180]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6181]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6182]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6183]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6184]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6185]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6186]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6187]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6188]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6189]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6190]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6191]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6192]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6193]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6194]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6195]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6196]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6197]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6198]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6199]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6200]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6201]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6202]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6203]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6204]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6205]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6206]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6207]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6208]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6209]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6210]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6211]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6212]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6213]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6214]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6215]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6216]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6217]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6218]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6219]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6220]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6221]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6222]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6223]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6224]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6225]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6226]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6227]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6228]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6229]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6230]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6231]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6232]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6233]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6234]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] = 0U;
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)))) {
        ++(vlSymsp->__Vcoverage[6552]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)))) {
        ++(vlSymsp->__Vcoverage[6553]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                  >> 0x1fU) ? 0xfffffffffffffULL : 0ULL) 
                << 0xcU) | (QData)((IData)(((0x800U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                     >> 7U)))))))
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                      >> 0x1fU) ? 0xfffffffffffULL : 0ULL) 
                    << 0x14U) | (QData)((IData)(((0xff000U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst) 
                                                 | ((0x800U 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                          >> 0x14U)))))))
                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                                    >> 7U))))))
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                              >> 0x1fU)
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))))
                        : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                  >> 0x14U))))
                            : 0ULL)))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[6554]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xeU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[6555]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xdU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[6556]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xbU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[6557]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[5875]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5810]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5811]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5812]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5813]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5814]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5815]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5816]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5817]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5818]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5819]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5820]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5821]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5822]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5823]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5824]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5825]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5826]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5827]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5828]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5829]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5830]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5831]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5832]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5833]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5834]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5835]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5836]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5837]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5838]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5839]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[5840]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5841]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5842]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5843]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5844]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5845]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5846]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5847]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5848]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5849]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5850]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5851]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5852]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5853]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5854]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5855]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5856]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5857]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5858]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5859]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5860]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5861]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5862]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5863]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5864]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5865]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5866]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5867]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5868]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5869]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5870]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5871]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5872]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5873]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U]))) {
        ++(vlSymsp->__Vcoverage[5874]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
}
