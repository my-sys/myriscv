// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__4(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN;
    VlWide<8>/*255:0*/ __Vtemp330;
    VlWide<4>/*127:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp365;
    VlWide<4>/*127:0*/ __Vtemp366;
    VlWide<4>/*127:0*/ __Vtemp367;
    VlWide<4>/*127:0*/ __Vtemp368;
    VlWide<3>/*95:0*/ __Vtemp371;
    VlWide<3>/*95:0*/ __Vtemp372;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<3>/*95:0*/ __Vtemp374;
    VlWide<3>/*95:0*/ __Vtemp375;
    VlWide<64>/*2047:0*/ __Vtemp391;
    VlWide<68>/*2175:0*/ __Vtemp392;
    VlWide<72>/*2303:0*/ __Vtemp393;
    VlWide<76>/*2431:0*/ __Vtemp394;
    VlWide<80>/*2559:0*/ __Vtemp395;
    VlWide<84>/*2687:0*/ __Vtemp396;
    VlWide<88>/*2815:0*/ __Vtemp397;
    VlWide<92>/*2943:0*/ __Vtemp398;
    VlWide<96>/*3071:0*/ __Vtemp399;
    VlWide<100>/*3199:0*/ __Vtemp400;
    VlWide<104>/*3327:0*/ __Vtemp401;
    VlWide<108>/*3455:0*/ __Vtemp402;
    VlWide<112>/*3583:0*/ __Vtemp403;
    VlWide<116>/*3711:0*/ __Vtemp404;
    VlWide<120>/*3839:0*/ __Vtemp405;
    VlWide<124>/*3967:0*/ __Vtemp406;
    VlWide<128>/*4095:0*/ __Vtemp407;
    VlWide<132>/*4223:0*/ __Vtemp408;
    VlWide<136>/*4351:0*/ __Vtemp409;
    VlWide<140>/*4479:0*/ __Vtemp410;
    VlWide<144>/*4607:0*/ __Vtemp411;
    VlWide<148>/*4735:0*/ __Vtemp412;
    VlWide<152>/*4863:0*/ __Vtemp413;
    VlWide<156>/*4991:0*/ __Vtemp414;
    VlWide<160>/*5119:0*/ __Vtemp415;
    VlWide<164>/*5247:0*/ __Vtemp416;
    VlWide<168>/*5375:0*/ __Vtemp417;
    VlWide<172>/*5503:0*/ __Vtemp418;
    VlWide<176>/*5631:0*/ __Vtemp419;
    VlWide<180>/*5759:0*/ __Vtemp420;
    VlWide<184>/*5887:0*/ __Vtemp421;
    VlWide<188>/*6015:0*/ __Vtemp422;
    VlWide<192>/*6143:0*/ __Vtemp423;
    VlWide<196>/*6271:0*/ __Vtemp424;
    VlWide<200>/*6399:0*/ __Vtemp425;
    VlWide<204>/*6527:0*/ __Vtemp426;
    VlWide<208>/*6655:0*/ __Vtemp427;
    VlWide<212>/*6783:0*/ __Vtemp428;
    VlWide<216>/*6911:0*/ __Vtemp429;
    VlWide<220>/*7039:0*/ __Vtemp430;
    VlWide<224>/*7167:0*/ __Vtemp431;
    VlWide<228>/*7295:0*/ __Vtemp432;
    VlWide<232>/*7423:0*/ __Vtemp433;
    VlWide<236>/*7551:0*/ __Vtemp434;
    VlWide<240>/*7679:0*/ __Vtemp435;
    VlWide<244>/*7807:0*/ __Vtemp436;
    VlWide<248>/*7935:0*/ __Vtemp437;
    VlWide<252>/*8063:0*/ __Vtemp438;
    VlWide<256>/*8191:0*/ __Vtemp439;
    VlWide<64>/*2047:0*/ __Vtemp455;
    VlWide<68>/*2175:0*/ __Vtemp456;
    VlWide<72>/*2303:0*/ __Vtemp457;
    VlWide<76>/*2431:0*/ __Vtemp458;
    VlWide<80>/*2559:0*/ __Vtemp459;
    VlWide<84>/*2687:0*/ __Vtemp460;
    VlWide<88>/*2815:0*/ __Vtemp461;
    VlWide<92>/*2943:0*/ __Vtemp462;
    VlWide<96>/*3071:0*/ __Vtemp463;
    VlWide<100>/*3199:0*/ __Vtemp464;
    VlWide<104>/*3327:0*/ __Vtemp465;
    VlWide<108>/*3455:0*/ __Vtemp466;
    VlWide<112>/*3583:0*/ __Vtemp467;
    VlWide<116>/*3711:0*/ __Vtemp468;
    VlWide<120>/*3839:0*/ __Vtemp469;
    VlWide<124>/*3967:0*/ __Vtemp470;
    VlWide<128>/*4095:0*/ __Vtemp471;
    VlWide<132>/*4223:0*/ __Vtemp472;
    VlWide<136>/*4351:0*/ __Vtemp473;
    VlWide<140>/*4479:0*/ __Vtemp474;
    VlWide<144>/*4607:0*/ __Vtemp475;
    VlWide<148>/*4735:0*/ __Vtemp476;
    VlWide<152>/*4863:0*/ __Vtemp477;
    VlWide<156>/*4991:0*/ __Vtemp478;
    VlWide<160>/*5119:0*/ __Vtemp479;
    VlWide<164>/*5247:0*/ __Vtemp480;
    VlWide<168>/*5375:0*/ __Vtemp481;
    VlWide<172>/*5503:0*/ __Vtemp482;
    VlWide<176>/*5631:0*/ __Vtemp483;
    VlWide<180>/*5759:0*/ __Vtemp484;
    VlWide<184>/*5887:0*/ __Vtemp485;
    VlWide<188>/*6015:0*/ __Vtemp486;
    VlWide<192>/*6143:0*/ __Vtemp487;
    VlWide<196>/*6271:0*/ __Vtemp488;
    VlWide<200>/*6399:0*/ __Vtemp489;
    VlWide<204>/*6527:0*/ __Vtemp490;
    VlWide<208>/*6655:0*/ __Vtemp491;
    VlWide<212>/*6783:0*/ __Vtemp492;
    VlWide<216>/*6911:0*/ __Vtemp493;
    VlWide<220>/*7039:0*/ __Vtemp494;
    VlWide<224>/*7167:0*/ __Vtemp495;
    VlWide<228>/*7295:0*/ __Vtemp496;
    VlWide<232>/*7423:0*/ __Vtemp497;
    VlWide<236>/*7551:0*/ __Vtemp498;
    VlWide<240>/*7679:0*/ __Vtemp499;
    VlWide<244>/*7807:0*/ __Vtemp500;
    VlWide<248>/*7935:0*/ __Vtemp501;
    VlWide<252>/*8063:0*/ __Vtemp502;
    VlWide<256>/*8191:0*/ __Vtemp503;
    VlWide<64>/*2047:0*/ __Vtemp519;
    VlWide<68>/*2175:0*/ __Vtemp520;
    VlWide<72>/*2303:0*/ __Vtemp521;
    VlWide<76>/*2431:0*/ __Vtemp522;
    VlWide<80>/*2559:0*/ __Vtemp523;
    VlWide<84>/*2687:0*/ __Vtemp524;
    VlWide<88>/*2815:0*/ __Vtemp525;
    VlWide<92>/*2943:0*/ __Vtemp526;
    VlWide<96>/*3071:0*/ __Vtemp527;
    VlWide<100>/*3199:0*/ __Vtemp528;
    VlWide<104>/*3327:0*/ __Vtemp529;
    VlWide<108>/*3455:0*/ __Vtemp530;
    VlWide<112>/*3583:0*/ __Vtemp531;
    VlWide<116>/*3711:0*/ __Vtemp532;
    VlWide<120>/*3839:0*/ __Vtemp533;
    VlWide<124>/*3967:0*/ __Vtemp534;
    VlWide<128>/*4095:0*/ __Vtemp535;
    VlWide<132>/*4223:0*/ __Vtemp536;
    VlWide<136>/*4351:0*/ __Vtemp537;
    VlWide<140>/*4479:0*/ __Vtemp538;
    VlWide<144>/*4607:0*/ __Vtemp539;
    VlWide<148>/*4735:0*/ __Vtemp540;
    VlWide<152>/*4863:0*/ __Vtemp541;
    VlWide<156>/*4991:0*/ __Vtemp542;
    VlWide<160>/*5119:0*/ __Vtemp543;
    VlWide<164>/*5247:0*/ __Vtemp544;
    VlWide<168>/*5375:0*/ __Vtemp545;
    VlWide<172>/*5503:0*/ __Vtemp546;
    VlWide<176>/*5631:0*/ __Vtemp547;
    VlWide<180>/*5759:0*/ __Vtemp548;
    VlWide<184>/*5887:0*/ __Vtemp549;
    VlWide<188>/*6015:0*/ __Vtemp550;
    VlWide<192>/*6143:0*/ __Vtemp551;
    VlWide<196>/*6271:0*/ __Vtemp552;
    VlWide<200>/*6399:0*/ __Vtemp553;
    VlWide<204>/*6527:0*/ __Vtemp554;
    VlWide<208>/*6655:0*/ __Vtemp555;
    VlWide<212>/*6783:0*/ __Vtemp556;
    VlWide<216>/*6911:0*/ __Vtemp557;
    VlWide<220>/*7039:0*/ __Vtemp558;
    VlWide<224>/*7167:0*/ __Vtemp559;
    VlWide<228>/*7295:0*/ __Vtemp560;
    VlWide<232>/*7423:0*/ __Vtemp561;
    VlWide<236>/*7551:0*/ __Vtemp562;
    VlWide<240>/*7679:0*/ __Vtemp563;
    VlWide<244>/*7807:0*/ __Vtemp564;
    VlWide<248>/*7935:0*/ __Vtemp565;
    VlWide<252>/*8063:0*/ __Vtemp566;
    VlWide<256>/*8191:0*/ __Vtemp567;
    VlWide<64>/*2047:0*/ __Vtemp583;
    VlWide<68>/*2175:0*/ __Vtemp584;
    VlWide<72>/*2303:0*/ __Vtemp585;
    VlWide<76>/*2431:0*/ __Vtemp586;
    VlWide<80>/*2559:0*/ __Vtemp587;
    VlWide<84>/*2687:0*/ __Vtemp588;
    VlWide<88>/*2815:0*/ __Vtemp589;
    VlWide<92>/*2943:0*/ __Vtemp590;
    VlWide<96>/*3071:0*/ __Vtemp591;
    VlWide<100>/*3199:0*/ __Vtemp592;
    VlWide<104>/*3327:0*/ __Vtemp593;
    VlWide<108>/*3455:0*/ __Vtemp594;
    VlWide<112>/*3583:0*/ __Vtemp595;
    VlWide<116>/*3711:0*/ __Vtemp596;
    VlWide<120>/*3839:0*/ __Vtemp597;
    VlWide<124>/*3967:0*/ __Vtemp598;
    VlWide<128>/*4095:0*/ __Vtemp599;
    VlWide<132>/*4223:0*/ __Vtemp600;
    VlWide<136>/*4351:0*/ __Vtemp601;
    VlWide<140>/*4479:0*/ __Vtemp602;
    VlWide<144>/*4607:0*/ __Vtemp603;
    VlWide<148>/*4735:0*/ __Vtemp604;
    VlWide<152>/*4863:0*/ __Vtemp605;
    VlWide<156>/*4991:0*/ __Vtemp606;
    VlWide<160>/*5119:0*/ __Vtemp607;
    VlWide<164>/*5247:0*/ __Vtemp608;
    VlWide<168>/*5375:0*/ __Vtemp609;
    VlWide<172>/*5503:0*/ __Vtemp610;
    VlWide<176>/*5631:0*/ __Vtemp611;
    VlWide<180>/*5759:0*/ __Vtemp612;
    VlWide<184>/*5887:0*/ __Vtemp613;
    VlWide<188>/*6015:0*/ __Vtemp614;
    VlWide<192>/*6143:0*/ __Vtemp615;
    VlWide<196>/*6271:0*/ __Vtemp616;
    VlWide<200>/*6399:0*/ __Vtemp617;
    VlWide<204>/*6527:0*/ __Vtemp618;
    VlWide<208>/*6655:0*/ __Vtemp619;
    VlWide<212>/*6783:0*/ __Vtemp620;
    VlWide<216>/*6911:0*/ __Vtemp621;
    VlWide<220>/*7039:0*/ __Vtemp622;
    VlWide<224>/*7167:0*/ __Vtemp623;
    VlWide<228>/*7295:0*/ __Vtemp624;
    VlWide<232>/*7423:0*/ __Vtemp625;
    VlWide<236>/*7551:0*/ __Vtemp626;
    VlWide<240>/*7679:0*/ __Vtemp627;
    VlWide<244>/*7807:0*/ __Vtemp628;
    VlWide<248>/*7935:0*/ __Vtemp629;
    VlWide<252>/*8063:0*/ __Vtemp630;
    VlWide<256>/*8191:0*/ __Vtemp631;
    VlWide<4>/*127:0*/ __Vtemp634;
    VlWide<4>/*127:0*/ __Vtemp635;
    VlWide<4>/*127:0*/ __Vtemp638;
    VlWide<4>/*127:0*/ __Vtemp639;
    VlWide<4>/*127:0*/ __Vtemp647;
    VlWide<4>/*127:0*/ __Vtemp648;
    VlWide<16>/*511:0*/ __Vtemp651;
    VlWide<3>/*95:0*/ __Vtemp654;
    VlWide<3>/*95:0*/ __Vtemp657;
    VlWide<3>/*95:0*/ __Vtemp661;
    VlWide<3>/*95:0*/ __Vtemp665;
    VlWide<3>/*95:0*/ __Vtemp672;
    VlWide<3>/*95:0*/ __Vtemp676;
    VlWide<5>/*159:0*/ __Vtemp678;
    VlWide<5>/*159:0*/ __Vtemp679;
    VlWide<17>/*543:0*/ __Vtemp681;
    VlWide<3>/*95:0*/ __Vtemp685;
    VlWide<64>/*2047:0*/ __Vtemp704;
    VlWide<68>/*2175:0*/ __Vtemp705;
    VlWide<72>/*2303:0*/ __Vtemp706;
    VlWide<76>/*2431:0*/ __Vtemp707;
    VlWide<80>/*2559:0*/ __Vtemp708;
    VlWide<84>/*2687:0*/ __Vtemp709;
    VlWide<88>/*2815:0*/ __Vtemp710;
    VlWide<92>/*2943:0*/ __Vtemp711;
    VlWide<96>/*3071:0*/ __Vtemp712;
    VlWide<100>/*3199:0*/ __Vtemp713;
    VlWide<104>/*3327:0*/ __Vtemp714;
    VlWide<108>/*3455:0*/ __Vtemp715;
    VlWide<112>/*3583:0*/ __Vtemp716;
    VlWide<116>/*3711:0*/ __Vtemp717;
    VlWide<120>/*3839:0*/ __Vtemp718;
    VlWide<124>/*3967:0*/ __Vtemp719;
    VlWide<128>/*4095:0*/ __Vtemp720;
    VlWide<132>/*4223:0*/ __Vtemp721;
    VlWide<136>/*4351:0*/ __Vtemp722;
    VlWide<140>/*4479:0*/ __Vtemp723;
    VlWide<144>/*4607:0*/ __Vtemp724;
    VlWide<148>/*4735:0*/ __Vtemp725;
    VlWide<152>/*4863:0*/ __Vtemp726;
    VlWide<156>/*4991:0*/ __Vtemp727;
    VlWide<160>/*5119:0*/ __Vtemp728;
    VlWide<164>/*5247:0*/ __Vtemp729;
    VlWide<168>/*5375:0*/ __Vtemp730;
    VlWide<172>/*5503:0*/ __Vtemp731;
    VlWide<176>/*5631:0*/ __Vtemp732;
    VlWide<180>/*5759:0*/ __Vtemp733;
    VlWide<184>/*5887:0*/ __Vtemp734;
    VlWide<188>/*6015:0*/ __Vtemp735;
    VlWide<192>/*6143:0*/ __Vtemp736;
    VlWide<196>/*6271:0*/ __Vtemp737;
    VlWide<200>/*6399:0*/ __Vtemp738;
    VlWide<204>/*6527:0*/ __Vtemp739;
    VlWide<208>/*6655:0*/ __Vtemp740;
    VlWide<212>/*6783:0*/ __Vtemp741;
    VlWide<216>/*6911:0*/ __Vtemp742;
    VlWide<220>/*7039:0*/ __Vtemp743;
    VlWide<224>/*7167:0*/ __Vtemp744;
    VlWide<228>/*7295:0*/ __Vtemp745;
    VlWide<232>/*7423:0*/ __Vtemp746;
    VlWide<236>/*7551:0*/ __Vtemp747;
    VlWide<240>/*7679:0*/ __Vtemp748;
    VlWide<244>/*7807:0*/ __Vtemp749;
    VlWide<248>/*7935:0*/ __Vtemp750;
    VlWide<252>/*8063:0*/ __Vtemp751;
    VlWide<256>/*8191:0*/ __Vtemp752;
    VlWide<64>/*2047:0*/ __Vtemp768;
    VlWide<68>/*2175:0*/ __Vtemp769;
    VlWide<72>/*2303:0*/ __Vtemp770;
    VlWide<76>/*2431:0*/ __Vtemp771;
    VlWide<80>/*2559:0*/ __Vtemp772;
    VlWide<84>/*2687:0*/ __Vtemp773;
    VlWide<88>/*2815:0*/ __Vtemp774;
    VlWide<92>/*2943:0*/ __Vtemp775;
    VlWide<96>/*3071:0*/ __Vtemp776;
    VlWide<100>/*3199:0*/ __Vtemp777;
    VlWide<104>/*3327:0*/ __Vtemp778;
    VlWide<108>/*3455:0*/ __Vtemp779;
    VlWide<112>/*3583:0*/ __Vtemp780;
    VlWide<116>/*3711:0*/ __Vtemp781;
    VlWide<120>/*3839:0*/ __Vtemp782;
    VlWide<124>/*3967:0*/ __Vtemp783;
    VlWide<128>/*4095:0*/ __Vtemp784;
    VlWide<132>/*4223:0*/ __Vtemp785;
    VlWide<136>/*4351:0*/ __Vtemp786;
    VlWide<140>/*4479:0*/ __Vtemp787;
    VlWide<144>/*4607:0*/ __Vtemp788;
    VlWide<148>/*4735:0*/ __Vtemp789;
    VlWide<152>/*4863:0*/ __Vtemp790;
    VlWide<156>/*4991:0*/ __Vtemp791;
    VlWide<160>/*5119:0*/ __Vtemp792;
    VlWide<164>/*5247:0*/ __Vtemp793;
    VlWide<168>/*5375:0*/ __Vtemp794;
    VlWide<172>/*5503:0*/ __Vtemp795;
    VlWide<176>/*5631:0*/ __Vtemp796;
    VlWide<180>/*5759:0*/ __Vtemp797;
    VlWide<184>/*5887:0*/ __Vtemp798;
    VlWide<188>/*6015:0*/ __Vtemp799;
    VlWide<192>/*6143:0*/ __Vtemp800;
    VlWide<196>/*6271:0*/ __Vtemp801;
    VlWide<200>/*6399:0*/ __Vtemp802;
    VlWide<204>/*6527:0*/ __Vtemp803;
    VlWide<208>/*6655:0*/ __Vtemp804;
    VlWide<212>/*6783:0*/ __Vtemp805;
    VlWide<216>/*6911:0*/ __Vtemp806;
    VlWide<220>/*7039:0*/ __Vtemp807;
    VlWide<224>/*7167:0*/ __Vtemp808;
    VlWide<228>/*7295:0*/ __Vtemp809;
    VlWide<232>/*7423:0*/ __Vtemp810;
    VlWide<236>/*7551:0*/ __Vtemp811;
    VlWide<240>/*7679:0*/ __Vtemp812;
    VlWide<244>/*7807:0*/ __Vtemp813;
    VlWide<248>/*7935:0*/ __Vtemp814;
    VlWide<252>/*8063:0*/ __Vtemp815;
    VlWide<256>/*8191:0*/ __Vtemp816;
    VlWide<64>/*2047:0*/ __Vtemp832;
    VlWide<68>/*2175:0*/ __Vtemp833;
    VlWide<72>/*2303:0*/ __Vtemp834;
    VlWide<76>/*2431:0*/ __Vtemp835;
    VlWide<80>/*2559:0*/ __Vtemp836;
    VlWide<84>/*2687:0*/ __Vtemp837;
    VlWide<88>/*2815:0*/ __Vtemp838;
    VlWide<92>/*2943:0*/ __Vtemp839;
    VlWide<96>/*3071:0*/ __Vtemp840;
    VlWide<100>/*3199:0*/ __Vtemp841;
    VlWide<104>/*3327:0*/ __Vtemp842;
    VlWide<108>/*3455:0*/ __Vtemp843;
    VlWide<112>/*3583:0*/ __Vtemp844;
    VlWide<116>/*3711:0*/ __Vtemp845;
    VlWide<120>/*3839:0*/ __Vtemp846;
    VlWide<124>/*3967:0*/ __Vtemp847;
    VlWide<128>/*4095:0*/ __Vtemp848;
    VlWide<132>/*4223:0*/ __Vtemp849;
    VlWide<136>/*4351:0*/ __Vtemp850;
    VlWide<140>/*4479:0*/ __Vtemp851;
    VlWide<144>/*4607:0*/ __Vtemp852;
    VlWide<148>/*4735:0*/ __Vtemp853;
    VlWide<152>/*4863:0*/ __Vtemp854;
    VlWide<156>/*4991:0*/ __Vtemp855;
    VlWide<160>/*5119:0*/ __Vtemp856;
    VlWide<164>/*5247:0*/ __Vtemp857;
    VlWide<168>/*5375:0*/ __Vtemp858;
    VlWide<172>/*5503:0*/ __Vtemp859;
    VlWide<176>/*5631:0*/ __Vtemp860;
    VlWide<180>/*5759:0*/ __Vtemp861;
    VlWide<184>/*5887:0*/ __Vtemp862;
    VlWide<188>/*6015:0*/ __Vtemp863;
    VlWide<192>/*6143:0*/ __Vtemp864;
    VlWide<196>/*6271:0*/ __Vtemp865;
    VlWide<200>/*6399:0*/ __Vtemp866;
    VlWide<204>/*6527:0*/ __Vtemp867;
    VlWide<208>/*6655:0*/ __Vtemp868;
    VlWide<212>/*6783:0*/ __Vtemp869;
    VlWide<216>/*6911:0*/ __Vtemp870;
    VlWide<220>/*7039:0*/ __Vtemp871;
    VlWide<224>/*7167:0*/ __Vtemp872;
    VlWide<228>/*7295:0*/ __Vtemp873;
    VlWide<232>/*7423:0*/ __Vtemp874;
    VlWide<236>/*7551:0*/ __Vtemp875;
    VlWide<240>/*7679:0*/ __Vtemp876;
    VlWide<244>/*7807:0*/ __Vtemp877;
    VlWide<248>/*7935:0*/ __Vtemp878;
    VlWide<252>/*8063:0*/ __Vtemp879;
    VlWide<256>/*8191:0*/ __Vtemp880;
    VlWide<64>/*2047:0*/ __Vtemp896;
    VlWide<68>/*2175:0*/ __Vtemp897;
    VlWide<72>/*2303:0*/ __Vtemp898;
    VlWide<76>/*2431:0*/ __Vtemp899;
    VlWide<80>/*2559:0*/ __Vtemp900;
    VlWide<84>/*2687:0*/ __Vtemp901;
    VlWide<88>/*2815:0*/ __Vtemp902;
    VlWide<92>/*2943:0*/ __Vtemp903;
    VlWide<96>/*3071:0*/ __Vtemp904;
    VlWide<100>/*3199:0*/ __Vtemp905;
    VlWide<104>/*3327:0*/ __Vtemp906;
    VlWide<108>/*3455:0*/ __Vtemp907;
    VlWide<112>/*3583:0*/ __Vtemp908;
    VlWide<116>/*3711:0*/ __Vtemp909;
    VlWide<120>/*3839:0*/ __Vtemp910;
    VlWide<124>/*3967:0*/ __Vtemp911;
    VlWide<128>/*4095:0*/ __Vtemp912;
    VlWide<132>/*4223:0*/ __Vtemp913;
    VlWide<136>/*4351:0*/ __Vtemp914;
    VlWide<140>/*4479:0*/ __Vtemp915;
    VlWide<144>/*4607:0*/ __Vtemp916;
    VlWide<148>/*4735:0*/ __Vtemp917;
    VlWide<152>/*4863:0*/ __Vtemp918;
    VlWide<156>/*4991:0*/ __Vtemp919;
    VlWide<160>/*5119:0*/ __Vtemp920;
    VlWide<164>/*5247:0*/ __Vtemp921;
    VlWide<168>/*5375:0*/ __Vtemp922;
    VlWide<172>/*5503:0*/ __Vtemp923;
    VlWide<176>/*5631:0*/ __Vtemp924;
    VlWide<180>/*5759:0*/ __Vtemp925;
    VlWide<184>/*5887:0*/ __Vtemp926;
    VlWide<188>/*6015:0*/ __Vtemp927;
    VlWide<192>/*6143:0*/ __Vtemp928;
    VlWide<196>/*6271:0*/ __Vtemp929;
    VlWide<200>/*6399:0*/ __Vtemp930;
    VlWide<204>/*6527:0*/ __Vtemp931;
    VlWide<208>/*6655:0*/ __Vtemp932;
    VlWide<212>/*6783:0*/ __Vtemp933;
    VlWide<216>/*6911:0*/ __Vtemp934;
    VlWide<220>/*7039:0*/ __Vtemp935;
    VlWide<224>/*7167:0*/ __Vtemp936;
    VlWide<228>/*7295:0*/ __Vtemp937;
    VlWide<232>/*7423:0*/ __Vtemp938;
    VlWide<236>/*7551:0*/ __Vtemp939;
    VlWide<240>/*7679:0*/ __Vtemp940;
    VlWide<244>/*7807:0*/ __Vtemp941;
    VlWide<248>/*7935:0*/ __Vtemp942;
    VlWide<252>/*8063:0*/ __Vtemp943;
    VlWide<256>/*8191:0*/ __Vtemp944;
    VlWide<8>/*255:0*/ __Vtemp948;
    VlWide<8>/*255:0*/ __Vtemp951;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1;
    // Body
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr 
            = (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
               >> 0x14U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        __Vtemp330[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0);
        __Vtemp330[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 
                                  >> 0x20U));
        __Vtemp330[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1);
        __Vtemp330[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 
                                  >> 0x20U));
        __Vtemp330[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2);
        __Vtemp330[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 
                                  >> 0x20U));
        __Vtemp330[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3);
        __Vtemp330[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 
                                  >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = (((QData)((IData)(__Vtemp330[(((IData)(0x3fU) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                   << 6U))) 
                                            >> 5U)])) 
                << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                     << 6U))) ? 0x20U
                     : ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                   << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(__Vtemp330[(
                                                   ((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                       << ((IData)(0x20U) - (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                << 6U))))) 
                  | ((QData)((IData)(__Vtemp330[(6U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                    << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                  << 6U)))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN 
            = ((0x1fc00U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                            >> 0xfU)) | ((0x380U & 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 5U)) 
                                         | (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1 
            = (0x33U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0 
            = ((0x380U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                          >> 5U)) | (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1 
            = ((0xfc00U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                           >> 0x10U)) | ((0x380U & 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 5U)) 
                                         | (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3 
            = (0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5 
            = (0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7 
            = (0x3bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9 
            = (0x3b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11 
            = (0x393U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13 
            = (0x17U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15 
            = (0x63U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17 
            = (0x2e3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19 
            = (0x3e3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21 
            = (0x263U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23 
            = (0x363U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25 
            = (0xe3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27 
            = (0x1f3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29 
            = (0x3f3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31 
            = (0x173U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33 
            = (0x373U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35 
            = (0xf3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37 
            = (0x2f3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39 
            = (0x183U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41 
            = (3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43 
            = (0x203U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45 
            = (0x83U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47 
            = (0x283U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49 
            = (0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51 
            = (0x103U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53 
            = (0x303U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55 
            = (0x1a3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57 
            = (0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59 
            = (0xa3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61 
            = (0xb3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63 
            = (0x93U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65 
            = (0x9bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67 
            = (0xbbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69 
            = (0x133U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71 
            = (0x113U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73 
            = (0x193U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75 
            = (0x1b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77 
            = (0x82b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79 
            = (0x4293U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81 
            = (0x829bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83 
            = (0x82bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85 
            = (0x2b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87 
            = (0x293U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89 
            = (0x29bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91 
            = (0x2bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93 
            = (0x8033U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95 
            = (0x803bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97 
            = (0x123U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99 
            = (0x333U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101 
            = (0x313U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103 
            = (0x233U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105 
            = (0x213U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107 
            = (0x633U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109 
            = (0x6b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111 
            = (0x6bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113 
            = (0x63bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115 
            = (0x433U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117 
            = (0x4b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119 
            = (0x533U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121 
            = (0x5b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123 
            = (0x43bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125 
            = (0x733U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127 
            = (0x7b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129 
            = (0x7bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131 
            = (0x73bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133 
            = (0x6fU == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135 
            = (0x67U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137 
            = (0x100073U == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139 
            = (0x30200073U == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141 
            = (0x73U == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143 
            = (0x10200073U == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145 
            = (0xfU == ((0xf00000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                      >> 8U)) | (0xfffffU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147 
            = (0x100fU == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149 
            = (0x48073U == ((0x3f8000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                          >> 0xaU)) 
                            | (0x7fffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2 
            = (((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3 
            = (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4 
            = ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5 
            = ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1)
                ? 6U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15)
                         ? 0xcU : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14)
                                    ? 6U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)
                                             ? 0xcU
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)
                                                  ? 7U
                                                  : 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3)
                                                    ? 0xcU
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                     ? 1U
                                                     : 
                                                    (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53))
                                                      ? 0xcU
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12)
                                                         ? 4U
                                                         : 
                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11)
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9)
                                                            ? 6U
                                                            : 
                                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8)
                                                             ? 4U
                                                             : 
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6)
                                                               ? 4U
                                                               : 
                                                              ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95))
                                                                ? 6U
                                                                : 
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)
                                                                 ? 3U
                                                                 : 
                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99)
                                                                  ? 6U
                                                                  : 
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)
                                                                   ? 0xcU
                                                                   : 
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)
                                                                    ? 6U
                                                                    : 
                                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)
                                                                     ? 0xcU
                                                                     : 
                                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2)
                                                                      ? 6U
                                                                      : 
                                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)
                                                                       ? 2U
                                                                       : 
                                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135)
                                                                        ? 0xcU
                                                                        : 0U))))))))))))))))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13))
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)
                         ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4)
                                  ? 4U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3)
                                           ? 5U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                    ? 2U
                                                    : 
                                                   ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59))
                                                     ? 5U
                                                     : 
                                                    (((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61) 
                                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)) 
                                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)) 
                                                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)) 
                                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)) 
                                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)) 
                                                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77)) 
                                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79)) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)) 
                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)) 
                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89)) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)
                                                       ? 5U
                                                       : 
                                                      (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)) 
                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105))
                                                        ? 2U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2)
                                                         ? 3U
                                                         : 
                                                        (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135))
                                                          ? 1U
                                                          : 
                                                         (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141)) 
                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143))
                                                           ? 4U
                                                           : 
                                                          ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149))
                                                            ? 6U
                                                            : 0U)))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)
                         ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)
                                  ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)
                                           ? 3U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)
                                                    ? 0x1eU
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)
                                                     ? 0x1cU
                                                     : 
                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)
                                                      ? 0x60U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15)
                                                       ? 0x22U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17)
                                                        ? 0x36U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19)
                                                         ? 0x3eU
                                                         : 
                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21)
                                                          ? 0x32U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23)
                                                           ? 0x3aU
                                                           : 
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25)
                                                            ? 0x26U
                                                            : 
                                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27)
                                                             ? 0xeU
                                                             : 
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)
                                                              ? 0x1eU
                                                              : 
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)
                                                               ? 0xaU
                                                               : 
                                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)
                                                                ? 0x1aU
                                                                : 
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)
                                                                 ? 6U
                                                                 : 
                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)
                                                                  ? 0x16U
                                                                  : 
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39)
                                                                   ? 0xcU
                                                                   : 
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)
                                                                    ? 0U
                                                                    : 
                                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)
                                                                     ? 0x10U
                                                                     : 
                                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)
                                                                      ? 4U
                                                                      : 
                                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47)
                                                                       ? 0x14U
                                                                       : 
                                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                                        ? 0x40U
                                                                        : 
                                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51)
                                                                         ? 8U
                                                                         : 
                                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55)
                                                                           ? 0xeU
                                                                           : 
                                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)
                                                                            ? 2U
                                                                            : 
                                                                           (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59) 
                                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61))
                                                                             ? 6U
                                                                             : 
                                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)
                                                                              ? 4U
                                                                              : 
                                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)
                                                                               ? 5U
                                                                               : 
                                                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)
                                                                                ? 7U
                                                                                : 
                                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77)
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79)
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)
                                                                                 ? 0x14U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89)
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91)
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99)
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107)
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131)
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139)
                                                                                 ? 0x42U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143)
                                                                                 ? 0x62U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149) 
                                                                                << 1U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_16 
            = ((((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_18 
            = (((((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91) 
                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131));
        if ((1U == (((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11))
                     ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)
                              ? 0U : ((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17)) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19)) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21)) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23)) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25)) 
                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27))
                                       ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)
                                                ? 0U
                                                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_16) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_18))
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)
                                                           ? 0U
                                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135))))))))))))))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                            >> 0xfU));
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                  >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                        (((IData)(0x3fU) 
                                          + (0x7c0U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                >> 9U))) 
                                         >> 5U)])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                    (0x3eU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                        >> 0xeU))]))));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
        }
        if ((1U == ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1)
                     ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15)
                              ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14)
                                       ? 1U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11) 
                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13))
                                                ? 0U
                                                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)
                                                    ? 1U
                                                    : 
                                                   (((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)) 
                                                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)) 
                                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39)) 
                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)) 
                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51)) 
                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53))
                                                     ? 0U
                                                     : 
                                                    (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9)
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7)
                                                            ? 1U
                                                            : 
                                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6)
                                                             ? 0U
                                                             : 
                                                            ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)) 
                                                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)) 
                                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99))
                                                              ? 1U
                                                              : 
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)
                                                                ? 1U
                                                                : 
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)
                                                                 ? 0U
                                                                 : 
                                                                (((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107) 
                                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                                                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131)))))))))))))))))))))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                            >> 0x14U));
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                  >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                        (((IData)(0x3fU) 
                                          + (0x7c0U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                >> 0xeU))) 
                                         >> 5U)])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                    (0x3eU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                        >> 0x13U))]))));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
        }
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
            = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                ? (0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                            >> 0x14U)) : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                           ? (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                 >> 0xfU))
                                           : ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                              >> 7U)))))
                                               : ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4) 
                                                      | ((0x800U 
                                                          & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                               >> 0x14U)))))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                             >> 7U))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                         >> 0x14U))
                                                      : 0U)))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_20 
            = (((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_22 
            = ((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)) 
               | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)) 
                  & (((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)) 
                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)) 
                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107)) 
                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg 
            = ((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)) 
               | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)) 
                  & (((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27) 
                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)) 
                     | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13)) 
                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_20) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_22))))));
    }
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3 = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__allow_in) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T))));
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_7 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size) 
               & (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_8 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size) 
               & (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_9 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size) 
               & (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size) 
               & (3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_7)))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 
                = vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2;
        }
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_8)))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 
                = vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2;
        }
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_9)))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 
                = vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2;
        }
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_10)))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 
                = vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2;
        }
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_7) 
                  | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq)) 
                      | (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0))));
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_8) 
                  | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq)) 
                      | (1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1))));
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_9) 
                  | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq)) 
                      | (2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2))));
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_10) 
                  | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq)) 
                      | (3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3))));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size = 0U;
        } else {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size) {
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq) {
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
            }
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size 
                = (7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                          + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size)) 
                         - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq)));
        }
    }
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2 
        = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3) 
                   << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2) 
                              << 2U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1) 
                                         << 1U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0)))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3;
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush;
    riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
                          >> 2U))) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
                                              >> 0x20U))
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0 
        = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3) 
                   << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2) 
                              << 2U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1) 
                                         << 1U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0)))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__allow_in 
        = (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
              & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr 
            = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                        >> 7U));
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    __Vtemp363[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0;
    __Vtemp363[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1;
    __Vtemp363[2U] = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))));
    __Vtemp363[3U] = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))) 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                             << 5U))) ? 0U : (__Vtemp363[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 5U))))) 
           | (__Vtemp363[(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                           << 5U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
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
        = ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
              >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                           >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                               >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                    : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                   >> 0x14U)) ? 0ULL
                        : ((0x343U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                            : ((0x342U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 0x14U))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                : ((0x341U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                    : ((0x340U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                   >> 0x14U))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                        : ((0x306U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                >> 0x14U))
                                            ? 0ULL : 
                                           ((0x305U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                             : ((0x304U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                 : 
                                                (((((0x303U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                      >> 0x14U)) 
                                                    | (0x302U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                        >> 0x14U))) 
                                                   | (0x301U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                       >> 0x14U))) 
                                                  | (0x300U 
                                                     != 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
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
    VL_EXTEND_WQ(127,64, __Vtemp365, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    VL_EXTEND_WI(124,3, __Vtemp366, (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)));
    __Vtemp367[0U] = (__Vtemp366[0U] << 3U);
    __Vtemp367[1U] = ((__Vtemp366[0U] >> 0x1dU) | (
                                                   __Vtemp366[1U] 
                                                   << 3U));
    __Vtemp367[2U] = ((__Vtemp366[1U] >> 0x1dU) | (
                                                   __Vtemp366[2U] 
                                                   << 3U));
    __Vtemp367[3U] = ((__Vtemp366[2U] >> 0x1dU) | (
                                                   __Vtemp366[3U] 
                                                   << 3U));
    VL_SHIFTL_WWW(127,127,127, __Vtemp368, __Vtemp365, __Vtemp367);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp368[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp368[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp368[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp368[3U]);
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)) : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index)));
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
    VL_EXTEND_WQ(65,64, __Vtemp371, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    VL_EXTEND_WQ(65,64, __Vtemp372, ((- (QData)((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                             >> 5U)))))) 
                                     ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp373, __Vtemp371, __Vtemp372);
    VL_EXTEND_WI(65,1, __Vtemp374, (1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U))));
    VL_ADD_W(3, __Vtemp375, __Vtemp373, __Vtemp374);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U] 
        = __Vtemp375[0U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
        = __Vtemp375[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U] 
        = (1U & __Vtemp375[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    __Vtemp391[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U];
    __Vtemp391[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U];
    __Vtemp391[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U];
    __Vtemp391[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U];
    __Vtemp391[4U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U];
    __Vtemp391[5U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U];
    __Vtemp391[6U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U];
    __Vtemp391[7U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U];
    __Vtemp391[8U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U];
    __Vtemp391[9U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U];
    __Vtemp391[0xaU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U];
    __Vtemp391[0xbU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U];
    __Vtemp391[0xcU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U];
    __Vtemp391[0xdU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U];
    __Vtemp391[0xeU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U];
    __Vtemp391[0xfU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U];
    __Vtemp391[0x10U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U];
    __Vtemp391[0x11U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U];
    __Vtemp391[0x12U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U];
    __Vtemp391[0x13U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U];
    __Vtemp391[0x14U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U];
    __Vtemp391[0x15U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U];
    __Vtemp391[0x16U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U];
    __Vtemp391[0x17U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U];
    __Vtemp391[0x18U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U];
    __Vtemp391[0x19U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U];
    __Vtemp391[0x1aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U];
    __Vtemp391[0x1bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U];
    __Vtemp391[0x1cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U];
    __Vtemp391[0x1dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U];
    __Vtemp391[0x1eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U];
    __Vtemp391[0x1fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U];
    __Vtemp391[0x20U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U];
    __Vtemp391[0x21U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U];
    __Vtemp391[0x22U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U];
    __Vtemp391[0x23U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U];
    __Vtemp391[0x24U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U];
    __Vtemp391[0x25U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U];
    __Vtemp391[0x26U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U];
    __Vtemp391[0x27U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U];
    __Vtemp391[0x28U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U];
    __Vtemp391[0x29U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U];
    __Vtemp391[0x2aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U];
    __Vtemp391[0x2bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U];
    __Vtemp391[0x2cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U];
    __Vtemp391[0x2dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U];
    __Vtemp391[0x2eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U];
    __Vtemp391[0x2fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U];
    __Vtemp391[0x30U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U];
    __Vtemp391[0x31U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U];
    __Vtemp391[0x32U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U];
    __Vtemp391[0x33U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U];
    __Vtemp391[0x34U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U];
    __Vtemp391[0x35U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U];
    __Vtemp391[0x36U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U];
    __Vtemp391[0x37U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U];
    __Vtemp391[0x38U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U];
    __Vtemp391[0x39U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U];
    __Vtemp391[0x3aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U];
    __Vtemp391[0x3bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U];
    __Vtemp391[0x3cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U];
    __Vtemp391[0x3dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U];
    __Vtemp391[0x3eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U];
    __Vtemp391[0x3fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp392, __Vtemp391, vlSelf->riscv_soc__DOT__sram0__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp393, __Vtemp392, vlSelf->riscv_soc__DOT__sram0__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp394, __Vtemp393, vlSelf->riscv_soc__DOT__sram0__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp395, __Vtemp394, vlSelf->riscv_soc__DOT__sram0__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp396, __Vtemp395, vlSelf->riscv_soc__DOT__sram0__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp397, __Vtemp396, vlSelf->riscv_soc__DOT__sram0__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp398, __Vtemp397, vlSelf->riscv_soc__DOT__sram0__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp399, __Vtemp398, vlSelf->riscv_soc__DOT__sram0__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp400, __Vtemp399, vlSelf->riscv_soc__DOT__sram0__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp401, __Vtemp400, vlSelf->riscv_soc__DOT__sram0__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp402, __Vtemp401, vlSelf->riscv_soc__DOT__sram0__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp403, __Vtemp402, vlSelf->riscv_soc__DOT__sram0__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp404, __Vtemp403, vlSelf->riscv_soc__DOT__sram0__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp405, __Vtemp404, vlSelf->riscv_soc__DOT__sram0__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp406, __Vtemp405, vlSelf->riscv_soc__DOT__sram0__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp407, __Vtemp406, vlSelf->riscv_soc__DOT__sram0__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp408, __Vtemp407, vlSelf->riscv_soc__DOT__sram0__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp409, __Vtemp408, vlSelf->riscv_soc__DOT__sram0__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp410, __Vtemp409, vlSelf->riscv_soc__DOT__sram0__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp411, __Vtemp410, vlSelf->riscv_soc__DOT__sram0__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp412, __Vtemp411, vlSelf->riscv_soc__DOT__sram0__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp413, __Vtemp412, vlSelf->riscv_soc__DOT__sram0__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp414, __Vtemp413, vlSelf->riscv_soc__DOT__sram0__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp415, __Vtemp414, vlSelf->riscv_soc__DOT__sram0__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp416, __Vtemp415, vlSelf->riscv_soc__DOT__sram0__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp417, __Vtemp416, vlSelf->riscv_soc__DOT__sram0__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp418, __Vtemp417, vlSelf->riscv_soc__DOT__sram0__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp419, __Vtemp418, vlSelf->riscv_soc__DOT__sram0__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp420, __Vtemp419, vlSelf->riscv_soc__DOT__sram0__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp421, __Vtemp420, vlSelf->riscv_soc__DOT__sram0__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp422, __Vtemp421, vlSelf->riscv_soc__DOT__sram0__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp423, __Vtemp422, vlSelf->riscv_soc__DOT__sram0__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp424, __Vtemp423, vlSelf->riscv_soc__DOT__sram0__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp425, __Vtemp424, vlSelf->riscv_soc__DOT__sram0__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp426, __Vtemp425, vlSelf->riscv_soc__DOT__sram0__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp427, __Vtemp426, vlSelf->riscv_soc__DOT__sram0__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp428, __Vtemp427, vlSelf->riscv_soc__DOT__sram0__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp429, __Vtemp428, vlSelf->riscv_soc__DOT__sram0__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp430, __Vtemp429, vlSelf->riscv_soc__DOT__sram0__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp431, __Vtemp430, vlSelf->riscv_soc__DOT__sram0__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp432, __Vtemp431, vlSelf->riscv_soc__DOT__sram0__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp433, __Vtemp432, vlSelf->riscv_soc__DOT__sram0__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp434, __Vtemp433, vlSelf->riscv_soc__DOT__sram0__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp435, __Vtemp434, vlSelf->riscv_soc__DOT__sram0__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp436, __Vtemp435, vlSelf->riscv_soc__DOT__sram0__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp437, __Vtemp436, vlSelf->riscv_soc__DOT__sram0__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp438, __Vtemp437, vlSelf->riscv_soc__DOT__sram0__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp439, __Vtemp438, vlSelf->riscv_soc__DOT__sram0__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp439[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp439[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp439[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp439[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp439[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp439[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp439[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp439[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp455[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U];
    __Vtemp455[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U];
    __Vtemp455[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U];
    __Vtemp455[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U];
    __Vtemp455[4U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U];
    __Vtemp455[5U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U];
    __Vtemp455[6U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U];
    __Vtemp455[7U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U];
    __Vtemp455[8U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U];
    __Vtemp455[9U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U];
    __Vtemp455[0xaU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U];
    __Vtemp455[0xbU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U];
    __Vtemp455[0xcU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U];
    __Vtemp455[0xdU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U];
    __Vtemp455[0xeU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U];
    __Vtemp455[0xfU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U];
    __Vtemp455[0x10U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U];
    __Vtemp455[0x11U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U];
    __Vtemp455[0x12U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U];
    __Vtemp455[0x13U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U];
    __Vtemp455[0x14U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U];
    __Vtemp455[0x15U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U];
    __Vtemp455[0x16U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U];
    __Vtemp455[0x17U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U];
    __Vtemp455[0x18U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U];
    __Vtemp455[0x19U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U];
    __Vtemp455[0x1aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U];
    __Vtemp455[0x1bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U];
    __Vtemp455[0x1cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U];
    __Vtemp455[0x1dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U];
    __Vtemp455[0x1eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U];
    __Vtemp455[0x1fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U];
    __Vtemp455[0x20U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U];
    __Vtemp455[0x21U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U];
    __Vtemp455[0x22U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U];
    __Vtemp455[0x23U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U];
    __Vtemp455[0x24U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U];
    __Vtemp455[0x25U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U];
    __Vtemp455[0x26U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U];
    __Vtemp455[0x27U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U];
    __Vtemp455[0x28U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U];
    __Vtemp455[0x29U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U];
    __Vtemp455[0x2aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U];
    __Vtemp455[0x2bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U];
    __Vtemp455[0x2cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U];
    __Vtemp455[0x2dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U];
    __Vtemp455[0x2eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U];
    __Vtemp455[0x2fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U];
    __Vtemp455[0x30U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U];
    __Vtemp455[0x31U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U];
    __Vtemp455[0x32U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U];
    __Vtemp455[0x33U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U];
    __Vtemp455[0x34U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U];
    __Vtemp455[0x35U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U];
    __Vtemp455[0x36U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U];
    __Vtemp455[0x37U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U];
    __Vtemp455[0x38U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U];
    __Vtemp455[0x39U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U];
    __Vtemp455[0x3aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U];
    __Vtemp455[0x3bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U];
    __Vtemp455[0x3cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U];
    __Vtemp455[0x3dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U];
    __Vtemp455[0x3eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U];
    __Vtemp455[0x3fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp456, __Vtemp455, vlSelf->riscv_soc__DOT__sram1__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp457, __Vtemp456, vlSelf->riscv_soc__DOT__sram1__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp458, __Vtemp457, vlSelf->riscv_soc__DOT__sram1__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp459, __Vtemp458, vlSelf->riscv_soc__DOT__sram1__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp460, __Vtemp459, vlSelf->riscv_soc__DOT__sram1__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp461, __Vtemp460, vlSelf->riscv_soc__DOT__sram1__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp462, __Vtemp461, vlSelf->riscv_soc__DOT__sram1__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp463, __Vtemp462, vlSelf->riscv_soc__DOT__sram1__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp464, __Vtemp463, vlSelf->riscv_soc__DOT__sram1__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp465, __Vtemp464, vlSelf->riscv_soc__DOT__sram1__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp466, __Vtemp465, vlSelf->riscv_soc__DOT__sram1__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp467, __Vtemp466, vlSelf->riscv_soc__DOT__sram1__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp468, __Vtemp467, vlSelf->riscv_soc__DOT__sram1__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp469, __Vtemp468, vlSelf->riscv_soc__DOT__sram1__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp470, __Vtemp469, vlSelf->riscv_soc__DOT__sram1__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp471, __Vtemp470, vlSelf->riscv_soc__DOT__sram1__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp472, __Vtemp471, vlSelf->riscv_soc__DOT__sram1__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp473, __Vtemp472, vlSelf->riscv_soc__DOT__sram1__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp474, __Vtemp473, vlSelf->riscv_soc__DOT__sram1__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp475, __Vtemp474, vlSelf->riscv_soc__DOT__sram1__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp476, __Vtemp475, vlSelf->riscv_soc__DOT__sram1__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp477, __Vtemp476, vlSelf->riscv_soc__DOT__sram1__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp478, __Vtemp477, vlSelf->riscv_soc__DOT__sram1__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp479, __Vtemp478, vlSelf->riscv_soc__DOT__sram1__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp480, __Vtemp479, vlSelf->riscv_soc__DOT__sram1__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp481, __Vtemp480, vlSelf->riscv_soc__DOT__sram1__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp482, __Vtemp481, vlSelf->riscv_soc__DOT__sram1__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp483, __Vtemp482, vlSelf->riscv_soc__DOT__sram1__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp484, __Vtemp483, vlSelf->riscv_soc__DOT__sram1__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp485, __Vtemp484, vlSelf->riscv_soc__DOT__sram1__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp486, __Vtemp485, vlSelf->riscv_soc__DOT__sram1__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp487, __Vtemp486, vlSelf->riscv_soc__DOT__sram1__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp488, __Vtemp487, vlSelf->riscv_soc__DOT__sram1__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp489, __Vtemp488, vlSelf->riscv_soc__DOT__sram1__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp490, __Vtemp489, vlSelf->riscv_soc__DOT__sram1__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp491, __Vtemp490, vlSelf->riscv_soc__DOT__sram1__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp492, __Vtemp491, vlSelf->riscv_soc__DOT__sram1__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp493, __Vtemp492, vlSelf->riscv_soc__DOT__sram1__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp494, __Vtemp493, vlSelf->riscv_soc__DOT__sram1__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp495, __Vtemp494, vlSelf->riscv_soc__DOT__sram1__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp496, __Vtemp495, vlSelf->riscv_soc__DOT__sram1__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp497, __Vtemp496, vlSelf->riscv_soc__DOT__sram1__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp498, __Vtemp497, vlSelf->riscv_soc__DOT__sram1__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp499, __Vtemp498, vlSelf->riscv_soc__DOT__sram1__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp500, __Vtemp499, vlSelf->riscv_soc__DOT__sram1__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp501, __Vtemp500, vlSelf->riscv_soc__DOT__sram1__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp502, __Vtemp501, vlSelf->riscv_soc__DOT__sram1__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp503, __Vtemp502, vlSelf->riscv_soc__DOT__sram1__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp503[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp503[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp503[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp503[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp503[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp503[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp503[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp503[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp519[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U];
    __Vtemp519[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U];
    __Vtemp519[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U];
    __Vtemp519[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U];
    __Vtemp519[4U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U];
    __Vtemp519[5U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U];
    __Vtemp519[6U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U];
    __Vtemp519[7U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U];
    __Vtemp519[8U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U];
    __Vtemp519[9U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U];
    __Vtemp519[0xaU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U];
    __Vtemp519[0xbU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U];
    __Vtemp519[0xcU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U];
    __Vtemp519[0xdU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U];
    __Vtemp519[0xeU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U];
    __Vtemp519[0xfU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U];
    __Vtemp519[0x10U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U];
    __Vtemp519[0x11U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U];
    __Vtemp519[0x12U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U];
    __Vtemp519[0x13U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U];
    __Vtemp519[0x14U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U];
    __Vtemp519[0x15U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U];
    __Vtemp519[0x16U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U];
    __Vtemp519[0x17U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U];
    __Vtemp519[0x18U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U];
    __Vtemp519[0x19U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U];
    __Vtemp519[0x1aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U];
    __Vtemp519[0x1bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U];
    __Vtemp519[0x1cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U];
    __Vtemp519[0x1dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U];
    __Vtemp519[0x1eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U];
    __Vtemp519[0x1fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U];
    __Vtemp519[0x20U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U];
    __Vtemp519[0x21U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U];
    __Vtemp519[0x22U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U];
    __Vtemp519[0x23U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U];
    __Vtemp519[0x24U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U];
    __Vtemp519[0x25U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U];
    __Vtemp519[0x26U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U];
    __Vtemp519[0x27U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U];
    __Vtemp519[0x28U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U];
    __Vtemp519[0x29U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U];
    __Vtemp519[0x2aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U];
    __Vtemp519[0x2bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U];
    __Vtemp519[0x2cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U];
    __Vtemp519[0x2dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U];
    __Vtemp519[0x2eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U];
    __Vtemp519[0x2fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U];
    __Vtemp519[0x30U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U];
    __Vtemp519[0x31U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U];
    __Vtemp519[0x32U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U];
    __Vtemp519[0x33U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U];
    __Vtemp519[0x34U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U];
    __Vtemp519[0x35U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U];
    __Vtemp519[0x36U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U];
    __Vtemp519[0x37U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U];
    __Vtemp519[0x38U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U];
    __Vtemp519[0x39U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U];
    __Vtemp519[0x3aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U];
    __Vtemp519[0x3bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U];
    __Vtemp519[0x3cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U];
    __Vtemp519[0x3dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U];
    __Vtemp519[0x3eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U];
    __Vtemp519[0x3fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp520, __Vtemp519, vlSelf->riscv_soc__DOT__sram2__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp521, __Vtemp520, vlSelf->riscv_soc__DOT__sram2__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp522, __Vtemp521, vlSelf->riscv_soc__DOT__sram2__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp523, __Vtemp522, vlSelf->riscv_soc__DOT__sram2__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp524, __Vtemp523, vlSelf->riscv_soc__DOT__sram2__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp525, __Vtemp524, vlSelf->riscv_soc__DOT__sram2__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp526, __Vtemp525, vlSelf->riscv_soc__DOT__sram2__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp527, __Vtemp526, vlSelf->riscv_soc__DOT__sram2__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp528, __Vtemp527, vlSelf->riscv_soc__DOT__sram2__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp529, __Vtemp528, vlSelf->riscv_soc__DOT__sram2__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp530, __Vtemp529, vlSelf->riscv_soc__DOT__sram2__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp531, __Vtemp530, vlSelf->riscv_soc__DOT__sram2__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp532, __Vtemp531, vlSelf->riscv_soc__DOT__sram2__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp533, __Vtemp532, vlSelf->riscv_soc__DOT__sram2__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp534, __Vtemp533, vlSelf->riscv_soc__DOT__sram2__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp535, __Vtemp534, vlSelf->riscv_soc__DOT__sram2__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp536, __Vtemp535, vlSelf->riscv_soc__DOT__sram2__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp537, __Vtemp536, vlSelf->riscv_soc__DOT__sram2__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp538, __Vtemp537, vlSelf->riscv_soc__DOT__sram2__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp539, __Vtemp538, vlSelf->riscv_soc__DOT__sram2__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp540, __Vtemp539, vlSelf->riscv_soc__DOT__sram2__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp541, __Vtemp540, vlSelf->riscv_soc__DOT__sram2__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp542, __Vtemp541, vlSelf->riscv_soc__DOT__sram2__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp543, __Vtemp542, vlSelf->riscv_soc__DOT__sram2__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp544, __Vtemp543, vlSelf->riscv_soc__DOT__sram2__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp545, __Vtemp544, vlSelf->riscv_soc__DOT__sram2__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp546, __Vtemp545, vlSelf->riscv_soc__DOT__sram2__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp547, __Vtemp546, vlSelf->riscv_soc__DOT__sram2__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp548, __Vtemp547, vlSelf->riscv_soc__DOT__sram2__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp549, __Vtemp548, vlSelf->riscv_soc__DOT__sram2__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp550, __Vtemp549, vlSelf->riscv_soc__DOT__sram2__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp551, __Vtemp550, vlSelf->riscv_soc__DOT__sram2__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp552, __Vtemp551, vlSelf->riscv_soc__DOT__sram2__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp553, __Vtemp552, vlSelf->riscv_soc__DOT__sram2__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp554, __Vtemp553, vlSelf->riscv_soc__DOT__sram2__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp555, __Vtemp554, vlSelf->riscv_soc__DOT__sram2__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp556, __Vtemp555, vlSelf->riscv_soc__DOT__sram2__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp557, __Vtemp556, vlSelf->riscv_soc__DOT__sram2__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp558, __Vtemp557, vlSelf->riscv_soc__DOT__sram2__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp559, __Vtemp558, vlSelf->riscv_soc__DOT__sram2__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp560, __Vtemp559, vlSelf->riscv_soc__DOT__sram2__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp561, __Vtemp560, vlSelf->riscv_soc__DOT__sram2__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp562, __Vtemp561, vlSelf->riscv_soc__DOT__sram2__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp563, __Vtemp562, vlSelf->riscv_soc__DOT__sram2__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp564, __Vtemp563, vlSelf->riscv_soc__DOT__sram2__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp565, __Vtemp564, vlSelf->riscv_soc__DOT__sram2__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp566, __Vtemp565, vlSelf->riscv_soc__DOT__sram2__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp567, __Vtemp566, vlSelf->riscv_soc__DOT__sram2__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp567[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp567[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp567[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp567[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp567[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp567[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp567[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp567[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp583[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U];
    __Vtemp583[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U];
    __Vtemp583[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U];
    __Vtemp583[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U];
    __Vtemp583[4U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U];
    __Vtemp583[5U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U];
    __Vtemp583[6U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U];
    __Vtemp583[7U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U];
    __Vtemp583[8U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U];
    __Vtemp583[9U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U];
    __Vtemp583[0xaU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U];
    __Vtemp583[0xbU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U];
    __Vtemp583[0xcU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U];
    __Vtemp583[0xdU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U];
    __Vtemp583[0xeU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U];
    __Vtemp583[0xfU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U];
    __Vtemp583[0x10U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U];
    __Vtemp583[0x11U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U];
    __Vtemp583[0x12U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U];
    __Vtemp583[0x13U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U];
    __Vtemp583[0x14U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U];
    __Vtemp583[0x15U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U];
    __Vtemp583[0x16U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U];
    __Vtemp583[0x17U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U];
    __Vtemp583[0x18U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U];
    __Vtemp583[0x19U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U];
    __Vtemp583[0x1aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U];
    __Vtemp583[0x1bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U];
    __Vtemp583[0x1cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U];
    __Vtemp583[0x1dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U];
    __Vtemp583[0x1eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U];
    __Vtemp583[0x1fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U];
    __Vtemp583[0x20U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U];
    __Vtemp583[0x21U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U];
    __Vtemp583[0x22U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U];
    __Vtemp583[0x23U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U];
    __Vtemp583[0x24U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U];
    __Vtemp583[0x25U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U];
    __Vtemp583[0x26U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U];
    __Vtemp583[0x27U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U];
    __Vtemp583[0x28U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U];
    __Vtemp583[0x29U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U];
    __Vtemp583[0x2aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U];
    __Vtemp583[0x2bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U];
    __Vtemp583[0x2cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U];
    __Vtemp583[0x2dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U];
    __Vtemp583[0x2eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U];
    __Vtemp583[0x2fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U];
    __Vtemp583[0x30U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U];
    __Vtemp583[0x31U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U];
    __Vtemp583[0x32U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U];
    __Vtemp583[0x33U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U];
    __Vtemp583[0x34U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U];
    __Vtemp583[0x35U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U];
    __Vtemp583[0x36U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U];
    __Vtemp583[0x37U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U];
    __Vtemp583[0x38U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U];
    __Vtemp583[0x39U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U];
    __Vtemp583[0x3aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U];
    __Vtemp583[0x3bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U];
    __Vtemp583[0x3cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U];
    __Vtemp583[0x3dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U];
    __Vtemp583[0x3eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U];
    __Vtemp583[0x3fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp584, __Vtemp583, vlSelf->riscv_soc__DOT__sram3__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp585, __Vtemp584, vlSelf->riscv_soc__DOT__sram3__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp586, __Vtemp585, vlSelf->riscv_soc__DOT__sram3__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp587, __Vtemp586, vlSelf->riscv_soc__DOT__sram3__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp588, __Vtemp587, vlSelf->riscv_soc__DOT__sram3__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp589, __Vtemp588, vlSelf->riscv_soc__DOT__sram3__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp590, __Vtemp589, vlSelf->riscv_soc__DOT__sram3__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp591, __Vtemp590, vlSelf->riscv_soc__DOT__sram3__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp592, __Vtemp591, vlSelf->riscv_soc__DOT__sram3__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp593, __Vtemp592, vlSelf->riscv_soc__DOT__sram3__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp594, __Vtemp593, vlSelf->riscv_soc__DOT__sram3__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp595, __Vtemp594, vlSelf->riscv_soc__DOT__sram3__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp596, __Vtemp595, vlSelf->riscv_soc__DOT__sram3__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp597, __Vtemp596, vlSelf->riscv_soc__DOT__sram3__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp598, __Vtemp597, vlSelf->riscv_soc__DOT__sram3__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp599, __Vtemp598, vlSelf->riscv_soc__DOT__sram3__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp600, __Vtemp599, vlSelf->riscv_soc__DOT__sram3__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp601, __Vtemp600, vlSelf->riscv_soc__DOT__sram3__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp602, __Vtemp601, vlSelf->riscv_soc__DOT__sram3__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp603, __Vtemp602, vlSelf->riscv_soc__DOT__sram3__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp604, __Vtemp603, vlSelf->riscv_soc__DOT__sram3__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp605, __Vtemp604, vlSelf->riscv_soc__DOT__sram3__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp606, __Vtemp605, vlSelf->riscv_soc__DOT__sram3__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp607, __Vtemp606, vlSelf->riscv_soc__DOT__sram3__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp608, __Vtemp607, vlSelf->riscv_soc__DOT__sram3__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp609, __Vtemp608, vlSelf->riscv_soc__DOT__sram3__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp610, __Vtemp609, vlSelf->riscv_soc__DOT__sram3__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp611, __Vtemp610, vlSelf->riscv_soc__DOT__sram3__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp612, __Vtemp611, vlSelf->riscv_soc__DOT__sram3__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp613, __Vtemp612, vlSelf->riscv_soc__DOT__sram3__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp614, __Vtemp613, vlSelf->riscv_soc__DOT__sram3__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp615, __Vtemp614, vlSelf->riscv_soc__DOT__sram3__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp616, __Vtemp615, vlSelf->riscv_soc__DOT__sram3__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp617, __Vtemp616, vlSelf->riscv_soc__DOT__sram3__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp618, __Vtemp617, vlSelf->riscv_soc__DOT__sram3__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp619, __Vtemp618, vlSelf->riscv_soc__DOT__sram3__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp620, __Vtemp619, vlSelf->riscv_soc__DOT__sram3__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp621, __Vtemp620, vlSelf->riscv_soc__DOT__sram3__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp622, __Vtemp621, vlSelf->riscv_soc__DOT__sram3__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp623, __Vtemp622, vlSelf->riscv_soc__DOT__sram3__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp624, __Vtemp623, vlSelf->riscv_soc__DOT__sram3__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp625, __Vtemp624, vlSelf->riscv_soc__DOT__sram3__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp626, __Vtemp625, vlSelf->riscv_soc__DOT__sram3__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp627, __Vtemp626, vlSelf->riscv_soc__DOT__sram3__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp628, __Vtemp627, vlSelf->riscv_soc__DOT__sram3__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp629, __Vtemp628, vlSelf->riscv_soc__DOT__sram3__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp630, __Vtemp629, vlSelf->riscv_soc__DOT__sram3__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp631, __Vtemp630, vlSelf->riscv_soc__DOT__sram3__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp631[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp631[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp631[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp631[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp631[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp631[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp631[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp631[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
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
    VL_EXTEND_WQ(128,54, __Vtemp634, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp635, (0x3fffffffffffffULL 
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
                                                                  __Vtemp634[1U]
                                                                   : 
                                                                  __Vtemp635[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? 
                                                                   __Vtemp634[0U]
                                                                    : 
                                                                   __Vtemp635[0U]))))));
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
    VL_EXTEND_WQ(128,54, __Vtemp638, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp639, (0x3fffffffffffffULL 
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
                                                                  __Vtemp638[1U]
                                                                   : 
                                                                  __Vtemp639[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? 
                                                                   __Vtemp638[0U]
                                                                    : 
                                                                   __Vtemp639[0U]))))));
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
    VL_EXTEND_WQ(127,64, __Vtemp647, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp648, __Vtemp647, (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    __Vtemp651[0U] = (IData)((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))));
    __Vtemp651[1U] = (IData)(((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))) 
                              >> 0x20U));
    __Vtemp651[2U] = (IData)((((QData)((IData)(__Vtemp648[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp648[0U]))));
    __Vtemp651[3U] = (IData)(((((QData)((IData)(__Vtemp648[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp648[0U]))) 
                              >> 0x20U));
    __Vtemp651[4U] = (IData)((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)));
    __Vtemp651[5U] = (IData)(((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)) 
                              >> 0x20U));
    __Vtemp651[6U] = (IData)((QData)((IData)((1U & 
                                              (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))));
    __Vtemp651[7U] = (IData)(((QData)((IData)((1U & 
                                               (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))) 
                              >> 0x20U));
    __Vtemp651[8U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                              ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp651[9U] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                               ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                              >> 0x20U));
    __Vtemp651[0xaU] = (IData)(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 5U)))
                                 ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                 : VL_SHIFTR_QQQ(64,64,64, 
                                                 ((1U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                   ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))));
    __Vtemp651[0xbU] = (IData)((((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                  ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                  : VL_SHIFTR_QQQ(64,64,64, 
                                                  ((1U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                    ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))) 
                                >> 0x20U));
    __Vtemp651[0xcU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp651[0xdU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                >> 0x20U));
    __Vtemp651[0xeU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp651[0xfU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)
            : (((QData)((IData)(__Vtemp651[(((IData)(0x3fU) 
                                             + (0x1c0U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   << 4U))) 
                                            >> 5U)])) 
                << 0x20U) | (QData)((IData)(__Vtemp651[
                                            (0xeU & 
                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 1U))]))));
    VL_EXTEND_WQ(65,64, __Vtemp654, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp657, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp661, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp665, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp672, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp676, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    if (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq) {
        __Vtemp678[0U] = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp678[1U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                  >> 0x20U));
    } else {
        __Vtemp678[0U] = __Vtemp676[0U];
        __Vtemp678[1U] = __Vtemp676[1U];
    }
    __Vtemp678[2U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp672[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                       << 1U) | ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                  ? 1U : __Vtemp676[2U]));
    __Vtemp678[3U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp672[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                       >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                      ? __Vtemp672[1U]
                                      : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                 >> 0x20U))) 
                                    << 1U));
    __Vtemp678[4U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp672[1U] : (IData)(
                                                    (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                     >> 0x20U))) 
                       >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                      ? __Vtemp672[2U]
                                      : 1U) << 1U));
    VL_EXTEND_WW(131,130, __Vtemp679, __Vtemp678);
    __Vtemp681[0U] = __Vtemp679[0U];
    __Vtemp681[1U] = __Vtemp679[1U];
    __Vtemp681[2U] = __Vtemp679[2U];
    __Vtemp681[3U] = __Vtemp679[3U];
    __Vtemp681[4U] = (((IData)((0x8000000000000000ULL 
                                | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 1U))) << 3U) 
                      | __Vtemp679[4U]);
    __Vtemp681[5U] = (((IData)((0x8000000000000000ULL 
                                | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 1U))) >> 0x1dU) 
                      | ((IData)(((0x8000000000000000ULL 
                                   | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 1U)) >> 0x20U)) 
                         << 3U));
    __Vtemp681[6U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                       << 3U) | ((IData)(((0x8000000000000000ULL 
                                           | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 1U)) 
                                          >> 0x20U)) 
                                 >> 0x1dU));
    __Vtemp681[7U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                       >> 0x1dU) | ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp681[8U] = (8U | (((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 0x20U)) >> 0x1dU) 
                            | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                 : __Vtemp665[0U]) 
                               << 4U)));
    __Vtemp681[9U] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                               ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                               : __Vtemp665[0U]) >> 0x1cU)) 
                      | ((8U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp665[0U]) 
                                >> 0x1cU)) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? (IData)(
                                                          (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))
                                                : __Vtemp665[1U]) 
                                              << 4U)));
    __Vtemp681[0xaU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U))
                                 : __Vtemp665[1U]) 
                               >> 0x1cU)) | ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? __Vtemp661[0U]
                                                : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                              << 5U) 
                                             | ((8U 
                                                 & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))
                                                      : 
                                                     __Vtemp665[1U]) 
                                                    >> 0x1cU)) 
                                                | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 1U
                                                     : 
                                                    __Vtemp665[2U]) 
                                                   << 4U))));
    __Vtemp681[0xbU] = ((7U & ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? __Vtemp661[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                >> 0x1bU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                               ? 1U
                                               : __Vtemp665[2U]) 
                                             >> 0x1cU))) 
                        | ((0x18U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                       ? __Vtemp661[0U]
                                       : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                     >> 0x1bU)) | (
                                                   ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 
                                                    __Vtemp661[1U]
                                                     : (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))) 
                                                   << 5U)));
    __Vtemp681[0xcU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? __Vtemp661[1U] : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                               >> 0x1bU)) | ((((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? __Vtemp657[0U]
                                                : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                              << 6U) 
                                             | ((0x18U 
                                                 & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 
                                                     __Vtemp661[1U]
                                                      : (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))) 
                                                    >> 0x1bU)) 
                                                | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 
                                                    __Vtemp661[2U]
                                                     : 1U) 
                                                   << 5U))));
    __Vtemp681[0xdU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? __Vtemp657[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                >> 0x1aU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                               ? __Vtemp661[2U]
                                               : 1U) 
                                             >> 0x1bU))) 
                        | ((0x38U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                       ? __Vtemp657[0U]
                                       : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                     >> 0x1aU)) | (
                                                   ((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? 
                                                    __Vtemp657[1U]
                                                     : (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))) 
                                                   << 6U)));
    __Vtemp681[0xeU] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                 ? __Vtemp657[1U] : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                               >> 0x1aU)) | ((((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                : __Vtemp654[0U]) 
                                              << 7U) 
                                             | ((0x38U 
                                                 & (((1U 
                                                      & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                      ? 
                                                     __Vtemp657[1U]
                                                      : (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))) 
                                                    >> 0x1aU)) 
                                                | (((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? 
                                                    __Vtemp657[2U]
                                                     : 1U) 
                                                   << 6U))));
    __Vtemp681[0xfU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp654[0U]) 
                                >> 0x19U) | (((1U & 
                                               riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                               ? __Vtemp657[2U]
                                               : 1U) 
                                             >> 0x1aU))) 
                        | ((0x78U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                       ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                       : __Vtemp654[0U]) 
                                     >> 0x19U)) | (
                                                   ((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp654[1U]) 
                                                   << 7U)));
    __Vtemp681[0x10U] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))
                                  : __Vtemp654[1U]) 
                                >> 0x19U)) | ((0x78U 
                                               & (((1U 
                                                    & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                    ? (IData)(
                                                              (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp654[1U]) 
                                                  >> 0x19U)) 
                                              | (((1U 
                                                   & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                   ? 1U
                                                   : 
                                                  __Vtemp654[2U]) 
                                                 << 7U)));
    if ((0x207U >= (0x3ffU & ((IData)(0x41U) * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))) {
        __Vtemp685[0U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp681[((IData)(1U) 
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
                          | (__Vtemp681[(0x1fU & (((IData)(0x41U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U))) 
                                                  >> 5U))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        __Vtemp685[1U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp681[((IData)(2U) 
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
                          | (__Vtemp681[((IData)(1U) 
                                         + (0x1fU & 
                                            (((IData)(0x41U) 
                                              * (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        __Vtemp685[2U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp681[((IData)(3U) 
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
                          | (__Vtemp681[((IData)(2U) 
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
        __Vtemp685[0U] = 0U;
        __Vtemp685[1U] = 0U;
        __Vtemp685[2U] = 0U;
    }
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] 
            = __Vtemp685[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] 
            = __Vtemp685[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
            = (1U & __Vtemp685[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] = 0U;
    }
    __Vtemp704[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U];
    __Vtemp704[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U];
    __Vtemp704[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U];
    __Vtemp704[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U];
    __Vtemp704[4U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U];
    __Vtemp704[5U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U];
    __Vtemp704[6U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U];
    __Vtemp704[7U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U];
    __Vtemp704[8U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U];
    __Vtemp704[9U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U];
    __Vtemp704[0xaU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U];
    __Vtemp704[0xbU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U];
    __Vtemp704[0xcU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U];
    __Vtemp704[0xdU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U];
    __Vtemp704[0xeU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U];
    __Vtemp704[0xfU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U];
    __Vtemp704[0x10U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U];
    __Vtemp704[0x11U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U];
    __Vtemp704[0x12U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U];
    __Vtemp704[0x13U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U];
    __Vtemp704[0x14U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U];
    __Vtemp704[0x15U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U];
    __Vtemp704[0x16U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U];
    __Vtemp704[0x17U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U];
    __Vtemp704[0x18U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U];
    __Vtemp704[0x19U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U];
    __Vtemp704[0x1aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U];
    __Vtemp704[0x1bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U];
    __Vtemp704[0x1cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U];
    __Vtemp704[0x1dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U];
    __Vtemp704[0x1eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U];
    __Vtemp704[0x1fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U];
    __Vtemp704[0x20U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U];
    __Vtemp704[0x21U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U];
    __Vtemp704[0x22U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U];
    __Vtemp704[0x23U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U];
    __Vtemp704[0x24U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U];
    __Vtemp704[0x25U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U];
    __Vtemp704[0x26U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U];
    __Vtemp704[0x27U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U];
    __Vtemp704[0x28U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U];
    __Vtemp704[0x29U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U];
    __Vtemp704[0x2aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U];
    __Vtemp704[0x2bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U];
    __Vtemp704[0x2cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U];
    __Vtemp704[0x2dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U];
    __Vtemp704[0x2eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U];
    __Vtemp704[0x2fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U];
    __Vtemp704[0x30U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U];
    __Vtemp704[0x31U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U];
    __Vtemp704[0x32U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U];
    __Vtemp704[0x33U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U];
    __Vtemp704[0x34U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U];
    __Vtemp704[0x35U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U];
    __Vtemp704[0x36U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U];
    __Vtemp704[0x37U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U];
    __Vtemp704[0x38U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U];
    __Vtemp704[0x39U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U];
    __Vtemp704[0x3aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U];
    __Vtemp704[0x3bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U];
    __Vtemp704[0x3cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U];
    __Vtemp704[0x3dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U];
    __Vtemp704[0x3eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U];
    __Vtemp704[0x3fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp705, __Vtemp704, vlSelf->riscv_soc__DOT__sram4__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp706, __Vtemp705, vlSelf->riscv_soc__DOT__sram4__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp707, __Vtemp706, vlSelf->riscv_soc__DOT__sram4__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp708, __Vtemp707, vlSelf->riscv_soc__DOT__sram4__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp709, __Vtemp708, vlSelf->riscv_soc__DOT__sram4__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp710, __Vtemp709, vlSelf->riscv_soc__DOT__sram4__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp711, __Vtemp710, vlSelf->riscv_soc__DOT__sram4__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp712, __Vtemp711, vlSelf->riscv_soc__DOT__sram4__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp713, __Vtemp712, vlSelf->riscv_soc__DOT__sram4__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp714, __Vtemp713, vlSelf->riscv_soc__DOT__sram4__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp715, __Vtemp714, vlSelf->riscv_soc__DOT__sram4__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp716, __Vtemp715, vlSelf->riscv_soc__DOT__sram4__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp717, __Vtemp716, vlSelf->riscv_soc__DOT__sram4__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp718, __Vtemp717, vlSelf->riscv_soc__DOT__sram4__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp719, __Vtemp718, vlSelf->riscv_soc__DOT__sram4__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp720, __Vtemp719, vlSelf->riscv_soc__DOT__sram4__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp721, __Vtemp720, vlSelf->riscv_soc__DOT__sram4__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp722, __Vtemp721, vlSelf->riscv_soc__DOT__sram4__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp723, __Vtemp722, vlSelf->riscv_soc__DOT__sram4__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp724, __Vtemp723, vlSelf->riscv_soc__DOT__sram4__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp725, __Vtemp724, vlSelf->riscv_soc__DOT__sram4__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp726, __Vtemp725, vlSelf->riscv_soc__DOT__sram4__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp727, __Vtemp726, vlSelf->riscv_soc__DOT__sram4__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp728, __Vtemp727, vlSelf->riscv_soc__DOT__sram4__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp729, __Vtemp728, vlSelf->riscv_soc__DOT__sram4__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp730, __Vtemp729, vlSelf->riscv_soc__DOT__sram4__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp731, __Vtemp730, vlSelf->riscv_soc__DOT__sram4__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp732, __Vtemp731, vlSelf->riscv_soc__DOT__sram4__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp733, __Vtemp732, vlSelf->riscv_soc__DOT__sram4__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp734, __Vtemp733, vlSelf->riscv_soc__DOT__sram4__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp735, __Vtemp734, vlSelf->riscv_soc__DOT__sram4__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp736, __Vtemp735, vlSelf->riscv_soc__DOT__sram4__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp737, __Vtemp736, vlSelf->riscv_soc__DOT__sram4__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp738, __Vtemp737, vlSelf->riscv_soc__DOT__sram4__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp739, __Vtemp738, vlSelf->riscv_soc__DOT__sram4__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp740, __Vtemp739, vlSelf->riscv_soc__DOT__sram4__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp741, __Vtemp740, vlSelf->riscv_soc__DOT__sram4__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp742, __Vtemp741, vlSelf->riscv_soc__DOT__sram4__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp743, __Vtemp742, vlSelf->riscv_soc__DOT__sram4__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp744, __Vtemp743, vlSelf->riscv_soc__DOT__sram4__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp745, __Vtemp744, vlSelf->riscv_soc__DOT__sram4__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp746, __Vtemp745, vlSelf->riscv_soc__DOT__sram4__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp747, __Vtemp746, vlSelf->riscv_soc__DOT__sram4__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp748, __Vtemp747, vlSelf->riscv_soc__DOT__sram4__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp749, __Vtemp748, vlSelf->riscv_soc__DOT__sram4__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp750, __Vtemp749, vlSelf->riscv_soc__DOT__sram4__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp751, __Vtemp750, vlSelf->riscv_soc__DOT__sram4__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp752, __Vtemp751, vlSelf->riscv_soc__DOT__sram4__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp752[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp752[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp752[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp752[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp752[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp752[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp752[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp752[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp768[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U];
    __Vtemp768[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U];
    __Vtemp768[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U];
    __Vtemp768[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U];
    __Vtemp768[4U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U];
    __Vtemp768[5U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U];
    __Vtemp768[6U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U];
    __Vtemp768[7U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U];
    __Vtemp768[8U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U];
    __Vtemp768[9U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U];
    __Vtemp768[0xaU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U];
    __Vtemp768[0xbU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U];
    __Vtemp768[0xcU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U];
    __Vtemp768[0xdU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U];
    __Vtemp768[0xeU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U];
    __Vtemp768[0xfU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U];
    __Vtemp768[0x10U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U];
    __Vtemp768[0x11U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U];
    __Vtemp768[0x12U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U];
    __Vtemp768[0x13U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U];
    __Vtemp768[0x14U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U];
    __Vtemp768[0x15U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U];
    __Vtemp768[0x16U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U];
    __Vtemp768[0x17U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U];
    __Vtemp768[0x18U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U];
    __Vtemp768[0x19U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U];
    __Vtemp768[0x1aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U];
    __Vtemp768[0x1bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U];
    __Vtemp768[0x1cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U];
    __Vtemp768[0x1dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U];
    __Vtemp768[0x1eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U];
    __Vtemp768[0x1fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U];
    __Vtemp768[0x20U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U];
    __Vtemp768[0x21U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U];
    __Vtemp768[0x22U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U];
    __Vtemp768[0x23U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U];
    __Vtemp768[0x24U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U];
    __Vtemp768[0x25U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U];
    __Vtemp768[0x26U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U];
    __Vtemp768[0x27U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U];
    __Vtemp768[0x28U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U];
    __Vtemp768[0x29U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U];
    __Vtemp768[0x2aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U];
    __Vtemp768[0x2bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U];
    __Vtemp768[0x2cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U];
    __Vtemp768[0x2dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U];
    __Vtemp768[0x2eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U];
    __Vtemp768[0x2fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U];
    __Vtemp768[0x30U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U];
    __Vtemp768[0x31U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U];
    __Vtemp768[0x32U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U];
    __Vtemp768[0x33U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U];
    __Vtemp768[0x34U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U];
    __Vtemp768[0x35U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U];
    __Vtemp768[0x36U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U];
    __Vtemp768[0x37U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U];
    __Vtemp768[0x38U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U];
    __Vtemp768[0x39U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U];
    __Vtemp768[0x3aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U];
    __Vtemp768[0x3bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U];
    __Vtemp768[0x3cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U];
    __Vtemp768[0x3dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U];
    __Vtemp768[0x3eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U];
    __Vtemp768[0x3fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp769, __Vtemp768, vlSelf->riscv_soc__DOT__sram5__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp770, __Vtemp769, vlSelf->riscv_soc__DOT__sram5__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp771, __Vtemp770, vlSelf->riscv_soc__DOT__sram5__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp772, __Vtemp771, vlSelf->riscv_soc__DOT__sram5__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp773, __Vtemp772, vlSelf->riscv_soc__DOT__sram5__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp774, __Vtemp773, vlSelf->riscv_soc__DOT__sram5__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp775, __Vtemp774, vlSelf->riscv_soc__DOT__sram5__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp776, __Vtemp775, vlSelf->riscv_soc__DOT__sram5__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp777, __Vtemp776, vlSelf->riscv_soc__DOT__sram5__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp778, __Vtemp777, vlSelf->riscv_soc__DOT__sram5__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp779, __Vtemp778, vlSelf->riscv_soc__DOT__sram5__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp780, __Vtemp779, vlSelf->riscv_soc__DOT__sram5__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp781, __Vtemp780, vlSelf->riscv_soc__DOT__sram5__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp782, __Vtemp781, vlSelf->riscv_soc__DOT__sram5__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp783, __Vtemp782, vlSelf->riscv_soc__DOT__sram5__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp784, __Vtemp783, vlSelf->riscv_soc__DOT__sram5__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp785, __Vtemp784, vlSelf->riscv_soc__DOT__sram5__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp786, __Vtemp785, vlSelf->riscv_soc__DOT__sram5__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp787, __Vtemp786, vlSelf->riscv_soc__DOT__sram5__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp788, __Vtemp787, vlSelf->riscv_soc__DOT__sram5__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp789, __Vtemp788, vlSelf->riscv_soc__DOT__sram5__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp790, __Vtemp789, vlSelf->riscv_soc__DOT__sram5__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp791, __Vtemp790, vlSelf->riscv_soc__DOT__sram5__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp792, __Vtemp791, vlSelf->riscv_soc__DOT__sram5__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp793, __Vtemp792, vlSelf->riscv_soc__DOT__sram5__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp794, __Vtemp793, vlSelf->riscv_soc__DOT__sram5__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp795, __Vtemp794, vlSelf->riscv_soc__DOT__sram5__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp796, __Vtemp795, vlSelf->riscv_soc__DOT__sram5__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp797, __Vtemp796, vlSelf->riscv_soc__DOT__sram5__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp798, __Vtemp797, vlSelf->riscv_soc__DOT__sram5__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp799, __Vtemp798, vlSelf->riscv_soc__DOT__sram5__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp800, __Vtemp799, vlSelf->riscv_soc__DOT__sram5__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp801, __Vtemp800, vlSelf->riscv_soc__DOT__sram5__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp802, __Vtemp801, vlSelf->riscv_soc__DOT__sram5__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp803, __Vtemp802, vlSelf->riscv_soc__DOT__sram5__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp804, __Vtemp803, vlSelf->riscv_soc__DOT__sram5__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp805, __Vtemp804, vlSelf->riscv_soc__DOT__sram5__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp806, __Vtemp805, vlSelf->riscv_soc__DOT__sram5__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp807, __Vtemp806, vlSelf->riscv_soc__DOT__sram5__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp808, __Vtemp807, vlSelf->riscv_soc__DOT__sram5__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp809, __Vtemp808, vlSelf->riscv_soc__DOT__sram5__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp810, __Vtemp809, vlSelf->riscv_soc__DOT__sram5__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp811, __Vtemp810, vlSelf->riscv_soc__DOT__sram5__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp812, __Vtemp811, vlSelf->riscv_soc__DOT__sram5__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp813, __Vtemp812, vlSelf->riscv_soc__DOT__sram5__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp814, __Vtemp813, vlSelf->riscv_soc__DOT__sram5__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp815, __Vtemp814, vlSelf->riscv_soc__DOT__sram5__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp816, __Vtemp815, vlSelf->riscv_soc__DOT__sram5__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp816[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp816[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp816[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp816[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp816[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp816[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp816[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp816[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp832[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U];
    __Vtemp832[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U];
    __Vtemp832[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U];
    __Vtemp832[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U];
    __Vtemp832[4U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U];
    __Vtemp832[5U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U];
    __Vtemp832[6U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U];
    __Vtemp832[7U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U];
    __Vtemp832[8U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U];
    __Vtemp832[9U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U];
    __Vtemp832[0xaU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U];
    __Vtemp832[0xbU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U];
    __Vtemp832[0xcU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U];
    __Vtemp832[0xdU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U];
    __Vtemp832[0xeU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U];
    __Vtemp832[0xfU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U];
    __Vtemp832[0x10U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U];
    __Vtemp832[0x11U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U];
    __Vtemp832[0x12U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U];
    __Vtemp832[0x13U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U];
    __Vtemp832[0x14U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U];
    __Vtemp832[0x15U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U];
    __Vtemp832[0x16U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U];
    __Vtemp832[0x17U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U];
    __Vtemp832[0x18U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U];
    __Vtemp832[0x19U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U];
    __Vtemp832[0x1aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U];
    __Vtemp832[0x1bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U];
    __Vtemp832[0x1cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U];
    __Vtemp832[0x1dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U];
    __Vtemp832[0x1eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U];
    __Vtemp832[0x1fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U];
    __Vtemp832[0x20U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U];
    __Vtemp832[0x21U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U];
    __Vtemp832[0x22U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U];
    __Vtemp832[0x23U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U];
    __Vtemp832[0x24U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U];
    __Vtemp832[0x25U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U];
    __Vtemp832[0x26U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U];
    __Vtemp832[0x27U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U];
    __Vtemp832[0x28U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U];
    __Vtemp832[0x29U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U];
    __Vtemp832[0x2aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U];
    __Vtemp832[0x2bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U];
    __Vtemp832[0x2cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U];
    __Vtemp832[0x2dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U];
    __Vtemp832[0x2eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U];
    __Vtemp832[0x2fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U];
    __Vtemp832[0x30U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U];
    __Vtemp832[0x31U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U];
    __Vtemp832[0x32U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U];
    __Vtemp832[0x33U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U];
    __Vtemp832[0x34U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U];
    __Vtemp832[0x35U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U];
    __Vtemp832[0x36U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U];
    __Vtemp832[0x37U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U];
    __Vtemp832[0x38U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U];
    __Vtemp832[0x39U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U];
    __Vtemp832[0x3aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U];
    __Vtemp832[0x3bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U];
    __Vtemp832[0x3cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U];
    __Vtemp832[0x3dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U];
    __Vtemp832[0x3eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U];
    __Vtemp832[0x3fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp833, __Vtemp832, vlSelf->riscv_soc__DOT__sram6__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp834, __Vtemp833, vlSelf->riscv_soc__DOT__sram6__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp835, __Vtemp834, vlSelf->riscv_soc__DOT__sram6__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp836, __Vtemp835, vlSelf->riscv_soc__DOT__sram6__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp837, __Vtemp836, vlSelf->riscv_soc__DOT__sram6__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp838, __Vtemp837, vlSelf->riscv_soc__DOT__sram6__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp839, __Vtemp838, vlSelf->riscv_soc__DOT__sram6__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp840, __Vtemp839, vlSelf->riscv_soc__DOT__sram6__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp841, __Vtemp840, vlSelf->riscv_soc__DOT__sram6__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp842, __Vtemp841, vlSelf->riscv_soc__DOT__sram6__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp843, __Vtemp842, vlSelf->riscv_soc__DOT__sram6__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp844, __Vtemp843, vlSelf->riscv_soc__DOT__sram6__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp845, __Vtemp844, vlSelf->riscv_soc__DOT__sram6__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp846, __Vtemp845, vlSelf->riscv_soc__DOT__sram6__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp847, __Vtemp846, vlSelf->riscv_soc__DOT__sram6__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp848, __Vtemp847, vlSelf->riscv_soc__DOT__sram6__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp849, __Vtemp848, vlSelf->riscv_soc__DOT__sram6__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp850, __Vtemp849, vlSelf->riscv_soc__DOT__sram6__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp851, __Vtemp850, vlSelf->riscv_soc__DOT__sram6__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp852, __Vtemp851, vlSelf->riscv_soc__DOT__sram6__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp853, __Vtemp852, vlSelf->riscv_soc__DOT__sram6__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp854, __Vtemp853, vlSelf->riscv_soc__DOT__sram6__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp855, __Vtemp854, vlSelf->riscv_soc__DOT__sram6__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp856, __Vtemp855, vlSelf->riscv_soc__DOT__sram6__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp857, __Vtemp856, vlSelf->riscv_soc__DOT__sram6__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp858, __Vtemp857, vlSelf->riscv_soc__DOT__sram6__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp859, __Vtemp858, vlSelf->riscv_soc__DOT__sram6__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp860, __Vtemp859, vlSelf->riscv_soc__DOT__sram6__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp861, __Vtemp860, vlSelf->riscv_soc__DOT__sram6__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp862, __Vtemp861, vlSelf->riscv_soc__DOT__sram6__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp863, __Vtemp862, vlSelf->riscv_soc__DOT__sram6__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp864, __Vtemp863, vlSelf->riscv_soc__DOT__sram6__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp865, __Vtemp864, vlSelf->riscv_soc__DOT__sram6__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp866, __Vtemp865, vlSelf->riscv_soc__DOT__sram6__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp867, __Vtemp866, vlSelf->riscv_soc__DOT__sram6__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp868, __Vtemp867, vlSelf->riscv_soc__DOT__sram6__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp869, __Vtemp868, vlSelf->riscv_soc__DOT__sram6__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp870, __Vtemp869, vlSelf->riscv_soc__DOT__sram6__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp871, __Vtemp870, vlSelf->riscv_soc__DOT__sram6__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp872, __Vtemp871, vlSelf->riscv_soc__DOT__sram6__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp873, __Vtemp872, vlSelf->riscv_soc__DOT__sram6__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp874, __Vtemp873, vlSelf->riscv_soc__DOT__sram6__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp875, __Vtemp874, vlSelf->riscv_soc__DOT__sram6__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp876, __Vtemp875, vlSelf->riscv_soc__DOT__sram6__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp877, __Vtemp876, vlSelf->riscv_soc__DOT__sram6__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp878, __Vtemp877, vlSelf->riscv_soc__DOT__sram6__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp879, __Vtemp878, vlSelf->riscv_soc__DOT__sram6__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp880, __Vtemp879, vlSelf->riscv_soc__DOT__sram6__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp880[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp880[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp880[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp880[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp880[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp880[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp880[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp880[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp896[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U];
    __Vtemp896[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U];
    __Vtemp896[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U];
    __Vtemp896[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U];
    __Vtemp896[4U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U];
    __Vtemp896[5U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U];
    __Vtemp896[6U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U];
    __Vtemp896[7U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U];
    __Vtemp896[8U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U];
    __Vtemp896[9U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U];
    __Vtemp896[0xaU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U];
    __Vtemp896[0xbU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U];
    __Vtemp896[0xcU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U];
    __Vtemp896[0xdU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U];
    __Vtemp896[0xeU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U];
    __Vtemp896[0xfU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U];
    __Vtemp896[0x10U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U];
    __Vtemp896[0x11U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U];
    __Vtemp896[0x12U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U];
    __Vtemp896[0x13U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U];
    __Vtemp896[0x14U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U];
    __Vtemp896[0x15U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U];
    __Vtemp896[0x16U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U];
    __Vtemp896[0x17U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U];
    __Vtemp896[0x18U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U];
    __Vtemp896[0x19U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U];
    __Vtemp896[0x1aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U];
    __Vtemp896[0x1bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U];
    __Vtemp896[0x1cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U];
    __Vtemp896[0x1dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U];
    __Vtemp896[0x1eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U];
    __Vtemp896[0x1fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U];
    __Vtemp896[0x20U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U];
    __Vtemp896[0x21U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U];
    __Vtemp896[0x22U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U];
    __Vtemp896[0x23U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U];
    __Vtemp896[0x24U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U];
    __Vtemp896[0x25U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U];
    __Vtemp896[0x26U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U];
    __Vtemp896[0x27U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U];
    __Vtemp896[0x28U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U];
    __Vtemp896[0x29U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U];
    __Vtemp896[0x2aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U];
    __Vtemp896[0x2bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U];
    __Vtemp896[0x2cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U];
    __Vtemp896[0x2dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U];
    __Vtemp896[0x2eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U];
    __Vtemp896[0x2fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U];
    __Vtemp896[0x30U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U];
    __Vtemp896[0x31U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U];
    __Vtemp896[0x32U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U];
    __Vtemp896[0x33U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U];
    __Vtemp896[0x34U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U];
    __Vtemp896[0x35U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U];
    __Vtemp896[0x36U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U];
    __Vtemp896[0x37U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U];
    __Vtemp896[0x38U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U];
    __Vtemp896[0x39U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U];
    __Vtemp896[0x3aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U];
    __Vtemp896[0x3bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U];
    __Vtemp896[0x3cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U];
    __Vtemp896[0x3dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U];
    __Vtemp896[0x3eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U];
    __Vtemp896[0x3fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp897, __Vtemp896, vlSelf->riscv_soc__DOT__sram7__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp898, __Vtemp897, vlSelf->riscv_soc__DOT__sram7__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp899, __Vtemp898, vlSelf->riscv_soc__DOT__sram7__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp900, __Vtemp899, vlSelf->riscv_soc__DOT__sram7__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp901, __Vtemp900, vlSelf->riscv_soc__DOT__sram7__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp902, __Vtemp901, vlSelf->riscv_soc__DOT__sram7__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp903, __Vtemp902, vlSelf->riscv_soc__DOT__sram7__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp904, __Vtemp903, vlSelf->riscv_soc__DOT__sram7__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp905, __Vtemp904, vlSelf->riscv_soc__DOT__sram7__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp906, __Vtemp905, vlSelf->riscv_soc__DOT__sram7__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp907, __Vtemp906, vlSelf->riscv_soc__DOT__sram7__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp908, __Vtemp907, vlSelf->riscv_soc__DOT__sram7__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp909, __Vtemp908, vlSelf->riscv_soc__DOT__sram7__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp910, __Vtemp909, vlSelf->riscv_soc__DOT__sram7__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp911, __Vtemp910, vlSelf->riscv_soc__DOT__sram7__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp912, __Vtemp911, vlSelf->riscv_soc__DOT__sram7__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp913, __Vtemp912, vlSelf->riscv_soc__DOT__sram7__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp914, __Vtemp913, vlSelf->riscv_soc__DOT__sram7__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp915, __Vtemp914, vlSelf->riscv_soc__DOT__sram7__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp916, __Vtemp915, vlSelf->riscv_soc__DOT__sram7__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp917, __Vtemp916, vlSelf->riscv_soc__DOT__sram7__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp918, __Vtemp917, vlSelf->riscv_soc__DOT__sram7__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp919, __Vtemp918, vlSelf->riscv_soc__DOT__sram7__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp920, __Vtemp919, vlSelf->riscv_soc__DOT__sram7__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp921, __Vtemp920, vlSelf->riscv_soc__DOT__sram7__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp922, __Vtemp921, vlSelf->riscv_soc__DOT__sram7__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp923, __Vtemp922, vlSelf->riscv_soc__DOT__sram7__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp924, __Vtemp923, vlSelf->riscv_soc__DOT__sram7__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp925, __Vtemp924, vlSelf->riscv_soc__DOT__sram7__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp926, __Vtemp925, vlSelf->riscv_soc__DOT__sram7__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp927, __Vtemp926, vlSelf->riscv_soc__DOT__sram7__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp928, __Vtemp927, vlSelf->riscv_soc__DOT__sram7__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp929, __Vtemp928, vlSelf->riscv_soc__DOT__sram7__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp930, __Vtemp929, vlSelf->riscv_soc__DOT__sram7__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp931, __Vtemp930, vlSelf->riscv_soc__DOT__sram7__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp932, __Vtemp931, vlSelf->riscv_soc__DOT__sram7__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp933, __Vtemp932, vlSelf->riscv_soc__DOT__sram7__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp934, __Vtemp933, vlSelf->riscv_soc__DOT__sram7__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp935, __Vtemp934, vlSelf->riscv_soc__DOT__sram7__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp936, __Vtemp935, vlSelf->riscv_soc__DOT__sram7__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp937, __Vtemp936, vlSelf->riscv_soc__DOT__sram7__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp938, __Vtemp937, vlSelf->riscv_soc__DOT__sram7__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp939, __Vtemp938, vlSelf->riscv_soc__DOT__sram7__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp940, __Vtemp939, vlSelf->riscv_soc__DOT__sram7__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp941, __Vtemp940, vlSelf->riscv_soc__DOT__sram7__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp942, __Vtemp941, vlSelf->riscv_soc__DOT__sram7__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp943, __Vtemp942, vlSelf->riscv_soc__DOT__sram7__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp944, __Vtemp943, vlSelf->riscv_soc__DOT__sram7__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp944[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp944[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp944[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp944[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp944[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp944[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp944[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp944[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
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
    __Vtemp948[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
    __Vtemp948[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                              >> 0x20U));
    __Vtemp948[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
    __Vtemp948[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                              >> 0x20U));
    __Vtemp948[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
    __Vtemp948[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                              >> 0x20U));
    __Vtemp948[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
    __Vtemp948[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
           & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]) 
                & ((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U]))) 
                   != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                        ? (((QData)((IData)(__Vtemp948[
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
                                                          __Vtemp948[
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
                              | ((QData)((IData)(__Vtemp948[
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
    __Vtemp951[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr);
    __Vtemp951[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                              >> 0x20U));
    __Vtemp951[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    __Vtemp951[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                              >> 0x20U));
    __Vtemp951[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    __Vtemp951[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                              >> 0x20U));
    __Vtemp951[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr);
    __Vtemp951[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr 
        = (((QData)((IData)(__Vtemp951[(((IData)(0x3fU) 
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
                                                                   __Vtemp951[
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
              | ((QData)((IData)(__Vtemp951[(6U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
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
}

void Vriscv_soc___024root___sequent__TOP__3(Vriscv_soc___024root* vlSelf);

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv_soc___024root___sequent__TOP__3(vlSelf);
        Vriscv_soc___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vriscv_soc___024root___change_request_1(Vriscv_soc___024root* vlSelf);

VL_INLINE_OPT QData Vriscv_soc___024root___change_request(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___change_request\n"); );
    // Body
    return (Vriscv_soc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscv_soc___024root___change_request_1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
