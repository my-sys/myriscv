// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__3(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp23;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp32;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<4>/*127:0*/ __Vtemp37;
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp39;
    VlWide<4>/*127:0*/ __Vtemp40;
    VlWide<4>/*127:0*/ __Vtemp41;
    VlWide<4>/*127:0*/ __Vtemp42;
    VlWide<4>/*127:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp44;
    VlWide<4>/*127:0*/ __Vtemp45;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp48;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<4>/*127:0*/ __Vtemp50;
    VlWide<4>/*127:0*/ __Vtemp51;
    VlWide<4>/*127:0*/ __Vtemp52;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<4>/*127:0*/ __Vtemp54;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    VlWide<4>/*127:0*/ __Vtemp57;
    VlWide<4>/*127:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<4>/*127:0*/ __Vtemp61;
    VlWide<4>/*127:0*/ __Vtemp62;
    VlWide<4>/*127:0*/ __Vtemp63;
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<4>/*127:0*/ __Vtemp65;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp67;
    VlWide<4>/*127:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp70;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp72;
    VlWide<4>/*127:0*/ __Vtemp73;
    VlWide<4>/*127:0*/ __Vtemp74;
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp76;
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<4>/*127:0*/ __Vtemp79;
    VlWide<4>/*127:0*/ __Vtemp80;
    VlWide<4>/*127:0*/ __Vtemp81;
    VlWide<4>/*127:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp83;
    VlWide<4>/*127:0*/ __Vtemp84;
    VlWide<4>/*127:0*/ __Vtemp85;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp87;
    VlWide<4>/*127:0*/ __Vtemp88;
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp90;
    VlWide<4>/*127:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp92;
    VlWide<4>/*127:0*/ __Vtemp93;
    VlWide<4>/*127:0*/ __Vtemp94;
    VlWide<4>/*127:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<4>/*127:0*/ __Vtemp104;
    VlWide<4>/*127:0*/ __Vtemp105;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<4>/*127:0*/ __Vtemp107;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp112;
    VlWide<4>/*127:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp114;
    VlWide<4>/*127:0*/ __Vtemp115;
    VlWide<4>/*127:0*/ __Vtemp116;
    VlWide<4>/*127:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp120;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp123;
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp125;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp134;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp136;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp138;
    VlWide<4>/*127:0*/ __Vtemp139;
    VlWide<4>/*127:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp142;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp180;
    VlWide<3>/*95:0*/ __Vtemp181;
    VlWide<3>/*95:0*/ __Vtemp182;
    VlWide<3>/*95:0*/ __Vtemp183;
    VlWide<3>/*95:0*/ __Vtemp184;
    VlWide<4>/*127:0*/ __Vtemp193;
    VlWide<4>/*127:0*/ __Vtemp194;
    VlWide<4>/*127:0*/ __Vtemp195;
    VlWide<4>/*127:0*/ __Vtemp196;
    VlWide<4>/*127:0*/ __Vtemp197;
    VlWide<4>/*127:0*/ __Vtemp198;
    VlWide<4>/*127:0*/ __Vtemp199;
    VlWide<4>/*127:0*/ __Vtemp200;
    VlWide<4>/*127:0*/ __Vtemp201;
    VlWide<4>/*127:0*/ __Vtemp202;
    VlWide<4>/*127:0*/ __Vtemp203;
    VlWide<4>/*127:0*/ __Vtemp204;
    VlWide<4>/*127:0*/ __Vtemp205;
    VlWide<4>/*127:0*/ __Vtemp206;
    VlWide<4>/*127:0*/ __Vtemp207;
    VlWide<4>/*127:0*/ __Vtemp208;
    VlWide<4>/*127:0*/ __Vtemp209;
    VlWide<4>/*127:0*/ __Vtemp210;
    VlWide<4>/*127:0*/ __Vtemp211;
    VlWide<4>/*127:0*/ __Vtemp212;
    VlWide<4>/*127:0*/ __Vtemp213;
    VlWide<4>/*127:0*/ __Vtemp214;
    VlWide<4>/*127:0*/ __Vtemp215;
    VlWide<4>/*127:0*/ __Vtemp216;
    VlWide<4>/*127:0*/ __Vtemp217;
    VlWide<4>/*127:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp219;
    VlWide<4>/*127:0*/ __Vtemp220;
    VlWide<4>/*127:0*/ __Vtemp221;
    VlWide<4>/*127:0*/ __Vtemp222;
    VlWide<4>/*127:0*/ __Vtemp223;
    VlWide<4>/*127:0*/ __Vtemp224;
    VlWide<4>/*127:0*/ __Vtemp225;
    VlWide<4>/*127:0*/ __Vtemp226;
    VlWide<4>/*127:0*/ __Vtemp227;
    VlWide<4>/*127:0*/ __Vtemp228;
    VlWide<4>/*127:0*/ __Vtemp229;
    VlWide<4>/*127:0*/ __Vtemp230;
    VlWide<4>/*127:0*/ __Vtemp231;
    VlWide<4>/*127:0*/ __Vtemp232;
    VlWide<4>/*127:0*/ __Vtemp233;
    VlWide<4>/*127:0*/ __Vtemp234;
    VlWide<4>/*127:0*/ __Vtemp235;
    VlWide<4>/*127:0*/ __Vtemp236;
    VlWide<4>/*127:0*/ __Vtemp237;
    VlWide<4>/*127:0*/ __Vtemp238;
    VlWide<4>/*127:0*/ __Vtemp239;
    VlWide<4>/*127:0*/ __Vtemp240;
    VlWide<4>/*127:0*/ __Vtemp241;
    VlWide<4>/*127:0*/ __Vtemp242;
    VlWide<4>/*127:0*/ __Vtemp243;
    VlWide<4>/*127:0*/ __Vtemp244;
    VlWide<4>/*127:0*/ __Vtemp245;
    VlWide<4>/*127:0*/ __Vtemp246;
    VlWide<4>/*127:0*/ __Vtemp247;
    VlWide<4>/*127:0*/ __Vtemp248;
    VlWide<4>/*127:0*/ __Vtemp249;
    VlWide<4>/*127:0*/ __Vtemp250;
    VlWide<4>/*127:0*/ __Vtemp251;
    VlWide<4>/*127:0*/ __Vtemp252;
    VlWide<4>/*127:0*/ __Vtemp253;
    VlWide<4>/*127:0*/ __Vtemp254;
    VlWide<4>/*127:0*/ __Vtemp255;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp257;
    VlWide<4>/*127:0*/ __Vtemp258;
    VlWide<4>/*127:0*/ __Vtemp259;
    VlWide<4>/*127:0*/ __Vtemp260;
    VlWide<4>/*127:0*/ __Vtemp261;
    VlWide<4>/*127:0*/ __Vtemp262;
    VlWide<4>/*127:0*/ __Vtemp263;
    VlWide<4>/*127:0*/ __Vtemp264;
    VlWide<4>/*127:0*/ __Vtemp265;
    VlWide<4>/*127:0*/ __Vtemp266;
    VlWide<4>/*127:0*/ __Vtemp267;
    VlWide<4>/*127:0*/ __Vtemp268;
    VlWide<4>/*127:0*/ __Vtemp269;
    VlWide<4>/*127:0*/ __Vtemp270;
    VlWide<4>/*127:0*/ __Vtemp271;
    VlWide<4>/*127:0*/ __Vtemp272;
    VlWide<4>/*127:0*/ __Vtemp273;
    VlWide<4>/*127:0*/ __Vtemp274;
    VlWide<4>/*127:0*/ __Vtemp275;
    VlWide<4>/*127:0*/ __Vtemp276;
    VlWide<4>/*127:0*/ __Vtemp277;
    VlWide<4>/*127:0*/ __Vtemp278;
    VlWide<4>/*127:0*/ __Vtemp279;
    VlWide<4>/*127:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp281;
    VlWide<4>/*127:0*/ __Vtemp282;
    VlWide<4>/*127:0*/ __Vtemp283;
    VlWide<4>/*127:0*/ __Vtemp284;
    VlWide<4>/*127:0*/ __Vtemp285;
    VlWide<4>/*127:0*/ __Vtemp286;
    VlWide<4>/*127:0*/ __Vtemp287;
    VlWide<4>/*127:0*/ __Vtemp288;
    VlWide<4>/*127:0*/ __Vtemp289;
    VlWide<4>/*127:0*/ __Vtemp290;
    VlWide<4>/*127:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp292;
    VlWide<4>/*127:0*/ __Vtemp293;
    VlWide<4>/*127:0*/ __Vtemp294;
    VlWide<4>/*127:0*/ __Vtemp295;
    VlWide<4>/*127:0*/ __Vtemp296;
    VlWide<4>/*127:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp299;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp302;
    VlWide<4>/*127:0*/ __Vtemp303;
    VlWide<4>/*127:0*/ __Vtemp304;
    VlWide<4>/*127:0*/ __Vtemp305;
    VlWide<4>/*127:0*/ __Vtemp306;
    VlWide<4>/*127:0*/ __Vtemp307;
    VlWide<4>/*127:0*/ __Vtemp308;
    VlWide<4>/*127:0*/ __Vtemp309;
    VlWide<4>/*127:0*/ __Vtemp310;
    VlWide<4>/*127:0*/ __Vtemp311;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp314;
    VlWide<4>/*127:0*/ __Vtemp315;
    VlWide<4>/*127:0*/ __Vtemp316;
    VlWide<4>/*127:0*/ __Vtemp317;
    VlWide<4>/*127:0*/ __Vtemp318;
    VlWide<4>/*127:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp320;
    VlWide<4>/*127:0*/ __Vtemp321;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp323;
    VlWide<4>/*127:0*/ __Vtemp324;
    VlWide<4>/*127:0*/ __Vtemp325;
    VlWide<4>/*127:0*/ __Vtemp326;
    VlWide<4>/*127:0*/ __Vtemp327;
    VlWide<4>/*127:0*/ __Vtemp328;
    VlWide<4>/*127:0*/ __Vtemp329;
    VlWide<4>/*127:0*/ __Vtemp330;
    VlWide<4>/*127:0*/ __Vtemp331;
    VlWide<4>/*127:0*/ __Vtemp332;
    VlWide<4>/*127:0*/ __Vtemp333;
    VlWide<4>/*127:0*/ __Vtemp334;
    VlWide<4>/*127:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp336;
    VlWide<4>/*127:0*/ __Vtemp337;
    VlWide<4>/*127:0*/ __Vtemp338;
    VlWide<4>/*127:0*/ __Vtemp339;
    VlWide<4>/*127:0*/ __Vtemp340;
    VlWide<4>/*127:0*/ __Vtemp341;
    VlWide<4>/*127:0*/ __Vtemp342;
    VlWide<4>/*127:0*/ __Vtemp343;
    VlWide<4>/*127:0*/ __Vtemp344;
    VlWide<4>/*127:0*/ __Vtemp345;
    VlWide<4>/*127:0*/ __Vtemp346;
    VlWide<4>/*127:0*/ __Vtemp347;
    VlWide<4>/*127:0*/ __Vtemp348;
    VlWide<4>/*127:0*/ __Vtemp349;
    VlWide<4>/*127:0*/ __Vtemp350;
    VlWide<4>/*127:0*/ __Vtemp351;
    VlWide<4>/*127:0*/ __Vtemp352;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<4>/*127:0*/ __Vtemp354;
    VlWide<4>/*127:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp357;
    VlWide<4>/*127:0*/ __Vtemp358;
    VlWide<4>/*127:0*/ __Vtemp359;
    VlWide<4>/*127:0*/ __Vtemp360;
    VlWide<4>/*127:0*/ __Vtemp361;
    VlWide<4>/*127:0*/ __Vtemp362;
    VlWide<4>/*127:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<4>/*127:0*/ __Vtemp365;
    VlWide<4>/*127:0*/ __Vtemp366;
    VlWide<4>/*127:0*/ __Vtemp367;
    VlWide<4>/*127:0*/ __Vtemp368;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<4>/*127:0*/ __Vtemp370;
    VlWide<4>/*127:0*/ __Vtemp371;
    VlWide<4>/*127:0*/ __Vtemp372;
    VlWide<4>/*127:0*/ __Vtemp373;
    VlWide<4>/*127:0*/ __Vtemp374;
    VlWide<4>/*127:0*/ __Vtemp375;
    VlWide<4>/*127:0*/ __Vtemp376;
    VlWide<4>/*127:0*/ __Vtemp377;
    VlWide<4>/*127:0*/ __Vtemp378;
    VlWide<4>/*127:0*/ __Vtemp379;
    VlWide<4>/*127:0*/ __Vtemp380;
    VlWide<4>/*127:0*/ __Vtemp413;
    VlWide<4>/*127:0*/ __Vtemp414;
    VlWide<4>/*127:0*/ __Vtemp415;
    VlWide<4>/*127:0*/ __Vtemp416;
    VlWide<3>/*95:0*/ __Vtemp419;
    VlWide<3>/*95:0*/ __Vtemp420;
    VlWide<5>/*159:0*/ __Vtemp422;
    VlWide<5>/*159:0*/ __Vtemp424;
    VlWide<5>/*159:0*/ __Vtemp425;
    VlWide<5>/*159:0*/ __Vtemp426;
    VlWide<5>/*159:0*/ __Vtemp427;
    VlWide<5>/*159:0*/ __Vtemp428;
    VlWide<5>/*159:0*/ __Vtemp430;
    VlWide<5>/*159:0*/ __Vtemp431;
    VlWide<5>/*159:0*/ __Vtemp432;
    VlWide<5>/*159:0*/ __Vtemp433;
    VlWide<5>/*159:0*/ __Vtemp434;
    VlWide<5>/*159:0*/ __Vtemp436;
    VlWide<5>/*159:0*/ __Vtemp437;
    VlWide<5>/*159:0*/ __Vtemp438;
    VlWide<5>/*159:0*/ __Vtemp446;
    VlWide<5>/*159:0*/ __Vtemp447;
    VlWide<5>/*159:0*/ __Vtemp455;
    VlWide<5>/*159:0*/ __Vtemp456;
    VlWide<5>/*159:0*/ __Vtemp460;
    VlWide<3>/*95:0*/ __Vtemp464;
    VlWide<3>/*95:0*/ __Vtemp465;
    VlWide<3>/*95:0*/ __Vtemp466;
    VlWide<5>/*159:0*/ __Vtemp471;
    VlWide<5>/*159:0*/ __Vtemp472;
    VlWide<5>/*159:0*/ __Vtemp473;
    VlWide<3>/*95:0*/ __Vtemp477;
    VlWide<3>/*95:0*/ __Vtemp478;
    VlWide<3>/*95:0*/ __Vtemp479;
    VlWide<4>/*127:0*/ __Vtemp481;
    VlWide<4>/*127:0*/ __Vtemp482;
    VlWide<4>/*127:0*/ __Vtemp483;
    VlWide<4>/*127:0*/ __Vtemp484;
    VlWide<3>/*95:0*/ __Vtemp486;
    VlWide<3>/*95:0*/ __Vtemp487;
    VlWide<3>/*95:0*/ __Vtemp488;
    VlWide<3>/*95:0*/ __Vtemp489;
    VlWide<3>/*95:0*/ __Vtemp490;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    // Body
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
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
                                                                                ((((0x80U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x18U) 
                                                                                | ((((0x40U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x10U) 
                                                                                | ((((0x20U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 8U) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U)))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                ((((8U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x18U) 
                                                                                | ((((4U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x10U) 
                                                                                | ((((2U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 8U) 
                                                                                | ((1U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U))))))), 
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb 
        = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_523;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_521;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_518;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_519;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_520;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_522;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1;
        } else if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3;
        }
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U])));
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_54));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
                    = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = 0xffffffffffffffffULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                    = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata 
                = ((0xbff8U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                    ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime
                    : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4);
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp22, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U] 
                = __Vtemp22[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U] 
                = __Vtemp22[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U] 
                = __Vtemp22[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U] 
                = __Vtemp22[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp23, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] 
                = __Vtemp23[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] 
                = __Vtemp23[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] 
                = __Vtemp23[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] 
                = __Vtemp23[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp24, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] 
                = __Vtemp24[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] 
                = __Vtemp24[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] 
                = __Vtemp24[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] 
                = __Vtemp24[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp25, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] 
                = __Vtemp25[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] 
                = __Vtemp25[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] 
                = __Vtemp25[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] 
                = __Vtemp25[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp26, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] 
                = __Vtemp26[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] 
                = __Vtemp26[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] 
                = __Vtemp26[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] 
                = __Vtemp26[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp27, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] 
                = __Vtemp27[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] 
                = __Vtemp27[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] 
                = __Vtemp27[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] 
                = __Vtemp27[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp28, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] 
                = __Vtemp28[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] 
                = __Vtemp28[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] 
                = __Vtemp28[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] 
                = __Vtemp28[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp29, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] 
                = __Vtemp29[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] 
                = __Vtemp29[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] 
                = __Vtemp29[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] 
                = __Vtemp29[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp30, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] 
                = __Vtemp30[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] 
                = __Vtemp30[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] 
                = __Vtemp30[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] 
                = __Vtemp30[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp31, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] 
                = __Vtemp31[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] 
                = __Vtemp31[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] 
                = __Vtemp31[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] 
                = __Vtemp31[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp32, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] 
                = __Vtemp32[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] 
                = __Vtemp32[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] 
                = __Vtemp32[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] 
                = __Vtemp32[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp33, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] 
                = __Vtemp33[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] 
                = __Vtemp33[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] 
                = __Vtemp33[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] 
                = __Vtemp33[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp34, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] 
                = __Vtemp34[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] 
                = __Vtemp34[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] 
                = __Vtemp34[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] 
                = __Vtemp34[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp35, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] 
                = __Vtemp35[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] 
                = __Vtemp35[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] 
                = __Vtemp35[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] 
                = __Vtemp35[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp36, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] 
                = __Vtemp36[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] 
                = __Vtemp36[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] 
                = __Vtemp36[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] 
                = __Vtemp36[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp37, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] 
                = __Vtemp37[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] 
                = __Vtemp37[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] 
                = __Vtemp37[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] 
                = __Vtemp37[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp38, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] 
                = __Vtemp38[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] 
                = __Vtemp38[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] 
                = __Vtemp38[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] 
                = __Vtemp38[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp39, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] 
                = __Vtemp39[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] 
                = __Vtemp39[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] 
                = __Vtemp39[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] 
                = __Vtemp39[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp40, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] 
                = __Vtemp40[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] 
                = __Vtemp40[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] 
                = __Vtemp40[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] 
                = __Vtemp40[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp41, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] 
                = __Vtemp41[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] 
                = __Vtemp41[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] 
                = __Vtemp41[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] 
                = __Vtemp41[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp42, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] 
                = __Vtemp42[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] 
                = __Vtemp42[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] 
                = __Vtemp42[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] 
                = __Vtemp42[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp43, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] 
                = __Vtemp43[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] 
                = __Vtemp43[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] 
                = __Vtemp43[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] 
                = __Vtemp43[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp44, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] 
                = __Vtemp44[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] 
                = __Vtemp44[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] 
                = __Vtemp44[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] 
                = __Vtemp44[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp45, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] 
                = __Vtemp45[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] 
                = __Vtemp45[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] 
                = __Vtemp45[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] 
                = __Vtemp45[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp46, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] 
                = __Vtemp46[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] 
                = __Vtemp46[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] 
                = __Vtemp46[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] 
                = __Vtemp46[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp47, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] 
                = __Vtemp47[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] 
                = __Vtemp47[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] 
                = __Vtemp47[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] 
                = __Vtemp47[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp48, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] 
                = __Vtemp48[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] 
                = __Vtemp48[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] 
                = __Vtemp48[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] 
                = __Vtemp48[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp49, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] 
                = __Vtemp49[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] 
                = __Vtemp49[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] 
                = __Vtemp49[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] 
                = __Vtemp49[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp50, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] 
                = __Vtemp50[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] 
                = __Vtemp50[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] 
                = __Vtemp50[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] 
                = __Vtemp50[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp51, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] 
                = __Vtemp51[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] 
                = __Vtemp51[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] 
                = __Vtemp51[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] 
                = __Vtemp51[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp52, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] 
                = __Vtemp52[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] 
                = __Vtemp52[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] 
                = __Vtemp52[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] 
                = __Vtemp52[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp53, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] 
                = __Vtemp53[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] 
                = __Vtemp53[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] 
                = __Vtemp53[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] 
                = __Vtemp53[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp54, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] 
                = __Vtemp54[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] 
                = __Vtemp54[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] 
                = __Vtemp54[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] 
                = __Vtemp54[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp55, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] 
                = __Vtemp55[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] 
                = __Vtemp55[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] 
                = __Vtemp55[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] 
                = __Vtemp55[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp56, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] 
                = __Vtemp56[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] 
                = __Vtemp56[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] 
                = __Vtemp56[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] 
                = __Vtemp56[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp57, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] 
                = __Vtemp57[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] 
                = __Vtemp57[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] 
                = __Vtemp57[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] 
                = __Vtemp57[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp58, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] 
                = __Vtemp58[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] 
                = __Vtemp58[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] 
                = __Vtemp58[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] 
                = __Vtemp58[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp59, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] 
                = __Vtemp59[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] 
                = __Vtemp59[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] 
                = __Vtemp59[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] 
                = __Vtemp59[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                    : ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                        ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T)
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp60, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U] 
                = __Vtemp60[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U] 
                = __Vtemp60[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U] 
                = __Vtemp60[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U] 
                = __Vtemp60[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp61, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] 
                = __Vtemp61[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] 
                = __Vtemp61[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] 
                = __Vtemp61[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] 
                = __Vtemp61[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp62, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] 
                = __Vtemp62[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] 
                = __Vtemp62[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] 
                = __Vtemp62[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] 
                = __Vtemp62[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp63, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] 
                = __Vtemp63[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] 
                = __Vtemp63[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] 
                = __Vtemp63[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] 
                = __Vtemp63[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp64, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] 
                = __Vtemp64[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] 
                = __Vtemp64[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] 
                = __Vtemp64[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] 
                = __Vtemp64[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp65, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] 
                = __Vtemp65[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] 
                = __Vtemp65[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] 
                = __Vtemp65[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] 
                = __Vtemp65[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp66, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] 
                = __Vtemp66[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] 
                = __Vtemp66[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] 
                = __Vtemp66[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] 
                = __Vtemp66[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp67, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] 
                = __Vtemp67[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] 
                = __Vtemp67[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] 
                = __Vtemp67[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] 
                = __Vtemp67[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp68, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] 
                = __Vtemp68[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] 
                = __Vtemp68[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] 
                = __Vtemp68[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] 
                = __Vtemp68[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp69, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] 
                = __Vtemp69[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] 
                = __Vtemp69[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] 
                = __Vtemp69[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] 
                = __Vtemp69[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp70, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] 
                = __Vtemp70[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] 
                = __Vtemp70[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] 
                = __Vtemp70[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] 
                = __Vtemp70[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp71, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] 
                = __Vtemp71[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] 
                = __Vtemp71[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] 
                = __Vtemp71[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] 
                = __Vtemp71[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp72, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] 
                = __Vtemp72[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] 
                = __Vtemp72[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] 
                = __Vtemp72[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] 
                = __Vtemp72[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp73, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] 
                = __Vtemp73[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] 
                = __Vtemp73[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] 
                = __Vtemp73[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] 
                = __Vtemp73[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp74, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] 
                = __Vtemp74[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] 
                = __Vtemp74[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] 
                = __Vtemp74[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] 
                = __Vtemp74[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp75, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] 
                = __Vtemp75[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] 
                = __Vtemp75[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] 
                = __Vtemp75[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] 
                = __Vtemp75[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp76, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] 
                = __Vtemp76[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] 
                = __Vtemp76[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] 
                = __Vtemp76[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] 
                = __Vtemp76[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp77, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] 
                = __Vtemp77[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] 
                = __Vtemp77[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] 
                = __Vtemp77[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] 
                = __Vtemp77[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp78, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] 
                = __Vtemp78[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] 
                = __Vtemp78[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] 
                = __Vtemp78[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] 
                = __Vtemp78[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp79, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] 
                = __Vtemp79[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] 
                = __Vtemp79[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] 
                = __Vtemp79[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] 
                = __Vtemp79[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp80, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] 
                = __Vtemp80[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] 
                = __Vtemp80[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] 
                = __Vtemp80[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] 
                = __Vtemp80[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp81, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] 
                = __Vtemp81[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] 
                = __Vtemp81[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] 
                = __Vtemp81[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] 
                = __Vtemp81[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp82, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] 
                = __Vtemp82[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] 
                = __Vtemp82[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] 
                = __Vtemp82[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] 
                = __Vtemp82[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp83, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] 
                = __Vtemp83[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] 
                = __Vtemp83[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] 
                = __Vtemp83[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] 
                = __Vtemp83[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp84, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] 
                = __Vtemp84[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] 
                = __Vtemp84[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] 
                = __Vtemp84[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] 
                = __Vtemp84[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp85, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] 
                = __Vtemp85[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] 
                = __Vtemp85[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] 
                = __Vtemp85[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] 
                = __Vtemp85[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp86, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] 
                = __Vtemp86[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] 
                = __Vtemp86[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] 
                = __Vtemp86[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] 
                = __Vtemp86[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp87, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] 
                = __Vtemp87[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] 
                = __Vtemp87[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] 
                = __Vtemp87[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] 
                = __Vtemp87[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp88, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] 
                = __Vtemp88[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] 
                = __Vtemp88[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] 
                = __Vtemp88[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] 
                = __Vtemp88[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp89, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] 
                = __Vtemp89[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] 
                = __Vtemp89[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] 
                = __Vtemp89[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] 
                = __Vtemp89[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp90, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] 
                = __Vtemp90[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] 
                = __Vtemp90[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] 
                = __Vtemp90[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] 
                = __Vtemp90[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp91, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] 
                = __Vtemp91[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] 
                = __Vtemp91[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] 
                = __Vtemp91[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] 
                = __Vtemp91[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp92, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] 
                = __Vtemp92[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] 
                = __Vtemp92[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] 
                = __Vtemp92[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] 
                = __Vtemp92[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp93, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] 
                = __Vtemp93[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] 
                = __Vtemp93[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] 
                = __Vtemp93[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] 
                = __Vtemp93[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp94, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] 
                = __Vtemp94[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] 
                = __Vtemp94[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] 
                = __Vtemp94[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] 
                = __Vtemp94[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp95, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] 
                = __Vtemp95[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] 
                = __Vtemp95[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] 
                = __Vtemp95[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] 
                = __Vtemp95[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp96, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] 
                = __Vtemp96[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] 
                = __Vtemp96[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] 
                = __Vtemp96[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] 
                = __Vtemp96[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp97, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] 
                = __Vtemp97[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] 
                = __Vtemp97[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] 
                = __Vtemp97[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] 
                = __Vtemp97[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp98, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] 
                = __Vtemp98[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] 
                = __Vtemp98[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] 
                = __Vtemp98[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] 
                = __Vtemp98[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp99, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] 
                = __Vtemp99[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] 
                = __Vtemp99[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] 
                = __Vtemp99[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] 
                = __Vtemp99[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp100, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] 
                = __Vtemp100[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] 
                = __Vtemp100[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] 
                = __Vtemp100[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] 
                = __Vtemp100[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp101, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] 
                = __Vtemp101[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] 
                = __Vtemp101[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] 
                = __Vtemp101[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] 
                = __Vtemp101[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp102, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] 
                = __Vtemp102[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] 
                = __Vtemp102[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] 
                = __Vtemp102[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] 
                = __Vtemp102[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp103, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] 
                = __Vtemp103[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] 
                = __Vtemp103[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] 
                = __Vtemp103[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] 
                = __Vtemp103[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp104, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] 
                = __Vtemp104[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] 
                = __Vtemp104[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] 
                = __Vtemp104[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] 
                = __Vtemp104[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp105, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] 
                = __Vtemp105[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] 
                = __Vtemp105[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] 
                = __Vtemp105[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] 
                = __Vtemp105[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp106, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] 
                = __Vtemp106[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] 
                = __Vtemp106[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] 
                = __Vtemp106[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] 
                = __Vtemp106[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp107, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] 
                = __Vtemp107[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] 
                = __Vtemp107[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] 
                = __Vtemp107[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] 
                = __Vtemp107[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp108, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] 
                = __Vtemp108[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] 
                = __Vtemp108[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] 
                = __Vtemp108[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] 
                = __Vtemp108[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp109, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] 
                = __Vtemp109[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] 
                = __Vtemp109[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] 
                = __Vtemp109[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] 
                = __Vtemp109[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp110, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] 
                = __Vtemp110[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] 
                = __Vtemp110[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] 
                = __Vtemp110[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] 
                = __Vtemp110[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp111, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] 
                = __Vtemp111[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] 
                = __Vtemp111[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] 
                = __Vtemp111[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] 
                = __Vtemp111[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp112, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] 
                = __Vtemp112[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] 
                = __Vtemp112[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] 
                = __Vtemp112[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] 
                = __Vtemp112[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp113, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] 
                = __Vtemp113[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] 
                = __Vtemp113[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] 
                = __Vtemp113[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] 
                = __Vtemp113[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp114, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] 
                = __Vtemp114[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] 
                = __Vtemp114[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] 
                = __Vtemp114[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] 
                = __Vtemp114[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp115, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] 
                = __Vtemp115[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] 
                = __Vtemp115[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] 
                = __Vtemp115[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] 
                = __Vtemp115[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp116, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] 
                = __Vtemp116[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] 
                = __Vtemp116[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] 
                = __Vtemp116[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] 
                = __Vtemp116[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp117, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] 
                = __Vtemp117[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] 
                = __Vtemp117[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] 
                = __Vtemp117[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] 
                = __Vtemp117[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp118, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] 
                = __Vtemp118[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] 
                = __Vtemp118[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] 
                = __Vtemp118[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] 
                = __Vtemp118[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp119, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] 
                = __Vtemp119[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] 
                = __Vtemp119[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] 
                = __Vtemp119[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] 
                = __Vtemp119[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp120, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] 
                = __Vtemp120[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] 
                = __Vtemp120[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] 
                = __Vtemp120[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] 
                = __Vtemp120[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp121, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] 
                = __Vtemp121[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] 
                = __Vtemp121[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] 
                = __Vtemp121[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] 
                = __Vtemp121[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp122, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] 
                = __Vtemp122[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] 
                = __Vtemp122[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] 
                = __Vtemp122[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] 
                = __Vtemp122[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp123, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] 
                = __Vtemp123[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] 
                = __Vtemp123[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] 
                = __Vtemp123[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] 
                = __Vtemp123[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp124, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] 
                = __Vtemp124[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] 
                = __Vtemp124[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] 
                = __Vtemp124[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] 
                = __Vtemp124[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp125, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] 
                = __Vtemp125[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] 
                = __Vtemp125[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] 
                = __Vtemp125[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] 
                = __Vtemp125[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp126, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] 
                = __Vtemp126[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] 
                = __Vtemp126[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] 
                = __Vtemp126[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] 
                = __Vtemp126[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp127, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] 
                = __Vtemp127[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] 
                = __Vtemp127[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] 
                = __Vtemp127[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] 
                = __Vtemp127[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] 
                = __Vtemp128[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] 
                = __Vtemp128[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] 
                = __Vtemp128[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] 
                = __Vtemp128[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp129, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] 
                = __Vtemp129[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] 
                = __Vtemp129[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] 
                = __Vtemp129[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] 
                = __Vtemp129[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp130, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] 
                = __Vtemp130[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] 
                = __Vtemp130[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] 
                = __Vtemp130[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] 
                = __Vtemp130[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp131, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] 
                = __Vtemp131[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] 
                = __Vtemp131[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] 
                = __Vtemp131[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] 
                = __Vtemp131[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp132, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] 
                = __Vtemp132[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] 
                = __Vtemp132[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] 
                = __Vtemp132[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] 
                = __Vtemp132[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp133, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] 
                = __Vtemp133[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] 
                = __Vtemp133[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] 
                = __Vtemp133[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] 
                = __Vtemp133[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp134, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] 
                = __Vtemp134[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] 
                = __Vtemp134[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] 
                = __Vtemp134[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] 
                = __Vtemp134[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp135, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] 
                = __Vtemp135[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] 
                = __Vtemp135[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] 
                = __Vtemp135[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] 
                = __Vtemp135[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp136, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] 
                = __Vtemp136[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] 
                = __Vtemp136[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] 
                = __Vtemp136[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] 
                = __Vtemp136[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp137, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] 
                = __Vtemp137[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] 
                = __Vtemp137[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] 
                = __Vtemp137[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] 
                = __Vtemp137[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp138, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] 
                = __Vtemp138[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] 
                = __Vtemp138[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] 
                = __Vtemp138[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] 
                = __Vtemp138[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp139, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] 
                = __Vtemp139[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] 
                = __Vtemp139[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] 
                = __Vtemp139[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] 
                = __Vtemp139[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp140, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] 
                = __Vtemp140[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] 
                = __Vtemp140[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] 
                = __Vtemp140[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] 
                = __Vtemp140[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp141, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] 
                = __Vtemp141[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] 
                = __Vtemp141[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] 
                = __Vtemp141[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] 
                = __Vtemp141[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp142, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] 
                = __Vtemp142[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] 
                = __Vtemp142[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] 
                = __Vtemp142[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] 
                = __Vtemp142[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp143, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] 
                = __Vtemp143[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] 
                = __Vtemp143[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] 
                = __Vtemp143[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] 
                = __Vtemp143[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp144, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] 
                = __Vtemp144[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] 
                = __Vtemp144[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] 
                = __Vtemp144[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] 
                = __Vtemp144[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp145, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] 
                = __Vtemp145[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] 
                = __Vtemp145[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] 
                = __Vtemp145[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] 
                = __Vtemp145[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U])));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[2U]);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_27;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_26;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_25;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))
                ? (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                            >> 0x14U)) : 0U);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                         & ((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = (QData)((IData)((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = (0x8000000000000000ULL | (QData)((IData)(
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq)
                                                         ? 7U
                                                         : 3U))));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except)) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc)) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
            = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? (0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                            >> 0x14U)) : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                                           ? (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))
                                           : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_47));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))
                ? (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                            >> 0xfU)) : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)
                                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                                 : 0ULL)));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
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
                                      >> 0x1fU) | (
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                   << 1U)));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
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
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_ADD_W(3, __Vtemp180, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
        __Vtemp181[0U] = 1U;
        __Vtemp181[1U] = 0U;
        __Vtemp181[2U] = 0U;
        __Vtemp182[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]);
        __Vtemp182[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]);
        __Vtemp182[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
        VL_ADD_W(3, __Vtemp183, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, __Vtemp182);
        VL_ADD_W(3, __Vtemp184, __Vtemp181, __Vtemp183);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp180[0U] : __Vtemp184[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp180[1U] : __Vtemp184[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                          ? __Vtemp180[2U] : __Vtemp184[2U]));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
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
    } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U];
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((0x40U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 2U;
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
    } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
                = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid)
                ? ((0xb00U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2)
                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x340U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid 
        = ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg)) 
                                          & (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                                          & (6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
                                         & (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)
                ? ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                    ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data 
            = ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                  >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                               >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33));
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc);
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp193, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U] 
                = __Vtemp193[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U] 
                = __Vtemp193[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U] 
                = __Vtemp193[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U] 
                = __Vtemp193[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp194, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] 
                = __Vtemp194[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] 
                = __Vtemp194[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] 
                = __Vtemp194[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] 
                = __Vtemp194[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp195, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] 
                = __Vtemp195[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] 
                = __Vtemp195[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] 
                = __Vtemp195[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] 
                = __Vtemp195[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp196, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] 
                = __Vtemp196[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] 
                = __Vtemp196[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] 
                = __Vtemp196[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] 
                = __Vtemp196[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp197, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] 
                = __Vtemp197[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] 
                = __Vtemp197[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] 
                = __Vtemp197[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] 
                = __Vtemp197[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp198, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] 
                = __Vtemp198[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] 
                = __Vtemp198[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] 
                = __Vtemp198[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] 
                = __Vtemp198[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp199, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] 
                = __Vtemp199[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] 
                = __Vtemp199[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] 
                = __Vtemp199[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] 
                = __Vtemp199[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp200, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] 
                = __Vtemp200[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] 
                = __Vtemp200[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] 
                = __Vtemp200[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] 
                = __Vtemp200[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp201, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] 
                = __Vtemp201[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] 
                = __Vtemp201[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] 
                = __Vtemp201[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] 
                = __Vtemp201[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp202, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] 
                = __Vtemp202[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] 
                = __Vtemp202[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] 
                = __Vtemp202[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] 
                = __Vtemp202[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp203, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] 
                = __Vtemp203[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] 
                = __Vtemp203[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] 
                = __Vtemp203[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] 
                = __Vtemp203[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp204, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] 
                = __Vtemp204[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] 
                = __Vtemp204[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] 
                = __Vtemp204[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] 
                = __Vtemp204[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp205, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] 
                = __Vtemp205[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] 
                = __Vtemp205[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] 
                = __Vtemp205[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] 
                = __Vtemp205[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp206, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] 
                = __Vtemp206[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] 
                = __Vtemp206[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] 
                = __Vtemp206[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] 
                = __Vtemp206[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp207, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] 
                = __Vtemp207[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] 
                = __Vtemp207[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] 
                = __Vtemp207[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] 
                = __Vtemp207[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp208, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] 
                = __Vtemp208[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] 
                = __Vtemp208[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] 
                = __Vtemp208[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] 
                = __Vtemp208[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp209, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] 
                = __Vtemp209[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] 
                = __Vtemp209[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] 
                = __Vtemp209[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] 
                = __Vtemp209[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp210, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] 
                = __Vtemp210[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] 
                = __Vtemp210[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] 
                = __Vtemp210[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] 
                = __Vtemp210[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp211, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] 
                = __Vtemp211[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] 
                = __Vtemp211[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] 
                = __Vtemp211[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] 
                = __Vtemp211[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp212, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] 
                = __Vtemp212[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] 
                = __Vtemp212[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] 
                = __Vtemp212[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] 
                = __Vtemp212[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp213, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] 
                = __Vtemp213[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] 
                = __Vtemp213[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] 
                = __Vtemp213[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] 
                = __Vtemp213[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp214, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] 
                = __Vtemp214[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] 
                = __Vtemp214[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] 
                = __Vtemp214[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] 
                = __Vtemp214[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp215, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] 
                = __Vtemp215[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] 
                = __Vtemp215[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] 
                = __Vtemp215[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] 
                = __Vtemp215[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp216, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] 
                = __Vtemp216[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] 
                = __Vtemp216[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] 
                = __Vtemp216[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] 
                = __Vtemp216[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp217, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] 
                = __Vtemp217[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] 
                = __Vtemp217[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] 
                = __Vtemp217[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] 
                = __Vtemp217[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp218, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] 
                = __Vtemp218[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] 
                = __Vtemp218[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] 
                = __Vtemp218[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] 
                = __Vtemp218[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp219, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] 
                = __Vtemp219[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] 
                = __Vtemp219[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] 
                = __Vtemp219[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] 
                = __Vtemp219[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp220, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] 
                = __Vtemp220[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] 
                = __Vtemp220[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] 
                = __Vtemp220[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] 
                = __Vtemp220[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp221, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] 
                = __Vtemp221[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] 
                = __Vtemp221[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] 
                = __Vtemp221[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] 
                = __Vtemp221[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp222, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] 
                = __Vtemp222[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] 
                = __Vtemp222[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] 
                = __Vtemp222[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] 
                = __Vtemp222[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp223, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] 
                = __Vtemp223[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] 
                = __Vtemp223[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] 
                = __Vtemp223[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] 
                = __Vtemp223[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp224, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] 
                = __Vtemp224[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] 
                = __Vtemp224[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] 
                = __Vtemp224[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] 
                = __Vtemp224[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp225, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] 
                = __Vtemp225[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] 
                = __Vtemp225[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] 
                = __Vtemp225[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] 
                = __Vtemp225[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp226, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] 
                = __Vtemp226[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] 
                = __Vtemp226[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] 
                = __Vtemp226[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] 
                = __Vtemp226[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp227, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] 
                = __Vtemp227[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] 
                = __Vtemp227[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] 
                = __Vtemp227[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] 
                = __Vtemp227[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp228, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] 
                = __Vtemp228[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] 
                = __Vtemp228[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] 
                = __Vtemp228[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] 
                = __Vtemp228[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp229, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] 
                = __Vtemp229[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] 
                = __Vtemp229[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] 
                = __Vtemp229[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] 
                = __Vtemp229[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp230, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] 
                = __Vtemp230[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] 
                = __Vtemp230[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] 
                = __Vtemp230[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] 
                = __Vtemp230[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp231, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] 
                = __Vtemp231[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] 
                = __Vtemp231[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] 
                = __Vtemp231[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] 
                = __Vtemp231[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp232, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] 
                = __Vtemp232[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] 
                = __Vtemp232[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] 
                = __Vtemp232[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] 
                = __Vtemp232[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp233, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] 
                = __Vtemp233[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] 
                = __Vtemp233[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] 
                = __Vtemp233[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] 
                = __Vtemp233[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp234, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] 
                = __Vtemp234[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] 
                = __Vtemp234[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] 
                = __Vtemp234[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] 
                = __Vtemp234[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp235, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] 
                = __Vtemp235[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] 
                = __Vtemp235[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] 
                = __Vtemp235[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] 
                = __Vtemp235[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp236, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] 
                = __Vtemp236[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] 
                = __Vtemp236[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] 
                = __Vtemp236[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] 
                = __Vtemp236[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp237, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] 
                = __Vtemp237[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] 
                = __Vtemp237[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] 
                = __Vtemp237[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] 
                = __Vtemp237[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp238, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] 
                = __Vtemp238[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] 
                = __Vtemp238[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] 
                = __Vtemp238[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] 
                = __Vtemp238[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp239, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] 
                = __Vtemp239[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] 
                = __Vtemp239[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] 
                = __Vtemp239[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] 
                = __Vtemp239[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp240, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] 
                = __Vtemp240[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] 
                = __Vtemp240[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] 
                = __Vtemp240[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] 
                = __Vtemp240[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp241, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] 
                = __Vtemp241[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] 
                = __Vtemp241[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] 
                = __Vtemp241[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] 
                = __Vtemp241[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp242, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] 
                = __Vtemp242[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] 
                = __Vtemp242[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] 
                = __Vtemp242[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] 
                = __Vtemp242[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp243, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] 
                = __Vtemp243[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] 
                = __Vtemp243[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] 
                = __Vtemp243[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] 
                = __Vtemp243[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp244, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] 
                = __Vtemp244[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] 
                = __Vtemp244[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] 
                = __Vtemp244[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] 
                = __Vtemp244[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp245, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] 
                = __Vtemp245[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] 
                = __Vtemp245[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] 
                = __Vtemp245[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] 
                = __Vtemp245[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp246, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] 
                = __Vtemp246[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] 
                = __Vtemp246[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] 
                = __Vtemp246[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] 
                = __Vtemp246[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp247, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] 
                = __Vtemp247[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] 
                = __Vtemp247[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] 
                = __Vtemp247[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] 
                = __Vtemp247[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp248, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] 
                = __Vtemp248[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] 
                = __Vtemp248[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] 
                = __Vtemp248[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] 
                = __Vtemp248[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp249, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] 
                = __Vtemp249[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] 
                = __Vtemp249[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] 
                = __Vtemp249[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] 
                = __Vtemp249[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp250, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] 
                = __Vtemp250[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] 
                = __Vtemp250[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] 
                = __Vtemp250[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] 
                = __Vtemp250[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp251, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] 
                = __Vtemp251[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] 
                = __Vtemp251[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] 
                = __Vtemp251[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] 
                = __Vtemp251[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp252, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] 
                = __Vtemp252[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] 
                = __Vtemp252[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] 
                = __Vtemp252[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] 
                = __Vtemp252[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp253, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] 
                = __Vtemp253[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] 
                = __Vtemp253[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] 
                = __Vtemp253[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] 
                = __Vtemp253[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp254, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] 
                = __Vtemp254[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] 
                = __Vtemp254[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] 
                = __Vtemp254[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] 
                = __Vtemp254[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp255, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] 
                = __Vtemp255[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] 
                = __Vtemp255[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] 
                = __Vtemp255[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] 
                = __Vtemp255[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp256, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] 
                = __Vtemp256[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] 
                = __Vtemp256[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] 
                = __Vtemp256[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] 
                = __Vtemp256[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp257, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] 
                = __Vtemp257[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] 
                = __Vtemp257[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] 
                = __Vtemp257[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] 
                = __Vtemp257[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp258, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] 
                = __Vtemp258[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] 
                = __Vtemp258[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] 
                = __Vtemp258[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] 
                = __Vtemp258[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp259, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] 
                = __Vtemp259[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] 
                = __Vtemp259[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] 
                = __Vtemp259[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] 
                = __Vtemp259[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp260, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] 
                = __Vtemp260[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] 
                = __Vtemp260[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] 
                = __Vtemp260[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] 
                = __Vtemp260[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp261, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] 
                = __Vtemp261[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] 
                = __Vtemp261[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] 
                = __Vtemp261[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] 
                = __Vtemp261[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp262, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] 
                = __Vtemp262[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] 
                = __Vtemp262[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] 
                = __Vtemp262[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] 
                = __Vtemp262[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp263, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] 
                = __Vtemp263[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] 
                = __Vtemp263[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] 
                = __Vtemp263[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] 
                = __Vtemp263[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp264, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] 
                = __Vtemp264[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] 
                = __Vtemp264[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] 
                = __Vtemp264[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] 
                = __Vtemp264[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp265, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] 
                = __Vtemp265[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] 
                = __Vtemp265[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] 
                = __Vtemp265[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] 
                = __Vtemp265[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp266, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] 
                = __Vtemp266[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] 
                = __Vtemp266[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] 
                = __Vtemp266[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] 
                = __Vtemp266[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp267, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] 
                = __Vtemp267[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] 
                = __Vtemp267[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] 
                = __Vtemp267[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] 
                = __Vtemp267[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp268, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] 
                = __Vtemp268[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] 
                = __Vtemp268[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] 
                = __Vtemp268[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] 
                = __Vtemp268[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp269, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] 
                = __Vtemp269[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] 
                = __Vtemp269[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] 
                = __Vtemp269[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] 
                = __Vtemp269[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp270, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] 
                = __Vtemp270[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] 
                = __Vtemp270[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] 
                = __Vtemp270[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] 
                = __Vtemp270[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp271, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] 
                = __Vtemp271[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] 
                = __Vtemp271[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] 
                = __Vtemp271[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] 
                = __Vtemp271[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp272, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] 
                = __Vtemp272[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] 
                = __Vtemp272[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] 
                = __Vtemp272[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] 
                = __Vtemp272[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp273, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] 
                = __Vtemp273[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] 
                = __Vtemp273[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] 
                = __Vtemp273[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] 
                = __Vtemp273[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp274, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] 
                = __Vtemp274[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] 
                = __Vtemp274[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] 
                = __Vtemp274[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] 
                = __Vtemp274[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp275, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] 
                = __Vtemp275[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] 
                = __Vtemp275[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] 
                = __Vtemp275[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] 
                = __Vtemp275[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp276, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] 
                = __Vtemp276[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] 
                = __Vtemp276[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] 
                = __Vtemp276[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] 
                = __Vtemp276[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp277, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] 
                = __Vtemp277[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] 
                = __Vtemp277[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] 
                = __Vtemp277[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] 
                = __Vtemp277[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp278, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] 
                = __Vtemp278[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] 
                = __Vtemp278[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] 
                = __Vtemp278[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] 
                = __Vtemp278[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp279, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] 
                = __Vtemp279[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] 
                = __Vtemp279[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] 
                = __Vtemp279[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] 
                = __Vtemp279[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp280, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] 
                = __Vtemp280[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] 
                = __Vtemp280[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] 
                = __Vtemp280[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] 
                = __Vtemp280[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp281, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] 
                = __Vtemp281[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] 
                = __Vtemp281[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] 
                = __Vtemp281[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] 
                = __Vtemp281[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp282, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] 
                = __Vtemp282[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] 
                = __Vtemp282[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] 
                = __Vtemp282[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] 
                = __Vtemp282[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp283, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] 
                = __Vtemp283[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] 
                = __Vtemp283[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] 
                = __Vtemp283[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] 
                = __Vtemp283[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp284, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] 
                = __Vtemp284[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] 
                = __Vtemp284[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] 
                = __Vtemp284[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] 
                = __Vtemp284[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp285, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] 
                = __Vtemp285[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] 
                = __Vtemp285[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] 
                = __Vtemp285[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] 
                = __Vtemp285[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp286, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] 
                = __Vtemp286[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] 
                = __Vtemp286[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] 
                = __Vtemp286[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] 
                = __Vtemp286[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp287, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] 
                = __Vtemp287[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] 
                = __Vtemp287[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] 
                = __Vtemp287[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] 
                = __Vtemp287[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp288, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] 
                = __Vtemp288[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] 
                = __Vtemp288[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] 
                = __Vtemp288[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] 
                = __Vtemp288[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp289, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] 
                = __Vtemp289[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] 
                = __Vtemp289[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] 
                = __Vtemp289[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] 
                = __Vtemp289[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp290, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] 
                = __Vtemp290[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] 
                = __Vtemp290[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] 
                = __Vtemp290[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] 
                = __Vtemp290[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp291, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] 
                = __Vtemp291[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] 
                = __Vtemp291[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] 
                = __Vtemp291[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] 
                = __Vtemp291[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp292, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] 
                = __Vtemp292[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] 
                = __Vtemp292[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] 
                = __Vtemp292[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] 
                = __Vtemp292[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp293, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] 
                = __Vtemp293[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] 
                = __Vtemp293[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] 
                = __Vtemp293[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] 
                = __Vtemp293[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp294, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] 
                = __Vtemp294[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] 
                = __Vtemp294[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] 
                = __Vtemp294[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] 
                = __Vtemp294[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp295, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] 
                = __Vtemp295[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] 
                = __Vtemp295[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] 
                = __Vtemp295[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] 
                = __Vtemp295[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp296, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] 
                = __Vtemp296[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] 
                = __Vtemp296[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] 
                = __Vtemp296[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] 
                = __Vtemp296[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp297, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] 
                = __Vtemp297[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] 
                = __Vtemp297[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] 
                = __Vtemp297[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] 
                = __Vtemp297[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp298, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] 
                = __Vtemp298[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] 
                = __Vtemp298[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] 
                = __Vtemp298[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] 
                = __Vtemp298[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp299, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] 
                = __Vtemp299[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] 
                = __Vtemp299[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] 
                = __Vtemp299[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] 
                = __Vtemp299[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp300, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] 
                = __Vtemp300[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] 
                = __Vtemp300[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] 
                = __Vtemp300[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] 
                = __Vtemp300[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp301, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] 
                = __Vtemp301[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] 
                = __Vtemp301[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] 
                = __Vtemp301[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] 
                = __Vtemp301[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp302, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] 
                = __Vtemp302[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] 
                = __Vtemp302[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] 
                = __Vtemp302[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] 
                = __Vtemp302[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp303, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] 
                = __Vtemp303[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] 
                = __Vtemp303[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] 
                = __Vtemp303[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] 
                = __Vtemp303[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp304, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] 
                = __Vtemp304[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] 
                = __Vtemp304[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] 
                = __Vtemp304[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] 
                = __Vtemp304[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp305, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] 
                = __Vtemp305[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] 
                = __Vtemp305[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] 
                = __Vtemp305[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] 
                = __Vtemp305[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp306, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] 
                = __Vtemp306[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] 
                = __Vtemp306[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] 
                = __Vtemp306[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] 
                = __Vtemp306[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp307, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] 
                = __Vtemp307[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] 
                = __Vtemp307[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] 
                = __Vtemp307[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] 
                = __Vtemp307[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp308, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] 
                = __Vtemp308[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] 
                = __Vtemp308[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] 
                = __Vtemp308[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] 
                = __Vtemp308[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp309, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] 
                = __Vtemp309[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] 
                = __Vtemp309[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] 
                = __Vtemp309[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] 
                = __Vtemp309[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp310, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] 
                = __Vtemp310[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] 
                = __Vtemp310[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] 
                = __Vtemp310[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] 
                = __Vtemp310[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp311, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] 
                = __Vtemp311[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] 
                = __Vtemp311[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] 
                = __Vtemp311[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] 
                = __Vtemp311[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp312, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] 
                = __Vtemp312[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] 
                = __Vtemp312[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] 
                = __Vtemp312[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] 
                = __Vtemp312[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp313, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] 
                = __Vtemp313[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] 
                = __Vtemp313[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] 
                = __Vtemp313[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] 
                = __Vtemp313[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp314, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] 
                = __Vtemp314[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] 
                = __Vtemp314[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] 
                = __Vtemp314[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] 
                = __Vtemp314[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp315, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] 
                = __Vtemp315[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] 
                = __Vtemp315[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] 
                = __Vtemp315[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] 
                = __Vtemp315[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp316, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] 
                = __Vtemp316[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] 
                = __Vtemp316[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] 
                = __Vtemp316[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] 
                = __Vtemp316[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp317, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U] 
                    = __Vtemp317[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U] 
                    = __Vtemp317[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U] 
                    = __Vtemp317[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U] 
                    = __Vtemp317[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp318, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U] 
                    = __Vtemp318[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U] 
                    = __Vtemp318[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U] 
                    = __Vtemp318[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U] 
                    = __Vtemp318[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp319, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U] 
                    = __Vtemp319[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U] 
                    = __Vtemp319[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U] 
                    = __Vtemp319[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U] 
                    = __Vtemp319[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp320, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U] 
                    = __Vtemp320[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U] 
                    = __Vtemp320[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U] 
                    = __Vtemp320[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U] 
                    = __Vtemp320[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp321, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U] 
                    = __Vtemp321[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U] 
                    = __Vtemp321[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U] 
                    = __Vtemp321[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U] 
                    = __Vtemp321[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp322, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U] 
                    = __Vtemp322[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U] 
                    = __Vtemp322[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U] 
                    = __Vtemp322[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U] 
                    = __Vtemp322[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp323, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U] 
                    = __Vtemp323[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U] 
                    = __Vtemp323[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U] 
                    = __Vtemp323[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U] 
                    = __Vtemp323[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp324, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U] 
                    = __Vtemp324[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U] 
                    = __Vtemp324[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U] 
                    = __Vtemp324[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U] 
                    = __Vtemp324[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp325, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U] 
                    = __Vtemp325[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U] 
                    = __Vtemp325[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U] 
                    = __Vtemp325[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U] 
                    = __Vtemp325[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp326, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U] 
                    = __Vtemp326[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U] 
                    = __Vtemp326[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U] 
                    = __Vtemp326[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U] 
                    = __Vtemp326[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp327, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U] 
                    = __Vtemp327[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U] 
                    = __Vtemp327[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U] 
                    = __Vtemp327[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U] 
                    = __Vtemp327[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp328, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[0U] 
                    = __Vtemp328[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[1U] 
                    = __Vtemp328[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[2U] 
                    = __Vtemp328[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[3U] 
                    = __Vtemp328[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp329, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U] 
                    = __Vtemp329[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U] 
                    = __Vtemp329[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U] 
                    = __Vtemp329[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U] 
                    = __Vtemp329[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp330, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U] 
                    = __Vtemp330[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U] 
                    = __Vtemp330[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U] 
                    = __Vtemp330[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U] 
                    = __Vtemp330[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp331, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[0U] 
                    = __Vtemp331[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[1U] 
                    = __Vtemp331[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[2U] 
                    = __Vtemp331[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[3U] 
                    = __Vtemp331[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp332, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[0U] 
                    = __Vtemp332[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[1U] 
                    = __Vtemp332[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[2U] 
                    = __Vtemp332[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[3U] 
                    = __Vtemp332[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp333, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[0U] 
                    = __Vtemp333[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[1U] 
                    = __Vtemp333[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[2U] 
                    = __Vtemp333[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[3U] 
                    = __Vtemp333[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp334, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U] 
                    = __Vtemp334[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U] 
                    = __Vtemp334[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U] 
                    = __Vtemp334[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U] 
                    = __Vtemp334[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp335, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[0U] 
                    = __Vtemp335[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[1U] 
                    = __Vtemp335[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[2U] 
                    = __Vtemp335[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[3U] 
                    = __Vtemp335[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp336, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[0U] 
                    = __Vtemp336[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[1U] 
                    = __Vtemp336[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[2U] 
                    = __Vtemp336[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[3U] 
                    = __Vtemp336[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp337, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[0U] 
                    = __Vtemp337[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[1U] 
                    = __Vtemp337[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[2U] 
                    = __Vtemp337[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[3U] 
                    = __Vtemp337[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp338, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[0U] 
                    = __Vtemp338[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[1U] 
                    = __Vtemp338[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[2U] 
                    = __Vtemp338[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[3U] 
                    = __Vtemp338[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp339, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U] 
                    = __Vtemp339[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U] 
                    = __Vtemp339[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U] 
                    = __Vtemp339[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U] 
                    = __Vtemp339[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp340, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U] 
                    = __Vtemp340[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U] 
                    = __Vtemp340[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U] 
                    = __Vtemp340[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U] 
                    = __Vtemp340[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp341, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[0U] 
                    = __Vtemp341[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[1U] 
                    = __Vtemp341[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[2U] 
                    = __Vtemp341[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[3U] 
                    = __Vtemp341[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp342, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[0U] 
                    = __Vtemp342[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[1U] 
                    = __Vtemp342[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[2U] 
                    = __Vtemp342[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[3U] 
                    = __Vtemp342[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp343, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[0U] 
                    = __Vtemp343[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[1U] 
                    = __Vtemp343[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[2U] 
                    = __Vtemp343[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[3U] 
                    = __Vtemp343[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp344, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[0U] 
                    = __Vtemp344[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[1U] 
                    = __Vtemp344[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[2U] 
                    = __Vtemp344[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[3U] 
                    = __Vtemp344[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp345, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[0U] 
                    = __Vtemp345[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[1U] 
                    = __Vtemp345[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[2U] 
                    = __Vtemp345[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[3U] 
                    = __Vtemp345[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp346, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[0U] 
                    = __Vtemp346[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[1U] 
                    = __Vtemp346[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[2U] 
                    = __Vtemp346[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[3U] 
                    = __Vtemp346[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp347, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[0U] 
                    = __Vtemp347[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[1U] 
                    = __Vtemp347[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[2U] 
                    = __Vtemp347[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[3U] 
                    = __Vtemp347[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp348, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[0U] 
                    = __Vtemp348[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[1U] 
                    = __Vtemp348[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[2U] 
                    = __Vtemp348[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[3U] 
                    = __Vtemp348[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp349, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[0U] 
                    = __Vtemp349[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[1U] 
                    = __Vtemp349[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[2U] 
                    = __Vtemp349[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[3U] 
                    = __Vtemp349[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp350, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[0U] 
                    = __Vtemp350[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[1U] 
                    = __Vtemp350[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[2U] 
                    = __Vtemp350[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[3U] 
                    = __Vtemp350[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp351, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[0U] 
                    = __Vtemp351[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[1U] 
                    = __Vtemp351[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[2U] 
                    = __Vtemp351[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[3U] 
                    = __Vtemp351[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp352, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[0U] 
                    = __Vtemp352[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[1U] 
                    = __Vtemp352[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[2U] 
                    = __Vtemp352[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[3U] 
                    = __Vtemp352[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp353, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[0U] 
                    = __Vtemp353[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[1U] 
                    = __Vtemp353[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[2U] 
                    = __Vtemp353[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[3U] 
                    = __Vtemp353[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp354, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[0U] 
                    = __Vtemp354[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[1U] 
                    = __Vtemp354[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[2U] 
                    = __Vtemp354[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[3U] 
                    = __Vtemp354[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp355, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[0U] 
                    = __Vtemp355[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[1U] 
                    = __Vtemp355[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[2U] 
                    = __Vtemp355[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[3U] 
                    = __Vtemp355[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp356, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[0U] 
                    = __Vtemp356[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[1U] 
                    = __Vtemp356[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[2U] 
                    = __Vtemp356[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[3U] 
                    = __Vtemp356[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp357, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[0U] 
                    = __Vtemp357[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[1U] 
                    = __Vtemp357[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[2U] 
                    = __Vtemp357[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[3U] 
                    = __Vtemp357[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp358, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[0U] 
                    = __Vtemp358[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[1U] 
                    = __Vtemp358[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[2U] 
                    = __Vtemp358[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[3U] 
                    = __Vtemp358[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp359, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[0U] 
                    = __Vtemp359[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[1U] 
                    = __Vtemp359[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[2U] 
                    = __Vtemp359[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[3U] 
                    = __Vtemp359[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp360, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[0U] 
                    = __Vtemp360[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[1U] 
                    = __Vtemp360[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[2U] 
                    = __Vtemp360[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[3U] 
                    = __Vtemp360[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp361, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[0U] 
                    = __Vtemp361[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[1U] 
                    = __Vtemp361[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[2U] 
                    = __Vtemp361[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[3U] 
                    = __Vtemp361[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp362, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[0U] 
                    = __Vtemp362[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[1U] 
                    = __Vtemp362[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[2U] 
                    = __Vtemp362[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[3U] 
                    = __Vtemp362[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp363, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[0U] 
                    = __Vtemp363[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[1U] 
                    = __Vtemp363[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[2U] 
                    = __Vtemp363[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[3U] 
                    = __Vtemp363[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp364, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[0U] 
                    = __Vtemp364[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[1U] 
                    = __Vtemp364[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[2U] 
                    = __Vtemp364[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[3U] 
                    = __Vtemp364[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp365, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[0U] 
                    = __Vtemp365[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[1U] 
                    = __Vtemp365[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[2U] 
                    = __Vtemp365[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[3U] 
                    = __Vtemp365[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp366, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[0U] 
                    = __Vtemp366[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[1U] 
                    = __Vtemp366[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[2U] 
                    = __Vtemp366[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[3U] 
                    = __Vtemp366[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp367, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[0U] 
                    = __Vtemp367[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[1U] 
                    = __Vtemp367[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[2U] 
                    = __Vtemp367[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[3U] 
                    = __Vtemp367[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp368, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[0U] 
                    = __Vtemp368[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[1U] 
                    = __Vtemp368[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[2U] 
                    = __Vtemp368[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[3U] 
                    = __Vtemp368[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp369, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[0U] 
                    = __Vtemp369[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[1U] 
                    = __Vtemp369[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[2U] 
                    = __Vtemp369[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[3U] 
                    = __Vtemp369[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp370, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[0U] 
                    = __Vtemp370[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[1U] 
                    = __Vtemp370[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[2U] 
                    = __Vtemp370[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[3U] 
                    = __Vtemp370[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp371, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[0U] 
                    = __Vtemp371[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[1U] 
                    = __Vtemp371[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[2U] 
                    = __Vtemp371[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[3U] 
                    = __Vtemp371[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp372, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[0U] 
                    = __Vtemp372[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[1U] 
                    = __Vtemp372[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[2U] 
                    = __Vtemp372[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[3U] 
                    = __Vtemp372[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp373, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[0U] 
                    = __Vtemp373[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[1U] 
                    = __Vtemp373[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[2U] 
                    = __Vtemp373[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[3U] 
                    = __Vtemp373[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp374, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[0U] 
                    = __Vtemp374[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[1U] 
                    = __Vtemp374[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[2U] 
                    = __Vtemp374[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[3U] 
                    = __Vtemp374[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp375, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[0U] 
                    = __Vtemp375[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[1U] 
                    = __Vtemp375[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[2U] 
                    = __Vtemp375[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[3U] 
                    = __Vtemp375[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp376, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[0U] 
                    = __Vtemp376[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[1U] 
                    = __Vtemp376[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[2U] 
                    = __Vtemp376[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[3U] 
                    = __Vtemp376[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp377, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[0U] 
                    = __Vtemp377[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[1U] 
                    = __Vtemp377[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[2U] 
                    = __Vtemp377[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[3U] 
                    = __Vtemp377[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp378, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[0U] 
                    = __Vtemp378[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[1U] 
                    = __Vtemp378[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[2U] 
                    = __Vtemp378[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[3U] 
                    = __Vtemp378[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp379, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[0U] 
                    = __Vtemp379[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[1U] 
                    = __Vtemp379[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[2U] 
                    = __Vtemp379[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[3U] 
                    = __Vtemp379[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp380, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[0U] 
                    = __Vtemp380[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[1U] 
                    = __Vtemp380[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[2U] 
                    = __Vtemp380[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[3U] 
                    = __Vtemp380[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))
                ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                    : ((0x1fU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                        : ((0x1eU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                            : ((0x1dU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                : ((0x1cU == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                    : ((0x1bU == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                        : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58))))))
                : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))
                ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                    : ((0x1fU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0xfU)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                        : ((0x1eU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xfU)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                            : ((0x1dU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0xfU)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                : ((0x1cU == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                    : ((0x1bU == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                        : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26))))))
                : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U])));
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)
                        ? 1U : 2U) : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                                       ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)
                                           ? 1U : 2U)
                                       : (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid)
                                                 ? 
                                                (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))
                                                 : 
                                                (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                                                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w))) 
                                                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)))))))
                : (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                    : (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_33));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9;
            }
        }
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
            = (8ULL + vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
                    = (0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1;
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_2;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
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
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3 
        = ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus) 
           | ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                             >> 3U))) ? 0x1880ULL : 0x1800ULL));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_34));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp413, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] 
                = __Vtemp413[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] 
                = __Vtemp413[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] 
                = __Vtemp413[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] 
                = __Vtemp413[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp414, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] 
                = __Vtemp414[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] 
                = __Vtemp414[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] 
                = __Vtemp414[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] 
                = __Vtemp414[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp415, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] 
                = __Vtemp415[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] 
                = __Vtemp415[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] 
                = __Vtemp415[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] 
                = __Vtemp415[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp416, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] 
                = __Vtemp416[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] 
                = __Vtemp416[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] 
                = __Vtemp416[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] 
                = __Vtemp416[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 0xbU : 
                                          ((8U == (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                            ? 3U : 0U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm 
        = (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    __Vtemp419[0U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                       << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                                    >> 2U));
    __Vtemp419[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                       << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                    >> 2U));
    __Vtemp419[2U] = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                            >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp420, __Vtemp419);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp420[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp420[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = __Vtemp420[2U];
    VL_EXTEND_WW(131,130, __Vtemp422, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    __Vtemp424[0U] = 1U;
    __Vtemp424[1U] = 0U;
    __Vtemp424[2U] = 0U;
    __Vtemp424[3U] = 0U;
    __Vtemp424[4U] = 0U;
    __Vtemp425[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp425[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp425[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp425[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp425[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp426, __Vtemp424, __Vtemp425);
    __Vtemp427[0U] = __Vtemp426[0U];
    __Vtemp427[1U] = __Vtemp426[1U];
    __Vtemp427[2U] = __Vtemp426[2U];
    __Vtemp427[3U] = __Vtemp426[3U];
    __Vtemp427[4U] = (3U & __Vtemp426[4U]);
    VL_EXTEND_WW(131,130, __Vtemp428, __Vtemp427);
    __Vtemp430[0U] = 1U;
    __Vtemp430[1U] = 0U;
    __Vtemp430[2U] = 0U;
    __Vtemp430[3U] = 0U;
    __Vtemp430[4U] = 0U;
    __Vtemp431[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp431[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp431[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp431[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp431[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp432, __Vtemp430, __Vtemp431);
    __Vtemp433[0U] = __Vtemp432[0U];
    __Vtemp433[1U] = __Vtemp432[1U];
    __Vtemp433[2U] = __Vtemp432[2U];
    __Vtemp433[3U] = __Vtemp432[3U];
    __Vtemp433[4U] = (3U & __Vtemp432[4U]);
    VL_EXTEND_WW(131,130, __Vtemp434, __Vtemp433);
    __Vtemp436[0U] = 1U;
    __Vtemp436[1U] = 0U;
    __Vtemp436[2U] = 0U;
    __Vtemp436[3U] = 0U;
    __Vtemp436[4U] = 0U;
    __Vtemp437[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp437[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp437[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp437[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp437[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp438, __Vtemp436, __Vtemp437);
    if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp446[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp446[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp446[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp446[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp446[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp446[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                           : 0U);
        __Vtemp446[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                           : 0U);
        __Vtemp446[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                           : 0U);
        __Vtemp446[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                           : 0U);
        __Vtemp446[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                           : 0U);
    }
    VL_EXTEND_WW(131,130, __Vtemp447, __Vtemp446);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp455[0U] = __Vtemp428[0U];
        __Vtemp455[1U] = __Vtemp428[1U];
        __Vtemp455[2U] = __Vtemp428[2U];
        __Vtemp455[3U] = __Vtemp428[3U];
        __Vtemp455[4U] = __Vtemp428[4U];
    } else {
        __Vtemp455[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp434[0U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   __Vtemp438[0U] 
                                                   << 1U)
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                    << 1U)
                                                    : 
                                                   __Vtemp447[0U])));
        __Vtemp455[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp434[1U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp438[0U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp438[1U] 
                                                      << 1U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp447[1U])));
        __Vtemp455[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp434[2U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp438[1U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp438[2U] 
                                                      << 1U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp447[2U])));
        __Vtemp455[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp434[3U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp438[2U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp438[3U] 
                                                      << 1U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp447[3U])));
        __Vtemp455[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp434[4U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp438[3U] 
                                                    >> 0x1fU) 
                                                   | (6U 
                                                      & (__Vtemp438[4U] 
                                                         << 1U)))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp447[4U])));
    }
    VL_ADD_W(5, __Vtemp456, __Vtemp422, __Vtemp455);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp456[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp456[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp456[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp456[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp456[4U]);
    vlSelf->io_difftest_peripheral = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr
                : 0ULL);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en 
                    = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w)));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
               & (0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
                           >> 0x1fU)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
    }
    __Vtemp460[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      << 1U);
    __Vtemp460[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                    << 1U));
    __Vtemp460[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                  >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                               << 1U)));
    __Vtemp460[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                    << 3U));
    __Vtemp460[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                    << 3U));
    __Vtemp464[0U] = 1U;
    __Vtemp464[1U] = 0U;
    __Vtemp464[2U] = 0U;
    __Vtemp465[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp465[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp465[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp466, __Vtemp464, __Vtemp465);
    __Vtemp471[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                       ? 0U : 1U);
    __Vtemp471[1U] = 0U;
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))) {
        __Vtemp471[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                          << 2U);
        __Vtemp471[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        << 2U));
        __Vtemp471[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        << 2U));
    } else {
        __Vtemp471[2U] = (__Vtemp466[0U] << 2U);
        __Vtemp471[3U] = ((__Vtemp466[0U] >> 0x1eU) 
                          | (__Vtemp466[1U] << 2U));
        __Vtemp471[4U] = ((__Vtemp466[1U] >> 0x1eU) 
                          | (4U & (__Vtemp466[2U] << 2U)));
    }
    VL_EXTEND_WW(132,131, __Vtemp472, __Vtemp471);
    VL_ADD_W(5, __Vtemp473, __Vtemp460, __Vtemp472);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp473[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp473[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp473[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp473[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (0xfU & __Vtemp473[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]));
    __Vtemp477[0U] = 1U;
    __Vtemp477[1U] = 0U;
    __Vtemp477[2U] = 0U;
    __Vtemp478[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp478[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp478[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp479, __Vtemp477, __Vtemp478);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = ((((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
              ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                 >> 1U)) & (0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))) 
            | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ __Vtemp479[0U]) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                             ^ __Vtemp479[1U])) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                         ^ (1U & __Vtemp479[2U]))))) 
           | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))));
    vlSelf->io_difftest_inst = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg 
        = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_16));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_28;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_7;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid)
                                             ? ((0xb02U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                                 : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3)
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3));
    vlSelf->io_difftest_pc = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid 
            = (((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                          >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = 0U;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
               & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)) 
                                         & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp481, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U] 
                = __Vtemp481[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U] 
                = __Vtemp481[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U] 
                = __Vtemp481[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U] 
                = __Vtemp481[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp482, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] 
                = __Vtemp482[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] 
                = __Vtemp482[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] 
                = __Vtemp482[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] 
                = __Vtemp482[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp483, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] 
                = __Vtemp483[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] 
                = __Vtemp483[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] 
                = __Vtemp483[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] 
                = __Vtemp483[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp484, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                              >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] 
                = __Vtemp484[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] 
                = __Vtemp484[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] 
                = __Vtemp484[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] 
                = __Vtemp484[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10)));
    }
    vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen 
        = (0xfU & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1 
        = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    VL_ADD_W(3, __Vtemp486, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    __Vtemp487[0U] = 1U;
    __Vtemp487[1U] = 0U;
    __Vtemp487[2U] = 0U;
    __Vtemp488[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp488[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp488[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp489, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp488);
    VL_ADD_W(3, __Vtemp490, __Vtemp487, __Vtemp489);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp486[0U] : __Vtemp490[0U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp486[1U] : __Vtemp490[1U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                          ? __Vtemp486[2U] : __Vtemp490[2U])
                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 2U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                         ? 2U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 2U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 2U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 4U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_210)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[0U] 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
           << 2U);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[1U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
            >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                  >> 0x20U)) << 2U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[2U] 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                     >> 9U)) << 3U) | ((4U & ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 2U)) 
                                              << 2U)) 
                                       | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[3U] 
        = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                   >> 9U)) >> 0x1dU) 
                         | ((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                      >> 9U) >> 0x20U)) 
                            << 3U)));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13 
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                        : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)));
    }
    vlSelf->io_difftest_reg_31 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31;
    vlSelf->io_difftest_reg_30 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30;
    vlSelf->io_difftest_reg_29 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29;
    vlSelf->io_difftest_reg_28 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28;
    vlSelf->io_difftest_reg_27 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                               ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                                   ? 
                                                  ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                                    ? 3U
                                                    : 2U)
                                                   : 2U)
                                               : ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_98)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
                = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                   >> 0xaU);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
                = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                    >> 4U)));
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_99)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_97)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2));
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U];
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
                = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                          ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0))
                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        }
    }
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                   ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit))
                   : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))
                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T)
                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10;
            }
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21;
        } else if ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_33;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13
                    : (0xfffffffffffffff0ULL & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) 
               & ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))) 
                  | (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
                        | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))))));
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_32;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_40;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 = 0ULL;
    } else if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit)
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                    : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))
                        ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T)
                        : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T))));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid)
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                    ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
                        | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1)))
                        ? 0U : 1U) : 1U) : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
        }
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7 = 
        ((0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
         & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr;
        vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9 
            = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr);
        vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26 
        = ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26)
            : ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25)
                : ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24)
                    : ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23)
                        : ((0x16U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22)
                            : ((0x15U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21)
                                : ((0x14U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)
                                    : ((0x13U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13))))))))))))));
}
