// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__21(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__21\n"); );
    // Variables
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___T_206;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_206;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94;
    VlWide<3>/*95:0*/ __Vtemp3536;
    VlWide<3>/*95:0*/ __Vtemp3537;
    VlWide<3>/*95:0*/ __Vtemp3540;
    VlWide<3>/*95:0*/ __Vtemp3541;
    VlWide<3>/*95:0*/ __Vtemp3544;
    VlWide<3>/*95:0*/ __Vtemp3545;
    VlWide<3>/*95:0*/ __Vtemp3548;
    VlWide<3>/*95:0*/ __Vtemp3549;
    VlWide<3>/*95:0*/ __Vtemp3552;
    VlWide<3>/*95:0*/ __Vtemp3553;
    VlWide<3>/*95:0*/ __Vtemp3556;
    VlWide<3>/*95:0*/ __Vtemp3557;
    VlWide<3>/*95:0*/ __Vtemp3560;
    VlWide<3>/*95:0*/ __Vtemp3561;
    VlWide<3>/*95:0*/ __Vtemp3564;
    VlWide<3>/*95:0*/ __Vtemp3565;
    VlWide<3>/*95:0*/ __Vtemp3568;
    VlWide<3>/*95:0*/ __Vtemp3569;
    VlWide<3>/*95:0*/ __Vtemp3572;
    VlWide<3>/*95:0*/ __Vtemp3573;
    VlWide<3>/*95:0*/ __Vtemp3576;
    VlWide<3>/*95:0*/ __Vtemp3577;
    VlWide<3>/*95:0*/ __Vtemp3580;
    VlWide<3>/*95:0*/ __Vtemp3581;
    VlWide<3>/*95:0*/ __Vtemp3584;
    VlWide<3>/*95:0*/ __Vtemp3585;
    VlWide<3>/*95:0*/ __Vtemp3588;
    VlWide<3>/*95:0*/ __Vtemp3589;
    VlWide<3>/*95:0*/ __Vtemp3592;
    VlWide<3>/*95:0*/ __Vtemp3593;
    VlWide<3>/*95:0*/ __Vtemp3596;
    VlWide<3>/*95:0*/ __Vtemp3597;
    VlWide<3>/*95:0*/ __Vtemp3600;
    VlWide<3>/*95:0*/ __Vtemp3601;
    VlWide<3>/*95:0*/ __Vtemp3604;
    VlWide<3>/*95:0*/ __Vtemp3605;
    VlWide<3>/*95:0*/ __Vtemp3608;
    VlWide<3>/*95:0*/ __Vtemp3609;
    VlWide<3>/*95:0*/ __Vtemp3612;
    VlWide<3>/*95:0*/ __Vtemp3613;
    VlWide<3>/*95:0*/ __Vtemp3616;
    VlWide<3>/*95:0*/ __Vtemp3617;
    VlWide<3>/*95:0*/ __Vtemp3620;
    VlWide<3>/*95:0*/ __Vtemp3621;
    VlWide<3>/*95:0*/ __Vtemp3624;
    VlWide<3>/*95:0*/ __Vtemp3625;
    VlWide<3>/*95:0*/ __Vtemp3628;
    VlWide<3>/*95:0*/ __Vtemp3629;
    VlWide<3>/*95:0*/ __Vtemp3632;
    VlWide<3>/*95:0*/ __Vtemp3633;
    VlWide<3>/*95:0*/ __Vtemp3636;
    VlWide<3>/*95:0*/ __Vtemp3637;
    VlWide<3>/*95:0*/ __Vtemp3640;
    VlWide<3>/*95:0*/ __Vtemp3641;
    VlWide<3>/*95:0*/ __Vtemp3644;
    VlWide<3>/*95:0*/ __Vtemp3645;
    VlWide<3>/*95:0*/ __Vtemp3648;
    VlWide<3>/*95:0*/ __Vtemp3649;
    VlWide<3>/*95:0*/ __Vtemp3652;
    VlWide<3>/*95:0*/ __Vtemp3653;
    VlWide<3>/*95:0*/ __Vtemp3656;
    VlWide<3>/*95:0*/ __Vtemp3657;
    VlWide<3>/*95:0*/ __Vtemp3660;
    VlWide<3>/*95:0*/ __Vtemp3661;
    VlWide<3>/*95:0*/ __Vtemp3664;
    VlWide<3>/*95:0*/ __Vtemp3665;
    VlWide<3>/*95:0*/ __Vtemp3668;
    VlWide<3>/*95:0*/ __Vtemp3669;
    VlWide<3>/*95:0*/ __Vtemp3672;
    VlWide<3>/*95:0*/ __Vtemp3673;
    VlWide<3>/*95:0*/ __Vtemp3676;
    VlWide<3>/*95:0*/ __Vtemp3677;
    VlWide<3>/*95:0*/ __Vtemp3680;
    VlWide<3>/*95:0*/ __Vtemp3681;
    VlWide<3>/*95:0*/ __Vtemp3684;
    VlWide<3>/*95:0*/ __Vtemp3685;
    VlWide<3>/*95:0*/ __Vtemp3688;
    VlWide<3>/*95:0*/ __Vtemp3689;
    VlWide<3>/*95:0*/ __Vtemp3692;
    VlWide<3>/*95:0*/ __Vtemp3693;
    VlWide<3>/*95:0*/ __Vtemp3696;
    VlWide<3>/*95:0*/ __Vtemp3697;
    VlWide<3>/*95:0*/ __Vtemp3700;
    VlWide<3>/*95:0*/ __Vtemp3701;
    VlWide<3>/*95:0*/ __Vtemp3704;
    VlWide<3>/*95:0*/ __Vtemp3705;
    VlWide<3>/*95:0*/ __Vtemp3708;
    VlWide<3>/*95:0*/ __Vtemp3709;
    VlWide<3>/*95:0*/ __Vtemp3712;
    VlWide<3>/*95:0*/ __Vtemp3713;
    VlWide<3>/*95:0*/ __Vtemp3716;
    VlWide<3>/*95:0*/ __Vtemp3717;
    VlWide<3>/*95:0*/ __Vtemp3720;
    VlWide<3>/*95:0*/ __Vtemp3721;
    VlWide<3>/*95:0*/ __Vtemp3724;
    VlWide<3>/*95:0*/ __Vtemp3725;
    VlWide<3>/*95:0*/ __Vtemp3728;
    VlWide<3>/*95:0*/ __Vtemp3729;
    VlWide<3>/*95:0*/ __Vtemp3732;
    VlWide<3>/*95:0*/ __Vtemp3733;
    VlWide<3>/*95:0*/ __Vtemp3736;
    VlWide<3>/*95:0*/ __Vtemp3737;
    VlWide<3>/*95:0*/ __Vtemp3740;
    VlWide<3>/*95:0*/ __Vtemp3741;
    VlWide<3>/*95:0*/ __Vtemp3744;
    VlWide<3>/*95:0*/ __Vtemp3745;
    VlWide<3>/*95:0*/ __Vtemp3748;
    VlWide<3>/*95:0*/ __Vtemp3749;
    VlWide<3>/*95:0*/ __Vtemp3752;
    VlWide<3>/*95:0*/ __Vtemp3753;
    VlWide<3>/*95:0*/ __Vtemp3756;
    VlWide<3>/*95:0*/ __Vtemp3757;
    VlWide<3>/*95:0*/ __Vtemp3760;
    VlWide<3>/*95:0*/ __Vtemp3761;
    VlWide<3>/*95:0*/ __Vtemp3764;
    VlWide<3>/*95:0*/ __Vtemp3765;
    VlWide<3>/*95:0*/ __Vtemp3768;
    VlWide<3>/*95:0*/ __Vtemp3769;
    VlWide<3>/*95:0*/ __Vtemp3772;
    VlWide<3>/*95:0*/ __Vtemp3773;
    VlWide<3>/*95:0*/ __Vtemp3776;
    VlWide<3>/*95:0*/ __Vtemp3777;
    VlWide<3>/*95:0*/ __Vtemp3780;
    VlWide<3>/*95:0*/ __Vtemp3781;
    VlWide<3>/*95:0*/ __Vtemp3784;
    VlWide<3>/*95:0*/ __Vtemp3785;
    VlWide<3>/*95:0*/ __Vtemp3788;
    VlWide<3>/*95:0*/ __Vtemp3789;
    VlWide<3>/*95:0*/ __Vtemp3792;
    VlWide<3>/*95:0*/ __Vtemp3793;
    VlWide<3>/*95:0*/ __Vtemp3796;
    VlWide<3>/*95:0*/ __Vtemp3797;
    VlWide<3>/*95:0*/ __Vtemp3800;
    VlWide<3>/*95:0*/ __Vtemp3801;
    VlWide<3>/*95:0*/ __Vtemp3804;
    VlWide<3>/*95:0*/ __Vtemp3805;
    VlWide<3>/*95:0*/ __Vtemp3808;
    VlWide<3>/*95:0*/ __Vtemp3809;
    VlWide<3>/*95:0*/ __Vtemp3812;
    VlWide<3>/*95:0*/ __Vtemp3813;
    VlWide<3>/*95:0*/ __Vtemp3816;
    VlWide<3>/*95:0*/ __Vtemp3817;
    VlWide<3>/*95:0*/ __Vtemp3820;
    VlWide<3>/*95:0*/ __Vtemp3821;
    VlWide<3>/*95:0*/ __Vtemp3824;
    VlWide<3>/*95:0*/ __Vtemp3825;
    VlWide<3>/*95:0*/ __Vtemp3828;
    VlWide<3>/*95:0*/ __Vtemp3829;
    VlWide<3>/*95:0*/ __Vtemp3832;
    VlWide<3>/*95:0*/ __Vtemp3833;
    VlWide<3>/*95:0*/ __Vtemp3836;
    VlWide<3>/*95:0*/ __Vtemp3837;
    VlWide<3>/*95:0*/ __Vtemp3840;
    VlWide<3>/*95:0*/ __Vtemp3841;
    VlWide<3>/*95:0*/ __Vtemp3844;
    VlWide<3>/*95:0*/ __Vtemp3845;
    VlWide<3>/*95:0*/ __Vtemp3848;
    VlWide<3>/*95:0*/ __Vtemp3849;
    VlWide<3>/*95:0*/ __Vtemp3852;
    VlWide<3>/*95:0*/ __Vtemp3853;
    VlWide<3>/*95:0*/ __Vtemp3856;
    VlWide<3>/*95:0*/ __Vtemp3857;
    VlWide<3>/*95:0*/ __Vtemp3860;
    VlWide<3>/*95:0*/ __Vtemp3861;
    VlWide<3>/*95:0*/ __Vtemp3864;
    VlWide<3>/*95:0*/ __Vtemp3865;
    VlWide<3>/*95:0*/ __Vtemp3868;
    VlWide<3>/*95:0*/ __Vtemp3869;
    VlWide<3>/*95:0*/ __Vtemp3872;
    VlWide<3>/*95:0*/ __Vtemp3873;
    VlWide<3>/*95:0*/ __Vtemp3876;
    VlWide<3>/*95:0*/ __Vtemp3877;
    VlWide<3>/*95:0*/ __Vtemp3880;
    VlWide<3>/*95:0*/ __Vtemp3881;
    VlWide<3>/*95:0*/ __Vtemp3884;
    VlWide<3>/*95:0*/ __Vtemp3885;
    VlWide<3>/*95:0*/ __Vtemp3888;
    VlWide<3>/*95:0*/ __Vtemp3889;
    VlWide<3>/*95:0*/ __Vtemp3892;
    VlWide<3>/*95:0*/ __Vtemp3893;
    VlWide<3>/*95:0*/ __Vtemp3896;
    VlWide<3>/*95:0*/ __Vtemp3897;
    VlWide<3>/*95:0*/ __Vtemp3900;
    VlWide<3>/*95:0*/ __Vtemp3901;
    VlWide<3>/*95:0*/ __Vtemp3904;
    VlWide<3>/*95:0*/ __Vtemp3905;
    VlWide<3>/*95:0*/ __Vtemp3908;
    VlWide<3>/*95:0*/ __Vtemp3909;
    VlWide<3>/*95:0*/ __Vtemp3912;
    VlWide<3>/*95:0*/ __Vtemp3913;
    VlWide<3>/*95:0*/ __Vtemp3916;
    VlWide<3>/*95:0*/ __Vtemp3917;
    VlWide<3>/*95:0*/ __Vtemp3920;
    VlWide<3>/*95:0*/ __Vtemp3921;
    VlWide<3>/*95:0*/ __Vtemp3924;
    VlWide<3>/*95:0*/ __Vtemp3925;
    VlWide<3>/*95:0*/ __Vtemp3928;
    VlWide<3>/*95:0*/ __Vtemp3929;
    VlWide<3>/*95:0*/ __Vtemp3932;
    VlWide<3>/*95:0*/ __Vtemp3933;
    VlWide<3>/*95:0*/ __Vtemp3936;
    VlWide<3>/*95:0*/ __Vtemp3937;
    VlWide<3>/*95:0*/ __Vtemp3940;
    VlWide<3>/*95:0*/ __Vtemp3941;
    VlWide<3>/*95:0*/ __Vtemp3944;
    VlWide<3>/*95:0*/ __Vtemp3945;
    VlWide<3>/*95:0*/ __Vtemp3948;
    VlWide<3>/*95:0*/ __Vtemp3949;
    VlWide<3>/*95:0*/ __Vtemp3952;
    VlWide<3>/*95:0*/ __Vtemp3953;
    VlWide<3>/*95:0*/ __Vtemp3956;
    VlWide<3>/*95:0*/ __Vtemp3957;
    VlWide<3>/*95:0*/ __Vtemp3960;
    VlWide<3>/*95:0*/ __Vtemp3961;
    VlWide<3>/*95:0*/ __Vtemp3964;
    VlWide<3>/*95:0*/ __Vtemp3965;
    VlWide<3>/*95:0*/ __Vtemp3968;
    VlWide<3>/*95:0*/ __Vtemp3969;
    VlWide<3>/*95:0*/ __Vtemp3972;
    VlWide<3>/*95:0*/ __Vtemp3973;
    VlWide<3>/*95:0*/ __Vtemp3976;
    VlWide<3>/*95:0*/ __Vtemp3977;
    VlWide<3>/*95:0*/ __Vtemp3980;
    VlWide<3>/*95:0*/ __Vtemp3981;
    VlWide<3>/*95:0*/ __Vtemp3984;
    VlWide<3>/*95:0*/ __Vtemp3985;
    VlWide<3>/*95:0*/ __Vtemp3988;
    VlWide<3>/*95:0*/ __Vtemp3989;
    VlWide<3>/*95:0*/ __Vtemp3992;
    VlWide<3>/*95:0*/ __Vtemp3993;
    VlWide<3>/*95:0*/ __Vtemp3996;
    VlWide<3>/*95:0*/ __Vtemp3997;
    VlWide<3>/*95:0*/ __Vtemp4000;
    VlWide<3>/*95:0*/ __Vtemp4001;
    VlWide<3>/*95:0*/ __Vtemp4004;
    VlWide<3>/*95:0*/ __Vtemp4005;
    VlWide<3>/*95:0*/ __Vtemp4008;
    VlWide<3>/*95:0*/ __Vtemp4009;
    VlWide<3>/*95:0*/ __Vtemp4012;
    VlWide<3>/*95:0*/ __Vtemp4013;
    VlWide<3>/*95:0*/ __Vtemp4016;
    VlWide<3>/*95:0*/ __Vtemp4017;
    VlWide<3>/*95:0*/ __Vtemp4020;
    VlWide<3>/*95:0*/ __Vtemp4021;
    VlWide<3>/*95:0*/ __Vtemp4024;
    VlWide<3>/*95:0*/ __Vtemp4025;
    VlWide<3>/*95:0*/ __Vtemp4028;
    VlWide<3>/*95:0*/ __Vtemp4029;
    VlWide<3>/*95:0*/ __Vtemp4032;
    VlWide<3>/*95:0*/ __Vtemp4033;
    VlWide<3>/*95:0*/ __Vtemp4036;
    VlWide<3>/*95:0*/ __Vtemp4037;
    VlWide<3>/*95:0*/ __Vtemp4040;
    VlWide<3>/*95:0*/ __Vtemp4041;
    VlWide<3>/*95:0*/ __Vtemp4044;
    VlWide<3>/*95:0*/ __Vtemp4045;
    VlWide<3>/*95:0*/ __Vtemp4048;
    VlWide<3>/*95:0*/ __Vtemp4049;
    VlWide<3>/*95:0*/ __Vtemp4052;
    VlWide<3>/*95:0*/ __Vtemp4053;
    VlWide<3>/*95:0*/ __Vtemp4056;
    VlWide<3>/*95:0*/ __Vtemp4057;
    VlWide<3>/*95:0*/ __Vtemp4066;
    VlWide<3>/*95:0*/ __Vtemp4067;
    VlWide<3>/*95:0*/ __Vtemp4077;
    VlWide<3>/*95:0*/ __Vtemp4078;
    VlWide<3>/*95:0*/ __Vtemp4103;
    VlWide<3>/*95:0*/ __Vtemp4105;
    VlWide<3>/*95:0*/ __Vtemp4109;
    VlWide<3>/*95:0*/ __Vtemp4110;
    VlWide<3>/*95:0*/ __Vtemp4115;
    VlWide<3>/*95:0*/ __Vtemp4116;
    VlWide<3>/*95:0*/ __Vtemp4132;
    VlWide<3>/*95:0*/ __Vtemp4134;
    VlWide<3>/*95:0*/ __Vtemp4140;
    VlWide<4>/*127:0*/ __Vtemp4147;
    VlWide<4>/*127:0*/ __Vtemp4148;
    VlWide<3>/*95:0*/ __Vtemp4156;
    VlWide<3>/*95:0*/ __Vtemp4162;
    VlWide<4>/*127:0*/ __Vtemp4180;
    VlWide<4>/*127:0*/ __Vtemp4188;
    // Body
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_valid))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_263 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7382]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7383]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7384]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7385]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7386]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7387]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_io_A)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[7645]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[7646]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[7647]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[7648]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[7649]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[7650]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_io_A)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7908]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7909]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7910]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7911]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7912]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)))) {
        ++(vlSymsp->__Vcoverage[7913]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_io_A)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[8043]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[8044]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[8045]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[8046]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[8047]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)))) {
        ++(vlSymsp->__Vcoverage[8048]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_io_A)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata)))) {
        ++(vlSymsp->__Vcoverage[5440]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5441]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5442]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5443]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5444]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5445]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5446]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5447]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5448]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5449]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5450]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5451]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5452]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5453]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5454]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5455]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5456]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5457]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5458]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5459]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5460]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5461]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5462]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5463]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5464]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5465]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5466]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5467]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5468]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5469]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5470]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5471]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5472]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5473]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5474]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5475]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5476]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5477]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5478]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5479]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5480]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5481]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5482]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5483]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5484]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5485]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5486]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5487]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5488]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5489]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5490]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5491]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5492]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5493]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5494]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5495]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5496]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5497]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5498]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5499]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus1_valid))) {
        ++(vlSymsp->__Vcoverage[5434]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus1_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_11 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid)
            ? 2U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))
                     ? 3U : 0U));
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14550]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14551]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14552]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14553]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14554]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14555]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14556]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14557]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14558]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14559]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14560]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14561]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14562]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14563]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14564]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14565]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14566]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14567]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14568]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14569]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14570]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14571]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14572]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14573]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14574]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14575]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14576]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14577]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14578]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14579]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[14580]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14581]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14582]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14583]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14584]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14585]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14586]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14587]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14588]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14589]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14590]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14591]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14592]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14593]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14594]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14595]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14596]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14597]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14598]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14599]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14600]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14601]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14602]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14603]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14604]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14605]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14606]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14607]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14608]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14609]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14610]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14611]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[14612]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14613]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[14614]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT____Vtogcov__temp_csr_result_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13054]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13055]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13056]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13057]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13058]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13059]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13060]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13061]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13062]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13063]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13064]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13065]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13066]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13067]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13068]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13069]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13070]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13071]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13072]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13073]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13074]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13075]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13076]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13077]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13078]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13079]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13080]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13081]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13082]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13083]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[13084]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13085]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13086]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13087]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13088]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13089]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13090]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13091]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13092]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13093]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13094]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13095]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13096]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13097]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13098]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13099]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13100]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13101]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13102]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13103]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13104]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13105]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13106]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13107]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13108]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13109]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13110]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13111]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13112]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13113]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13114]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13115]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[13116]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13117]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[2U]))) {
        ++(vlSymsp->__Vcoverage[13118]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13119]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13120]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13121]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13122]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13123]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13124]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13125]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13126]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13127]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13128]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13129]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13130]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13131]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13132]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13133]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13134]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13135]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13136]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13137]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13138]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13139]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13140]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13141]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13142]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13143]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13144]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13145]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13146]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13147]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13148]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[13149]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13150]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13151]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13152]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13153]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13154]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13155]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13156]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13157]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13158]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13159]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13160]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13161]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13162]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13163]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13164]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13165]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13166]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13167]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13168]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13169]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13170]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13171]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13172]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13173]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13174]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13175]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13176]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13177]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13178]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13179]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13180]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[13181]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13182]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[2U]))) {
        ++(vlSymsp->__Vcoverage[13183]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13976]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13977]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13978]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13979]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13980]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13981]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13982]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13983]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13984]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13985]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13986]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13987]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13988]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13989]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13990]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13991]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13992]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13993]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13994]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13995]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13996]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13997]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13998]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[13999]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[14000]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[14001]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[14002]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[14003]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[14004]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[14005]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[14006]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14007]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14008]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14009]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14010]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14011]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14012]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14013]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14014]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14015]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14016]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14017]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14018]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14019]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14020]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14021]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14022]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14023]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14024]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14025]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14026]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14027]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14028]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14029]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14030]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14031]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14032]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14033]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14034]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14035]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14036]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14037]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[14038]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14039]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[14040]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U] 
            = ((6U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[14041]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U] 
            = ((5U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[14042]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U] 
            = ((3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12567]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12568]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12569]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12570]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12571]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12572]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12573]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12574]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12575]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12576]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12577]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12578]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12579]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12580]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12581]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12582]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12583]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12584]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12585]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12586]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12587]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12588]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12589]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12590]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12591]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12592]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12593]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12594]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12595]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12596]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[12597]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12598]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12599]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12600]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12601]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12602]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12603]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12604]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12605]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12606]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12607]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12608]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12609]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12610]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12611]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12612]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12613]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12614]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12615]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12616]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12617]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12618]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12619]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12620]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12621]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12622]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12623]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12624]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12625]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12626]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12627]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12628]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[12629]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12630]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp)))) {
        ++(vlSymsp->__Vcoverage[12504]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[12505]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[12506]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[12507]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[12508]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[12509]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[12510]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[12511]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[12512]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[12513]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12514]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[12515]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[12516]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[12517]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[12518]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[12519]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[12520]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[12521]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[12522]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[12523]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[12524]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[12525]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[12526]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[12527]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[12528]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[12529]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[12530]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[12531]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[12532]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[12533]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[12534]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[12535]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[12536]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[12537]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[12538]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[12539]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[12540]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[12541]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[12542]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[12543]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[12544]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[12545]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[12546]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[12547]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[12548]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[12549]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[12550]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[12551]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[12552]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[12553]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[12554]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[12555]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[12556]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[12557]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[12558]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[12559]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7f7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[12560]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7effffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[12561]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7dffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[12562]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7bffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[12563]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x77ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[12564]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x6fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[12565]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x5fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[12566]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x3fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp)))) {
        ++(vlSymsp->__Vcoverage[12631]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[12632]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[12633]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[12634]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[12635]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[12636]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[12637]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[12638]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[12639]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[12640]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12641]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[12642]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[12643]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[12644]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[12645]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[12646]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[12647]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[12648]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[12649]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[12650]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[12651]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[12652]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[12653]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[12654]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[12655]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[12656]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[12657]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[12658]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[12659]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[12660]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[12661]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[12662]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[12663]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[12664]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[12665]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[12666]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[12667]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[12668]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[12669]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[12670]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[12671]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[12672]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[12673]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[12674]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[12675]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[12676]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[12677]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[12678]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[12679]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[12680]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[12681]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[12682]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[12683]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[12684]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[12685]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[12686]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[12687]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[12688]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[12689]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[12690]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[12691]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[12692]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[12693]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[12694]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__add_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    __Vtemp3536[0U] = 1U;
    __Vtemp3536[1U] = 0U;
    __Vtemp3536[2U] = 0U;
    VL_ADD_W(3, __Vtemp3537, __Vtemp3536, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((1U & ((~ (1U & __Vtemp3537[2U])) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2)))) {
        ++(vlSymsp->__Vcoverage[12502]);
        __Vtemp3540[0U] = 1U;
        __Vtemp3540[1U] = 0U;
        __Vtemp3540[2U] = 0U;
        VL_ADD_W(3, __Vtemp3541, __Vtemp3540, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2 
            = (1U & (~ (1U & __Vtemp3541[2U])));
    }
    if ((1U & (((IData)(1U) + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U]) 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12437]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (1U & ((IData)(1U) + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])));
    }
    __Vtemp3544[0U] = 1U;
    __Vtemp3544[1U] = 0U;
    __Vtemp3544[2U] = 0U;
    VL_ADD_W(3, __Vtemp3545, __Vtemp3544, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((2U & (__Vtemp3545[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12438]);
        __Vtemp3548[0U] = 1U;
        __Vtemp3548[1U] = 0U;
        __Vtemp3548[2U] = 0U;
        VL_ADD_W(3, __Vtemp3549, __Vtemp3548, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (2U & __Vtemp3549[0U]));
    }
    __Vtemp3552[0U] = 1U;
    __Vtemp3552[1U] = 0U;
    __Vtemp3552[2U] = 0U;
    VL_ADD_W(3, __Vtemp3553, __Vtemp3552, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((4U & (__Vtemp3553[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12439]);
        __Vtemp3556[0U] = 1U;
        __Vtemp3556[1U] = 0U;
        __Vtemp3556[2U] = 0U;
        VL_ADD_W(3, __Vtemp3557, __Vtemp3556, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (4U & __Vtemp3557[0U]));
    }
    __Vtemp3560[0U] = 1U;
    __Vtemp3560[1U] = 0U;
    __Vtemp3560[2U] = 0U;
    VL_ADD_W(3, __Vtemp3561, __Vtemp3560, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((8U & (__Vtemp3561[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12440]);
        __Vtemp3564[0U] = 1U;
        __Vtemp3564[1U] = 0U;
        __Vtemp3564[2U] = 0U;
        VL_ADD_W(3, __Vtemp3565, __Vtemp3564, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (8U & __Vtemp3565[0U]));
    }
    __Vtemp3568[0U] = 1U;
    __Vtemp3568[1U] = 0U;
    __Vtemp3568[2U] = 0U;
    VL_ADD_W(3, __Vtemp3569, __Vtemp3568, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x10U & (__Vtemp3569[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12441]);
        __Vtemp3572[0U] = 1U;
        __Vtemp3572[1U] = 0U;
        __Vtemp3572[2U] = 0U;
        VL_ADD_W(3, __Vtemp3573, __Vtemp3572, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10U & __Vtemp3573[0U]));
    }
    __Vtemp3576[0U] = 1U;
    __Vtemp3576[1U] = 0U;
    __Vtemp3576[2U] = 0U;
    VL_ADD_W(3, __Vtemp3577, __Vtemp3576, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x20U & (__Vtemp3577[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12442]);
        __Vtemp3580[0U] = 1U;
        __Vtemp3580[1U] = 0U;
        __Vtemp3580[2U] = 0U;
        VL_ADD_W(3, __Vtemp3581, __Vtemp3580, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20U & __Vtemp3581[0U]));
    }
    __Vtemp3584[0U] = 1U;
    __Vtemp3584[1U] = 0U;
    __Vtemp3584[2U] = 0U;
    VL_ADD_W(3, __Vtemp3585, __Vtemp3584, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x40U & (__Vtemp3585[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12443]);
        __Vtemp3588[0U] = 1U;
        __Vtemp3588[1U] = 0U;
        __Vtemp3588[2U] = 0U;
        VL_ADD_W(3, __Vtemp3589, __Vtemp3588, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40U & __Vtemp3589[0U]));
    }
    __Vtemp3592[0U] = 1U;
    __Vtemp3592[1U] = 0U;
    __Vtemp3592[2U] = 0U;
    VL_ADD_W(3, __Vtemp3593, __Vtemp3592, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x80U & (__Vtemp3593[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12444]);
        __Vtemp3596[0U] = 1U;
        __Vtemp3596[1U] = 0U;
        __Vtemp3596[2U] = 0U;
        VL_ADD_W(3, __Vtemp3597, __Vtemp3596, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80U & __Vtemp3597[0U]));
    }
    __Vtemp3600[0U] = 1U;
    __Vtemp3600[1U] = 0U;
    __Vtemp3600[2U] = 0U;
    VL_ADD_W(3, __Vtemp3601, __Vtemp3600, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x100U & (__Vtemp3601[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12445]);
        __Vtemp3604[0U] = 1U;
        __Vtemp3604[1U] = 0U;
        __Vtemp3604[2U] = 0U;
        VL_ADD_W(3, __Vtemp3605, __Vtemp3604, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x100U & __Vtemp3605[0U]));
    }
    __Vtemp3608[0U] = 1U;
    __Vtemp3608[1U] = 0U;
    __Vtemp3608[2U] = 0U;
    VL_ADD_W(3, __Vtemp3609, __Vtemp3608, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x200U & (__Vtemp3609[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12446]);
        __Vtemp3612[0U] = 1U;
        __Vtemp3612[1U] = 0U;
        __Vtemp3612[2U] = 0U;
        VL_ADD_W(3, __Vtemp3613, __Vtemp3612, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x200U & __Vtemp3613[0U]));
    }
    __Vtemp3616[0U] = 1U;
    __Vtemp3616[1U] = 0U;
    __Vtemp3616[2U] = 0U;
    VL_ADD_W(3, __Vtemp3617, __Vtemp3616, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x400U & (__Vtemp3617[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12447]);
        __Vtemp3620[0U] = 1U;
        __Vtemp3620[1U] = 0U;
        __Vtemp3620[2U] = 0U;
        VL_ADD_W(3, __Vtemp3621, __Vtemp3620, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x400U & __Vtemp3621[0U]));
    }
    __Vtemp3624[0U] = 1U;
    __Vtemp3624[1U] = 0U;
    __Vtemp3624[2U] = 0U;
    VL_ADD_W(3, __Vtemp3625, __Vtemp3624, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x800U & (__Vtemp3625[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12448]);
        __Vtemp3628[0U] = 1U;
        __Vtemp3628[1U] = 0U;
        __Vtemp3628[2U] = 0U;
        VL_ADD_W(3, __Vtemp3629, __Vtemp3628, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x800U & __Vtemp3629[0U]));
    }
    __Vtemp3632[0U] = 1U;
    __Vtemp3632[1U] = 0U;
    __Vtemp3632[2U] = 0U;
    VL_ADD_W(3, __Vtemp3633, __Vtemp3632, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x1000U & (__Vtemp3633[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12449]);
        __Vtemp3636[0U] = 1U;
        __Vtemp3636[1U] = 0U;
        __Vtemp3636[2U] = 0U;
        VL_ADD_W(3, __Vtemp3637, __Vtemp3636, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x1000U & __Vtemp3637[0U]));
    }
    __Vtemp3640[0U] = 1U;
    __Vtemp3640[1U] = 0U;
    __Vtemp3640[2U] = 0U;
    VL_ADD_W(3, __Vtemp3641, __Vtemp3640, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x2000U & (__Vtemp3641[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12450]);
        __Vtemp3644[0U] = 1U;
        __Vtemp3644[1U] = 0U;
        __Vtemp3644[2U] = 0U;
        VL_ADD_W(3, __Vtemp3645, __Vtemp3644, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x2000U & __Vtemp3645[0U]));
    }
    __Vtemp3648[0U] = 1U;
    __Vtemp3648[1U] = 0U;
    __Vtemp3648[2U] = 0U;
    VL_ADD_W(3, __Vtemp3649, __Vtemp3648, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x4000U & (__Vtemp3649[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12451]);
        __Vtemp3652[0U] = 1U;
        __Vtemp3652[1U] = 0U;
        __Vtemp3652[2U] = 0U;
        VL_ADD_W(3, __Vtemp3653, __Vtemp3652, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x4000U & __Vtemp3653[0U]));
    }
    __Vtemp3656[0U] = 1U;
    __Vtemp3656[1U] = 0U;
    __Vtemp3656[2U] = 0U;
    VL_ADD_W(3, __Vtemp3657, __Vtemp3656, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x8000U & (__Vtemp3657[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12452]);
        __Vtemp3660[0U] = 1U;
        __Vtemp3660[1U] = 0U;
        __Vtemp3660[2U] = 0U;
        VL_ADD_W(3, __Vtemp3661, __Vtemp3660, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x8000U & __Vtemp3661[0U]));
    }
    __Vtemp3664[0U] = 1U;
    __Vtemp3664[1U] = 0U;
    __Vtemp3664[2U] = 0U;
    VL_ADD_W(3, __Vtemp3665, __Vtemp3664, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x10000U & (__Vtemp3665[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12453]);
        __Vtemp3668[0U] = 1U;
        __Vtemp3668[1U] = 0U;
        __Vtemp3668[2U] = 0U;
        VL_ADD_W(3, __Vtemp3669, __Vtemp3668, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10000U & __Vtemp3669[0U]));
    }
    __Vtemp3672[0U] = 1U;
    __Vtemp3672[1U] = 0U;
    __Vtemp3672[2U] = 0U;
    VL_ADD_W(3, __Vtemp3673, __Vtemp3672, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x20000U & (__Vtemp3673[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12454]);
        __Vtemp3676[0U] = 1U;
        __Vtemp3676[1U] = 0U;
        __Vtemp3676[2U] = 0U;
        VL_ADD_W(3, __Vtemp3677, __Vtemp3676, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20000U & __Vtemp3677[0U]));
    }
    __Vtemp3680[0U] = 1U;
    __Vtemp3680[1U] = 0U;
    __Vtemp3680[2U] = 0U;
    VL_ADD_W(3, __Vtemp3681, __Vtemp3680, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x40000U & (__Vtemp3681[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12455]);
        __Vtemp3684[0U] = 1U;
        __Vtemp3684[1U] = 0U;
        __Vtemp3684[2U] = 0U;
        VL_ADD_W(3, __Vtemp3685, __Vtemp3684, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40000U & __Vtemp3685[0U]));
    }
    __Vtemp3688[0U] = 1U;
    __Vtemp3688[1U] = 0U;
    __Vtemp3688[2U] = 0U;
    VL_ADD_W(3, __Vtemp3689, __Vtemp3688, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x80000U & (__Vtemp3689[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12456]);
        __Vtemp3692[0U] = 1U;
        __Vtemp3692[1U] = 0U;
        __Vtemp3692[2U] = 0U;
        VL_ADD_W(3, __Vtemp3693, __Vtemp3692, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80000U & __Vtemp3693[0U]));
    }
    __Vtemp3696[0U] = 1U;
    __Vtemp3696[1U] = 0U;
    __Vtemp3696[2U] = 0U;
    VL_ADD_W(3, __Vtemp3697, __Vtemp3696, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x100000U & (__Vtemp3697[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12457]);
        __Vtemp3700[0U] = 1U;
        __Vtemp3700[1U] = 0U;
        __Vtemp3700[2U] = 0U;
        VL_ADD_W(3, __Vtemp3701, __Vtemp3700, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x100000U & __Vtemp3701[0U]));
    }
    __Vtemp3704[0U] = 1U;
    __Vtemp3704[1U] = 0U;
    __Vtemp3704[2U] = 0U;
    VL_ADD_W(3, __Vtemp3705, __Vtemp3704, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x200000U & (__Vtemp3705[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12458]);
        __Vtemp3708[0U] = 1U;
        __Vtemp3708[1U] = 0U;
        __Vtemp3708[2U] = 0U;
        VL_ADD_W(3, __Vtemp3709, __Vtemp3708, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x200000U & __Vtemp3709[0U]));
    }
    __Vtemp3712[0U] = 1U;
    __Vtemp3712[1U] = 0U;
    __Vtemp3712[2U] = 0U;
    VL_ADD_W(3, __Vtemp3713, __Vtemp3712, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x400000U & (__Vtemp3713[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12459]);
        __Vtemp3716[0U] = 1U;
        __Vtemp3716[1U] = 0U;
        __Vtemp3716[2U] = 0U;
        VL_ADD_W(3, __Vtemp3717, __Vtemp3716, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x400000U & __Vtemp3717[0U]));
    }
    __Vtemp3720[0U] = 1U;
    __Vtemp3720[1U] = 0U;
    __Vtemp3720[2U] = 0U;
    VL_ADD_W(3, __Vtemp3721, __Vtemp3720, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x800000U & (__Vtemp3721[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12460]);
        __Vtemp3724[0U] = 1U;
        __Vtemp3724[1U] = 0U;
        __Vtemp3724[2U] = 0U;
        VL_ADD_W(3, __Vtemp3725, __Vtemp3724, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x800000U & __Vtemp3725[0U]));
    }
    __Vtemp3728[0U] = 1U;
    __Vtemp3728[1U] = 0U;
    __Vtemp3728[2U] = 0U;
    VL_ADD_W(3, __Vtemp3729, __Vtemp3728, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x1000000U & (__Vtemp3729[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12461]);
        __Vtemp3732[0U] = 1U;
        __Vtemp3732[1U] = 0U;
        __Vtemp3732[2U] = 0U;
        VL_ADD_W(3, __Vtemp3733, __Vtemp3732, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x1000000U & __Vtemp3733[0U]));
    }
    __Vtemp3736[0U] = 1U;
    __Vtemp3736[1U] = 0U;
    __Vtemp3736[2U] = 0U;
    VL_ADD_W(3, __Vtemp3737, __Vtemp3736, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x2000000U & (__Vtemp3737[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12462]);
        __Vtemp3740[0U] = 1U;
        __Vtemp3740[1U] = 0U;
        __Vtemp3740[2U] = 0U;
        VL_ADD_W(3, __Vtemp3741, __Vtemp3740, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x2000000U & __Vtemp3741[0U]));
    }
    __Vtemp3744[0U] = 1U;
    __Vtemp3744[1U] = 0U;
    __Vtemp3744[2U] = 0U;
    VL_ADD_W(3, __Vtemp3745, __Vtemp3744, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x4000000U & (__Vtemp3745[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12463]);
        __Vtemp3748[0U] = 1U;
        __Vtemp3748[1U] = 0U;
        __Vtemp3748[2U] = 0U;
        VL_ADD_W(3, __Vtemp3749, __Vtemp3748, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x4000000U & __Vtemp3749[0U]));
    }
    __Vtemp3752[0U] = 1U;
    __Vtemp3752[1U] = 0U;
    __Vtemp3752[2U] = 0U;
    VL_ADD_W(3, __Vtemp3753, __Vtemp3752, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x8000000U & (__Vtemp3753[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12464]);
        __Vtemp3756[0U] = 1U;
        __Vtemp3756[1U] = 0U;
        __Vtemp3756[2U] = 0U;
        VL_ADD_W(3, __Vtemp3757, __Vtemp3756, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x8000000U & __Vtemp3757[0U]));
    }
    __Vtemp3760[0U] = 1U;
    __Vtemp3760[1U] = 0U;
    __Vtemp3760[2U] = 0U;
    VL_ADD_W(3, __Vtemp3761, __Vtemp3760, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x10000000U & (__Vtemp3761[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12465]);
        __Vtemp3764[0U] = 1U;
        __Vtemp3764[1U] = 0U;
        __Vtemp3764[2U] = 0U;
        VL_ADD_W(3, __Vtemp3765, __Vtemp3764, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10000000U & __Vtemp3765[0U]));
    }
    __Vtemp3768[0U] = 1U;
    __Vtemp3768[1U] = 0U;
    __Vtemp3768[2U] = 0U;
    VL_ADD_W(3, __Vtemp3769, __Vtemp3768, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x20000000U & (__Vtemp3769[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12466]);
        __Vtemp3772[0U] = 1U;
        __Vtemp3772[1U] = 0U;
        __Vtemp3772[2U] = 0U;
        VL_ADD_W(3, __Vtemp3773, __Vtemp3772, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20000000U & __Vtemp3773[0U]));
    }
    __Vtemp3776[0U] = 1U;
    __Vtemp3776[1U] = 0U;
    __Vtemp3776[2U] = 0U;
    VL_ADD_W(3, __Vtemp3777, __Vtemp3776, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x40000000U & (__Vtemp3777[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[12467]);
        __Vtemp3780[0U] = 1U;
        __Vtemp3780[1U] = 0U;
        __Vtemp3780[2U] = 0U;
        VL_ADD_W(3, __Vtemp3781, __Vtemp3780, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40000000U & __Vtemp3781[0U]));
    }
    __Vtemp3784[0U] = 1U;
    __Vtemp3784[1U] = 0U;
    __Vtemp3784[2U] = 0U;
    VL_ADD_W(3, __Vtemp3785, __Vtemp3784, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if (((__Vtemp3785[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12468]);
        __Vtemp3788[0U] = 1U;
        __Vtemp3788[1U] = 0U;
        __Vtemp3788[2U] = 0U;
        VL_ADD_W(3, __Vtemp3789, __Vtemp3788, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80000000U & __Vtemp3789[0U]));
    }
    __Vtemp3792[0U] = 1U;
    __Vtemp3792[1U] = 0U;
    __Vtemp3792[2U] = 0U;
    VL_ADD_W(3, __Vtemp3793, __Vtemp3792, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((1U & (__Vtemp3793[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12469]);
        __Vtemp3796[0U] = 1U;
        __Vtemp3796[1U] = 0U;
        __Vtemp3796[2U] = 0U;
        VL_ADD_W(3, __Vtemp3797, __Vtemp3796, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (1U & __Vtemp3797[1U]));
    }
    __Vtemp3800[0U] = 1U;
    __Vtemp3800[1U] = 0U;
    __Vtemp3800[2U] = 0U;
    VL_ADD_W(3, __Vtemp3801, __Vtemp3800, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((2U & (__Vtemp3801[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12470]);
        __Vtemp3804[0U] = 1U;
        __Vtemp3804[1U] = 0U;
        __Vtemp3804[2U] = 0U;
        VL_ADD_W(3, __Vtemp3805, __Vtemp3804, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (2U & __Vtemp3805[1U]));
    }
    __Vtemp3808[0U] = 1U;
    __Vtemp3808[1U] = 0U;
    __Vtemp3808[2U] = 0U;
    VL_ADD_W(3, __Vtemp3809, __Vtemp3808, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((4U & (__Vtemp3809[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12471]);
        __Vtemp3812[0U] = 1U;
        __Vtemp3812[1U] = 0U;
        __Vtemp3812[2U] = 0U;
        VL_ADD_W(3, __Vtemp3813, __Vtemp3812, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (4U & __Vtemp3813[1U]));
    }
    __Vtemp3816[0U] = 1U;
    __Vtemp3816[1U] = 0U;
    __Vtemp3816[2U] = 0U;
    VL_ADD_W(3, __Vtemp3817, __Vtemp3816, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((8U & (__Vtemp3817[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12472]);
        __Vtemp3820[0U] = 1U;
        __Vtemp3820[1U] = 0U;
        __Vtemp3820[2U] = 0U;
        VL_ADD_W(3, __Vtemp3821, __Vtemp3820, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (8U & __Vtemp3821[1U]));
    }
    __Vtemp3824[0U] = 1U;
    __Vtemp3824[1U] = 0U;
    __Vtemp3824[2U] = 0U;
    VL_ADD_W(3, __Vtemp3825, __Vtemp3824, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x10U & (__Vtemp3825[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12473]);
        __Vtemp3828[0U] = 1U;
        __Vtemp3828[1U] = 0U;
        __Vtemp3828[2U] = 0U;
        VL_ADD_W(3, __Vtemp3829, __Vtemp3828, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10U & __Vtemp3829[1U]));
    }
    __Vtemp3832[0U] = 1U;
    __Vtemp3832[1U] = 0U;
    __Vtemp3832[2U] = 0U;
    VL_ADD_W(3, __Vtemp3833, __Vtemp3832, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x20U & (__Vtemp3833[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12474]);
        __Vtemp3836[0U] = 1U;
        __Vtemp3836[1U] = 0U;
        __Vtemp3836[2U] = 0U;
        VL_ADD_W(3, __Vtemp3837, __Vtemp3836, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20U & __Vtemp3837[1U]));
    }
    __Vtemp3840[0U] = 1U;
    __Vtemp3840[1U] = 0U;
    __Vtemp3840[2U] = 0U;
    VL_ADD_W(3, __Vtemp3841, __Vtemp3840, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x40U & (__Vtemp3841[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12475]);
        __Vtemp3844[0U] = 1U;
        __Vtemp3844[1U] = 0U;
        __Vtemp3844[2U] = 0U;
        VL_ADD_W(3, __Vtemp3845, __Vtemp3844, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40U & __Vtemp3845[1U]));
    }
    __Vtemp3848[0U] = 1U;
    __Vtemp3848[1U] = 0U;
    __Vtemp3848[2U] = 0U;
    VL_ADD_W(3, __Vtemp3849, __Vtemp3848, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x80U & (__Vtemp3849[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12476]);
        __Vtemp3852[0U] = 1U;
        __Vtemp3852[1U] = 0U;
        __Vtemp3852[2U] = 0U;
        VL_ADD_W(3, __Vtemp3853, __Vtemp3852, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80U & __Vtemp3853[1U]));
    }
    __Vtemp3856[0U] = 1U;
    __Vtemp3856[1U] = 0U;
    __Vtemp3856[2U] = 0U;
    VL_ADD_W(3, __Vtemp3857, __Vtemp3856, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x100U & (__Vtemp3857[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12477]);
        __Vtemp3860[0U] = 1U;
        __Vtemp3860[1U] = 0U;
        __Vtemp3860[2U] = 0U;
        VL_ADD_W(3, __Vtemp3861, __Vtemp3860, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x100U & __Vtemp3861[1U]));
    }
    __Vtemp3864[0U] = 1U;
    __Vtemp3864[1U] = 0U;
    __Vtemp3864[2U] = 0U;
    VL_ADD_W(3, __Vtemp3865, __Vtemp3864, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x200U & (__Vtemp3865[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12478]);
        __Vtemp3868[0U] = 1U;
        __Vtemp3868[1U] = 0U;
        __Vtemp3868[2U] = 0U;
        VL_ADD_W(3, __Vtemp3869, __Vtemp3868, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x200U & __Vtemp3869[1U]));
    }
    __Vtemp3872[0U] = 1U;
    __Vtemp3872[1U] = 0U;
    __Vtemp3872[2U] = 0U;
    VL_ADD_W(3, __Vtemp3873, __Vtemp3872, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x400U & (__Vtemp3873[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12479]);
        __Vtemp3876[0U] = 1U;
        __Vtemp3876[1U] = 0U;
        __Vtemp3876[2U] = 0U;
        VL_ADD_W(3, __Vtemp3877, __Vtemp3876, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x400U & __Vtemp3877[1U]));
    }
    __Vtemp3880[0U] = 1U;
    __Vtemp3880[1U] = 0U;
    __Vtemp3880[2U] = 0U;
    VL_ADD_W(3, __Vtemp3881, __Vtemp3880, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x800U & (__Vtemp3881[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12480]);
        __Vtemp3884[0U] = 1U;
        __Vtemp3884[1U] = 0U;
        __Vtemp3884[2U] = 0U;
        VL_ADD_W(3, __Vtemp3885, __Vtemp3884, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x800U & __Vtemp3885[1U]));
    }
    __Vtemp3888[0U] = 1U;
    __Vtemp3888[1U] = 0U;
    __Vtemp3888[2U] = 0U;
    VL_ADD_W(3, __Vtemp3889, __Vtemp3888, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x1000U & (__Vtemp3889[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12481]);
        __Vtemp3892[0U] = 1U;
        __Vtemp3892[1U] = 0U;
        __Vtemp3892[2U] = 0U;
        VL_ADD_W(3, __Vtemp3893, __Vtemp3892, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x1000U & __Vtemp3893[1U]));
    }
    __Vtemp3896[0U] = 1U;
    __Vtemp3896[1U] = 0U;
    __Vtemp3896[2U] = 0U;
    VL_ADD_W(3, __Vtemp3897, __Vtemp3896, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x2000U & (__Vtemp3897[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12482]);
        __Vtemp3900[0U] = 1U;
        __Vtemp3900[1U] = 0U;
        __Vtemp3900[2U] = 0U;
        VL_ADD_W(3, __Vtemp3901, __Vtemp3900, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x2000U & __Vtemp3901[1U]));
    }
    __Vtemp3904[0U] = 1U;
    __Vtemp3904[1U] = 0U;
    __Vtemp3904[2U] = 0U;
    VL_ADD_W(3, __Vtemp3905, __Vtemp3904, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x4000U & (__Vtemp3905[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12483]);
        __Vtemp3908[0U] = 1U;
        __Vtemp3908[1U] = 0U;
        __Vtemp3908[2U] = 0U;
        VL_ADD_W(3, __Vtemp3909, __Vtemp3908, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x4000U & __Vtemp3909[1U]));
    }
    __Vtemp3912[0U] = 1U;
    __Vtemp3912[1U] = 0U;
    __Vtemp3912[2U] = 0U;
    VL_ADD_W(3, __Vtemp3913, __Vtemp3912, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x8000U & (__Vtemp3913[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12484]);
        __Vtemp3916[0U] = 1U;
        __Vtemp3916[1U] = 0U;
        __Vtemp3916[2U] = 0U;
        VL_ADD_W(3, __Vtemp3917, __Vtemp3916, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x8000U & __Vtemp3917[1U]));
    }
    __Vtemp3920[0U] = 1U;
    __Vtemp3920[1U] = 0U;
    __Vtemp3920[2U] = 0U;
    VL_ADD_W(3, __Vtemp3921, __Vtemp3920, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x10000U & (__Vtemp3921[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12485]);
        __Vtemp3924[0U] = 1U;
        __Vtemp3924[1U] = 0U;
        __Vtemp3924[2U] = 0U;
        VL_ADD_W(3, __Vtemp3925, __Vtemp3924, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10000U & __Vtemp3925[1U]));
    }
    __Vtemp3928[0U] = 1U;
    __Vtemp3928[1U] = 0U;
    __Vtemp3928[2U] = 0U;
    VL_ADD_W(3, __Vtemp3929, __Vtemp3928, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x20000U & (__Vtemp3929[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12486]);
        __Vtemp3932[0U] = 1U;
        __Vtemp3932[1U] = 0U;
        __Vtemp3932[2U] = 0U;
        VL_ADD_W(3, __Vtemp3933, __Vtemp3932, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20000U & __Vtemp3933[1U]));
    }
    __Vtemp3936[0U] = 1U;
    __Vtemp3936[1U] = 0U;
    __Vtemp3936[2U] = 0U;
    VL_ADD_W(3, __Vtemp3937, __Vtemp3936, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x40000U & (__Vtemp3937[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12487]);
        __Vtemp3940[0U] = 1U;
        __Vtemp3940[1U] = 0U;
        __Vtemp3940[2U] = 0U;
        VL_ADD_W(3, __Vtemp3941, __Vtemp3940, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40000U & __Vtemp3941[1U]));
    }
    __Vtemp3944[0U] = 1U;
    __Vtemp3944[1U] = 0U;
    __Vtemp3944[2U] = 0U;
    VL_ADD_W(3, __Vtemp3945, __Vtemp3944, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x80000U & (__Vtemp3945[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12488]);
        __Vtemp3948[0U] = 1U;
        __Vtemp3948[1U] = 0U;
        __Vtemp3948[2U] = 0U;
        VL_ADD_W(3, __Vtemp3949, __Vtemp3948, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80000U & __Vtemp3949[1U]));
    }
    __Vtemp3952[0U] = 1U;
    __Vtemp3952[1U] = 0U;
    __Vtemp3952[2U] = 0U;
    VL_ADD_W(3, __Vtemp3953, __Vtemp3952, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x100000U & (__Vtemp3953[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12489]);
        __Vtemp3956[0U] = 1U;
        __Vtemp3956[1U] = 0U;
        __Vtemp3956[2U] = 0U;
        VL_ADD_W(3, __Vtemp3957, __Vtemp3956, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x100000U & __Vtemp3957[1U]));
    }
    __Vtemp3960[0U] = 1U;
    __Vtemp3960[1U] = 0U;
    __Vtemp3960[2U] = 0U;
    VL_ADD_W(3, __Vtemp3961, __Vtemp3960, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x200000U & (__Vtemp3961[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12490]);
        __Vtemp3964[0U] = 1U;
        __Vtemp3964[1U] = 0U;
        __Vtemp3964[2U] = 0U;
        VL_ADD_W(3, __Vtemp3965, __Vtemp3964, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x200000U & __Vtemp3965[1U]));
    }
    __Vtemp3968[0U] = 1U;
    __Vtemp3968[1U] = 0U;
    __Vtemp3968[2U] = 0U;
    VL_ADD_W(3, __Vtemp3969, __Vtemp3968, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x400000U & (__Vtemp3969[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12491]);
        __Vtemp3972[0U] = 1U;
        __Vtemp3972[1U] = 0U;
        __Vtemp3972[2U] = 0U;
        VL_ADD_W(3, __Vtemp3973, __Vtemp3972, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x400000U & __Vtemp3973[1U]));
    }
    __Vtemp3976[0U] = 1U;
    __Vtemp3976[1U] = 0U;
    __Vtemp3976[2U] = 0U;
    VL_ADD_W(3, __Vtemp3977, __Vtemp3976, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x800000U & (__Vtemp3977[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12492]);
        __Vtemp3980[0U] = 1U;
        __Vtemp3980[1U] = 0U;
        __Vtemp3980[2U] = 0U;
        VL_ADD_W(3, __Vtemp3981, __Vtemp3980, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x800000U & __Vtemp3981[1U]));
    }
    __Vtemp3984[0U] = 1U;
    __Vtemp3984[1U] = 0U;
    __Vtemp3984[2U] = 0U;
    VL_ADD_W(3, __Vtemp3985, __Vtemp3984, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x1000000U & (__Vtemp3985[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12493]);
        __Vtemp3988[0U] = 1U;
        __Vtemp3988[1U] = 0U;
        __Vtemp3988[2U] = 0U;
        VL_ADD_W(3, __Vtemp3989, __Vtemp3988, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x1000000U & __Vtemp3989[1U]));
    }
    __Vtemp3992[0U] = 1U;
    __Vtemp3992[1U] = 0U;
    __Vtemp3992[2U] = 0U;
    VL_ADD_W(3, __Vtemp3993, __Vtemp3992, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x2000000U & (__Vtemp3993[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12494]);
        __Vtemp3996[0U] = 1U;
        __Vtemp3996[1U] = 0U;
        __Vtemp3996[2U] = 0U;
        VL_ADD_W(3, __Vtemp3997, __Vtemp3996, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x2000000U & __Vtemp3997[1U]));
    }
    __Vtemp4000[0U] = 1U;
    __Vtemp4000[1U] = 0U;
    __Vtemp4000[2U] = 0U;
    VL_ADD_W(3, __Vtemp4001, __Vtemp4000, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x4000000U & (__Vtemp4001[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12495]);
        __Vtemp4004[0U] = 1U;
        __Vtemp4004[1U] = 0U;
        __Vtemp4004[2U] = 0U;
        VL_ADD_W(3, __Vtemp4005, __Vtemp4004, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x4000000U & __Vtemp4005[1U]));
    }
    __Vtemp4008[0U] = 1U;
    __Vtemp4008[1U] = 0U;
    __Vtemp4008[2U] = 0U;
    VL_ADD_W(3, __Vtemp4009, __Vtemp4008, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x8000000U & (__Vtemp4009[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12496]);
        __Vtemp4012[0U] = 1U;
        __Vtemp4012[1U] = 0U;
        __Vtemp4012[2U] = 0U;
        VL_ADD_W(3, __Vtemp4013, __Vtemp4012, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x8000000U & __Vtemp4013[1U]));
    }
    __Vtemp4016[0U] = 1U;
    __Vtemp4016[1U] = 0U;
    __Vtemp4016[2U] = 0U;
    VL_ADD_W(3, __Vtemp4017, __Vtemp4016, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x10000000U & (__Vtemp4017[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12497]);
        __Vtemp4020[0U] = 1U;
        __Vtemp4020[1U] = 0U;
        __Vtemp4020[2U] = 0U;
        VL_ADD_W(3, __Vtemp4021, __Vtemp4020, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10000000U & __Vtemp4021[1U]));
    }
    __Vtemp4024[0U] = 1U;
    __Vtemp4024[1U] = 0U;
    __Vtemp4024[2U] = 0U;
    VL_ADD_W(3, __Vtemp4025, __Vtemp4024, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x20000000U & (__Vtemp4025[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12498]);
        __Vtemp4028[0U] = 1U;
        __Vtemp4028[1U] = 0U;
        __Vtemp4028[2U] = 0U;
        VL_ADD_W(3, __Vtemp4029, __Vtemp4028, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20000000U & __Vtemp4029[1U]));
    }
    __Vtemp4032[0U] = 1U;
    __Vtemp4032[1U] = 0U;
    __Vtemp4032[2U] = 0U;
    VL_ADD_W(3, __Vtemp4033, __Vtemp4032, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((0x40000000U & (__Vtemp4033[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[12499]);
        __Vtemp4036[0U] = 1U;
        __Vtemp4036[1U] = 0U;
        __Vtemp4036[2U] = 0U;
        VL_ADD_W(3, __Vtemp4037, __Vtemp4036, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40000000U & __Vtemp4037[1U]));
    }
    __Vtemp4040[0U] = 1U;
    __Vtemp4040[1U] = 0U;
    __Vtemp4040[2U] = 0U;
    VL_ADD_W(3, __Vtemp4041, __Vtemp4040, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if (((__Vtemp4041[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12500]);
        __Vtemp4044[0U] = 1U;
        __Vtemp4044[1U] = 0U;
        __Vtemp4044[2U] = 0U;
        VL_ADD_W(3, __Vtemp4045, __Vtemp4044, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80000000U & __Vtemp4045[1U]));
    }
    __Vtemp4048[0U] = 1U;
    __Vtemp4048[1U] = 0U;
    __Vtemp4048[2U] = 0U;
    VL_ADD_W(3, __Vtemp4049, __Vtemp4048, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    if ((1U & ((1U & __Vtemp4049[2U]) ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[2U]))) {
        ++(vlSymsp->__Vcoverage[12501]);
        __Vtemp4052[0U] = 1U;
        __Vtemp4052[1U] = 0U;
        __Vtemp4052[2U] = 0U;
        VL_ADD_W(3, __Vtemp4053, __Vtemp4052, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[2U] 
            = (1U & __Vtemp4053[2U]);
    }
    __Vtemp4056[0U] = 1U;
    __Vtemp4056[1U] = 0U;
    __Vtemp4056[2U] = 0U;
    VL_ADD_W(3, __Vtemp4057, __Vtemp4056, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                             >> 0x3fU)) : (__Vtemp4057[1U] 
                                           >> 0x1fU)));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
            ? 6U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                     ? 0xcU : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                ? 0xcU : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 6U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 0xcU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 7U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 7U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 7U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 7U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 7U
                                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_350)))))))))))));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_flush))) {
        ++(vlSymsp->__Vcoverage[11676]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_flush 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_flush))) {
        ++(vlSymsp->__Vcoverage[5704]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_flush 
            = vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_5 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
             & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall)));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc)))) {
        ++(vlSymsp->__Vcoverage[11677]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[11678]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[11679]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[11680]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[11681]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[11682]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[11683]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[11684]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11685]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11686]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[11687]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[11688]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[11689]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[11690]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[11691]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[11692]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[11693]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[11694]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[11695]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[11696]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[11697]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[11698]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[11699]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[11700]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[11701]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[11702]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[11703]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[11704]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[11705]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[11706]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[11707]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[11708]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[11709]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[11710]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[11711]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[11712]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[11713]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[11714]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[11715]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[11716]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[11717]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[11718]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[11719]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[11720]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[11721]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[11722]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[11723]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[11724]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[11725]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[11726]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[11727]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[11728]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[11729]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[11730]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[11731]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[11732]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[11733]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[11734]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[11735]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[11736]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[11737]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[11738]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[11739]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[11740]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc)))) {
        ++(vlSymsp->__Vcoverage[5640]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5641]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5642]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5643]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5644]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5645]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5646]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5647]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5648]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5649]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5650]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5651]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5652]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5653]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5654]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5655]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5656]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5657]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5658]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5659]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5660]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5661]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5662]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5663]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5665]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5667]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5668]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5669]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5670]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5671]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5672]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5673]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5674]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5675]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5677]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5678]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5679]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5680]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5681]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5682]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5683]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5684]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5685]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5686]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5687]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5688]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5689]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5690]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5691]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5692]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5693]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5694]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5695]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5696]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5697]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5698]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5699]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5700]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5701]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5702]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5703]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_11))));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2))) {
        ++(vlSymsp->__Vcoverage[12503]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    }
    __Vtemp4066[0U] = 1U;
    __Vtemp4066[1U] = 0U;
    __Vtemp4066[2U] = 0U;
    VL_ADD_W(3, __Vtemp4067, __Vtemp4066, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp4077[0U] = 1U;
    __Vtemp4077[1U] = 0U;
    __Vtemp4077[2U] = 0U;
    VL_ADD_W(3, __Vtemp4078, __Vtemp4077, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp4103[1U] = ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                        ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                            == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                            ? 0U : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                            >> 0x20U)))
                        : ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                            ? ((1U & __Vtemp4067[2U])
                                ? 0U : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                                >> 0x20U)))
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                               >> 0x20U))
                                    : 0U) : ((0x3eU 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                              ? ((1U 
                                                  & __Vtemp4078[2U])
                                                  ? (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                                             >> 0x20U))
                                                  : 0U)
                                              : ((0x3cU 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                  ? 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                   ? 0U
                                                   : (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                                              >> 0x20U)))
                                                  : 
                                                 ((0x34U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                    == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                                                    ? (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                                               >> 0x20U))
                                                    : 0U)
                                                   : 0U))))));
    __Vtemp4105[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                            : ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? ((1U & __Vtemp4067[2U])
                                    ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                                : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                        : 0U) : ((0x3eU 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                  ? 
                                                 ((1U 
                                                   & __Vtemp4078[2U])
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                                   : 0U)
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                   ? 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                    ? 0U
                                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                     == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                                     : 0U)
                                                    : 0U)))))));
    if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = (IData)((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = (IData)(((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] = 1U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = __Vtemp4105[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                           >> 0x20U)) : __Vtemp4103[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
            = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? 1U : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                         ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                             == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                             ? 0U : 1U) : ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                            ? ((1U 
                                                & __Vtemp4067[2U])
                                                ? 0U
                                                : 1U)
                                            : ((0x38U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (0x3eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                    ? 
                                                   ((1U 
                                                     & __Vtemp4078[2U])
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                     ? 
                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                      ? 
                                                     ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                       == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))));
    }
    __Vtemp4109[0U] = 1U;
    __Vtemp4109[1U] = 0U;
    __Vtemp4109[2U] = 0U;
    VL_ADD_W(3, __Vtemp4110, __Vtemp4109, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp4115[0U] = 1U;
    __Vtemp4115[1U] = 0U;
    __Vtemp4115[2U] = 0U;
    VL_ADD_W(3, __Vtemp4116, __Vtemp4115, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp4132[1U] = ((4U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                        >> 1U))) ? (IData)(
                                                           ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                                            >> 0x20U))
                        : ((2U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                            >> 1U)))
                            ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                       >> 0x20U)) : 
                           ((0x17U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                >> 1U)))
                             ? (IData)((((1U & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                        >> 0x1fU)))
                                          ? (0xffffffff00000000ULL 
                                             | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp)))
                                          : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp))) 
                                        >> 0x20U)) : 
                            ((0x16U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                 >> 1U)))
                              ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                         >> 0x20U))
                              : 0U))));
    __Vtemp4134[0U] = ((6U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                        >> 1U))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                        : ((4U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                            >> 1U)))
                            ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                            : ((2U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                >> 1U)))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                : ((0x17U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                 >> 1U)))
                                    ? (IData)(((1U 
                                                & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                           >> 0x1fU)))
                                                ? (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp)))
                                                : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp))))
                                    : ((0x16U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                     >> 1U)))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp)
                                        : 0U)))));
    if ((0xbU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                           >> 1U)))) {
        __Vtemp4140[1U] = (IData)((((__Vtemp4110[0U] 
                                     >> 0x1fU) ? (0xffffffff00000000ULL 
                                                  | (QData)((IData)(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U]))))
                                     : (QData)((IData)(
                                                       ((IData)(1U) 
                                                        + 
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))) 
                                   >> 0x20U));
        __Vtemp4140[2U] = 1U;
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U] 
            = (IData)(((__Vtemp4110[0U] >> 0x1fU) ? 
                       (0xffffffff00000000ULL | (QData)((IData)(
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U]))))
                        : (QData)((IData)(((IData)(1U) 
                                           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))));
    } else {
        __Vtemp4140[1U] = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                              >> 1U)))
                            ? (IData)(((1ULL + (((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))) 
                                       >> 0x20U)) : 
                           ((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                             ? 0U : ((6U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                >> 1U)))
                                      ? 0U : __Vtemp4132[1U])));
        __Vtemp4140[2U] = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                              >> 1U)))
                            ? 1U : ((8U == (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                                     ? 1U : ((6U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                  >> 1U)))
                                              ? 1U : 
                                             ((4U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                   >> 1U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                       >> 1U)))
                                                   ? 1U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U)))))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U] 
            = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                  >> 1U))) ? (IData)(
                                                     (1ULL 
                                                      + 
                                                      (((QData)((IData)(
                                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))))
                : ((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                    >> 1U))) ? (1U 
                                                & (~ 
                                                   (1U 
                                                    & __Vtemp4116[2U])))
                    : __Vtemp4134[0U]));
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[1U] 
        = __Vtemp4140[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[2U] 
        = __Vtemp4140[2U];
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  >> 0x1fU) ? 0xfffffffffffffULL : 0ULL) 
                << 0xcU) | (QData)((IData)(((0x800U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                     >> 7U)))))))
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      >> 0x1fU) ? 0xfffffffffffULL : 0ULL) 
                    << 0x14U) | (QData)((IData)(((0xff000U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                          >> 0x14U)))))))
                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                                    >> 7U))))))
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 0x1fU)
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))))
                        : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0x14U))))
                            : 0ULL)))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[14945]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xeU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[14946]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xdU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[14947]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xbU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[14948]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__r_chosen)))) {
        ++(vlSymsp->__Vcoverage[11541]);
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__r_chosen 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__r_chosen)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__r_chosen)))) {
        ++(vlSymsp->__Vcoverage[11542]);
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__r_chosen 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__r_chosen)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
                    : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
                    : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                        ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr
                        : 0ULL))));
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc_valid)))) {
        ++(vlSymsp->__Vcoverage[12889]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc_valid 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12824]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12825]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12826]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12827]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12828]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12829]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12830]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12831]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12832]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12833]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12834]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12835]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12836]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12837]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12838]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12839]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12840]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12841]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12842]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12843]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12844]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12845]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12846]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12847]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12848]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12849]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12850]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12851]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12852]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12853]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]))) {
        ++(vlSymsp->__Vcoverage[12854]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12855]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12856]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12857]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12858]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12859]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12860]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12861]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12862]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12863]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12864]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12865]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12866]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12867]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12868]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12869]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12870]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12871]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12872]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12873]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12874]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12875]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12876]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12877]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12878]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12879]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12880]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12881]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12882]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12883]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12884]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12885]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]))) {
        ++(vlSymsp->__Vcoverage[12886]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12887]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U]))) {
        ++(vlSymsp->__Vcoverage[12888]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    VL_EXTEND_WQ(127,64, __Vtemp4147, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp4148, __Vtemp4147, 
                  (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    if ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                            >> 1U)))) {
        __Vtemp4156[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
        __Vtemp4156[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                    >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                                   >> 0x20U));
    } else {
        __Vtemp4156[0U] = ((0xdU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                              >> 1U)))
                            ? (IData)((((QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                                     >> 0x1fU)))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))))
                            : ((0xcU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                  >> 1U)))
                                ? (IData)((((QData)((IData)(
                                                            __Vtemp4148[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             __Vtemp4148[0U]))))
                                : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U]));
        __Vtemp4156[1U] = ((0xdU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                              >> 1U)))
                            ? (IData)(((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                                      >> 0x1fU)))
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))) 
                                       >> 0x20U)) : 
                           ((0xcU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                               >> 1U)))
                             ? (IData)(((((QData)((IData)(
                                                          __Vtemp4148[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp4148[0U]))) 
                                        >> 0x20U)) : 
                            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[1U]));
    }
    if ((0xfU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                           >> 1U)))) {
        __Vtemp4162[1U] = (IData)(((((QData)((IData)(
                                                     ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                       >> 0x1fU)
                                                       ? 0xffffffffU
                                                       : 0U))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))) 
                                   >> 0x20U));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[0U] 
            = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))));
    } else {
        __Vtemp4162[1U] = ((0xeU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                              >> 1U)))
                            ? (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                                       >> 0x20U)) : 
                           ((0x11U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                >> 1U)))
                             ? (IData)(((((QData)((IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))) 
                                        >> 0x20U)) : 
                            __Vtemp4156[1U]));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[0U] 
            = ((0xeU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                  >> 1U))) ? (IData)(
                                                     VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))))
                : ((0x11U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(
                                                          (((QData)((IData)(
                                                                            ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                                              >> 0x1fU)
                                                                              ? 0xffffffffU
                                                                              : 0U))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))))
                    : __Vtemp4156[0U]));
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[1U] 
        = __Vtemp4162[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[2U] 
        = ((0xfU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                              >> 1U))) ? 1U : ((0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                    >> 1U)))
                                                ? 1U
                                                : (
                                                   (0x11U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                          >> 1U)))
                                                      ? 1U
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                           >> 1U)))
                                                       ? 1U
                                                       : 
                                                      riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[2U]))))));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus2_ready))) {
        ++(vlSymsp->__Vcoverage[5437]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus2_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                     >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_valid))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid;
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus1_ready))) {
        ++(vlSymsp->__Vcoverage[5435]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus1_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_ready))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready;
    }
    riscv_soc__DOT__core__DOT__i_cache__DOT___T_206 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_ready))) {
        ++(vlSymsp->__Vcoverage[5433]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready;
    }
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_206 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_bits_rlast))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_bits_rlast 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast;
    }
    riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_bits_rlast))) {
        ++(vlSymsp->__Vcoverage[5432]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_bits_rlast 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xfeU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xfdU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xfbU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xf7U & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xefU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xdfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xbfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0x7fU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr)))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
        = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
            ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
            : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr);
    if ((0x1cU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                            >> 1U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] = 1U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = ((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 1U))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)
                : ((0x12U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                    : ((0x14U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 1U)))
                        ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                        : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = ((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 1U))) ? (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                       >> 0x20U))
                : ((0x12U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                            | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                                           >> 0x20U))
                    : ((0x14U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 1U)))
                        ? (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                   >> 0x20U)) : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = ((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 1U))) ? 1U : 
               ((0x12U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                    >> 1U))) ? 1U : 
                ((0x14U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                     >> 1U))) ? 1U : 
                 riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[2U])));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_24 
        = (3U & (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)) : ((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8)) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                           - (IData)(1U))
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_wb_ready))) {
        ++(vlSymsp->__Vcoverage[5570]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_wb_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) 
         | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_2 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) 
         | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
          ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
              ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                  ? ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
                     | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
                  : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
              : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
          : ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)) 
             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready)));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_ready))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
    if (riscv_soc__DOT__core__DOT__i_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_383 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_384 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? 0xffffU : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_387 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                        ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U])))))
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_383 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_384 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_387 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata;
    }
    VL_EXTEND_WQ(128,64, __Vtemp4180, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__i_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp4180[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp4180[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp4180[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp4180[3U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U];
    }
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_383 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_384 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? 0xffffU : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_387 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U])))))
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_383 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_384 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_387 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
    }
    VL_EXTEND_WQ(128,64, __Vtemp4188, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp4188[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp4188[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp4188[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp4188[3U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_401 
        = (((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_402 
        = (((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish))
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_403 
        = (((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_460 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)) 
                   & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                        & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                           >> 1U)) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                      & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                         >> 1U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                    ? ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___T_206)
                        ? (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_401 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_399)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_402 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_399))
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_403 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_399)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_460 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)) 
                   & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                        & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                           >> 1U)) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                      & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                         >> 1U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                    ? ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_206)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr)))) {
        ++(vlSymsp->__Vcoverage[16603]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[16604]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[16605]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[16606]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[16607]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[16608]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[16609]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[16610]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[16611]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[16612]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[16613]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[16614]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[16615]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[16616]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16617]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[16618]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[16619]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[16620]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[16621]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[16622]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[16623]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[16624]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[16625]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[16626]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[16627]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[16628]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[16629]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[16630]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[16631]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[16632]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[16633]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[16634]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[16635]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[16636]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[16637]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[16638]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[16639]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[16640]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[16641]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[16642]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[16643]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[16644]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[16645]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[16646]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[16647]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[16648]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[16649]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[16650]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[16651]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[16652]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[16653]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[16654]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[16655]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[16656]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[16657]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[16658]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[16659]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[16660]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[16661]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[16662]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[16663]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[16664]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[16665]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[16666]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[12760]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12695]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12696]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12697]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12698]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12699]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12700]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12701]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12702]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12703]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12704]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12705]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12706]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12707]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12708]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12709]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12710]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12711]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12712]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12713]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12714]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12715]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12716]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12717]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12718]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12719]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12720]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12721]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12722]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12723]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12724]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]))) {
        ++(vlSymsp->__Vcoverage[12725]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12726]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12727]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12728]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12729]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12730]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12731]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12732]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12733]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12734]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12735]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12736]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12737]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12738]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12739]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12740]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12741]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12742]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12743]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12744]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12745]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12746]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12747]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12748]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12749]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12750]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12751]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12752]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12753]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12754]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12755]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12756]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]))) {
        ++(vlSymsp->__Vcoverage[12757]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12758]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[12759]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)
                  ? ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
                         & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))
                  : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))));
}
