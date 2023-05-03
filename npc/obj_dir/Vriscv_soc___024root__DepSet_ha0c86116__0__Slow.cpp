// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___eval_triggers__stl(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_ATTR_COLD void Vriscv_soc___024root___stl_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h1f0000fe__0;
    VlWide<4>/*127:0*/ __Vtemp_h99bf1d57__0;
    VlWide<3>/*95:0*/ __Vtemp_h7137a906__0;
    VlWide<64>/*2047:0*/ __Vtemp_hb695e77c__0;
    VlWide<68>/*2175:0*/ __Vtemp_hd59c5b9e__0;
    VlWide<72>/*2303:0*/ __Vtemp_hb745194b__0;
    VlWide<76>/*2431:0*/ __Vtemp_h8b2f5410__0;
    VlWide<80>/*2559:0*/ __Vtemp_h92ba4d22__0;
    VlWide<84>/*2687:0*/ __Vtemp_hc8fe18ee__0;
    VlWide<88>/*2815:0*/ __Vtemp_hc01b7c43__0;
    VlWide<92>/*2943:0*/ __Vtemp_hda9e4d73__0;
    VlWide<96>/*3071:0*/ __Vtemp_h97dc6d38__0;
    VlWide<100>/*3199:0*/ __Vtemp_h207c9b84__0;
    VlWide<104>/*3327:0*/ __Vtemp_hfc2c9564__0;
    VlWide<108>/*3455:0*/ __Vtemp_h3dde2c75__0;
    VlWide<112>/*3583:0*/ __Vtemp_h1382fd96__0;
    VlWide<116>/*3711:0*/ __Vtemp_h05bffbc0__0;
    VlWide<120>/*3839:0*/ __Vtemp_hde166281__0;
    VlWide<124>/*3967:0*/ __Vtemp_h4298c7f5__0;
    VlWide<128>/*4095:0*/ __Vtemp_h754cb906__0;
    VlWide<132>/*4223:0*/ __Vtemp_h6ff622eb__0;
    VlWide<136>/*4351:0*/ __Vtemp_h65afb051__0;
    VlWide<140>/*4479:0*/ __Vtemp_h20c5cc9e__0;
    VlWide<144>/*4607:0*/ __Vtemp_h826877a9__0;
    VlWide<148>/*4735:0*/ __Vtemp_hba3fc1ca__0;
    VlWide<152>/*4863:0*/ __Vtemp_h35302663__0;
    VlWide<156>/*4991:0*/ __Vtemp_h0efa846c__0;
    VlWide<160>/*5119:0*/ __Vtemp_h7b818fbf__0;
    VlWide<164>/*5247:0*/ __Vtemp_h98c4287b__0;
    VlWide<168>/*5375:0*/ __Vtemp_h29549d14__0;
    VlWide<172>/*5503:0*/ __Vtemp_hd45d034e__0;
    VlWide<176>/*5631:0*/ __Vtemp_h4fc1f600__0;
    VlWide<180>/*5759:0*/ __Vtemp_hdd388217__0;
    VlWide<184>/*5887:0*/ __Vtemp_hb21eb058__0;
    VlWide<188>/*6015:0*/ __Vtemp_hd6cf3314__0;
    VlWide<192>/*6143:0*/ __Vtemp_h264b3bf1__0;
    VlWide<196>/*6271:0*/ __Vtemp_h7ed60991__0;
    VlWide<200>/*6399:0*/ __Vtemp_hf733e858__0;
    VlWide<204>/*6527:0*/ __Vtemp_h2c13b1f4__0;
    VlWide<208>/*6655:0*/ __Vtemp_ha28efad3__0;
    VlWide<212>/*6783:0*/ __Vtemp_h1950c338__0;
    VlWide<216>/*6911:0*/ __Vtemp_h9367f3c5__0;
    VlWide<220>/*7039:0*/ __Vtemp_hd02c1d29__0;
    VlWide<224>/*7167:0*/ __Vtemp_h6c698981__0;
    VlWide<228>/*7295:0*/ __Vtemp_hc444c29d__0;
    VlWide<232>/*7423:0*/ __Vtemp_he32d4da3__0;
    VlWide<236>/*7551:0*/ __Vtemp_h72afa95f__0;
    VlWide<240>/*7679:0*/ __Vtemp_h33e914d7__0;
    VlWide<244>/*7807:0*/ __Vtemp_h1006a528__0;
    VlWide<248>/*7935:0*/ __Vtemp_h2772a269__0;
    VlWide<252>/*8063:0*/ __Vtemp_hde47c10f__0;
    VlWide<256>/*8191:0*/ __Vtemp_h270355f3__0;
    VlWide<12>/*383:0*/ __Vtemp_h4b1eef28__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc513de2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d47f6e6__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5a7caf0__0;
    VlWide<3>/*95:0*/ __Vtemp_h88d5841d__0;
    VlWide<3>/*95:0*/ __Vtemp_he31f52ef__0;
    VlWide<64>/*2047:0*/ __Vtemp_hb7d79f8d__0;
    VlWide<68>/*2175:0*/ __Vtemp_hf11864d2__0;
    VlWide<72>/*2303:0*/ __Vtemp_hee10b92c__0;
    VlWide<76>/*2431:0*/ __Vtemp_h4897b402__0;
    VlWide<80>/*2559:0*/ __Vtemp_hbd76b5c1__0;
    VlWide<84>/*2687:0*/ __Vtemp_h933c34ec__0;
    VlWide<88>/*2815:0*/ __Vtemp_hb01248ff__0;
    VlWide<92>/*2943:0*/ __Vtemp_h192ccbe0__0;
    VlWide<96>/*3071:0*/ __Vtemp_h26738ea2__0;
    VlWide<100>/*3199:0*/ __Vtemp_hdf476387__0;
    VlWide<104>/*3327:0*/ __Vtemp_h53a4dec5__0;
    VlWide<108>/*3455:0*/ __Vtemp_h96ff4363__0;
    VlWide<112>/*3583:0*/ __Vtemp_h08529f94__0;
    VlWide<116>/*3711:0*/ __Vtemp_h926b4a33__0;
    VlWide<120>/*3839:0*/ __Vtemp_h6b443029__0;
    VlWide<124>/*3967:0*/ __Vtemp_h4bc73d6c__0;
    VlWide<128>/*4095:0*/ __Vtemp_hf1bd8f05__0;
    VlWide<132>/*4223:0*/ __Vtemp_had3e972a__0;
    VlWide<136>/*4351:0*/ __Vtemp_hddf90f8c__0;
    VlWide<140>/*4479:0*/ __Vtemp_h6c52574f__0;
    VlWide<144>/*4607:0*/ __Vtemp_h075d6cc5__0;
    VlWide<148>/*4735:0*/ __Vtemp_hd6d8ce00__0;
    VlWide<152>/*4863:0*/ __Vtemp_h9adbd769__0;
    VlWide<156>/*4991:0*/ __Vtemp_h236853cd__0;
    VlWide<160>/*5119:0*/ __Vtemp_he7bc82e3__0;
    VlWide<164>/*5247:0*/ __Vtemp_h15aa864b__0;
    VlWide<168>/*5375:0*/ __Vtemp_hec060979__0;
    VlWide<172>/*5503:0*/ __Vtemp_h907ad3f2__0;
    VlWide<176>/*5631:0*/ __Vtemp_h5918ad45__0;
    VlWide<180>/*5759:0*/ __Vtemp_h9f5e1898__0;
    VlWide<184>/*5887:0*/ __Vtemp_hb12e88dd__0;
    VlWide<188>/*6015:0*/ __Vtemp_h6f95cdf5__0;
    VlWide<192>/*6143:0*/ __Vtemp_h623fb527__0;
    VlWide<196>/*6271:0*/ __Vtemp_h655dfcc6__0;
    VlWide<200>/*6399:0*/ __Vtemp_h7619d1c4__0;
    VlWide<204>/*6527:0*/ __Vtemp_h1bbf8824__0;
    VlWide<208>/*6655:0*/ __Vtemp_h9a65ff28__0;
    VlWide<212>/*6783:0*/ __Vtemp_h040a05bb__0;
    VlWide<216>/*6911:0*/ __Vtemp_h7681913a__0;
    VlWide<220>/*7039:0*/ __Vtemp_h4725b82a__0;
    VlWide<224>/*7167:0*/ __Vtemp_h00cfd5aa__0;
    VlWide<228>/*7295:0*/ __Vtemp_h8c0eaa1b__0;
    VlWide<232>/*7423:0*/ __Vtemp_h086e8b50__0;
    VlWide<236>/*7551:0*/ __Vtemp_hed61d1d0__0;
    VlWide<240>/*7679:0*/ __Vtemp_hd73f59ad__0;
    VlWide<244>/*7807:0*/ __Vtemp_h129fab18__0;
    VlWide<248>/*7935:0*/ __Vtemp_h0b0184f1__0;
    VlWide<252>/*8063:0*/ __Vtemp_h458174dd__0;
    VlWide<256>/*8191:0*/ __Vtemp_ha8fac9ae__0;
    VlWide<64>/*2047:0*/ __Vtemp_hfa2da9a3__0;
    VlWide<68>/*2175:0*/ __Vtemp_h5f17283c__0;
    VlWide<72>/*2303:0*/ __Vtemp_hc460765d__0;
    VlWide<76>/*2431:0*/ __Vtemp_h65304e4f__0;
    VlWide<80>/*2559:0*/ __Vtemp_h21ade1b2__0;
    VlWide<84>/*2687:0*/ __Vtemp_hf48c131f__0;
    VlWide<88>/*2815:0*/ __Vtemp_h413ac4fc__0;
    VlWide<92>/*2943:0*/ __Vtemp_h4adee1f6__0;
    VlWide<96>/*3071:0*/ __Vtemp_h30825d1d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h13913e90__0;
    VlWide<104>/*3327:0*/ __Vtemp_hd41da468__0;
    VlWide<108>/*3455:0*/ __Vtemp_h622960d7__0;
    VlWide<112>/*3583:0*/ __Vtemp_h0edde5e5__0;
    VlWide<116>/*3711:0*/ __Vtemp_h5ebac614__0;
    VlWide<120>/*3839:0*/ __Vtemp_h6c75432e__0;
    VlWide<124>/*3967:0*/ __Vtemp_hdd9d9934__0;
    VlWide<128>/*4095:0*/ __Vtemp_h84b54f4d__0;
    VlWide<132>/*4223:0*/ __Vtemp_h8eb5c6e2__0;
    VlWide<136>/*4351:0*/ __Vtemp_h7f3e3480__0;
    VlWide<140>/*4479:0*/ __Vtemp_hcfcd490c__0;
    VlWide<144>/*4607:0*/ __Vtemp_hceecaa67__0;
    VlWide<148>/*4735:0*/ __Vtemp_h7d8795c1__0;
    VlWide<152>/*4863:0*/ __Vtemp_h8964e1a5__0;
    VlWide<156>/*4991:0*/ __Vtemp_hbfa432fc__0;
    VlWide<160>/*5119:0*/ __Vtemp_h2b56ebcf__0;
    VlWide<164>/*5247:0*/ __Vtemp_h5d376e9f__0;
    VlWide<168>/*5375:0*/ __Vtemp_h117bdc47__0;
    VlWide<172>/*5503:0*/ __Vtemp_h23eb0d28__0;
    VlWide<176>/*5631:0*/ __Vtemp_h0ec0e7cc__0;
    VlWide<180>/*5759:0*/ __Vtemp_h51f07506__0;
    VlWide<184>/*5887:0*/ __Vtemp_h7f798407__0;
    VlWide<188>/*6015:0*/ __Vtemp_hee62ea84__0;
    VlWide<192>/*6143:0*/ __Vtemp_h5f6cab50__0;
    VlWide<196>/*6271:0*/ __Vtemp_hd326eddc__0;
    VlWide<200>/*6399:0*/ __Vtemp_h0567beb2__0;
    VlWide<204>/*6527:0*/ __Vtemp_hdfe3607a__0;
    VlWide<208>/*6655:0*/ __Vtemp_h53d804d3__0;
    VlWide<212>/*6783:0*/ __Vtemp_hb9a5963e__0;
    VlWide<216>/*6911:0*/ __Vtemp_h3be54a1e__0;
    VlWide<220>/*7039:0*/ __Vtemp_h92a796fa__0;
    VlWide<224>/*7167:0*/ __Vtemp_h87c43da7__0;
    VlWide<228>/*7295:0*/ __Vtemp_h1f1ff616__0;
    VlWide<232>/*7423:0*/ __Vtemp_h429df607__0;
    VlWide<236>/*7551:0*/ __Vtemp_hf183fbe0__0;
    VlWide<240>/*7679:0*/ __Vtemp_h4f845b3e__0;
    VlWide<244>/*7807:0*/ __Vtemp_h46115743__0;
    VlWide<248>/*7935:0*/ __Vtemp_h6143e804__0;
    VlWide<252>/*8063:0*/ __Vtemp_hdcc99421__0;
    VlWide<256>/*8191:0*/ __Vtemp_h0dedb599__0;
    VlWide<64>/*2047:0*/ __Vtemp_h19d14141__0;
    VlWide<68>/*2175:0*/ __Vtemp_hf4a0a080__0;
    VlWide<72>/*2303:0*/ __Vtemp_h0b283d2e__0;
    VlWide<76>/*2431:0*/ __Vtemp_h1794779a__0;
    VlWide<80>/*2559:0*/ __Vtemp_hc027067a__0;
    VlWide<84>/*2687:0*/ __Vtemp_h4b3c5a8e__0;
    VlWide<88>/*2815:0*/ __Vtemp_h5e37cf7f__0;
    VlWide<92>/*2943:0*/ __Vtemp_hb507e173__0;
    VlWide<96>/*3071:0*/ __Vtemp_hb807b5fe__0;
    VlWide<100>/*3199:0*/ __Vtemp_h6bedc944__0;
    VlWide<104>/*3327:0*/ __Vtemp_hb11a826b__0;
    VlWide<108>/*3455:0*/ __Vtemp_h345147ce__0;
    VlWide<112>/*3583:0*/ __Vtemp_hf6d2c18b__0;
    VlWide<116>/*3711:0*/ __Vtemp_h446f54df__0;
    VlWide<120>/*3839:0*/ __Vtemp_h518088ae__0;
    VlWide<124>/*3967:0*/ __Vtemp_h110ae371__0;
    VlWide<128>/*4095:0*/ __Vtemp_heb174dd6__0;
    VlWide<132>/*4223:0*/ __Vtemp_h5a2c5630__0;
    VlWide<136>/*4351:0*/ __Vtemp_hf96fd5d2__0;
    VlWide<140>/*4479:0*/ __Vtemp_hb90f2d26__0;
    VlWide<144>/*4607:0*/ __Vtemp_h772048b3__0;
    VlWide<148>/*4735:0*/ __Vtemp_h1baea715__0;
    VlWide<152>/*4863:0*/ __Vtemp_h4d57a18e__0;
    VlWide<156>/*4991:0*/ __Vtemp_h9631429f__0;
    VlWide<160>/*5119:0*/ __Vtemp_h0812235f__0;
    VlWide<164>/*5247:0*/ __Vtemp_hc99bfc48__0;
    VlWide<168>/*5375:0*/ __Vtemp_h20add20f__0;
    VlWide<172>/*5503:0*/ __Vtemp_h01b66c0a__0;
    VlWide<176>/*5631:0*/ __Vtemp_h77fe08c1__0;
    VlWide<180>/*5759:0*/ __Vtemp_h26bd7213__0;
    VlWide<184>/*5887:0*/ __Vtemp_h0f988173__0;
    VlWide<188>/*6015:0*/ __Vtemp_h5b58fb26__0;
    VlWide<192>/*6143:0*/ __Vtemp_hc18256be__0;
    VlWide<196>/*6271:0*/ __Vtemp_he9055853__0;
    VlWide<200>/*6399:0*/ __Vtemp_h80378c28__0;
    VlWide<204>/*6527:0*/ __Vtemp_he4e6466d__0;
    VlWide<208>/*6655:0*/ __Vtemp_h6f903edd__0;
    VlWide<212>/*6783:0*/ __Vtemp_h5e86fc63__0;
    VlWide<216>/*6911:0*/ __Vtemp_h2f1a4ae7__0;
    VlWide<220>/*7039:0*/ __Vtemp_h77655247__0;
    VlWide<224>/*7167:0*/ __Vtemp_h1bf94a6d__0;
    VlWide<228>/*7295:0*/ __Vtemp_h7183f88a__0;
    VlWide<232>/*7423:0*/ __Vtemp_h9b332d69__0;
    VlWide<236>/*7551:0*/ __Vtemp_h7c9ae78e__0;
    VlWide<240>/*7679:0*/ __Vtemp_h024b6940__0;
    VlWide<244>/*7807:0*/ __Vtemp_hfac35c78__0;
    VlWide<248>/*7935:0*/ __Vtemp_h1a90d814__0;
    VlWide<252>/*8063:0*/ __Vtemp_h5b619b1c__0;
    VlWide<256>/*8191:0*/ __Vtemp_h7ca6debf__0;
    VlWide<64>/*2047:0*/ __Vtemp_ha02c6ae0__0;
    VlWide<68>/*2175:0*/ __Vtemp_h288a1fd7__0;
    VlWide<72>/*2303:0*/ __Vtemp_hb46d0a31__0;
    VlWide<76>/*2431:0*/ __Vtemp_hfc41bef4__0;
    VlWide<80>/*2559:0*/ __Vtemp_h2f4dd1cb__0;
    VlWide<84>/*2687:0*/ __Vtemp_h6328f1a0__0;
    VlWide<88>/*2815:0*/ __Vtemp_h9358034a__0;
    VlWide<92>/*2943:0*/ __Vtemp_h5b626533__0;
    VlWide<96>/*3071:0*/ __Vtemp_he3588d33__0;
    VlWide<100>/*3199:0*/ __Vtemp_h51013511__0;
    VlWide<104>/*3327:0*/ __Vtemp_hf95e2f71__0;
    VlWide<108>/*3455:0*/ __Vtemp_h60861dc6__0;
    VlWide<112>/*3583:0*/ __Vtemp_hbb6d165d__0;
    VlWide<116>/*3711:0*/ __Vtemp_ha20a44b6__0;
    VlWide<120>/*3839:0*/ __Vtemp_h9857101e__0;
    VlWide<124>/*3967:0*/ __Vtemp_h76e6381a__0;
    VlWide<128>/*4095:0*/ __Vtemp_h63e8ea17__0;
    VlWide<132>/*4223:0*/ __Vtemp_hfc2560f8__0;
    VlWide<136>/*4351:0*/ __Vtemp_hed203a2f__0;
    VlWide<140>/*4479:0*/ __Vtemp_hc466730f__0;
    VlWide<144>/*4607:0*/ __Vtemp_h4d3b59a7__0;
    VlWide<148>/*4735:0*/ __Vtemp_h42f2dd2e__0;
    VlWide<152>/*4863:0*/ __Vtemp_h33cc9b03__0;
    VlWide<156>/*4991:0*/ __Vtemp_h2eb5870e__0;
    VlWide<160>/*5119:0*/ __Vtemp_h4bfb44e1__0;
    VlWide<164>/*5247:0*/ __Vtemp_h26b9cfeb__0;
    VlWide<168>/*5375:0*/ __Vtemp_h12c7dccb__0;
    VlWide<172>/*5503:0*/ __Vtemp_h70e62279__0;
    VlWide<176>/*5631:0*/ __Vtemp_hfd86102a__0;
    VlWide<180>/*5759:0*/ __Vtemp_h3ed24fa1__0;
    VlWide<184>/*5887:0*/ __Vtemp_h64245e48__0;
    VlWide<188>/*6015:0*/ __Vtemp_hc9e33897__0;
    VlWide<192>/*6143:0*/ __Vtemp_hc2799081__0;
    VlWide<196>/*6271:0*/ __Vtemp_h17e540cd__0;
    VlWide<200>/*6399:0*/ __Vtemp_h74d6f39f__0;
    VlWide<204>/*6527:0*/ __Vtemp_hbb610d16__0;
    VlWide<208>/*6655:0*/ __Vtemp_hc85eb47b__0;
    VlWide<212>/*6783:0*/ __Vtemp_h06a08a03__0;
    VlWide<216>/*6911:0*/ __Vtemp_hc49af87b__0;
    VlWide<220>/*7039:0*/ __Vtemp_hf2b802a4__0;
    VlWide<224>/*7167:0*/ __Vtemp_h59d6e745__0;
    VlWide<228>/*7295:0*/ __Vtemp_h764f0b2f__0;
    VlWide<232>/*7423:0*/ __Vtemp_h65196771__0;
    VlWide<236>/*7551:0*/ __Vtemp_h19bdf899__0;
    VlWide<240>/*7679:0*/ __Vtemp_had582af6__0;
    VlWide<244>/*7807:0*/ __Vtemp_h49dcc629__0;
    VlWide<248>/*7935:0*/ __Vtemp_hc818fb9b__0;
    VlWide<252>/*8063:0*/ __Vtemp_h52e9001a__0;
    VlWide<256>/*8191:0*/ __Vtemp_h68cab1f4__0;
    VlWide<16>/*511:0*/ __Vtemp_hfdc68230__0;
    VlWide<17>/*543:0*/ __Vtemp_h1d317cd2__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc698cd4__0;
    VlWide<64>/*2047:0*/ __Vtemp_h88771a62__0;
    VlWide<68>/*2175:0*/ __Vtemp_h5402111c__0;
    VlWide<72>/*2303:0*/ __Vtemp_h1304a399__0;
    VlWide<76>/*2431:0*/ __Vtemp_h137bef71__0;
    VlWide<80>/*2559:0*/ __Vtemp_h20882af2__0;
    VlWide<84>/*2687:0*/ __Vtemp_h20080626__0;
    VlWide<88>/*2815:0*/ __Vtemp_hc28e62ac__0;
    VlWide<92>/*2943:0*/ __Vtemp_h7e27fc36__0;
    VlWide<96>/*3071:0*/ __Vtemp_hed880295__0;
    VlWide<100>/*3199:0*/ __Vtemp_h371a4261__0;
    VlWide<104>/*3327:0*/ __Vtemp_hf23bf6f6__0;
    VlWide<108>/*3455:0*/ __Vtemp_h369548d0__0;
    VlWide<112>/*3583:0*/ __Vtemp_h410bcd91__0;
    VlWide<116>/*3711:0*/ __Vtemp_h65e724f9__0;
    VlWide<120>/*3839:0*/ __Vtemp_h40a8316b__0;
    VlWide<124>/*3967:0*/ __Vtemp_hfb3fd358__0;
    VlWide<128>/*4095:0*/ __Vtemp_h8c7400de__0;
    VlWide<132>/*4223:0*/ __Vtemp_h8089b072__0;
    VlWide<136>/*4351:0*/ __Vtemp_h0f9b2c05__0;
    VlWide<140>/*4479:0*/ __Vtemp_h74ea22e9__0;
    VlWide<144>/*4607:0*/ __Vtemp_hc4c1369f__0;
    VlWide<148>/*4735:0*/ __Vtemp_hb89e1df8__0;
    VlWide<152>/*4863:0*/ __Vtemp_h5a8c4d08__0;
    VlWide<156>/*4991:0*/ __Vtemp_hab7b3e9d__0;
    VlWide<160>/*5119:0*/ __Vtemp_h2e17cecd__0;
    VlWide<164>/*5247:0*/ __Vtemp_hc5e4306c__0;
    VlWide<168>/*5375:0*/ __Vtemp_h059d7bd8__0;
    VlWide<172>/*5503:0*/ __Vtemp_h0e987b80__0;
    VlWide<176>/*5631:0*/ __Vtemp_h493e3af7__0;
    VlWide<180>/*5759:0*/ __Vtemp_hf1b4730b__0;
    VlWide<184>/*5887:0*/ __Vtemp_h88c92398__0;
    VlWide<188>/*6015:0*/ __Vtemp_h5cdef04d__0;
    VlWide<192>/*6143:0*/ __Vtemp_h48d00a6b__0;
    VlWide<196>/*6271:0*/ __Vtemp_hd14d6b6f__0;
    VlWide<200>/*6399:0*/ __Vtemp_hb4342357__0;
    VlWide<204>/*6527:0*/ __Vtemp_h5089335e__0;
    VlWide<208>/*6655:0*/ __Vtemp_h46a1754b__0;
    VlWide<212>/*6783:0*/ __Vtemp_hf7f0de07__0;
    VlWide<216>/*6911:0*/ __Vtemp_he511e11f__0;
    VlWide<220>/*7039:0*/ __Vtemp_h91b20978__0;
    VlWide<224>/*7167:0*/ __Vtemp_he2cb437a__0;
    VlWide<228>/*7295:0*/ __Vtemp_h2de991a3__0;
    VlWide<232>/*7423:0*/ __Vtemp_h44fd84e4__0;
    VlWide<236>/*7551:0*/ __Vtemp_h0bcd60f7__0;
    VlWide<240>/*7679:0*/ __Vtemp_he5607e5a__0;
    VlWide<244>/*7807:0*/ __Vtemp_h79d95ddc__0;
    VlWide<248>/*7935:0*/ __Vtemp_h8c131b71__0;
    VlWide<252>/*8063:0*/ __Vtemp_h8a752446__0;
    VlWide<256>/*8191:0*/ __Vtemp_h892e4423__0;
    VlWide<64>/*2047:0*/ __Vtemp_h13d431bf__0;
    VlWide<68>/*2175:0*/ __Vtemp_h78f8ab32__0;
    VlWide<72>/*2303:0*/ __Vtemp_h88e7409b__0;
    VlWide<76>/*2431:0*/ __Vtemp_ha2c97072__0;
    VlWide<80>/*2559:0*/ __Vtemp_hefbbb81f__0;
    VlWide<84>/*2687:0*/ __Vtemp_h3d1e509f__0;
    VlWide<88>/*2815:0*/ __Vtemp_h75367ca8__0;
    VlWide<92>/*2943:0*/ __Vtemp_h04d9e565__0;
    VlWide<96>/*3071:0*/ __Vtemp_hcc53bd37__0;
    VlWide<100>/*3199:0*/ __Vtemp_h4de1d237__0;
    VlWide<104>/*3327:0*/ __Vtemp_h50fdabec__0;
    VlWide<108>/*3455:0*/ __Vtemp_h65a99019__0;
    VlWide<112>/*3583:0*/ __Vtemp_ha40b39b2__0;
    VlWide<116>/*3711:0*/ __Vtemp_hd937c98d__0;
    VlWide<120>/*3839:0*/ __Vtemp_h5f794ee5__0;
    VlWide<124>/*3967:0*/ __Vtemp_h43107de3__0;
    VlWide<128>/*4095:0*/ __Vtemp_h1cd043d3__0;
    VlWide<132>/*4223:0*/ __Vtemp_h7d11b2a8__0;
    VlWide<136>/*4351:0*/ __Vtemp_h727f3795__0;
    VlWide<140>/*4479:0*/ __Vtemp_hdcd6db32__0;
    VlWide<144>/*4607:0*/ __Vtemp_h4b4a85f6__0;
    VlWide<148>/*4735:0*/ __Vtemp_h8626bb58__0;
    VlWide<152>/*4863:0*/ __Vtemp_h372a9e92__0;
    VlWide<156>/*4991:0*/ __Vtemp_hd650902c__0;
    VlWide<160>/*5119:0*/ __Vtemp_h07174fdb__0;
    VlWide<164>/*5247:0*/ __Vtemp_ha2f42491__0;
    VlWide<168>/*5375:0*/ __Vtemp_hec54b64a__0;
    VlWide<172>/*5503:0*/ __Vtemp_h7107966e__0;
    VlWide<176>/*5631:0*/ __Vtemp_h47c05d3b__0;
    VlWide<180>/*5759:0*/ __Vtemp_h9cc520e5__0;
    VlWide<184>/*5887:0*/ __Vtemp_ha673671a__0;
    VlWide<188>/*6015:0*/ __Vtemp_h3fa28383__0;
    VlWide<192>/*6143:0*/ __Vtemp_h4d3eebf5__0;
    VlWide<196>/*6271:0*/ __Vtemp_hf485424b__0;
    VlWide<200>/*6399:0*/ __Vtemp_h9056e7da__0;
    VlWide<204>/*6527:0*/ __Vtemp_h99f3c231__0;
    VlWide<208>/*6655:0*/ __Vtemp_h33d7480f__0;
    VlWide<212>/*6783:0*/ __Vtemp_ha682eb4f__0;
    VlWide<216>/*6911:0*/ __Vtemp_he162d88f__0;
    VlWide<220>/*7039:0*/ __Vtemp_h1866a808__0;
    VlWide<224>/*7167:0*/ __Vtemp_h67edef0f__0;
    VlWide<228>/*7295:0*/ __Vtemp_h35b79884__0;
    VlWide<232>/*7423:0*/ __Vtemp_h694df2cc__0;
    VlWide<236>/*7551:0*/ __Vtemp_h1f06fce3__0;
    VlWide<240>/*7679:0*/ __Vtemp_h72adae90__0;
    VlWide<244>/*7807:0*/ __Vtemp_h7e8909de__0;
    VlWide<248>/*7935:0*/ __Vtemp_hc199b27b__0;
    VlWide<252>/*8063:0*/ __Vtemp_h495f6589__0;
    VlWide<256>/*8191:0*/ __Vtemp_hedf161d6__0;
    VlWide<64>/*2047:0*/ __Vtemp_h3137a1c6__0;
    VlWide<68>/*2175:0*/ __Vtemp_h9390928f__0;
    VlWide<72>/*2303:0*/ __Vtemp_h7b959b0f__0;
    VlWide<76>/*2431:0*/ __Vtemp_he837a750__0;
    VlWide<80>/*2559:0*/ __Vtemp_h45cc4c09__0;
    VlWide<84>/*2687:0*/ __Vtemp_ha24d6ce4__0;
    VlWide<88>/*2815:0*/ __Vtemp_h6f4eff98__0;
    VlWide<92>/*2943:0*/ __Vtemp_hf6c9a8d2__0;
    VlWide<96>/*3071:0*/ __Vtemp_hc9b778ad__0;
    VlWide<100>/*3199:0*/ __Vtemp_h528d9c0f__0;
    VlWide<104>/*3327:0*/ __Vtemp_h37bc6cd5__0;
    VlWide<108>/*3455:0*/ __Vtemp_h444e74fd__0;
    VlWide<112>/*3583:0*/ __Vtemp_h50d29649__0;
    VlWide<116>/*3711:0*/ __Vtemp_he6ffe119__0;
    VlWide<120>/*3839:0*/ __Vtemp_h88bc77a1__0;
    VlWide<124>/*3967:0*/ __Vtemp_h520d079a__0;
    VlWide<128>/*4095:0*/ __Vtemp_h43a06219__0;
    VlWide<132>/*4223:0*/ __Vtemp_hfc4f5f67__0;
    VlWide<136>/*4351:0*/ __Vtemp_h510aa08d__0;
    VlWide<140>/*4479:0*/ __Vtemp_h93c8180a__0;
    VlWide<144>/*4607:0*/ __Vtemp_h8058fa9a__0;
    VlWide<148>/*4735:0*/ __Vtemp_h67faa532__0;
    VlWide<152>/*4863:0*/ __Vtemp_hce58132b__0;
    VlWide<156>/*4991:0*/ __Vtemp_h899c6988__0;
    VlWide<160>/*5119:0*/ __Vtemp_hcf6b4c03__0;
    VlWide<164>/*5247:0*/ __Vtemp_h4eeada87__0;
    VlWide<168>/*5375:0*/ __Vtemp_hbddb0173__0;
    VlWide<172>/*5503:0*/ __Vtemp_hc1346a88__0;
    VlWide<176>/*5631:0*/ __Vtemp_h8b60c851__0;
    VlWide<180>/*5759:0*/ __Vtemp_hddedd575__0;
    VlWide<184>/*5887:0*/ __Vtemp_h751063f0__0;
    VlWide<188>/*6015:0*/ __Vtemp_hd78e43db__0;
    VlWide<192>/*6143:0*/ __Vtemp_h573594ba__0;
    VlWide<196>/*6271:0*/ __Vtemp_h43d8d900__0;
    VlWide<200>/*6399:0*/ __Vtemp_had81115c__0;
    VlWide<204>/*6527:0*/ __Vtemp_h0f5af949__0;
    VlWide<208>/*6655:0*/ __Vtemp_h5c541c34__0;
    VlWide<212>/*6783:0*/ __Vtemp_hf908d7ef__0;
    VlWide<216>/*6911:0*/ __Vtemp_h3f88019a__0;
    VlWide<220>/*7039:0*/ __Vtemp_h94024da4__0;
    VlWide<224>/*7167:0*/ __Vtemp_h01989f6b__0;
    VlWide<228>/*7295:0*/ __Vtemp_ha130f904__0;
    VlWide<232>/*7423:0*/ __Vtemp_h59264671__0;
    VlWide<236>/*7551:0*/ __Vtemp_h1a6c87ec__0;
    VlWide<240>/*7679:0*/ __Vtemp_hfe74bb88__0;
    VlWide<244>/*7807:0*/ __Vtemp_hb6f0415f__0;
    VlWide<248>/*7935:0*/ __Vtemp_hbf38d5e2__0;
    VlWide<252>/*8063:0*/ __Vtemp_h28e7ad8e__0;
    VlWide<256>/*8191:0*/ __Vtemp_hd974cf3b__0;
    VlWide<64>/*2047:0*/ __Vtemp_h148d8516__0;
    VlWide<68>/*2175:0*/ __Vtemp_hfb17963a__0;
    VlWide<72>/*2303:0*/ __Vtemp_h805f26c9__0;
    VlWide<76>/*2431:0*/ __Vtemp_h50e33f36__0;
    VlWide<80>/*2559:0*/ __Vtemp_hda2c6f06__0;
    VlWide<84>/*2687:0*/ __Vtemp_h8554e1ea__0;
    VlWide<88>/*2815:0*/ __Vtemp_hc896efd7__0;
    VlWide<92>/*2943:0*/ __Vtemp_h4ca4416d__0;
    VlWide<96>/*3071:0*/ __Vtemp_h61311ca7__0;
    VlWide<100>/*3199:0*/ __Vtemp_hbc9903a1__0;
    VlWide<104>/*3327:0*/ __Vtemp_hdf456cef__0;
    VlWide<108>/*3455:0*/ __Vtemp_h1e39b920__0;
    VlWide<112>/*3583:0*/ __Vtemp_h328790dc__0;
    VlWide<116>/*3711:0*/ __Vtemp_h53cdb8c2__0;
    VlWide<120>/*3839:0*/ __Vtemp_h1a1be0f7__0;
    VlWide<124>/*3967:0*/ __Vtemp_h009a967f__0;
    VlWide<128>/*4095:0*/ __Vtemp_hafe28b8e__0;
    VlWide<132>/*4223:0*/ __Vtemp_hdd4f3c18__0;
    VlWide<136>/*4351:0*/ __Vtemp_hce303e8f__0;
    VlWide<140>/*4479:0*/ __Vtemp_h1acb7520__0;
    VlWide<144>/*4607:0*/ __Vtemp_h686bc70c__0;
    VlWide<148>/*4735:0*/ __Vtemp_h0733a2c1__0;
    VlWide<152>/*4863:0*/ __Vtemp_hdb5021f0__0;
    VlWide<156>/*4991:0*/ __Vtemp_h3311c749__0;
    VlWide<160>/*5119:0*/ __Vtemp_h60cabc44__0;
    VlWide<164>/*5247:0*/ __Vtemp_hb4d3346b__0;
    VlWide<168>/*5375:0*/ __Vtemp_h8575abe6__0;
    VlWide<172>/*5503:0*/ __Vtemp_h723af0f2__0;
    VlWide<176>/*5631:0*/ __Vtemp_h8bd0009c__0;
    VlWide<180>/*5759:0*/ __Vtemp_h7f97af99__0;
    VlWide<184>/*5887:0*/ __Vtemp_h844df0ba__0;
    VlWide<188>/*6015:0*/ __Vtemp_h0cc140bc__0;
    VlWide<192>/*6143:0*/ __Vtemp_hc568d77d__0;
    VlWide<196>/*6271:0*/ __Vtemp_he7112470__0;
    VlWide<200>/*6399:0*/ __Vtemp_hf1540aa5__0;
    VlWide<204>/*6527:0*/ __Vtemp_h1be41b90__0;
    VlWide<208>/*6655:0*/ __Vtemp_h91f67eb9__0;
    VlWide<212>/*6783:0*/ __Vtemp_hfb5f1558__0;
    VlWide<216>/*6911:0*/ __Vtemp_ha7c52222__0;
    VlWide<220>/*7039:0*/ __Vtemp_h65863980__0;
    VlWide<224>/*7167:0*/ __Vtemp_h43414b4e__0;
    VlWide<228>/*7295:0*/ __Vtemp_h79384ff5__0;
    VlWide<232>/*7423:0*/ __Vtemp_h2cab2a85__0;
    VlWide<236>/*7551:0*/ __Vtemp_h92d53774__0;
    VlWide<240>/*7679:0*/ __Vtemp_h54a31076__0;
    VlWide<244>/*7807:0*/ __Vtemp_h7d1c457c__0;
    VlWide<248>/*7935:0*/ __Vtemp_hb39760ce__0;
    VlWide<252>/*8063:0*/ __Vtemp_hc4f2f83f__0;
    VlWide<256>/*8191:0*/ __Vtemp_h4be53127__0;
    VlWide<8>/*255:0*/ __Vtemp_hb3faad4d__0;
    VlWide<8>/*255:0*/ __Vtemp_h07d67474__0;
    // Body
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_7 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__allow_in 
        = (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4 = (0U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
    __Vtemp_h1f0000fe__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                           >> 7U))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                              >> 6U))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 5U))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 4U))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 3U)))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 2U)))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 1U)))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb)))))))))))))));
    __Vtemp_h1f0000fe__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                            >> 7U))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                               >> 6U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 5U))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 4U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 3U)))) 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 2U)))) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 1U)))) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb)))))))))))))) 
                                        >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
        = __Vtemp_h1f0000fe__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
        = __Vtemp_h1f0000fe__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 0xbU)))) << 0x18U) 
           | ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                              >> 0xaU)))) 
                            << 0x10U)) | ((0xff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                             >> 9U)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                              >> 8U))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 0xfU)))) << 0x18U) 
           | ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                              >> 0xeU)))) 
                            << 0x10U)) | ((0xff00U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                             >> 0xdU)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                              >> 0xcU))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0 
        = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3) 
                   << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2) 
                              << 2U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1) 
                                         << 1U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0)))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret 
        = ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) | (0x18U == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2 
        = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3) 
                   << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2) 
                              << 2U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1) 
                                         << 1U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0)))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    __Vtemp_h99bf1d57__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0;
    __Vtemp_h99bf1d57__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1;
    __Vtemp_h99bf1d57__0[2U] = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))));
    __Vtemp_h99bf1d57__0[3U] = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))) 
                                        >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                             << 5U))) ? 0U : (__Vtemp_h99bf1d57__0[
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
           | (__Vtemp_h99bf1d57__0[(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                           << 5U))));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T 
        = ((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                             >> 4U))) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hdd720947__0 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    __Vtemp_h7137a906__0[0U] = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31)) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30)) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28)) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27)) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26)) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25)) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23)) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22)) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21)) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)) 
                                                                          << 0x28U) 
                                                                         | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)) 
                                                                             << 0x26U) 
                                                                            | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0)))))))))))))))))))))))))))))))))));
    __Vtemp_h7137a906__0[1U] = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31)) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30)) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29)) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28)) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27)) 
                                                      << 0x36U) 
                                                     | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26)) 
                                                         << 0x34U) 
                                                        | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25)) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23)) 
                                                                  << 0x2eU) 
                                                                 | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22)) 
                                                                     << 0x2cU) 
                                                                    | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21)) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)) 
                                                                           << 0x28U) 
                                                                          | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)) 
                                                                              << 0x26U) 
                                                                             | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0)))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[0U] 
        = __Vtemp_h7137a906__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[1U] 
        = __Vtemp_h7137a906__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[2U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47) 
            << 0x1eU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46) 
                          << 0x1cU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[3U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63) 
            << 0x1eU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62) 
                          << 0x1cU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48))))))))))))))));
    __Vtemp_hb695e77c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U];
    __Vtemp_hb695e77c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U];
    __Vtemp_hb695e77c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U];
    __Vtemp_hb695e77c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U];
    __Vtemp_hb695e77c__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U];
    __Vtemp_hb695e77c__0[5U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U];
    __Vtemp_hb695e77c__0[6U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U];
    __Vtemp_hb695e77c__0[7U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U];
    __Vtemp_hb695e77c__0[8U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U];
    __Vtemp_hb695e77c__0[9U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U];
    __Vtemp_hb695e77c__0[0xaU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U];
    __Vtemp_hb695e77c__0[0xbU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U];
    __Vtemp_hb695e77c__0[0xcU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U];
    __Vtemp_hb695e77c__0[0xdU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U];
    __Vtemp_hb695e77c__0[0xeU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U];
    __Vtemp_hb695e77c__0[0xfU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U];
    __Vtemp_hb695e77c__0[0x10U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U];
    __Vtemp_hb695e77c__0[0x11U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U];
    __Vtemp_hb695e77c__0[0x12U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U];
    __Vtemp_hb695e77c__0[0x13U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U];
    __Vtemp_hb695e77c__0[0x14U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U];
    __Vtemp_hb695e77c__0[0x15U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U];
    __Vtemp_hb695e77c__0[0x16U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U];
    __Vtemp_hb695e77c__0[0x17U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U];
    __Vtemp_hb695e77c__0[0x18U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U];
    __Vtemp_hb695e77c__0[0x19U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U];
    __Vtemp_hb695e77c__0[0x1aU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U];
    __Vtemp_hb695e77c__0[0x1bU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U];
    __Vtemp_hb695e77c__0[0x1cU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U];
    __Vtemp_hb695e77c__0[0x1dU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U];
    __Vtemp_hb695e77c__0[0x1eU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U];
    __Vtemp_hb695e77c__0[0x1fU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U];
    __Vtemp_hb695e77c__0[0x20U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U];
    __Vtemp_hb695e77c__0[0x21U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U];
    __Vtemp_hb695e77c__0[0x22U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U];
    __Vtemp_hb695e77c__0[0x23U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U];
    __Vtemp_hb695e77c__0[0x24U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U];
    __Vtemp_hb695e77c__0[0x25U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U];
    __Vtemp_hb695e77c__0[0x26U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U];
    __Vtemp_hb695e77c__0[0x27U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U];
    __Vtemp_hb695e77c__0[0x28U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U];
    __Vtemp_hb695e77c__0[0x29U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U];
    __Vtemp_hb695e77c__0[0x2aU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U];
    __Vtemp_hb695e77c__0[0x2bU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U];
    __Vtemp_hb695e77c__0[0x2cU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U];
    __Vtemp_hb695e77c__0[0x2dU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U];
    __Vtemp_hb695e77c__0[0x2eU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U];
    __Vtemp_hb695e77c__0[0x2fU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U];
    __Vtemp_hb695e77c__0[0x30U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U];
    __Vtemp_hb695e77c__0[0x31U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U];
    __Vtemp_hb695e77c__0[0x32U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U];
    __Vtemp_hb695e77c__0[0x33U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U];
    __Vtemp_hb695e77c__0[0x34U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U];
    __Vtemp_hb695e77c__0[0x35U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U];
    __Vtemp_hb695e77c__0[0x36U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U];
    __Vtemp_hb695e77c__0[0x37U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U];
    __Vtemp_hb695e77c__0[0x38U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U];
    __Vtemp_hb695e77c__0[0x39U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U];
    __Vtemp_hb695e77c__0[0x3aU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U];
    __Vtemp_hb695e77c__0[0x3bU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U];
    __Vtemp_hb695e77c__0[0x3cU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U];
    __Vtemp_hb695e77c__0[0x3dU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U];
    __Vtemp_hb695e77c__0[0x3eU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U];
    __Vtemp_hb695e77c__0[0x3fU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_hd59c5b9e__0, __Vtemp_hb695e77c__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_hb745194b__0, __Vtemp_hd59c5b9e__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_h8b2f5410__0, __Vtemp_hb745194b__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_h92ba4d22__0, __Vtemp_h8b2f5410__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_hc8fe18ee__0, __Vtemp_h92ba4d22__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_hc01b7c43__0, __Vtemp_hc8fe18ee__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_hda9e4d73__0, __Vtemp_hc01b7c43__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_h97dc6d38__0, __Vtemp_hda9e4d73__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_h207c9b84__0, __Vtemp_h97dc6d38__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_hfc2c9564__0, __Vtemp_h207c9b84__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h3dde2c75__0, __Vtemp_hfc2c9564__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_h1382fd96__0, __Vtemp_h3dde2c75__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_h05bffbc0__0, __Vtemp_h1382fd96__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_hde166281__0, __Vtemp_h05bffbc0__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_h4298c7f5__0, __Vtemp_hde166281__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_h754cb906__0, __Vtemp_h4298c7f5__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_h6ff622eb__0, __Vtemp_h754cb906__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_h65afb051__0, __Vtemp_h6ff622eb__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_h20c5cc9e__0, __Vtemp_h65afb051__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_h826877a9__0, __Vtemp_h20c5cc9e__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_hba3fc1ca__0, __Vtemp_h826877a9__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_h35302663__0, __Vtemp_hba3fc1ca__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_h0efa846c__0, __Vtemp_h35302663__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_h7b818fbf__0, __Vtemp_h0efa846c__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_h98c4287b__0, __Vtemp_h7b818fbf__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_h29549d14__0, __Vtemp_h98c4287b__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_hd45d034e__0, __Vtemp_h29549d14__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h4fc1f600__0, __Vtemp_hd45d034e__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_hdd388217__0, __Vtemp_h4fc1f600__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_hb21eb058__0, __Vtemp_hdd388217__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_hd6cf3314__0, __Vtemp_hb21eb058__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_h264b3bf1__0, __Vtemp_hd6cf3314__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_h7ed60991__0, __Vtemp_h264b3bf1__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_hf733e858__0, __Vtemp_h7ed60991__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_h2c13b1f4__0, __Vtemp_hf733e858__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_ha28efad3__0, __Vtemp_h2c13b1f4__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_h1950c338__0, __Vtemp_ha28efad3__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_h9367f3c5__0, __Vtemp_h1950c338__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_hd02c1d29__0, __Vtemp_h9367f3c5__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h6c698981__0, __Vtemp_hd02c1d29__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_hc444c29d__0, __Vtemp_h6c698981__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_he32d4da3__0, __Vtemp_hc444c29d__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_h72afa95f__0, __Vtemp_he32d4da3__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_h33e914d7__0, __Vtemp_h72afa95f__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_h1006a528__0, __Vtemp_h33e914d7__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_h2772a269__0, __Vtemp_h1006a528__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_hde47c10f__0, __Vtemp_h2772a269__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_h270355f3__0, __Vtemp_hde47c10f__0, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[0U] 
        = __Vtemp_h270355f3__0[(0xfcU & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 3U)) 
                                         << 2U))];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[1U] 
        = __Vtemp_h270355f3__0[((IData)(1U) + (0xfcU 
                                               & ((IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U)) 
                                                  << 2U)))];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[2U] 
        = __Vtemp_h270355f3__0[((IData)(2U) + (0xfcU 
                                               & ((IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U)) 
                                                  << 2U)))];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[3U] 
        = __Vtemp_h270355f3__0[((IData)(3U) + (0xfcU 
                                               & ((IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U)) 
                                                  << 2U)))];
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid 
        = ((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                              >> 0x1fU)))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  >> 5U) | ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))) 
                            | (3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h1aac6d5d__0 
        = (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_ha8b9f2cf__0 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)));
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
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_data;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
                          >> 2U))) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
                                              >> 0x20U))
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_0 
        = (3U & (((0U == (0x1eU & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U)) 
                                   << 1U))) ? 0U : 
                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[
                   (((IData)(1U) + (0x7eU & ((IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 3U)) 
                                             << 1U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1eU 
                                                  & ((IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                              >> 3U)) 
                                                     << 1U))))) 
                 | (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[
                    (3U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                    >> 3U)) >> 4U))] 
                    >> (0x1eU & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                          >> 3U)) << 1U)))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = ((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[3U] 
            >> 0x1aU) & (((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[2U])) 
                                                     >> 2U))) 
                          == ((0xfffffffffffffeULL 
                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 8U)) | (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                        >> 2U))))))) 
                         & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[
                            (((IData)(1U) + (0x7eU 
                                             & ((IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U)) 
                                                << 1U))) 
                             >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                  + 
                                                  (0x7eU 
                                                   & ((IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                               >> 3U)) 
                                                      << 1U)))))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN 
        = ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_ha8b9f2cf__0)
                     ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hdd720947__0)));
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
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en) 
               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    __Vtemp_h4b1eef28__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0);
    __Vtemp_h4b1eef28__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 
                                        >> 0x20U));
    __Vtemp_h4b1eef28__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1);
    __Vtemp_h4b1eef28__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 
                                        >> 0x20U));
    __Vtemp_h4b1eef28__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2);
    __Vtemp_h4b1eef28__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 
                                        >> 0x20U));
    __Vtemp_h4b1eef28__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3);
    __Vtemp_h4b1eef28__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 
                                        >> 0x20U));
    __Vtemp_h4b1eef28__0[8U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4);
    __Vtemp_h4b1eef28__0[9U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 
                                        >> 0x20U));
    __Vtemp_h4b1eef28__0[0xaU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5);
    __Vtemp_h4b1eef28__0[0xbU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 
                                          >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
            ? ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[0U]))
                ? ((5U < (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0
                    : ((0x17fU >= (0x1ffU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                             << 6U)))
                        ? (((QData)((IData)(__Vtemp_h4b1eef28__0[
                                            (((IData)(0x3fU) 
                                              + (0x1ffU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                 << 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                  << 6U))))) 
                           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                << 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          __Vtemp_h4b1eef28__0[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                    << 6U))))) 
                              | ((QData)((IData)(__Vtemp_h4b1eef28__0[
                                                 (0xeU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                     << 1U))])) 
                                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                              << 6U)))))
                        : 0ULL)) : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[0U])) 
                                                     >> 2U))))
            : 0ULL);
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_next_pc 
        = (((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                 >> 0x14U)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
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
                                                (((0x303U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                    >> 0x14U)) 
                                                  | ((0x302U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                       >> 0x14U)) 
                                                     | ((0x301U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                          >> 0x14U)) 
                                                        | (0x300U 
                                                           != 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                            >> 0x14U)))))
                                                  ? 0ULL
                                                  : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h1aac6d5d__0
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h1aac6d5d__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h1aac6d5d__0);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_h69b407a3__0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((5U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_ha8b9f2cf__0) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                    & ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h1aac6d5d__0);
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
            = (0x3fU & (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
        = ((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
           == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
        = ((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN 
        = (0xffU & ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? ((IData)(0xfU) << (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)))
                     : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                         ? ((IData)(3U) << (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)))
                         : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                             ? ((IData)(0xffU) << (7U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)))
                             : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? ((IData)(1U) << 
                                    (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)))
                                 : 0U)))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
            = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag;
        vlSelf->riscv_soc__DOT___core_io_isram_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write = 0U;
        vlSelf->riscv_soc__DOT___core_io_isram_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_h69b407a3__0));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_h69b407a3__0)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((5U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_ha8b9f2cf__0)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hdd720947__0) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_h69b407a3__0)))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid));
    __Vtemp_hcc513de2__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    __Vtemp_hcc513de2__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                        >> 0x20U));
    __Vtemp_hcc513de2__0[2U] = 0U;
    __Vtemp_h3d47f6e6__0[0U] = (IData)(((- (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra))) 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp_h3d47f6e6__0[1U] = (IData)((((- (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra))) 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                        >> 0x20U));
    __Vtemp_h3d47f6e6__0[2U] = 0U;
    __Vtemp_hd5a7caf0__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra;
    __Vtemp_hd5a7caf0__0[1U] = 0U;
    __Vtemp_hd5a7caf0__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h88d5841d__0, __Vtemp_h3d47f6e6__0, __Vtemp_hd5a7caf0__0);
    VL_ADD_W(3, __Vtemp_he31f52ef__0, __Vtemp_hcc513de2__0, __Vtemp_h88d5841d__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U] 
        = __Vtemp_he31f52ef__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
        = __Vtemp_he31f52ef__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U] 
        = (1U & __Vtemp_he31f52ef__0[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    __Vtemp_hb7d79f8d__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U];
    __Vtemp_hb7d79f8d__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U];
    __Vtemp_hb7d79f8d__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U];
    __Vtemp_hb7d79f8d__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U];
    __Vtemp_hb7d79f8d__0[4U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U];
    __Vtemp_hb7d79f8d__0[5U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U];
    __Vtemp_hb7d79f8d__0[6U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U];
    __Vtemp_hb7d79f8d__0[7U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U];
    __Vtemp_hb7d79f8d__0[8U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U];
    __Vtemp_hb7d79f8d__0[9U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U];
    __Vtemp_hb7d79f8d__0[0xaU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U];
    __Vtemp_hb7d79f8d__0[0xbU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U];
    __Vtemp_hb7d79f8d__0[0xcU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U];
    __Vtemp_hb7d79f8d__0[0xdU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U];
    __Vtemp_hb7d79f8d__0[0xeU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U];
    __Vtemp_hb7d79f8d__0[0xfU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U];
    __Vtemp_hb7d79f8d__0[0x10U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U];
    __Vtemp_hb7d79f8d__0[0x11U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U];
    __Vtemp_hb7d79f8d__0[0x12U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U];
    __Vtemp_hb7d79f8d__0[0x13U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U];
    __Vtemp_hb7d79f8d__0[0x14U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U];
    __Vtemp_hb7d79f8d__0[0x15U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U];
    __Vtemp_hb7d79f8d__0[0x16U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U];
    __Vtemp_hb7d79f8d__0[0x17U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U];
    __Vtemp_hb7d79f8d__0[0x18U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U];
    __Vtemp_hb7d79f8d__0[0x19U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U];
    __Vtemp_hb7d79f8d__0[0x1aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U];
    __Vtemp_hb7d79f8d__0[0x1bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U];
    __Vtemp_hb7d79f8d__0[0x1cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U];
    __Vtemp_hb7d79f8d__0[0x1dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U];
    __Vtemp_hb7d79f8d__0[0x1eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U];
    __Vtemp_hb7d79f8d__0[0x1fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U];
    __Vtemp_hb7d79f8d__0[0x20U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U];
    __Vtemp_hb7d79f8d__0[0x21U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U];
    __Vtemp_hb7d79f8d__0[0x22U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U];
    __Vtemp_hb7d79f8d__0[0x23U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U];
    __Vtemp_hb7d79f8d__0[0x24U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U];
    __Vtemp_hb7d79f8d__0[0x25U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U];
    __Vtemp_hb7d79f8d__0[0x26U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U];
    __Vtemp_hb7d79f8d__0[0x27U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U];
    __Vtemp_hb7d79f8d__0[0x28U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U];
    __Vtemp_hb7d79f8d__0[0x29U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U];
    __Vtemp_hb7d79f8d__0[0x2aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U];
    __Vtemp_hb7d79f8d__0[0x2bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U];
    __Vtemp_hb7d79f8d__0[0x2cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U];
    __Vtemp_hb7d79f8d__0[0x2dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U];
    __Vtemp_hb7d79f8d__0[0x2eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U];
    __Vtemp_hb7d79f8d__0[0x2fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U];
    __Vtemp_hb7d79f8d__0[0x30U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U];
    __Vtemp_hb7d79f8d__0[0x31U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U];
    __Vtemp_hb7d79f8d__0[0x32U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U];
    __Vtemp_hb7d79f8d__0[0x33U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U];
    __Vtemp_hb7d79f8d__0[0x34U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U];
    __Vtemp_hb7d79f8d__0[0x35U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U];
    __Vtemp_hb7d79f8d__0[0x36U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U];
    __Vtemp_hb7d79f8d__0[0x37U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U];
    __Vtemp_hb7d79f8d__0[0x38U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U];
    __Vtemp_hb7d79f8d__0[0x39U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U];
    __Vtemp_hb7d79f8d__0[0x3aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U];
    __Vtemp_hb7d79f8d__0[0x3bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U];
    __Vtemp_hb7d79f8d__0[0x3cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U];
    __Vtemp_hb7d79f8d__0[0x3dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U];
    __Vtemp_hb7d79f8d__0[0x3eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U];
    __Vtemp_hb7d79f8d__0[0x3fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_hf11864d2__0, __Vtemp_hb7d79f8d__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_hee10b92c__0, __Vtemp_hf11864d2__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_h4897b402__0, __Vtemp_hee10b92c__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_hbd76b5c1__0, __Vtemp_h4897b402__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_h933c34ec__0, __Vtemp_hbd76b5c1__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_hb01248ff__0, __Vtemp_h933c34ec__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_h192ccbe0__0, __Vtemp_hb01248ff__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_h26738ea2__0, __Vtemp_h192ccbe0__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_hdf476387__0, __Vtemp_h26738ea2__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_h53a4dec5__0, __Vtemp_hdf476387__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h96ff4363__0, __Vtemp_h53a4dec5__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_h08529f94__0, __Vtemp_h96ff4363__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_h926b4a33__0, __Vtemp_h08529f94__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h6b443029__0, __Vtemp_h926b4a33__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_h4bc73d6c__0, __Vtemp_h6b443029__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_hf1bd8f05__0, __Vtemp_h4bc73d6c__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_had3e972a__0, __Vtemp_hf1bd8f05__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_hddf90f8c__0, __Vtemp_had3e972a__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_h6c52574f__0, __Vtemp_hddf90f8c__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_h075d6cc5__0, __Vtemp_h6c52574f__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_hd6d8ce00__0, __Vtemp_h075d6cc5__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_h9adbd769__0, __Vtemp_hd6d8ce00__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_h236853cd__0, __Vtemp_h9adbd769__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_he7bc82e3__0, __Vtemp_h236853cd__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_h15aa864b__0, __Vtemp_he7bc82e3__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_hec060979__0, __Vtemp_h15aa864b__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_h907ad3f2__0, __Vtemp_hec060979__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h5918ad45__0, __Vtemp_h907ad3f2__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_h9f5e1898__0, __Vtemp_h5918ad45__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_hb12e88dd__0, __Vtemp_h9f5e1898__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_h6f95cdf5__0, __Vtemp_hb12e88dd__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_h623fb527__0, __Vtemp_h6f95cdf5__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_h655dfcc6__0, __Vtemp_h623fb527__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_h7619d1c4__0, __Vtemp_h655dfcc6__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_h1bbf8824__0, __Vtemp_h7619d1c4__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_h9a65ff28__0, __Vtemp_h1bbf8824__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_h040a05bb__0, __Vtemp_h9a65ff28__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_h7681913a__0, __Vtemp_h040a05bb__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_h4725b82a__0, __Vtemp_h7681913a__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h00cfd5aa__0, __Vtemp_h4725b82a__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_h8c0eaa1b__0, __Vtemp_h00cfd5aa__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h086e8b50__0, __Vtemp_h8c0eaa1b__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_hed61d1d0__0, __Vtemp_h086e8b50__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_hd73f59ad__0, __Vtemp_hed61d1d0__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_h129fab18__0, __Vtemp_hd73f59ad__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_h0b0184f1__0, __Vtemp_h129fab18__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_h458174dd__0, __Vtemp_h0b0184f1__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_ha8fac9ae__0, __Vtemp_h458174dd__0, vlSelf->riscv_soc__DOT__sram0__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_ha8fac9ae__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_ha8fac9ae__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_ha8fac9ae__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_ha8fac9ae__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_ha8fac9ae__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_ha8fac9ae__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_ha8fac9ae__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_ha8fac9ae__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    __Vtemp_hfa2da9a3__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U];
    __Vtemp_hfa2da9a3__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U];
    __Vtemp_hfa2da9a3__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U];
    __Vtemp_hfa2da9a3__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U];
    __Vtemp_hfa2da9a3__0[4U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U];
    __Vtemp_hfa2da9a3__0[5U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U];
    __Vtemp_hfa2da9a3__0[6U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U];
    __Vtemp_hfa2da9a3__0[7U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U];
    __Vtemp_hfa2da9a3__0[8U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U];
    __Vtemp_hfa2da9a3__0[9U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U];
    __Vtemp_hfa2da9a3__0[0xaU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U];
    __Vtemp_hfa2da9a3__0[0xbU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U];
    __Vtemp_hfa2da9a3__0[0xcU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U];
    __Vtemp_hfa2da9a3__0[0xdU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U];
    __Vtemp_hfa2da9a3__0[0xeU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U];
    __Vtemp_hfa2da9a3__0[0xfU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U];
    __Vtemp_hfa2da9a3__0[0x10U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U];
    __Vtemp_hfa2da9a3__0[0x11U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U];
    __Vtemp_hfa2da9a3__0[0x12U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U];
    __Vtemp_hfa2da9a3__0[0x13U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U];
    __Vtemp_hfa2da9a3__0[0x14U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U];
    __Vtemp_hfa2da9a3__0[0x15U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U];
    __Vtemp_hfa2da9a3__0[0x16U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U];
    __Vtemp_hfa2da9a3__0[0x17U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U];
    __Vtemp_hfa2da9a3__0[0x18U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U];
    __Vtemp_hfa2da9a3__0[0x19U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U];
    __Vtemp_hfa2da9a3__0[0x1aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U];
    __Vtemp_hfa2da9a3__0[0x1bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U];
    __Vtemp_hfa2da9a3__0[0x1cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U];
    __Vtemp_hfa2da9a3__0[0x1dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U];
    __Vtemp_hfa2da9a3__0[0x1eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U];
    __Vtemp_hfa2da9a3__0[0x1fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U];
    __Vtemp_hfa2da9a3__0[0x20U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U];
    __Vtemp_hfa2da9a3__0[0x21U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U];
    __Vtemp_hfa2da9a3__0[0x22U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U];
    __Vtemp_hfa2da9a3__0[0x23U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U];
    __Vtemp_hfa2da9a3__0[0x24U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U];
    __Vtemp_hfa2da9a3__0[0x25U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U];
    __Vtemp_hfa2da9a3__0[0x26U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U];
    __Vtemp_hfa2da9a3__0[0x27U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U];
    __Vtemp_hfa2da9a3__0[0x28U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U];
    __Vtemp_hfa2da9a3__0[0x29U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U];
    __Vtemp_hfa2da9a3__0[0x2aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U];
    __Vtemp_hfa2da9a3__0[0x2bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U];
    __Vtemp_hfa2da9a3__0[0x2cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U];
    __Vtemp_hfa2da9a3__0[0x2dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U];
    __Vtemp_hfa2da9a3__0[0x2eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U];
    __Vtemp_hfa2da9a3__0[0x2fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U];
    __Vtemp_hfa2da9a3__0[0x30U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U];
    __Vtemp_hfa2da9a3__0[0x31U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U];
    __Vtemp_hfa2da9a3__0[0x32U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U];
    __Vtemp_hfa2da9a3__0[0x33U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U];
    __Vtemp_hfa2da9a3__0[0x34U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U];
    __Vtemp_hfa2da9a3__0[0x35U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U];
    __Vtemp_hfa2da9a3__0[0x36U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U];
    __Vtemp_hfa2da9a3__0[0x37U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U];
    __Vtemp_hfa2da9a3__0[0x38U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U];
    __Vtemp_hfa2da9a3__0[0x39U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U];
    __Vtemp_hfa2da9a3__0[0x3aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U];
    __Vtemp_hfa2da9a3__0[0x3bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U];
    __Vtemp_hfa2da9a3__0[0x3cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U];
    __Vtemp_hfa2da9a3__0[0x3dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U];
    __Vtemp_hfa2da9a3__0[0x3eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U];
    __Vtemp_hfa2da9a3__0[0x3fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_h5f17283c__0, __Vtemp_hfa2da9a3__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_hc460765d__0, __Vtemp_h5f17283c__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_h65304e4f__0, __Vtemp_hc460765d__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_h21ade1b2__0, __Vtemp_h65304e4f__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_hf48c131f__0, __Vtemp_h21ade1b2__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_h413ac4fc__0, __Vtemp_hf48c131f__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_h4adee1f6__0, __Vtemp_h413ac4fc__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_h30825d1d__0, __Vtemp_h4adee1f6__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_h13913e90__0, __Vtemp_h30825d1d__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_hd41da468__0, __Vtemp_h13913e90__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h622960d7__0, __Vtemp_hd41da468__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_h0edde5e5__0, __Vtemp_h622960d7__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_h5ebac614__0, __Vtemp_h0edde5e5__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h6c75432e__0, __Vtemp_h5ebac614__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_hdd9d9934__0, __Vtemp_h6c75432e__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_h84b54f4d__0, __Vtemp_hdd9d9934__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_h8eb5c6e2__0, __Vtemp_h84b54f4d__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_h7f3e3480__0, __Vtemp_h8eb5c6e2__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_hcfcd490c__0, __Vtemp_h7f3e3480__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_hceecaa67__0, __Vtemp_hcfcd490c__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_h7d8795c1__0, __Vtemp_hceecaa67__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_h8964e1a5__0, __Vtemp_h7d8795c1__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_hbfa432fc__0, __Vtemp_h8964e1a5__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_h2b56ebcf__0, __Vtemp_hbfa432fc__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_h5d376e9f__0, __Vtemp_h2b56ebcf__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_h117bdc47__0, __Vtemp_h5d376e9f__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_h23eb0d28__0, __Vtemp_h117bdc47__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h0ec0e7cc__0, __Vtemp_h23eb0d28__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_h51f07506__0, __Vtemp_h0ec0e7cc__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_h7f798407__0, __Vtemp_h51f07506__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_hee62ea84__0, __Vtemp_h7f798407__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_h5f6cab50__0, __Vtemp_hee62ea84__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_hd326eddc__0, __Vtemp_h5f6cab50__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_h0567beb2__0, __Vtemp_hd326eddc__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_hdfe3607a__0, __Vtemp_h0567beb2__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_h53d804d3__0, __Vtemp_hdfe3607a__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_hb9a5963e__0, __Vtemp_h53d804d3__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_h3be54a1e__0, __Vtemp_hb9a5963e__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_h92a796fa__0, __Vtemp_h3be54a1e__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h87c43da7__0, __Vtemp_h92a796fa__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_h1f1ff616__0, __Vtemp_h87c43da7__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h429df607__0, __Vtemp_h1f1ff616__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_hf183fbe0__0, __Vtemp_h429df607__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_h4f845b3e__0, __Vtemp_hf183fbe0__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_h46115743__0, __Vtemp_h4f845b3e__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_h6143e804__0, __Vtemp_h46115743__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_hdcc99421__0, __Vtemp_h6143e804__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_h0dedb599__0, __Vtemp_hdcc99421__0, vlSelf->riscv_soc__DOT__sram1__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h0dedb599__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h0dedb599__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h0dedb599__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h0dedb599__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h0dedb599__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h0dedb599__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h0dedb599__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h0dedb599__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    __Vtemp_h19d14141__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U];
    __Vtemp_h19d14141__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U];
    __Vtemp_h19d14141__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U];
    __Vtemp_h19d14141__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U];
    __Vtemp_h19d14141__0[4U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U];
    __Vtemp_h19d14141__0[5U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U];
    __Vtemp_h19d14141__0[6U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U];
    __Vtemp_h19d14141__0[7U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U];
    __Vtemp_h19d14141__0[8U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U];
    __Vtemp_h19d14141__0[9U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U];
    __Vtemp_h19d14141__0[0xaU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U];
    __Vtemp_h19d14141__0[0xbU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U];
    __Vtemp_h19d14141__0[0xcU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U];
    __Vtemp_h19d14141__0[0xdU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U];
    __Vtemp_h19d14141__0[0xeU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U];
    __Vtemp_h19d14141__0[0xfU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U];
    __Vtemp_h19d14141__0[0x10U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U];
    __Vtemp_h19d14141__0[0x11U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U];
    __Vtemp_h19d14141__0[0x12U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U];
    __Vtemp_h19d14141__0[0x13U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U];
    __Vtemp_h19d14141__0[0x14U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U];
    __Vtemp_h19d14141__0[0x15U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U];
    __Vtemp_h19d14141__0[0x16U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U];
    __Vtemp_h19d14141__0[0x17U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U];
    __Vtemp_h19d14141__0[0x18U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U];
    __Vtemp_h19d14141__0[0x19U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U];
    __Vtemp_h19d14141__0[0x1aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U];
    __Vtemp_h19d14141__0[0x1bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U];
    __Vtemp_h19d14141__0[0x1cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U];
    __Vtemp_h19d14141__0[0x1dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U];
    __Vtemp_h19d14141__0[0x1eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U];
    __Vtemp_h19d14141__0[0x1fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U];
    __Vtemp_h19d14141__0[0x20U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U];
    __Vtemp_h19d14141__0[0x21U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U];
    __Vtemp_h19d14141__0[0x22U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U];
    __Vtemp_h19d14141__0[0x23U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U];
    __Vtemp_h19d14141__0[0x24U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U];
    __Vtemp_h19d14141__0[0x25U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U];
    __Vtemp_h19d14141__0[0x26U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U];
    __Vtemp_h19d14141__0[0x27U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U];
    __Vtemp_h19d14141__0[0x28U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U];
    __Vtemp_h19d14141__0[0x29U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U];
    __Vtemp_h19d14141__0[0x2aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U];
    __Vtemp_h19d14141__0[0x2bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U];
    __Vtemp_h19d14141__0[0x2cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U];
    __Vtemp_h19d14141__0[0x2dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U];
    __Vtemp_h19d14141__0[0x2eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U];
    __Vtemp_h19d14141__0[0x2fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U];
    __Vtemp_h19d14141__0[0x30U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U];
    __Vtemp_h19d14141__0[0x31U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U];
    __Vtemp_h19d14141__0[0x32U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U];
    __Vtemp_h19d14141__0[0x33U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U];
    __Vtemp_h19d14141__0[0x34U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U];
    __Vtemp_h19d14141__0[0x35U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U];
    __Vtemp_h19d14141__0[0x36U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U];
    __Vtemp_h19d14141__0[0x37U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U];
    __Vtemp_h19d14141__0[0x38U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U];
    __Vtemp_h19d14141__0[0x39U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U];
    __Vtemp_h19d14141__0[0x3aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U];
    __Vtemp_h19d14141__0[0x3bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U];
    __Vtemp_h19d14141__0[0x3cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U];
    __Vtemp_h19d14141__0[0x3dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U];
    __Vtemp_h19d14141__0[0x3eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U];
    __Vtemp_h19d14141__0[0x3fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_hf4a0a080__0, __Vtemp_h19d14141__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_h0b283d2e__0, __Vtemp_hf4a0a080__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_h1794779a__0, __Vtemp_h0b283d2e__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_hc027067a__0, __Vtemp_h1794779a__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_h4b3c5a8e__0, __Vtemp_hc027067a__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_h5e37cf7f__0, __Vtemp_h4b3c5a8e__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_hb507e173__0, __Vtemp_h5e37cf7f__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_hb807b5fe__0, __Vtemp_hb507e173__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_h6bedc944__0, __Vtemp_hb807b5fe__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_hb11a826b__0, __Vtemp_h6bedc944__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h345147ce__0, __Vtemp_hb11a826b__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_hf6d2c18b__0, __Vtemp_h345147ce__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_h446f54df__0, __Vtemp_hf6d2c18b__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h518088ae__0, __Vtemp_h446f54df__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_h110ae371__0, __Vtemp_h518088ae__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_heb174dd6__0, __Vtemp_h110ae371__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_h5a2c5630__0, __Vtemp_heb174dd6__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_hf96fd5d2__0, __Vtemp_h5a2c5630__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_hb90f2d26__0, __Vtemp_hf96fd5d2__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_h772048b3__0, __Vtemp_hb90f2d26__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_h1baea715__0, __Vtemp_h772048b3__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_h4d57a18e__0, __Vtemp_h1baea715__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_h9631429f__0, __Vtemp_h4d57a18e__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_h0812235f__0, __Vtemp_h9631429f__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_hc99bfc48__0, __Vtemp_h0812235f__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_h20add20f__0, __Vtemp_hc99bfc48__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_h01b66c0a__0, __Vtemp_h20add20f__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h77fe08c1__0, __Vtemp_h01b66c0a__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_h26bd7213__0, __Vtemp_h77fe08c1__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_h0f988173__0, __Vtemp_h26bd7213__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_h5b58fb26__0, __Vtemp_h0f988173__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_hc18256be__0, __Vtemp_h5b58fb26__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_he9055853__0, __Vtemp_hc18256be__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_h80378c28__0, __Vtemp_he9055853__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_he4e6466d__0, __Vtemp_h80378c28__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_h6f903edd__0, __Vtemp_he4e6466d__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_h5e86fc63__0, __Vtemp_h6f903edd__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_h2f1a4ae7__0, __Vtemp_h5e86fc63__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_h77655247__0, __Vtemp_h2f1a4ae7__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h1bf94a6d__0, __Vtemp_h77655247__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_h7183f88a__0, __Vtemp_h1bf94a6d__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h9b332d69__0, __Vtemp_h7183f88a__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_h7c9ae78e__0, __Vtemp_h9b332d69__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_h024b6940__0, __Vtemp_h7c9ae78e__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_hfac35c78__0, __Vtemp_h024b6940__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_h1a90d814__0, __Vtemp_hfac35c78__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_h5b619b1c__0, __Vtemp_h1a90d814__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_h7ca6debf__0, __Vtemp_h5b619b1c__0, vlSelf->riscv_soc__DOT__sram2__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h7ca6debf__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h7ca6debf__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h7ca6debf__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h7ca6debf__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h7ca6debf__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h7ca6debf__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h7ca6debf__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h7ca6debf__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    __Vtemp_ha02c6ae0__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U];
    __Vtemp_ha02c6ae0__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U];
    __Vtemp_ha02c6ae0__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U];
    __Vtemp_ha02c6ae0__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U];
    __Vtemp_ha02c6ae0__0[4U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U];
    __Vtemp_ha02c6ae0__0[5U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U];
    __Vtemp_ha02c6ae0__0[6U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U];
    __Vtemp_ha02c6ae0__0[7U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U];
    __Vtemp_ha02c6ae0__0[8U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U];
    __Vtemp_ha02c6ae0__0[9U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U];
    __Vtemp_ha02c6ae0__0[0xaU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U];
    __Vtemp_ha02c6ae0__0[0xbU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U];
    __Vtemp_ha02c6ae0__0[0xcU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U];
    __Vtemp_ha02c6ae0__0[0xdU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U];
    __Vtemp_ha02c6ae0__0[0xeU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U];
    __Vtemp_ha02c6ae0__0[0xfU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U];
    __Vtemp_ha02c6ae0__0[0x10U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U];
    __Vtemp_ha02c6ae0__0[0x11U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U];
    __Vtemp_ha02c6ae0__0[0x12U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U];
    __Vtemp_ha02c6ae0__0[0x13U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U];
    __Vtemp_ha02c6ae0__0[0x14U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U];
    __Vtemp_ha02c6ae0__0[0x15U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U];
    __Vtemp_ha02c6ae0__0[0x16U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U];
    __Vtemp_ha02c6ae0__0[0x17U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U];
    __Vtemp_ha02c6ae0__0[0x18U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U];
    __Vtemp_ha02c6ae0__0[0x19U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U];
    __Vtemp_ha02c6ae0__0[0x1aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U];
    __Vtemp_ha02c6ae0__0[0x1bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U];
    __Vtemp_ha02c6ae0__0[0x1cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U];
    __Vtemp_ha02c6ae0__0[0x1dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U];
    __Vtemp_ha02c6ae0__0[0x1eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U];
    __Vtemp_ha02c6ae0__0[0x1fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U];
    __Vtemp_ha02c6ae0__0[0x20U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U];
    __Vtemp_ha02c6ae0__0[0x21U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U];
    __Vtemp_ha02c6ae0__0[0x22U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U];
    __Vtemp_ha02c6ae0__0[0x23U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U];
    __Vtemp_ha02c6ae0__0[0x24U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U];
    __Vtemp_ha02c6ae0__0[0x25U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U];
    __Vtemp_ha02c6ae0__0[0x26U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U];
    __Vtemp_ha02c6ae0__0[0x27U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U];
    __Vtemp_ha02c6ae0__0[0x28U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U];
    __Vtemp_ha02c6ae0__0[0x29U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U];
    __Vtemp_ha02c6ae0__0[0x2aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U];
    __Vtemp_ha02c6ae0__0[0x2bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U];
    __Vtemp_ha02c6ae0__0[0x2cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U];
    __Vtemp_ha02c6ae0__0[0x2dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U];
    __Vtemp_ha02c6ae0__0[0x2eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U];
    __Vtemp_ha02c6ae0__0[0x2fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U];
    __Vtemp_ha02c6ae0__0[0x30U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U];
    __Vtemp_ha02c6ae0__0[0x31U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U];
    __Vtemp_ha02c6ae0__0[0x32U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U];
    __Vtemp_ha02c6ae0__0[0x33U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U];
    __Vtemp_ha02c6ae0__0[0x34U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U];
    __Vtemp_ha02c6ae0__0[0x35U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U];
    __Vtemp_ha02c6ae0__0[0x36U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U];
    __Vtemp_ha02c6ae0__0[0x37U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U];
    __Vtemp_ha02c6ae0__0[0x38U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U];
    __Vtemp_ha02c6ae0__0[0x39U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U];
    __Vtemp_ha02c6ae0__0[0x3aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U];
    __Vtemp_ha02c6ae0__0[0x3bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U];
    __Vtemp_ha02c6ae0__0[0x3cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U];
    __Vtemp_ha02c6ae0__0[0x3dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U];
    __Vtemp_ha02c6ae0__0[0x3eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U];
    __Vtemp_ha02c6ae0__0[0x3fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_h288a1fd7__0, __Vtemp_ha02c6ae0__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_hb46d0a31__0, __Vtemp_h288a1fd7__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_hfc41bef4__0, __Vtemp_hb46d0a31__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_h2f4dd1cb__0, __Vtemp_hfc41bef4__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_h6328f1a0__0, __Vtemp_h2f4dd1cb__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_h9358034a__0, __Vtemp_h6328f1a0__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_h5b626533__0, __Vtemp_h9358034a__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_he3588d33__0, __Vtemp_h5b626533__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_h51013511__0, __Vtemp_he3588d33__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_hf95e2f71__0, __Vtemp_h51013511__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h60861dc6__0, __Vtemp_hf95e2f71__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_hbb6d165d__0, __Vtemp_h60861dc6__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_ha20a44b6__0, __Vtemp_hbb6d165d__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h9857101e__0, __Vtemp_ha20a44b6__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_h76e6381a__0, __Vtemp_h9857101e__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_h63e8ea17__0, __Vtemp_h76e6381a__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_hfc2560f8__0, __Vtemp_h63e8ea17__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_hed203a2f__0, __Vtemp_hfc2560f8__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_hc466730f__0, __Vtemp_hed203a2f__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_h4d3b59a7__0, __Vtemp_hc466730f__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_h42f2dd2e__0, __Vtemp_h4d3b59a7__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_h33cc9b03__0, __Vtemp_h42f2dd2e__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_h2eb5870e__0, __Vtemp_h33cc9b03__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_h4bfb44e1__0, __Vtemp_h2eb5870e__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_h26b9cfeb__0, __Vtemp_h4bfb44e1__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_h12c7dccb__0, __Vtemp_h26b9cfeb__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_h70e62279__0, __Vtemp_h12c7dccb__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_hfd86102a__0, __Vtemp_h70e62279__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_h3ed24fa1__0, __Vtemp_hfd86102a__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_h64245e48__0, __Vtemp_h3ed24fa1__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_hc9e33897__0, __Vtemp_h64245e48__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_hc2799081__0, __Vtemp_hc9e33897__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_h17e540cd__0, __Vtemp_hc2799081__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_h74d6f39f__0, __Vtemp_h17e540cd__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_hbb610d16__0, __Vtemp_h74d6f39f__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_hc85eb47b__0, __Vtemp_hbb610d16__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_h06a08a03__0, __Vtemp_hc85eb47b__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_hc49af87b__0, __Vtemp_h06a08a03__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_hf2b802a4__0, __Vtemp_hc49af87b__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h59d6e745__0, __Vtemp_hf2b802a4__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_h764f0b2f__0, __Vtemp_h59d6e745__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h65196771__0, __Vtemp_h764f0b2f__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_h19bdf899__0, __Vtemp_h65196771__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_had582af6__0, __Vtemp_h19bdf899__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_h49dcc629__0, __Vtemp_had582af6__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_hc818fb9b__0, __Vtemp_h49dcc629__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_h52e9001a__0, __Vtemp_hc818fb9b__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_h68cab1f4__0, __Vtemp_h52e9001a__0, vlSelf->riscv_soc__DOT__sram3__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h68cab1f4__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h68cab1f4__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h68cab1f4__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h68cab1f4__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h68cab1f4__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h68cab1f4__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h68cab1f4__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h68cab1f4__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_isram_addr) 
                           << 7U))));
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
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid 
        = ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               >> 4U)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel) {
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
               << (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                            << 3U)));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                          >> 0x3fU)) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                >> 0x3fU))
                  : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
                     >> 0x1fU)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_tag_valid_tag_valid_0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                   ? (IData)(
                                                                             ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU) 
                                                                              >> 0x20U))
                                                                   : (IData)(
                                                                             ((0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))) 
                                                                              >> 0x20U))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU))
                                                                    : (IData)(
                                                                              (0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_tag_valid_tag_valid_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                   ? (IData)(
                                                                             ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU) 
                                                                              >> 0x20U))
                                                                   : (IData)(
                                                                             ((0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))) 
                                                                              >> 0x20U))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU))
                                                                    : (IData)(
                                                                              (0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))))))))));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT___core_io_dsram_addr = (0x3fU 
                                                   & ((0U 
                                                       != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                                                       : (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                                                  >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))));
    __Vtemp_hfdc68230__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))));
    __Vtemp_hfdc68230__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))) 
                                        >> 0x20U));
    __Vtemp_hfdc68230__0[2U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                        << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)));
    __Vtemp_hfdc68230__0[3U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                         << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)) 
                                        >> 0x20U));
    __Vtemp_hfdc68230__0[4U] = (IData)((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)));
    __Vtemp_hfdc68230__0[5U] = (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)) 
                                        >> 0x20U));
    __Vtemp_hfdc68230__0[6U] = (IData)((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))));
    __Vtemp_hfdc68230__0[7U] = (IData)(((QData)((IData)(
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))) 
                                        >> 0x20U));
    __Vtemp_hfdc68230__0[8U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp_hfdc68230__0[9U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                        >> 0x20U));
    __Vtemp_hfdc68230__0[0xaU] = (IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                           ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                           : (((1U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data) 
                                              >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))));
    __Vtemp_hfdc68230__0[0xbU] = (IData)((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                            ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                            : (((1U 
                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                 ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data) 
                                               >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))) 
                                          >> 0x20U));
    __Vtemp_hfdc68230__0[0xcU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp_hfdc68230__0[0xdU] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                          >> 0x20U));
    __Vtemp_hfdc68230__0[0xeU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                          & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp_hfdc68230__0[0xfU] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                          >> 0x20U));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq) {
        __Vtemp_h1d317cd2__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp_h1d317cd2__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U));
    } else {
        __Vtemp_h1d317cd2__0[0U] = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
        __Vtemp_h1d317cd2__0[1U] = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                            >> 0x20U));
    }
    __Vtemp_h1d317cd2__0[2U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                   ? (IData)((4ULL 
                                              + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                 << 1U) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                            ? 1U : 0U));
    __Vtemp_h1d317cd2__0[3U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                   ? (IData)((4ULL 
                                              + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                 >> 0x1fU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                ? (IData)(
                                                          ((4ULL 
                                                            + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))) 
                                              << 1U));
    __Vtemp_h1d317cd2__0[4U] = (((IData)((0x8000000000000000ULL 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 1U))) 
                                 << 3U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                              ? (IData)(
                                                        ((4ULL 
                                                          + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                         >> 0x20U))
                                              : (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                         >> 0x20U))) 
                                            >> 0x1fU) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                ? 0U
                                                : 1U) 
                                              << 1U)));
    __Vtemp_h1d317cd2__0[5U] = (((IData)((0x8000000000000000ULL 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 1U))) 
                                 >> 0x1dU) | ((IData)(
                                                      ((0x8000000000000000ULL 
                                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 1U)) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h1d317cd2__0[6U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                                 << 3U) | ((IData)(
                                                   ((0x8000000000000000ULL 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                        >> 1U)) 
                                                    >> 0x20U)) 
                                           >> 0x1dU));
    __Vtemp_h1d317cd2__0[7U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                                 >> 0x1dU) | ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h1d317cd2__0[8U] = (8U | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                         : (IData)(
                                                   (4ULL 
                                                    + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))) 
                                       << 4U) | ((IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                          >> 0x20U)) 
                                                 >> 0x1dU)));
    __Vtemp_h1d317cd2__0[9U] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                   : (IData)((4ULL 
                                              + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))) 
                                 >> 0x1cU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))
                                                : (IData)(
                                                          ((4ULL 
                                                            + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                           >> 0x20U))) 
                                              << 4U));
    __Vtemp_h1d317cd2__0[0xaU] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                     ? (IData)((4ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                   << 5U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))
                                                : (IData)(
                                                          ((4ULL 
                                                            + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                           >> 0x20U))) 
                                              >> 0x1cU) 
                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                  ? 1U
                                                  : 0U) 
                                                << 4U)));
    __Vtemp_h1d317cd2__0[0xbU] = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                     ? (IData)((4ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                   >> 0x1bU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                  ? (IData)(
                                                            ((4ULL 
                                                              + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                             >> 0x20U))
                                                  : (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                                                << 5U));
    __Vtemp_h1d317cd2__0[0xcU] = ((((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                     ? (IData)((4ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                   << 6U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? (IData)(
                                                          ((4ULL 
                                                            + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))) 
                                              >> 0x1bU) 
                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                  ? 0U
                                                  : 1U) 
                                                << 5U)));
    __Vtemp_h1d317cd2__0[0xdU] = ((((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                     ? (IData)((4ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                   >> 0x1aU) | (((1U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                  ? (IData)(
                                                            ((4ULL 
                                                              + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                             >> 0x20U))
                                                  : (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                                                << 6U));
    __Vtemp_h1d317cd2__0[0xeU] = ((((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                     : (IData)((4ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))) 
                                   << 7U) | ((((1U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? (IData)(
                                                          ((4ULL 
                                                            + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))) 
                                              >> 0x1aU) 
                                             | (((1U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                  ? 0U
                                                  : 1U) 
                                                << 6U)));
    __Vtemp_h1d317cd2__0[0xfU] = ((((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                     : (IData)((4ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))) 
                                   >> 0x19U) | (((1U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                  ? (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))
                                                  : (IData)(
                                                            ((4ULL 
                                                              + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                             >> 0x20U))) 
                                                << 7U));
    __Vtemp_h1d317cd2__0[0x10U] = ((((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                      ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                 >> 0x20U))
                                      : (IData)(((4ULL 
                                                  + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                 >> 0x20U))) 
                                    >> 0x19U) | (((1U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                   ? 1U
                                                   : 0U) 
                                                 << 7U));
    if ((0x207U >= (0x3ffU & ((IData)(0x41U) * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))) {
        __Vtemp_hcc698cd4__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0x41U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))))
                                      ? 0U : (__Vtemp_h1d317cd2__0[
                                              ((IData)(1U) 
                                               + (0x1fU 
                                                  & (((IData)(0x41U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x41U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U))))))) 
                                    | (__Vtemp_h1d317cd2__0[
                                       (0x1fU & (((IData)(0x41U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U))) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
        __Vtemp_hcc698cd4__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0x41U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))))
                                      ? 0U : (__Vtemp_h1d317cd2__0[
                                              ((IData)(2U) 
                                               + (0x1fU 
                                                  & (((IData)(0x41U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x41U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U))))))) 
                                    | (__Vtemp_h1d317cd2__0[
                                       ((IData)(1U) 
                                        + (0x1fU & 
                                           (((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
        __Vtemp_hcc698cd4__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0x41U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))))
                                      ? 0U : (__Vtemp_h1d317cd2__0[
                                              ((IData)(3U) 
                                               + (0x1fU 
                                                  & (((IData)(0x41U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x41U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U))))))) 
                                    | (__Vtemp_h1d317cd2__0[
                                       ((IData)(2U) 
                                        + (0x1fU & 
                                           (((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))));
    } else {
        __Vtemp_hcc698cd4__0[0U] = 0U;
        __Vtemp_hcc698cd4__0[1U] = 0U;
        __Vtemp_hcc698cd4__0[2U] = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_ha332c60d__0[0U] 
        = __Vtemp_hcc698cd4__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_ha332c60d__0[1U] 
        = __Vtemp_hcc698cd4__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_ha332c60d__0[2U] 
        = (1U & __Vtemp_hcc698cd4__0[2U]);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
            = (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h21ff605d__0 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_ha332c60d__0[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_ha332c60d__0[0U])));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
            = (((QData)((IData)(__Vtemp_hfdc68230__0[
                                (((IData)(0x3fU) + 
                                  (0x1c0U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             << 4U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(__Vtemp_hfdc68230__0[
                                 (0xeU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 1U))])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h21ff605d__0 = 0ULL;
    }
    __Vtemp_h88771a62__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U];
    __Vtemp_h88771a62__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U];
    __Vtemp_h88771a62__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U];
    __Vtemp_h88771a62__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U];
    __Vtemp_h88771a62__0[4U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U];
    __Vtemp_h88771a62__0[5U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U];
    __Vtemp_h88771a62__0[6U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U];
    __Vtemp_h88771a62__0[7U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U];
    __Vtemp_h88771a62__0[8U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U];
    __Vtemp_h88771a62__0[9U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U];
    __Vtemp_h88771a62__0[0xaU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U];
    __Vtemp_h88771a62__0[0xbU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U];
    __Vtemp_h88771a62__0[0xcU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U];
    __Vtemp_h88771a62__0[0xdU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U];
    __Vtemp_h88771a62__0[0xeU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U];
    __Vtemp_h88771a62__0[0xfU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U];
    __Vtemp_h88771a62__0[0x10U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U];
    __Vtemp_h88771a62__0[0x11U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U];
    __Vtemp_h88771a62__0[0x12U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U];
    __Vtemp_h88771a62__0[0x13U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U];
    __Vtemp_h88771a62__0[0x14U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U];
    __Vtemp_h88771a62__0[0x15U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U];
    __Vtemp_h88771a62__0[0x16U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U];
    __Vtemp_h88771a62__0[0x17U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U];
    __Vtemp_h88771a62__0[0x18U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U];
    __Vtemp_h88771a62__0[0x19U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U];
    __Vtemp_h88771a62__0[0x1aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U];
    __Vtemp_h88771a62__0[0x1bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U];
    __Vtemp_h88771a62__0[0x1cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U];
    __Vtemp_h88771a62__0[0x1dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U];
    __Vtemp_h88771a62__0[0x1eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U];
    __Vtemp_h88771a62__0[0x1fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U];
    __Vtemp_h88771a62__0[0x20U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U];
    __Vtemp_h88771a62__0[0x21U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U];
    __Vtemp_h88771a62__0[0x22U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U];
    __Vtemp_h88771a62__0[0x23U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U];
    __Vtemp_h88771a62__0[0x24U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U];
    __Vtemp_h88771a62__0[0x25U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U];
    __Vtemp_h88771a62__0[0x26U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U];
    __Vtemp_h88771a62__0[0x27U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U];
    __Vtemp_h88771a62__0[0x28U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U];
    __Vtemp_h88771a62__0[0x29U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U];
    __Vtemp_h88771a62__0[0x2aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U];
    __Vtemp_h88771a62__0[0x2bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U];
    __Vtemp_h88771a62__0[0x2cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U];
    __Vtemp_h88771a62__0[0x2dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U];
    __Vtemp_h88771a62__0[0x2eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U];
    __Vtemp_h88771a62__0[0x2fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U];
    __Vtemp_h88771a62__0[0x30U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U];
    __Vtemp_h88771a62__0[0x31U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U];
    __Vtemp_h88771a62__0[0x32U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U];
    __Vtemp_h88771a62__0[0x33U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U];
    __Vtemp_h88771a62__0[0x34U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U];
    __Vtemp_h88771a62__0[0x35U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U];
    __Vtemp_h88771a62__0[0x36U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U];
    __Vtemp_h88771a62__0[0x37U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U];
    __Vtemp_h88771a62__0[0x38U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U];
    __Vtemp_h88771a62__0[0x39U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U];
    __Vtemp_h88771a62__0[0x3aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U];
    __Vtemp_h88771a62__0[0x3bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U];
    __Vtemp_h88771a62__0[0x3cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U];
    __Vtemp_h88771a62__0[0x3dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U];
    __Vtemp_h88771a62__0[0x3eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U];
    __Vtemp_h88771a62__0[0x3fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_h5402111c__0, __Vtemp_h88771a62__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_h1304a399__0, __Vtemp_h5402111c__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_h137bef71__0, __Vtemp_h1304a399__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_h20882af2__0, __Vtemp_h137bef71__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_h20080626__0, __Vtemp_h20882af2__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_hc28e62ac__0, __Vtemp_h20080626__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_h7e27fc36__0, __Vtemp_hc28e62ac__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_hed880295__0, __Vtemp_h7e27fc36__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_h371a4261__0, __Vtemp_hed880295__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_hf23bf6f6__0, __Vtemp_h371a4261__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h369548d0__0, __Vtemp_hf23bf6f6__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_h410bcd91__0, __Vtemp_h369548d0__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_h65e724f9__0, __Vtemp_h410bcd91__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h40a8316b__0, __Vtemp_h65e724f9__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_hfb3fd358__0, __Vtemp_h40a8316b__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_h8c7400de__0, __Vtemp_hfb3fd358__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_h8089b072__0, __Vtemp_h8c7400de__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_h0f9b2c05__0, __Vtemp_h8089b072__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_h74ea22e9__0, __Vtemp_h0f9b2c05__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_hc4c1369f__0, __Vtemp_h74ea22e9__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_hb89e1df8__0, __Vtemp_hc4c1369f__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_h5a8c4d08__0, __Vtemp_hb89e1df8__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_hab7b3e9d__0, __Vtemp_h5a8c4d08__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_h2e17cecd__0, __Vtemp_hab7b3e9d__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_hc5e4306c__0, __Vtemp_h2e17cecd__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_h059d7bd8__0, __Vtemp_hc5e4306c__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_h0e987b80__0, __Vtemp_h059d7bd8__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h493e3af7__0, __Vtemp_h0e987b80__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_hf1b4730b__0, __Vtemp_h493e3af7__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_h88c92398__0, __Vtemp_hf1b4730b__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_h5cdef04d__0, __Vtemp_h88c92398__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_h48d00a6b__0, __Vtemp_h5cdef04d__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_hd14d6b6f__0, __Vtemp_h48d00a6b__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_hb4342357__0, __Vtemp_hd14d6b6f__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_h5089335e__0, __Vtemp_hb4342357__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_h46a1754b__0, __Vtemp_h5089335e__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_hf7f0de07__0, __Vtemp_h46a1754b__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_he511e11f__0, __Vtemp_hf7f0de07__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_h91b20978__0, __Vtemp_he511e11f__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_he2cb437a__0, __Vtemp_h91b20978__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_h2de991a3__0, __Vtemp_he2cb437a__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h44fd84e4__0, __Vtemp_h2de991a3__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_h0bcd60f7__0, __Vtemp_h44fd84e4__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_he5607e5a__0, __Vtemp_h0bcd60f7__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_h79d95ddc__0, __Vtemp_he5607e5a__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_h8c131b71__0, __Vtemp_h79d95ddc__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_h8a752446__0, __Vtemp_h8c131b71__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_h892e4423__0, __Vtemp_h8a752446__0, vlSelf->riscv_soc__DOT__sram4__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h892e4423__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h892e4423__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h892e4423__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h892e4423__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h892e4423__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h892e4423__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h892e4423__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h892e4423__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    __Vtemp_h13d431bf__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U];
    __Vtemp_h13d431bf__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U];
    __Vtemp_h13d431bf__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U];
    __Vtemp_h13d431bf__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U];
    __Vtemp_h13d431bf__0[4U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U];
    __Vtemp_h13d431bf__0[5U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U];
    __Vtemp_h13d431bf__0[6U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U];
    __Vtemp_h13d431bf__0[7U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U];
    __Vtemp_h13d431bf__0[8U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U];
    __Vtemp_h13d431bf__0[9U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U];
    __Vtemp_h13d431bf__0[0xaU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U];
    __Vtemp_h13d431bf__0[0xbU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U];
    __Vtemp_h13d431bf__0[0xcU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U];
    __Vtemp_h13d431bf__0[0xdU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U];
    __Vtemp_h13d431bf__0[0xeU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U];
    __Vtemp_h13d431bf__0[0xfU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U];
    __Vtemp_h13d431bf__0[0x10U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U];
    __Vtemp_h13d431bf__0[0x11U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U];
    __Vtemp_h13d431bf__0[0x12U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U];
    __Vtemp_h13d431bf__0[0x13U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U];
    __Vtemp_h13d431bf__0[0x14U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U];
    __Vtemp_h13d431bf__0[0x15U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U];
    __Vtemp_h13d431bf__0[0x16U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U];
    __Vtemp_h13d431bf__0[0x17U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U];
    __Vtemp_h13d431bf__0[0x18U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U];
    __Vtemp_h13d431bf__0[0x19U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U];
    __Vtemp_h13d431bf__0[0x1aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U];
    __Vtemp_h13d431bf__0[0x1bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U];
    __Vtemp_h13d431bf__0[0x1cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U];
    __Vtemp_h13d431bf__0[0x1dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U];
    __Vtemp_h13d431bf__0[0x1eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U];
    __Vtemp_h13d431bf__0[0x1fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U];
    __Vtemp_h13d431bf__0[0x20U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U];
    __Vtemp_h13d431bf__0[0x21U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U];
    __Vtemp_h13d431bf__0[0x22U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U];
    __Vtemp_h13d431bf__0[0x23U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U];
    __Vtemp_h13d431bf__0[0x24U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U];
    __Vtemp_h13d431bf__0[0x25U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U];
    __Vtemp_h13d431bf__0[0x26U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U];
    __Vtemp_h13d431bf__0[0x27U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U];
    __Vtemp_h13d431bf__0[0x28U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U];
    __Vtemp_h13d431bf__0[0x29U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U];
    __Vtemp_h13d431bf__0[0x2aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U];
    __Vtemp_h13d431bf__0[0x2bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U];
    __Vtemp_h13d431bf__0[0x2cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U];
    __Vtemp_h13d431bf__0[0x2dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U];
    __Vtemp_h13d431bf__0[0x2eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U];
    __Vtemp_h13d431bf__0[0x2fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U];
    __Vtemp_h13d431bf__0[0x30U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U];
    __Vtemp_h13d431bf__0[0x31U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U];
    __Vtemp_h13d431bf__0[0x32U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U];
    __Vtemp_h13d431bf__0[0x33U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U];
    __Vtemp_h13d431bf__0[0x34U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U];
    __Vtemp_h13d431bf__0[0x35U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U];
    __Vtemp_h13d431bf__0[0x36U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U];
    __Vtemp_h13d431bf__0[0x37U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U];
    __Vtemp_h13d431bf__0[0x38U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U];
    __Vtemp_h13d431bf__0[0x39U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U];
    __Vtemp_h13d431bf__0[0x3aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U];
    __Vtemp_h13d431bf__0[0x3bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U];
    __Vtemp_h13d431bf__0[0x3cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U];
    __Vtemp_h13d431bf__0[0x3dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U];
    __Vtemp_h13d431bf__0[0x3eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U];
    __Vtemp_h13d431bf__0[0x3fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_h78f8ab32__0, __Vtemp_h13d431bf__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_h88e7409b__0, __Vtemp_h78f8ab32__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_ha2c97072__0, __Vtemp_h88e7409b__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_hefbbb81f__0, __Vtemp_ha2c97072__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_h3d1e509f__0, __Vtemp_hefbbb81f__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_h75367ca8__0, __Vtemp_h3d1e509f__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_h04d9e565__0, __Vtemp_h75367ca8__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_hcc53bd37__0, __Vtemp_h04d9e565__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_h4de1d237__0, __Vtemp_hcc53bd37__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_h50fdabec__0, __Vtemp_h4de1d237__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h65a99019__0, __Vtemp_h50fdabec__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_ha40b39b2__0, __Vtemp_h65a99019__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_hd937c98d__0, __Vtemp_ha40b39b2__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h5f794ee5__0, __Vtemp_hd937c98d__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_h43107de3__0, __Vtemp_h5f794ee5__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_h1cd043d3__0, __Vtemp_h43107de3__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_h7d11b2a8__0, __Vtemp_h1cd043d3__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_h727f3795__0, __Vtemp_h7d11b2a8__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_hdcd6db32__0, __Vtemp_h727f3795__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_h4b4a85f6__0, __Vtemp_hdcd6db32__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_h8626bb58__0, __Vtemp_h4b4a85f6__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_h372a9e92__0, __Vtemp_h8626bb58__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_hd650902c__0, __Vtemp_h372a9e92__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_h07174fdb__0, __Vtemp_hd650902c__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_ha2f42491__0, __Vtemp_h07174fdb__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_hec54b64a__0, __Vtemp_ha2f42491__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_h7107966e__0, __Vtemp_hec54b64a__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h47c05d3b__0, __Vtemp_h7107966e__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_h9cc520e5__0, __Vtemp_h47c05d3b__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_ha673671a__0, __Vtemp_h9cc520e5__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_h3fa28383__0, __Vtemp_ha673671a__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_h4d3eebf5__0, __Vtemp_h3fa28383__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_hf485424b__0, __Vtemp_h4d3eebf5__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_h9056e7da__0, __Vtemp_hf485424b__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_h99f3c231__0, __Vtemp_h9056e7da__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_h33d7480f__0, __Vtemp_h99f3c231__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_ha682eb4f__0, __Vtemp_h33d7480f__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_he162d88f__0, __Vtemp_ha682eb4f__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_h1866a808__0, __Vtemp_he162d88f__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h67edef0f__0, __Vtemp_h1866a808__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_h35b79884__0, __Vtemp_h67edef0f__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h694df2cc__0, __Vtemp_h35b79884__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_h1f06fce3__0, __Vtemp_h694df2cc__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_h72adae90__0, __Vtemp_h1f06fce3__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_h7e8909de__0, __Vtemp_h72adae90__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_hc199b27b__0, __Vtemp_h7e8909de__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_h495f6589__0, __Vtemp_hc199b27b__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_hedf161d6__0, __Vtemp_h495f6589__0, vlSelf->riscv_soc__DOT__sram5__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hedf161d6__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hedf161d6__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hedf161d6__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hedf161d6__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hedf161d6__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hedf161d6__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hedf161d6__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hedf161d6__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    __Vtemp_h3137a1c6__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U];
    __Vtemp_h3137a1c6__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U];
    __Vtemp_h3137a1c6__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U];
    __Vtemp_h3137a1c6__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U];
    __Vtemp_h3137a1c6__0[4U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U];
    __Vtemp_h3137a1c6__0[5U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U];
    __Vtemp_h3137a1c6__0[6U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U];
    __Vtemp_h3137a1c6__0[7U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U];
    __Vtemp_h3137a1c6__0[8U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U];
    __Vtemp_h3137a1c6__0[9U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U];
    __Vtemp_h3137a1c6__0[0xaU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U];
    __Vtemp_h3137a1c6__0[0xbU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U];
    __Vtemp_h3137a1c6__0[0xcU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U];
    __Vtemp_h3137a1c6__0[0xdU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U];
    __Vtemp_h3137a1c6__0[0xeU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U];
    __Vtemp_h3137a1c6__0[0xfU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U];
    __Vtemp_h3137a1c6__0[0x10U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U];
    __Vtemp_h3137a1c6__0[0x11U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U];
    __Vtemp_h3137a1c6__0[0x12U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U];
    __Vtemp_h3137a1c6__0[0x13U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U];
    __Vtemp_h3137a1c6__0[0x14U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U];
    __Vtemp_h3137a1c6__0[0x15U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U];
    __Vtemp_h3137a1c6__0[0x16U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U];
    __Vtemp_h3137a1c6__0[0x17U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U];
    __Vtemp_h3137a1c6__0[0x18U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U];
    __Vtemp_h3137a1c6__0[0x19U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U];
    __Vtemp_h3137a1c6__0[0x1aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U];
    __Vtemp_h3137a1c6__0[0x1bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U];
    __Vtemp_h3137a1c6__0[0x1cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U];
    __Vtemp_h3137a1c6__0[0x1dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U];
    __Vtemp_h3137a1c6__0[0x1eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U];
    __Vtemp_h3137a1c6__0[0x1fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U];
    __Vtemp_h3137a1c6__0[0x20U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U];
    __Vtemp_h3137a1c6__0[0x21U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U];
    __Vtemp_h3137a1c6__0[0x22U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U];
    __Vtemp_h3137a1c6__0[0x23U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U];
    __Vtemp_h3137a1c6__0[0x24U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U];
    __Vtemp_h3137a1c6__0[0x25U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U];
    __Vtemp_h3137a1c6__0[0x26U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U];
    __Vtemp_h3137a1c6__0[0x27U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U];
    __Vtemp_h3137a1c6__0[0x28U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U];
    __Vtemp_h3137a1c6__0[0x29U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U];
    __Vtemp_h3137a1c6__0[0x2aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U];
    __Vtemp_h3137a1c6__0[0x2bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U];
    __Vtemp_h3137a1c6__0[0x2cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U];
    __Vtemp_h3137a1c6__0[0x2dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U];
    __Vtemp_h3137a1c6__0[0x2eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U];
    __Vtemp_h3137a1c6__0[0x2fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U];
    __Vtemp_h3137a1c6__0[0x30U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U];
    __Vtemp_h3137a1c6__0[0x31U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U];
    __Vtemp_h3137a1c6__0[0x32U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U];
    __Vtemp_h3137a1c6__0[0x33U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U];
    __Vtemp_h3137a1c6__0[0x34U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U];
    __Vtemp_h3137a1c6__0[0x35U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U];
    __Vtemp_h3137a1c6__0[0x36U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U];
    __Vtemp_h3137a1c6__0[0x37U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U];
    __Vtemp_h3137a1c6__0[0x38U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U];
    __Vtemp_h3137a1c6__0[0x39U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U];
    __Vtemp_h3137a1c6__0[0x3aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U];
    __Vtemp_h3137a1c6__0[0x3bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U];
    __Vtemp_h3137a1c6__0[0x3cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U];
    __Vtemp_h3137a1c6__0[0x3dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U];
    __Vtemp_h3137a1c6__0[0x3eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U];
    __Vtemp_h3137a1c6__0[0x3fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_h9390928f__0, __Vtemp_h3137a1c6__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_h7b959b0f__0, __Vtemp_h9390928f__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_he837a750__0, __Vtemp_h7b959b0f__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_h45cc4c09__0, __Vtemp_he837a750__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_ha24d6ce4__0, __Vtemp_h45cc4c09__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_h6f4eff98__0, __Vtemp_ha24d6ce4__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_hf6c9a8d2__0, __Vtemp_h6f4eff98__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_hc9b778ad__0, __Vtemp_hf6c9a8d2__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_h528d9c0f__0, __Vtemp_hc9b778ad__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_h37bc6cd5__0, __Vtemp_h528d9c0f__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h444e74fd__0, __Vtemp_h37bc6cd5__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_h50d29649__0, __Vtemp_h444e74fd__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_he6ffe119__0, __Vtemp_h50d29649__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h88bc77a1__0, __Vtemp_he6ffe119__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_h520d079a__0, __Vtemp_h88bc77a1__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_h43a06219__0, __Vtemp_h520d079a__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_hfc4f5f67__0, __Vtemp_h43a06219__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_h510aa08d__0, __Vtemp_hfc4f5f67__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_h93c8180a__0, __Vtemp_h510aa08d__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_h8058fa9a__0, __Vtemp_h93c8180a__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_h67faa532__0, __Vtemp_h8058fa9a__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_hce58132b__0, __Vtemp_h67faa532__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_h899c6988__0, __Vtemp_hce58132b__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_hcf6b4c03__0, __Vtemp_h899c6988__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_h4eeada87__0, __Vtemp_hcf6b4c03__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_hbddb0173__0, __Vtemp_h4eeada87__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_hc1346a88__0, __Vtemp_hbddb0173__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h8b60c851__0, __Vtemp_hc1346a88__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_hddedd575__0, __Vtemp_h8b60c851__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_h751063f0__0, __Vtemp_hddedd575__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_hd78e43db__0, __Vtemp_h751063f0__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_h573594ba__0, __Vtemp_hd78e43db__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_h43d8d900__0, __Vtemp_h573594ba__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_had81115c__0, __Vtemp_h43d8d900__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_h0f5af949__0, __Vtemp_had81115c__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_h5c541c34__0, __Vtemp_h0f5af949__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_hf908d7ef__0, __Vtemp_h5c541c34__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_h3f88019a__0, __Vtemp_hf908d7ef__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_h94024da4__0, __Vtemp_h3f88019a__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h01989f6b__0, __Vtemp_h94024da4__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_ha130f904__0, __Vtemp_h01989f6b__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h59264671__0, __Vtemp_ha130f904__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_h1a6c87ec__0, __Vtemp_h59264671__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_hfe74bb88__0, __Vtemp_h1a6c87ec__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_hb6f0415f__0, __Vtemp_hfe74bb88__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_hbf38d5e2__0, __Vtemp_hb6f0415f__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_h28e7ad8e__0, __Vtemp_hbf38d5e2__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_hd974cf3b__0, __Vtemp_h28e7ad8e__0, vlSelf->riscv_soc__DOT__sram6__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hd974cf3b__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hd974cf3b__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hd974cf3b__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hd974cf3b__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hd974cf3b__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hd974cf3b__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_hd974cf3b__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_hd974cf3b__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    __Vtemp_h148d8516__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U];
    __Vtemp_h148d8516__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U];
    __Vtemp_h148d8516__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U];
    __Vtemp_h148d8516__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U];
    __Vtemp_h148d8516__0[4U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U];
    __Vtemp_h148d8516__0[5U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U];
    __Vtemp_h148d8516__0[6U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U];
    __Vtemp_h148d8516__0[7U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U];
    __Vtemp_h148d8516__0[8U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U];
    __Vtemp_h148d8516__0[9U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U];
    __Vtemp_h148d8516__0[0xaU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U];
    __Vtemp_h148d8516__0[0xbU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U];
    __Vtemp_h148d8516__0[0xcU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U];
    __Vtemp_h148d8516__0[0xdU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U];
    __Vtemp_h148d8516__0[0xeU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U];
    __Vtemp_h148d8516__0[0xfU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U];
    __Vtemp_h148d8516__0[0x10U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U];
    __Vtemp_h148d8516__0[0x11U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U];
    __Vtemp_h148d8516__0[0x12U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U];
    __Vtemp_h148d8516__0[0x13U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U];
    __Vtemp_h148d8516__0[0x14U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U];
    __Vtemp_h148d8516__0[0x15U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U];
    __Vtemp_h148d8516__0[0x16U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U];
    __Vtemp_h148d8516__0[0x17U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U];
    __Vtemp_h148d8516__0[0x18U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U];
    __Vtemp_h148d8516__0[0x19U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U];
    __Vtemp_h148d8516__0[0x1aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U];
    __Vtemp_h148d8516__0[0x1bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U];
    __Vtemp_h148d8516__0[0x1cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U];
    __Vtemp_h148d8516__0[0x1dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U];
    __Vtemp_h148d8516__0[0x1eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U];
    __Vtemp_h148d8516__0[0x1fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U];
    __Vtemp_h148d8516__0[0x20U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U];
    __Vtemp_h148d8516__0[0x21U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U];
    __Vtemp_h148d8516__0[0x22U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U];
    __Vtemp_h148d8516__0[0x23U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U];
    __Vtemp_h148d8516__0[0x24U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U];
    __Vtemp_h148d8516__0[0x25U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U];
    __Vtemp_h148d8516__0[0x26U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U];
    __Vtemp_h148d8516__0[0x27U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U];
    __Vtemp_h148d8516__0[0x28U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U];
    __Vtemp_h148d8516__0[0x29U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U];
    __Vtemp_h148d8516__0[0x2aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U];
    __Vtemp_h148d8516__0[0x2bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U];
    __Vtemp_h148d8516__0[0x2cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U];
    __Vtemp_h148d8516__0[0x2dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U];
    __Vtemp_h148d8516__0[0x2eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U];
    __Vtemp_h148d8516__0[0x2fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U];
    __Vtemp_h148d8516__0[0x30U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U];
    __Vtemp_h148d8516__0[0x31U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U];
    __Vtemp_h148d8516__0[0x32U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U];
    __Vtemp_h148d8516__0[0x33U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U];
    __Vtemp_h148d8516__0[0x34U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U];
    __Vtemp_h148d8516__0[0x35U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U];
    __Vtemp_h148d8516__0[0x36U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U];
    __Vtemp_h148d8516__0[0x37U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U];
    __Vtemp_h148d8516__0[0x38U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U];
    __Vtemp_h148d8516__0[0x39U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U];
    __Vtemp_h148d8516__0[0x3aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U];
    __Vtemp_h148d8516__0[0x3bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U];
    __Vtemp_h148d8516__0[0x3cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U];
    __Vtemp_h148d8516__0[0x3dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U];
    __Vtemp_h148d8516__0[0x3eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U];
    __Vtemp_h148d8516__0[0x3fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp_hfb17963a__0, __Vtemp_h148d8516__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp_h805f26c9__0, __Vtemp_hfb17963a__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp_h50e33f36__0, __Vtemp_h805f26c9__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp_hda2c6f06__0, __Vtemp_h50e33f36__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp_h8554e1ea__0, __Vtemp_hda2c6f06__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp_hc896efd7__0, __Vtemp_h8554e1ea__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp_h4ca4416d__0, __Vtemp_hc896efd7__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp_h61311ca7__0, __Vtemp_h4ca4416d__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp_hbc9903a1__0, __Vtemp_h61311ca7__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_hdf456cef__0, __Vtemp_hbc9903a1__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp_h1e39b920__0, __Vtemp_hdf456cef__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp_h328790dc__0, __Vtemp_h1e39b920__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp_h53cdb8c2__0, __Vtemp_h328790dc__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp_h1a1be0f7__0, __Vtemp_h53cdb8c2__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp_h009a967f__0, __Vtemp_h1a1be0f7__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp_hafe28b8e__0, __Vtemp_h009a967f__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp_hdd4f3c18__0, __Vtemp_hafe28b8e__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp_hce303e8f__0, __Vtemp_hdd4f3c18__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp_h1acb7520__0, __Vtemp_hce303e8f__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp_h686bc70c__0, __Vtemp_h1acb7520__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp_h0733a2c1__0, __Vtemp_h686bc70c__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp_hdb5021f0__0, __Vtemp_h0733a2c1__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp_h3311c749__0, __Vtemp_hdb5021f0__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp_h60cabc44__0, __Vtemp_h3311c749__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp_hb4d3346b__0, __Vtemp_h60cabc44__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp_h8575abe6__0, __Vtemp_hb4d3346b__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp_h723af0f2__0, __Vtemp_h8575abe6__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp_h8bd0009c__0, __Vtemp_h723af0f2__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp_h7f97af99__0, __Vtemp_h8bd0009c__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp_h844df0ba__0, __Vtemp_h7f97af99__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp_h0cc140bc__0, __Vtemp_h844df0ba__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp_hc568d77d__0, __Vtemp_h0cc140bc__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp_he7112470__0, __Vtemp_hc568d77d__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp_hf1540aa5__0, __Vtemp_he7112470__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp_h1be41b90__0, __Vtemp_hf1540aa5__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp_h91f67eb9__0, __Vtemp_h1be41b90__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp_hfb5f1558__0, __Vtemp_h91f67eb9__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp_ha7c52222__0, __Vtemp_hfb5f1558__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp_h65863980__0, __Vtemp_ha7c52222__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp_h43414b4e__0, __Vtemp_h65863980__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp_h79384ff5__0, __Vtemp_h43414b4e__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp_h2cab2a85__0, __Vtemp_h79384ff5__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp_h92d53774__0, __Vtemp_h2cab2a85__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp_h54a31076__0, __Vtemp_h92d53774__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp_h7d1c457c__0, __Vtemp_h54a31076__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp_hb39760ce__0, __Vtemp_h7d1c457c__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp_hc4f2f83f__0, __Vtemp_hb39760ce__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp_h4be53127__0, __Vtemp_hc4f2f83f__0, vlSelf->riscv_soc__DOT__sram7__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_0[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h4be53127__0[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h4be53127__0[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                             << 2U))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_0[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h4be53127__0[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h4be53127__0[((IData)(1U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_0[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h4be53127__0[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h4be53127__0[((IData)(2U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_0[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                             << 7U))) ? 0U : (__Vtemp_h4be53127__0[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 7U))))) 
           | (__Vtemp_h4be53127__0[((IData)(3U) + (0xfcU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                                                      << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT___core_io_dsram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid 
        = ((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                              >> 0x1fU)))) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T)));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_data
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid 
        = ((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                              >> 0x1fU)))) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h0b2f13a9__0 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_ha332c60d__0[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0 
        = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                      ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                               ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid)
                                        ? 2U : (- (IData)(
                                                          ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w)) 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)))))))
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid))
                         ? 1U : 2U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h21ff605d__0
            : 0ULL);
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
           & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h0b2f13a9__0) 
                  & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h21ff605d__0 
                     != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                          ? (((QData)((IData)(__Vtemp_hb3faad4d__0[
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
                                   >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                << 6U)))))
                          : 0ULL)))) | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h0b2f13a9__0)) 
                                        | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____VdfgTmp_h0b2f13a9__0)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)))));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
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
    __Vtemp_h07d67474__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr);
    __Vtemp_h07d67474__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                                        >> 0x20U));
    __Vtemp_h07d67474__0[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    __Vtemp_h07d67474__0[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                                        >> 0x20U));
    __Vtemp_h07d67474__0[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    __Vtemp_h07d67474__0[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0x20U));
    __Vtemp_h07d67474__0[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr);
    __Vtemp_h07d67474__0[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                        >> 0x20U));
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr 
        = (((QData)((IData)(__Vtemp_h07d67474__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_h07d67474__0[
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
              | ((QData)((IData)(__Vtemp_h07d67474__0[
                                 (6U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                              << 6U)))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2 
        = (1U & (((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
                    & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid))) 
                   << 3U) | ((((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid)) 
                              << 2U) | ((((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)) 
                                         << 1U) | (
                                                   (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid))))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT____Vcellinp__mem__wmask 
        = (((QData)((IData)((0xffU & (- (IData)(((0U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb) 
                                                       >> 7U)))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)(
                                                      ((0U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb) 
                                                             >> 6U)))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)(
                                                                      ((0U 
                                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                       | ((1U 
                                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb) 
                                                                             >> 5U)))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       ((0U 
                                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb) 
                                                                              >> 4U)))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       ((0U 
                                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb) 
                                                                              >> 3U))))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             ((0U 
                                                                               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                              | ((1U 
                                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb) 
                                                                                >> 2U))))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                                | ((1U 
                                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb) 
                                                                                >> 1U))))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                                | ((1U 
                                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb)))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____VdfgTmp_h596c503c__0 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))) {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    } else {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN));
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____VdfgTmp_h596c503c__0) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9 
        = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
            & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid))) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____VdfgTmp_h596c503c__0) 
              & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))));
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                                                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                                                : vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr), vlSelf->__Vtask_ramCtrl__0__rdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, 
                                                              ((0U 
                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                                                 ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata
                                                                 : 0ULL)), vlSelf->riscv_soc__DOT__axi_ram__DOT____Vcellinp__mem__wmask, 
                                                              ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid) 
                                                               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___mem_rdata 
        = vlSelf->__Vtask_ramCtrl__0__rdata;
}
