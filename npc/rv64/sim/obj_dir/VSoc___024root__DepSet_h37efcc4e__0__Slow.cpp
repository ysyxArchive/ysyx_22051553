// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_ATTR_COLD void VSoc___024root___eval_static(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSoc___024root___eval_initial(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__Soc__DOT____Vcellinp__sram__ARESETn 
        = vlSelf->Soc__DOT____Vcellinp__sram__ARESETn;
}

VL_ATTR_COLD void VSoc___024root___eval_final(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSoc___024root___eval_triggers__stl(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__stl(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSoc___024root___eval_stl(VSoc___024root* vlSelf);

VL_ATTR_COLD void VSoc___024root___eval_settle(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSoc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSoc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Soc.v", 3224, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSoc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__stl(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<16>/*511:0*/ VSoc__ConstPool__CONST_h1c449781_0;
extern const VlWide<16>/*511:0*/ VSoc__ConstPool__CONST_h93e1b771_0;
extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void VSoc___024root___stl_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_12;
    Soc__DOT__core__DOT__decode__DOT___load_use_T_12 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_8;
    Soc__DOT__core__DOT__decode__DOT___load_use_T_8 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0;
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8c8e4077__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8c8e4077__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h67a1ffee__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h67a1ffee__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Icache__DOT___GEN_12;
    Soc__DOT__core__DOT__Icache__DOT___GEN_12 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Icache__DOT___GEN_14;
    Soc__DOT__core__DOT__Icache__DOT___GEN_14 = 0;
    VlWide<16>/*511:0*/ Soc__DOT__core__DOT__Icache__DOT___GEN_21;
    VL_ZERO_W(512, Soc__DOT__core__DOT__Icache__DOT___GEN_21);
    CData/*0:0*/ Soc__DOT__core__DOT__Dcache__DOT___GEN_12;
    Soc__DOT__core__DOT__Dcache__DOT___GEN_12 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Dcache__DOT___GEN_14;
    Soc__DOT__core__DOT__Dcache__DOT___GEN_14 = 0;
    VlWide<16>/*511:0*/ Soc__DOT__core__DOT__Dcache__DOT___GEN_21;
    VL_ZERO_W(512, Soc__DOT__core__DOT__Dcache__DOT___GEN_21);
    CData/*6:0*/ __VdfgTmp_h726b6097__0;
    __VdfgTmp_h726b6097__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_h11a82919__0;
    VlWide<16>/*511:0*/ __Vtemp_h408f0c7c__0;
    VlWide<16>/*511:0*/ __Vtemp_h408f0c7c__1;
    VlWide<16>/*511:0*/ __Vtemp_h95d85a84__0;
    VlWide<16>/*511:0*/ __Vtemp_h95d85a84__1;
    VlWide<16>/*511:0*/ __Vtemp_h5e8385be__0;
    VlWide<16>/*511:0*/ __Vtemp_h5e8385be__1;
    VlWide<16>/*511:0*/ __Vtemp_hb792bbf6__0;
    VlWide<16>/*511:0*/ __Vtemp_hb792bbf6__1;
    VlWide<16>/*511:0*/ __Vtemp_he1218dcc__0;
    VlWide<16>/*511:0*/ __Vtemp_he1218dcc__1;
    VlWide<16>/*511:0*/ __Vtemp_hb201d805__0;
    VlWide<16>/*511:0*/ __Vtemp_hb201d805__1;
    VlWide<3>/*95:0*/ __Vtemp_h7ce0e83e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6eeb50c9__0;
    VlWide<3>/*95:0*/ __Vtemp_h238ea762__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__0;
    VlWide<4>/*127:0*/ __Vtemp_hb46e09a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__1;
    VlWide<4>/*127:0*/ __Vtemp_he3381e13__0;
    VlWide<4>/*127:0*/ __Vtemp_hde8f545e__0;
    VlWide<4>/*127:0*/ __Vtemp_h31e9c9ac__0;
    VlWide<16>/*511:0*/ __Vtemp_h236e7446__0;
    VlWide<16>/*511:0*/ __Vtemp_hd1f243a7__0;
    VlWide<4>/*127:0*/ __Vtemp_h40386c7d__0;
    VlWide<4>/*127:0*/ __Vtemp_hbf25ab7a__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f9be4f4__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__2;
    VlWide<4>/*127:0*/ __Vtemp_h197b5ff8__0;
    VlWide<4>/*127:0*/ __Vtemp_h2b127288__0;
    VlWide<4>/*127:0*/ __Vtemp_h197b5ff8__1;
    VlWide<4>/*127:0*/ __Vtemp_hd8984f98__0;
    VlWide<12>/*383:0*/ __Vtemp_h3c1ab257__0;
    VlWide<16>/*511:0*/ __Vtemp_h94f171c3__0;
    VlWide<14>/*447:0*/ __Vtemp_h9b08c88b__0;
    VlWide<8>/*255:0*/ __Vtemp_hbc2686fa__0;
    VlWide<8>/*255:0*/ __Vtemp_h33da069b__0;
    VlWide<16>/*511:0*/ __Vtemp_hd669a72b__0;
    VlWide<16>/*511:0*/ __Vtemp_ha26fe365__0;
    VlWide<16>/*511:0*/ __Vtemp_h773c399d__0;
    VlWide<64>/*2047:0*/ __Vtemp_hdace100e__0;
    VlWide<96>/*3071:0*/ __Vtemp_h1db9c6ed__0;
    VlWide<16>/*511:0*/ __Vtemp_h4589acab__0;
    VlWide<112>/*3583:0*/ __Vtemp_hb0c2184e__0;
    VlWide<16>/*511:0*/ __Vtemp_h1b744e70__0;
    VlWide<16>/*511:0*/ __Vtemp_h1b744e70__1;
    VlWide<16>/*511:0*/ __Vtemp_h1d721c1f__0;
    VlWide<128>/*4095:0*/ __Vtemp_h1fa9981c__0;
    VlWide<64>/*2047:0*/ __Vtemp_h291dd8b0__0;
    VlWide<96>/*3071:0*/ __Vtemp_he362a9c1__0;
    VlWide<16>/*511:0*/ __Vtemp_h24e1c136__0;
    VlWide<112>/*3583:0*/ __Vtemp_h3537412a__0;
    VlWide<16>/*511:0*/ __Vtemp_he80100a8__0;
    VlWide<16>/*511:0*/ __Vtemp_he80100a8__1;
    VlWide<16>/*511:0*/ __Vtemp_h7030f67e__0;
    VlWide<128>/*4095:0*/ __Vtemp_h1d04a2ef__0;
    VlWide<16>/*511:0*/ __Vtemp_h90dffb35__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
    VlWide<64>/*2047:0*/ __Vtemp_hf1012f5d__0;
    VlWide<96>/*3071:0*/ __Vtemp_h84430b2a__0;
    VlWide<16>/*511:0*/ __Vtemp_hb1565afd__0;
    VlWide<112>/*3583:0*/ __Vtemp_h3c5f0df7__0;
    VlWide<16>/*511:0*/ __Vtemp_h3b94b080__0;
    VlWide<16>/*511:0*/ __Vtemp_h3b94b080__1;
    VlWide<16>/*511:0*/ __Vtemp_h67dad240__0;
    VlWide<128>/*4095:0*/ __Vtemp_h5d265de5__0;
    VlWide<64>/*2047:0*/ __Vtemp_hc16f4300__0;
    VlWide<96>/*3071:0*/ __Vtemp_hb5cd95f5__0;
    VlWide<16>/*511:0*/ __Vtemp_h74456a53__0;
    VlWide<112>/*3583:0*/ __Vtemp_h5fbc1f80__0;
    VlWide<16>/*511:0*/ __Vtemp_h879ffeb8__0;
    VlWide<16>/*511:0*/ __Vtemp_h879ffeb8__1;
    VlWide<16>/*511:0*/ __Vtemp_h0b41d904__0;
    VlWide<128>/*4095:0*/ __Vtemp_h31056a89__0;
    // Body
    vlSelf->Soc__DOT____Vcellinp__sram__ARESETn = (1U 
                                                   & (~ (IData)(vlSelf->reset)));
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = vlSelf->Soc__DOT__sram__DOT__bvalid;
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 
        = ((IData)(4U) + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
            ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                        ? 0xfU : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                   ? 3U : (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8 = (0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25 = (0U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = 
        (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_200 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_206 
        = (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4 
        = (5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10 
        = (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_207 
        = (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_200 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_206 
        = (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4 
        = (5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10 
        = (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_207 
        = (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_5 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T 
        = (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state));
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr];
    __Vtemp_h5ee83ed9__0[0U] = 0x41000000U;
    __Vtemp_h5ee83ed9__0[1U] = 0x3003423U;
    __Vtemp_h5ee83ed9__0[2U] = (0x30000000U | (((0x8000000000000007ULL 
                                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                                 ? 0x344U
                                                 : 0U) 
                                               << 8U));
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd 
        = ((0x5fU >= (0x7fU & ((IData)(0xcU) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
            ? (0xfffU & (((0U == (0x1fU & ((IData)(0xcU) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                           ? 0U : (__Vtemp_h5ee83ed9__0[
                                   (((IData)(0xbU) 
                                     + (0x7fU & ((IData)(0xcU) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))) 
                         | (__Vtemp_h5ee83ed9__0[(3U 
                                                  & (((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                                     >> 5U))] 
                            >> (0x1fU & ((IData)(0xcU) 
                                         * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))))
            : 0U);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
           & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
              & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                 | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                    | ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                       | ((5U != (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                          & ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                              ? (0x8000000000000007ULL 
                                 == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                              : (7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)));
    __Vtemp_h11a82919__0[0U] = 0U;
    __Vtemp_h11a82919__0[1U] = 0U;
    __Vtemp_h11a82919__0[2U] = 0U;
    __Vtemp_h11a82919__0[3U] = 0U;
    __Vtemp_h11a82919__0[4U] = vlSelf->Soc__DOT__core__DOT__trap__DOT__pc;
    __Vtemp_h11a82919__0[5U] = 0U;
    __Vtemp_h11a82919__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause);
    __Vtemp_h11a82919__0[7U] = (IData)((vlSelf->Soc__DOT__core__DOT__trap__DOT__cause 
                                        >> 0x20U));
    __Vtemp_h11a82919__0[8U] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                          >> 8U)) << 8U) 
                                | ((0x80U & ((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                      >> 3U)) 
                                             << 7U)) 
                                   | ((0x70U & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                         >> 4U)) 
                                                << 4U)) 
                                      | (7U & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS)))));
    __Vtemp_h11a82919__0[9U] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                          >> 8U)) >> 0x18U) 
                                | ((IData)(((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                             >> 8U) 
                                            >> 0x20U)) 
                                   << 8U));
    __Vtemp_h11a82919__0[0xaU] = 0U;
    __Vtemp_h11a82919__0[0xbU] = 0U;
    __Vtemp_h11a82919__0[0xcU] = (IData)(((0x8000000000000007ULL 
                                           == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                           ? ((0xffffffffffffff00ULL 
                                               & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                                              | (QData)((IData)(
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP)))))
                                           : 0ULL));
    __Vtemp_h11a82919__0[0xdU] = (IData)((((0x8000000000000007ULL 
                                            == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                            ? ((0xffffffffffffff00ULL 
                                                & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                                               | (QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP)))))
                                            : 0ULL) 
                                          >> 0x20U));
    __Vtemp_h11a82919__0[0xeU] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 4U)) 
                                   << 4U) | ((8U & 
                                              ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                        >> 7U)) 
                                               << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS))));
    __Vtemp_h11a82919__0[0xfU] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 4U)) 
                                   >> 0x1cU) | ((IData)(
                                                        ((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                          >> 4U) 
                                                         >> 0x20U)) 
                                                << 4U));
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata 
        = (((QData)((IData)(__Vtemp_h11a82919__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_h11a82919__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_h11a82919__0[
                                 (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                          << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0 
        = (1U & ((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                        >> 3U))) | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6 
        = ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
            ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr
            : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr
                : ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr
                    : 0U)));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->__VdfgTmp_hb3a84c04__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)))];
    vlSelf->__VdfgTmp_h5f294843__0 = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27deda75__0 
        = ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__data
            : 0ULL);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27deda75__0 
        = ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
            ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data
            : 0ULL);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h408f0c7c__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
           | __Vtemp_h408f0c7c__0[0U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
           | __Vtemp_h408f0c7c__0[1U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
           | __Vtemp_h408f0c7c__0[2U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
           | __Vtemp_h408f0c7c__0[3U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
           | __Vtemp_h408f0c7c__0[4U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
           | __Vtemp_h408f0c7c__0[5U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
           | __Vtemp_h408f0c7c__0[6U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
           | __Vtemp_h408f0c7c__0[7U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
           | __Vtemp_h408f0c7c__0[8U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
           | __Vtemp_h408f0c7c__0[9U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
           | __Vtemp_h408f0c7c__0[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
           | __Vtemp_h408f0c7c__0[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
           | __Vtemp_h408f0c7c__0[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
           | __Vtemp_h408f0c7c__0[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
           | __Vtemp_h408f0c7c__0[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
           | __Vtemp_h408f0c7c__0[0xfU]);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h408f0c7c__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
              | __Vtemp_h408f0c7c__1[0U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
              | __Vtemp_h408f0c7c__1[1U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
              | __Vtemp_h408f0c7c__1[2U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
              | __Vtemp_h408f0c7c__1[3U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
              | __Vtemp_h408f0c7c__1[4U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
              | __Vtemp_h408f0c7c__1[5U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
              | __Vtemp_h408f0c7c__1[6U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
              | __Vtemp_h408f0c7c__1[7U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
              | __Vtemp_h408f0c7c__1[8U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
              | __Vtemp_h408f0c7c__1[9U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
              | __Vtemp_h408f0c7c__1[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
              | __Vtemp_h408f0c7c__1[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
              | __Vtemp_h408f0c7c__1[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
              | __Vtemp_h408f0c7c__1[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
              | __Vtemp_h408f0c7c__1[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
              | __Vtemp_h408f0c7c__1[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h95d85a84__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
              | __Vtemp_h95d85a84__0[0U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
              | __Vtemp_h95d85a84__0[1U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
              | __Vtemp_h95d85a84__0[2U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
              | __Vtemp_h95d85a84__0[3U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
              | __Vtemp_h95d85a84__0[4U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
              | __Vtemp_h95d85a84__0[5U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
              | __Vtemp_h95d85a84__0[6U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
              | __Vtemp_h95d85a84__0[7U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
              | __Vtemp_h95d85a84__0[8U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
              | __Vtemp_h95d85a84__0[9U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
              | __Vtemp_h95d85a84__0[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
              | __Vtemp_h95d85a84__0[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
              | __Vtemp_h95d85a84__0[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
              | __Vtemp_h95d85a84__0[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
              | __Vtemp_h95d85a84__0[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
              | __Vtemp_h95d85a84__0[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h95d85a84__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
           | __Vtemp_h95d85a84__1[0U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
           | __Vtemp_h95d85a84__1[1U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
           | __Vtemp_h95d85a84__1[2U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
           | __Vtemp_h95d85a84__1[3U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
           | __Vtemp_h95d85a84__1[4U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
           | __Vtemp_h95d85a84__1[5U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
           | __Vtemp_h95d85a84__1[6U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
           | __Vtemp_h95d85a84__1[7U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
           | __Vtemp_h95d85a84__1[8U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
           | __Vtemp_h95d85a84__1[9U]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
           | __Vtemp_h95d85a84__1[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
           | __Vtemp_h95d85a84__1[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
           | __Vtemp_h95d85a84__1[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
           | __Vtemp_h95d85a84__1[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
           | __Vtemp_h95d85a84__1[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
           | __Vtemp_h95d85a84__1[0xfU]);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h5e8385be__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
           | __Vtemp_h5e8385be__0[0U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
           | __Vtemp_h5e8385be__0[1U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
           | __Vtemp_h5e8385be__0[2U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
           | __Vtemp_h5e8385be__0[3U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
           | __Vtemp_h5e8385be__0[4U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
           | __Vtemp_h5e8385be__0[5U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
           | __Vtemp_h5e8385be__0[6U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
           | __Vtemp_h5e8385be__0[7U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
           | __Vtemp_h5e8385be__0[8U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
           | __Vtemp_h5e8385be__0[9U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
           | __Vtemp_h5e8385be__0[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
           | __Vtemp_h5e8385be__0[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
           | __Vtemp_h5e8385be__0[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
           | __Vtemp_h5e8385be__0[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
           | __Vtemp_h5e8385be__0[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
           | __Vtemp_h5e8385be__0[0xfU]);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h5e8385be__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
              | __Vtemp_h5e8385be__1[0U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
              | __Vtemp_h5e8385be__1[1U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
              | __Vtemp_h5e8385be__1[2U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
              | __Vtemp_h5e8385be__1[3U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
              | __Vtemp_h5e8385be__1[4U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
              | __Vtemp_h5e8385be__1[5U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
              | __Vtemp_h5e8385be__1[6U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
              | __Vtemp_h5e8385be__1[7U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
              | __Vtemp_h5e8385be__1[8U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
              | __Vtemp_h5e8385be__1[9U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
              | __Vtemp_h5e8385be__1[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
              | __Vtemp_h5e8385be__1[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
              | __Vtemp_h5e8385be__1[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
              | __Vtemp_h5e8385be__1[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
              | __Vtemp_h5e8385be__1[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
              | __Vtemp_h5e8385be__1[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_hb792bbf6__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
              | __Vtemp_hb792bbf6__0[0U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[1U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
              | __Vtemp_hb792bbf6__0[1U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[2U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
              | __Vtemp_hb792bbf6__0[2U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[3U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
              | __Vtemp_hb792bbf6__0[3U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[4U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
              | __Vtemp_hb792bbf6__0[4U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[5U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
              | __Vtemp_hb792bbf6__0[5U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[6U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
              | __Vtemp_hb792bbf6__0[6U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[7U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
              | __Vtemp_hb792bbf6__0[7U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[8U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
              | __Vtemp_hb792bbf6__0[8U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[9U] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
              | __Vtemp_hb792bbf6__0[9U]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xaU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
              | __Vtemp_hb792bbf6__0[0xaU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xbU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
              | __Vtemp_hb792bbf6__0[0xbU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xcU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
              | __Vtemp_hb792bbf6__0[0xcU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xdU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
              | __Vtemp_hb792bbf6__0[0xdU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xeU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
              | __Vtemp_hb792bbf6__0[0xeU]));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xfU] 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
              | __Vtemp_hb792bbf6__0[0xfU]));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_hb792bbf6__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                            << 1U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
           | __Vtemp_hb792bbf6__1[0U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[1U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
           | __Vtemp_hb792bbf6__1[1U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[2U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
           | __Vtemp_hb792bbf6__1[2U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[3U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
           | __Vtemp_hb792bbf6__1[3U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[4U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
           | __Vtemp_hb792bbf6__1[4U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[5U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
           | __Vtemp_hb792bbf6__1[5U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[6U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
           | __Vtemp_hb792bbf6__1[6U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[7U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
           | __Vtemp_hb792bbf6__1[7U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[8U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
           | __Vtemp_hb792bbf6__1[8U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[9U] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
           | __Vtemp_hb792bbf6__1[9U]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xaU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
           | __Vtemp_hb792bbf6__1[0xaU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xbU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
           | __Vtemp_hb792bbf6__1[0xbU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xcU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
           | __Vtemp_hb792bbf6__1[0xcU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xdU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
           | __Vtemp_hb792bbf6__1[0xdU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xeU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
           | __Vtemp_hb792bbf6__1[0xeU]);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xfU] 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
           | __Vtemp_hb792bbf6__1[0xfU]);
    VL_SHIFTR_WWI(512,512,9, __Vtemp_he1218dcc__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_he1218dcc__1, vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
               ? __Vtemp_he1218dcc__0[0U] : ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                             & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
                                                & ((1U 
                                                    != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                                      & __Vtemp_he1218dcc__1[0U]))))));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hb201d805__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hb201d805__1, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace, 
                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                   << 1U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
               ? __Vtemp_hb201d805__0[0U] : ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                             & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
                                                & ((1U 
                                                    != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                                                      & __Vtemp_hb201d805__1[0U]))))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (5U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (5U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3 
        = (vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc 
           == vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)) 
           | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)));
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = 
        (1U & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP 
                        >> 7U)) & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 3U)) 
                                   & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE 
                                              >> 7U)))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
           | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
              | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)) 
                 | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3 
        = (IData)((0U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
           | (7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2 
        = (IData)((2U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->__VdfgTmp_h02e5796b__0 = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp) 
              & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                    & (IData)(vlSelf->Soc__DOT__sram__DOT__bvalid)))));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)) 
           | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131 
        = VL_MODDIV_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128 
        = VL_MODDIVS_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123 
        = VL_DIV_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h7ce0e83e__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7ce0e83e__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7ce0e83e__0[2U] = (1U & (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                              >> 0x3fU)));
    __Vtemp_h6eeb50c9__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h6eeb50c9__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_h6eeb50c9__0[2U] = (1U & (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                              >> 0x3fU)));
    VL_DIVS_WWW(65, __Vtemp_h238ea762__0, __Vtemp_h7ce0e83e__0, __Vtemp_h6eeb50c9__0);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U] 
        = __Vtemp_h238ea762__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[1U] 
        = __Vtemp_h238ea762__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[2U] 
        = (1U & __Vtemp_h238ea762__0[2U]);
    if ((0x1fU >= (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), 
                             (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           - (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    if ((0x1fU >= (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           + (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, 
                         (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           & vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
        = ((9U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
            ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
               | vlSelf->Soc__DOT__core__DOT__dereg_op_b)
            : ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                   ^ vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                    ? (QData)((IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                       >= vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                    : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                        ? (QData)((IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                           < vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                        : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                            ? (QData)((IData)(VL_GTES_IQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                            : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                ? (QData)((IData)(VL_LTS_IQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? (QData)((IData)(
                                                      (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                       != vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                    : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                        ? (QData)((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                           == vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                        : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                            ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                               - vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                            : ((0U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                   + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                : 0ULL))))))))));
    __Vtemp_h7cb4ecaa__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__0[2U] = 0U;
    __Vtemp_h7cb4ecaa__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hb46e09a5__0, __Vtemp_h7cb4ecaa__0, 
                  (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[0U] 
        = __Vtemp_hb46e09a5__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[1U] 
        = __Vtemp_hb46e09a5__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[2U] 
        = __Vtemp_hb46e09a5__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[3U] 
        = (0x7fffffffU & __Vtemp_hb46e09a5__0[3U]);
    __Vtemp_h7cb4ecaa__1[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__1[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__1[2U] = 0U;
    __Vtemp_h7cb4ecaa__1[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_he3381e13__0, __Vtemp_h7cb4ecaa__1, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[0U] 
        = __Vtemp_he3381e13__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[1U] 
        = __Vtemp_he3381e13__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[2U] 
        = __Vtemp_he3381e13__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[3U] 
        = (0x7fffffffU & __Vtemp_he3381e13__0[3U]);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[0U] 
        = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[1U] 
        = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[2U] 
        = (IData)((- (QData)((IData)((1U & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                    >> 0x3fU)))))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5[3U] 
        = (IData)(((- (QData)((IData)((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                     >> 0x3fU)))))) 
                   >> 0x20U));
    vlSelf->__VdfgTmp_hc520a55b__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0];
    vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
            ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)) 
           & (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)) 
           & (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    vlSelf->__VdfgTmp_heb865217__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h1b552381__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)));
    vlSelf->__VdfgTmp_h2fe899d6__0 = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
        [(0x1ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN)))];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h1b552381__0 
        = (0x3ffU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                      << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
            & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
            ? vlSelf->__VdfgTmp_hb3a84c04__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0 
        = ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R1_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0) 
            & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
            ? vlSelf->__VdfgTmp_h5f294843__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0 
        = ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 
            = (0xffffffffffffULL & vlSelf->__VdfgTmp_h02e5796b__0);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0 
            = (0xffffU & (IData)((vlSelf->__VdfgTmp_h02e5796b__0 
                                  >> 0x30U)));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0 
            = (0xffffU & (IData)(vlSelf->__VdfgTmp_h02e5796b__0));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0 
            = (vlSelf->__VdfgTmp_h02e5796b__0 >> 0x10U);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray 
            = vlSelf->__VdfgTmp_h02e5796b__0;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0 
            = (IData)(vlSelf->__VdfgTmp_h02e5796b__0);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e4b031__0 
            = (IData)((vlSelf->__VdfgTmp_h02e5796b__0 
                       >> 0x20U));
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0 = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e4b031__0 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4 
        = ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5 
        = ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12 
        = (((QData)((IData)((- (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78)));
    __Vtemp_hde8f545e__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_hde8f545e__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_hde8f545e__0[2U] = (IData)((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                                                      >> 0x3fU)))))));
    __Vtemp_hde8f545e__0[3U] = (IData)(((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                                                       >> 0x3fU)))))) 
                                        >> 0x20U));
    VL_MUL_W(4, __Vtemp_h31e9c9ac__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5, __Vtemp_hde8f545e__0);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U] 
        = __Vtemp_h31e9c9ac__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U] 
        = __Vtemp_h31e9c9ac__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[2U] 
        = __Vtemp_h31e9c9ac__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U] 
        = __Vtemp_h31e9c9ac__0[3U];
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 
            = (0xffffffffffffULL & vlSelf->__VdfgTmp_hc520a55b__0);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0 
            = (0xffffU & (IData)((vlSelf->__VdfgTmp_hc520a55b__0 
                                  >> 0x30U)));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0 
            = (0xffffU & (IData)(vlSelf->__VdfgTmp_hc520a55b__0));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0 
            = (vlSelf->__VdfgTmp_hc520a55b__0 >> 0x10U);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray 
            = vlSelf->__VdfgTmp_hc520a55b__0;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0 
            = (IData)(vlSelf->__VdfgTmp_hc520a55b__0);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e4b031__0 
            = (IData)((vlSelf->__VdfgTmp_hc520a55b__0 
                       >> 0x20U));
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0 = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e4b031__0 = 0U;
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h236e7446__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty, (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h1b552381__0));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U] 
        = __Vtemp_h236e7446__0[0U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[1U] 
        = __Vtemp_h236e7446__0[1U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[2U] 
        = __Vtemp_h236e7446__0[2U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[3U] 
        = __Vtemp_h236e7446__0[3U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[4U] 
        = __Vtemp_h236e7446__0[4U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[5U] 
        = __Vtemp_h236e7446__0[5U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[6U] 
        = __Vtemp_h236e7446__0[6U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[7U] 
        = __Vtemp_h236e7446__0[7U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[8U] 
        = __Vtemp_h236e7446__0[8U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[9U] 
        = __Vtemp_h236e7446__0[9U];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xaU] 
        = __Vtemp_h236e7446__0[0xaU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xbU] 
        = __Vtemp_h236e7446__0[0xbU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xcU] 
        = __Vtemp_h236e7446__0[0xcU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xdU] 
        = __Vtemp_h236e7446__0[0xdU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xeU] 
        = __Vtemp_h236e7446__0[0xeU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0xfU] 
        = __Vtemp_h236e7446__0[0xfU];
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hd1f243a7__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty, (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h1b552381__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U] 
        = __Vtemp_hd1f243a7__0[0U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[1U] 
        = __Vtemp_hd1f243a7__0[1U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[2U] 
        = __Vtemp_hd1f243a7__0[2U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[3U] 
        = __Vtemp_hd1f243a7__0[3U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[4U] 
        = __Vtemp_hd1f243a7__0[4U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[5U] 
        = __Vtemp_hd1f243a7__0[5U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[6U] 
        = __Vtemp_hd1f243a7__0[6U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[7U] 
        = __Vtemp_hd1f243a7__0[7U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[8U] 
        = __Vtemp_hd1f243a7__0[8U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[9U] 
        = __Vtemp_hd1f243a7__0[9U];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xaU] 
        = __Vtemp_hd1f243a7__0[0xaU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xbU] 
        = __Vtemp_hd1f243a7__0[0xbU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xcU] 
        = __Vtemp_hd1f243a7__0[0xcU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xdU] 
        = __Vtemp_hd1f243a7__0[0xdU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xeU] 
        = __Vtemp_hd1f243a7__0[0xeU];
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0xfU] 
        = __Vtemp_hd1f243a7__0[0xfU];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0) 
           & (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0 
        = ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0) 
           & (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0 
        = ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[0U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffU & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                        : 0U))) << 0x38U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_h02e5796b__0 
                            >> 8U) : 0ULL))) << 8U) 
           | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[1U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffU & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                        : 0U))) << 0x38U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_h02e5796b__0 
                            >> 8U) : 0ULL))) >> 0x18U) 
           | ((IData)(((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                           ? (0xffU 
                                              & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                           : 0U))) 
                         << 0x38U) | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                       ? (vlSelf->__VdfgTmp_h02e5796b__0 
                                          >> 8U) : 0ULL)) 
                       >> 0x20U)) << 8U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[2U] 
        = (((IData)((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0)) 
                      << 0x30U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0)) 
            << 0x10U) | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 8U)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                             ? 
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                                                             : 0U))) 
                                                           << 0x38U) 
                                                          | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                              ? 
                                                             (vlSelf->__VdfgTmp_h02e5796b__0 
                                                              >> 8U)
                                                              : 0ULL)) 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[3U] 
        = (((IData)((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0)) 
                      << 0x30U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0)) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0)) 
                                    << 0x30U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[4U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffffffU 
                                           & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                        : 0U))) << 0x28U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_h02e5796b__0 
                            >> 0x18U) : 0ULL))) << 0x18U) 
           | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                            << 0x10U)) | ((IData)((
                                                   (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0)) 
                                                     << 0x30U) 
                                                    | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0) 
                                                   >> 0x20U)) 
                                          >> 0x10U)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[5U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffffffU 
                                           & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                        : 0U))) << 0x28U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_h02e5796b__0 
                            >> 0x18U) : 0ULL))) >> 8U) 
           | ((IData)(((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                           ? (0xffffffU 
                                              & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                           : 0U))) 
                         << 0x28U) | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                       ? (vlSelf->__VdfgTmp_h02e5796b__0 
                                          >> 0x18U)
                                       : 0ULL)) >> 0x20U)) 
              << 0x18U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[6U] 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
            << 0x18U) | ((IData)(((((QData)((IData)(
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                      ? 
                                                     (0xffffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h02e5796b__0))
                                                      : 0U))) 
                                    << 0x28U) | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                  ? 
                                                 (vlSelf->__VdfgTmp_h02e5796b__0 
                                                  >> 0x18U)
                                                  : 0ULL)) 
                                  >> 0x20U)) >> 8U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[7U] 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e4b031__0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[8U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffffffU 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h02e5796b__0 
                                                      >> 0x28U)))
                                        : 0U) << 8U) 
                                     | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[9U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                         ? (0xffffffU 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h02e5796b__0 
                                                       >> 0x28U)))
                                         : 0U) << 8U) 
                                      | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[0xaU] 
        = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                    ? (0xffffffffffULL & vlSelf->__VdfgTmp_h02e5796b__0)
                    : 0ULL));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[0xbU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 
                      << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0)))) 
            << 0x10U) | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 8U)) | (IData)(
                                                       (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                          ? 
                                                         (0xffffffffffULL 
                                                          & vlSelf->__VdfgTmp_h02e5796b__0)
                                                          : 0ULL) 
                                                        >> 0x20U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[0xcU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 
                      << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0)))) 
            >> 0x10U) | ((IData)((((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 
                                    << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[0xdU] 
        = (((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                        ? (0xffffffffffffffULL & vlSelf->__VdfgTmp_h02e5796b__0)
                        : 0ULL) << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->__VdfgTmp_h02e5796b__0 
                                                                      >> 0x38U)))
                                                           : 0U))))) 
            << 0x18U) | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U)) | 
                         ((IData)((((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 
                                     << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0))) 
                                   >> 0x20U)) >> 0x10U)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[0xeU] 
        = (((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                        ? (0xffffffffffffffULL & vlSelf->__VdfgTmp_h02e5796b__0)
                        : 0ULL) << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->__VdfgTmp_h02e5796b__0 
                                                                      >> 0x38U)))
                                                           : 0U))))) 
            >> 8U) | ((IData)((((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                   ? (0xffffffffffffffULL 
                                      & vlSelf->__VdfgTmp_h02e5796b__0)
                                   : 0ULL) << 8U) | (QData)((IData)(
                                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->__VdfgTmp_h02e5796b__0 
                                                                                >> 0x38U)))
                                                                      : 0U)))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[0xfU] 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
            << 0x18U) | ((IData)((((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                      ? (0xffffffffffffffULL 
                                         & vlSelf->__VdfgTmp_h02e5796b__0)
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                       ? 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h02e5796b__0 
                                                                  >> 0x38U)))
                                                       : 0U)))) 
                                  >> 0x20U)) >> 8U));
    vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)
                ? (QData)((IData)(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                    ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0
                                    : vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e4b031__0)))
                : vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray)
            : vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5) 
           & (IData)(vlSelf->Soc__DOT__sram__DOT__rvalid));
    if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xdU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[2U];
        __Vtemp_h40386c7d__0[3U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[3U];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xbU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h40386c7d__0[2U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[2U];
        __Vtemp_h40386c7d__0[3U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[3U];
    } else {
        __Vtemp_h40386c7d__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
                                                                             >> 0x3fU))))))));
        __Vtemp_h40386c7d__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    }
    __Vtemp_hbf25ab7a__0[1U] = ((0x11U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                 ? (IData)(((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47) 
                                            >> 0x20U))
                                 : ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                     ? (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                >> 0x20U))
                                     : ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                         ? (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
                                                    >> 0x20U))
                                         : ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                             ? (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 
                                                        >> 0x20U))
                                             : ((0xdU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[1U]
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                  ? (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                   ? (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
                                                              >> 0x20U))
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[1U]
                                                    : (IData)(
                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 
                                                               >> 0x20U))))))))));
    if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)((((QData)((IData)(
                                                             vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U]))));
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U] 
                                                                  >> 0x1fU))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U] 
                                                                   >> 0x1fU))))) 
                                            >> 0x20U));
    } else if ((0x11U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47));
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                                >> 0x3fU)))))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                                >> 0x3fU)))))))) 
                                            >> 0x20U));
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47);
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                             >> 0x3fU))))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        __Vtemp_h5f9be4f4__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44);
        __Vtemp_h5f9be4f4__0[2U] = (IData)((0x7fffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
                                                                             >> 0x3fU))))))));
        __Vtemp_h5f9be4f4__0[3U] = (IData)(((0x7fffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h5f9be4f4__0[0U] = ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                     ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41)
                                     : ((0xdU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[0U]
                                         : ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                             ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38)
                                             : ((0xbU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34)
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[0U]
                                                  : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157))))));
        __Vtemp_h5f9be4f4__0[2U] = __Vtemp_h40386c7d__0[2U];
        __Vtemp_h5f9be4f4__0[3U] = __Vtemp_h40386c7d__0[3U];
    }
    if ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[0U] 
            = (IData)((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[2U]))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[1U] 
            = (IData)(((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[2U]))) 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[2U] 
            = (IData)((0x7fffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U] 
                                                                   >> 0x1fU))))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[3U] 
            = (IData)(((0x7fffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[3U] 
                                                                    >> 0x1fU))))) 
                       >> 0x20U));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[0U] 
            = __Vtemp_h5f9be4f4__0[0U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[1U] 
            = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                ? (IData)(((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U]))) 
                           >> 0x20U)) : __Vtemp_hbf25ab7a__0[1U]);
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[2U] 
            = __Vtemp_h5f9be4f4__0[2U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[3U] 
            = __Vtemp_h5f9be4f4__0[3U];
    }
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[0U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffU & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                        : 0U))) << 0x38U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_hc520a55b__0 
                            >> 8U) : 0ULL))) << 8U) 
           | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[1U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffU & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                        : 0U))) << 0x38U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_hc520a55b__0 
                            >> 8U) : 0ULL))) >> 0x18U) 
           | ((IData)(((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                           ? (0xffU 
                                              & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                           : 0U))) 
                         << 0x38U) | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                       ? (vlSelf->__VdfgTmp_hc520a55b__0 
                                          >> 8U) : 0ULL)) 
                       >> 0x20U)) << 8U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[2U] 
        = (((IData)((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0)) 
                      << 0x30U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0)) 
            << 0x10U) | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 8U)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                             ? 
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                                                             : 0U))) 
                                                           << 0x38U) 
                                                          | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                              ? 
                                                             (vlSelf->__VdfgTmp_hc520a55b__0 
                                                              >> 8U)
                                                              : 0ULL)) 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[3U] 
        = (((IData)((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0)) 
                      << 0x30U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0)) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0)) 
                                    << 0x30U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[4U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffffffU 
                                           & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                        : 0U))) << 0x28U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_hc520a55b__0 
                            >> 0x18U) : 0ULL))) << 0x18U) 
           | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                            << 0x10U)) | ((IData)((
                                                   (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0)) 
                                                     << 0x30U) 
                                                    | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0) 
                                                   >> 0x20U)) 
                                          >> 0x10U)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[5U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffffffU 
                                           & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                        : 0U))) << 0x28U) 
                     | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                         ? (vlSelf->__VdfgTmp_hc520a55b__0 
                            >> 0x18U) : 0ULL))) >> 8U) 
           | ((IData)(((((QData)((IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                           ? (0xffffffU 
                                              & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                           : 0U))) 
                         << 0x28U) | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                       ? (vlSelf->__VdfgTmp_hc520a55b__0 
                                          >> 0x18U)
                                       : 0ULL)) >> 0x20U)) 
              << 0x18U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[6U] 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
            << 0x18U) | ((IData)(((((QData)((IData)(
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                      ? 
                                                     (0xffffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hc520a55b__0))
                                                      : 0U))) 
                                    << 0x28U) | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                  ? 
                                                 (vlSelf->__VdfgTmp_hc520a55b__0 
                                                  >> 0x18U)
                                                  : 0ULL)) 
                                  >> 0x20U)) >> 8U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[7U] 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e4b031__0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[8U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                        ? (0xffffffU 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_hc520a55b__0 
                                                      >> 0x28U)))
                                        : 0U) << 8U) 
                                     | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[9U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                         ? (0xffffffU 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_hc520a55b__0 
                                                       >> 0x28U)))
                                         : 0U) << 8U) 
                                      | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[0xaU] 
        = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                    ? (0xffffffffffULL & vlSelf->__VdfgTmp_hc520a55b__0)
                    : 0ULL));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[0xbU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 
                      << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0)))) 
            << 0x10U) | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 8U)) | (IData)(
                                                       (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                          ? 
                                                         (0xffffffffffULL 
                                                          & vlSelf->__VdfgTmp_hc520a55b__0)
                                                          : 0ULL) 
                                                        >> 0x20U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[0xcU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 
                      << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0)))) 
            >> 0x10U) | ((IData)((((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 
                                    << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[0xdU] 
        = (((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                        ? (0xffffffffffffffULL & vlSelf->__VdfgTmp_hc520a55b__0)
                        : 0ULL) << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->__VdfgTmp_hc520a55b__0 
                                                                      >> 0x38U)))
                                                           : 0U))))) 
            << 0x18U) | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                       << 0x10U)) | 
                         ((IData)((((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 
                                     << 0x10U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0))) 
                                   >> 0x20U)) >> 0x10U)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[0xeU] 
        = (((IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                        ? (0xffffffffffffffULL & vlSelf->__VdfgTmp_hc520a55b__0)
                        : 0ULL) << 8U) | (QData)((IData)(
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                           ? 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->__VdfgTmp_hc520a55b__0 
                                                                      >> 0x38U)))
                                                           : 0U))))) 
            >> 8U) | ((IData)((((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                   ? (0xffffffffffffffULL 
                                      & vlSelf->__VdfgTmp_hc520a55b__0)
                                   : 0ULL) << 8U) | (QData)((IData)(
                                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->__VdfgTmp_hc520a55b__0 
                                                                                >> 0x38U)))
                                                                      : 0U)))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[0xfU] 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
            << 0x18U) | ((IData)((((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                      ? (0xffffffffffffffULL 
                                         & vlSelf->__VdfgTmp_hc520a55b__0)
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                       ? 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc520a55b__0 
                                                                  >> 0x38U)))
                                                       : 0U)))) 
                                  >> 0x20U)) >> 8U));
    vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type)
                ? (QData)((IData)(((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0
                                    : vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e4b031__0)))
                : vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray)
            : vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7326076__0 
        = ((1U & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U])
            ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h1b552381__0)
            : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
            & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_heb865217__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7326076__0 
        = ((1U & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U])
            ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h1b552381__0)
            : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R0_data 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
            & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_h2fe899d6__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0));
    vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf)
            ? vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf
            : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid)
                ? vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data
                : ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid)
                    ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer)
                        ? vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer)
                            ? vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer
                            : ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer)
                                ? vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer
                                : 0ULL))))));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h67a1ffee__0 
        = (1U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0) 
                 | ((~ (IData)((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))) 
                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)))));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8c8e4077__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6)));
    __Vtemp_h7cb4ecaa__2[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__2[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__2[2U] = 0U;
    __Vtemp_h7cb4ecaa__2[3U] = 0U;
    __Vtemp_h197b5ff8__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h197b5ff8__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_h197b5ff8__0[2U] = 0U;
    __Vtemp_h197b5ff8__0[3U] = 0U;
    VL_MUL_W(4, __Vtemp_h2b127288__0, __Vtemp_h7cb4ecaa__2, __Vtemp_h197b5ff8__0);
    __Vtemp_h197b5ff8__1[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    __Vtemp_h197b5ff8__1[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_b 
                                        >> 0x20U));
    __Vtemp_h197b5ff8__1[2U] = 0U;
    __Vtemp_h197b5ff8__1[3U] = 0U;
    VL_MUL_W(4, __Vtemp_hd8984f98__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5, __Vtemp_h197b5ff8__1);
    vlSelf->__VdfgTmp_h6a80e86b__0 = ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                       ? ((~ vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                          & vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                       : ((0x27U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                           ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131)))
                                           : ((0x26U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128)))
                                               : ((0x25U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123)))
                                                   : 
                                                  ((0x24U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U] 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U])))
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U] 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6[0U])))
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112)))
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107)))
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101[0U] 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0x1fU 
                                                                            >= 
                                                                            (0x3fU 
                                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                                                            ? 
                                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                                            << 
                                                                            (0x3fU 
                                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                                                            : 0U))))
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98)))
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89)))
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85)))
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80[0U] 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x1fU 
                                                                                >= (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                                 ? 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                                                << (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                                 : 0U))))
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                              ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68[0U])))
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                __Vtemp_h2b127288__0[3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                __Vtemp_h2b127288__0[2U])))
                                                                   : 
                                                                  ((0x14U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                __Vtemp_hd8984f98__0[3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                __Vtemp_hd8984f98__0[2U])))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177[0U]))))))))))))))))))))))));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) {
        vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 
            = (0U != (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                       >> 0x14U))));
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr 
            = (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                >> 7U)));
        vlSelf->__VdfgTmp_h722d7b58__0 = (0x3fU & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                           >> 0x19U)));
        vlSelf->__VdfgTmp_h6dbd61c0__0 = (0xfU & (IData)(
                                                         (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                          >> 8U)));
        vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr 
            = (0xfffU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                 >> 0x14U)));
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr 
            = (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                >> 0x14U)));
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr 
            = (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                >> 0xfU)));
        __VdfgTmp_h726b6097__0 = (0x7fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                   >> 0x19U)));
        vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
            = (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data);
        vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 
            = (0x7fU & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data));
        vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 
            = (1U & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                             >> 0x1fU)));
        vlSelf->__VdfgTmp_h315738f9__0 = (1U & (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                        >> 7U)));
    } else {
        vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr = 0U;
        vlSelf->__VdfgTmp_h722d7b58__0 = 0U;
        vlSelf->__VdfgTmp_h6dbd61c0__0 = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr = 0U;
        vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr = 0U;
        __VdfgTmp_h726b6097__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__inst = 0x13U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0x13U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 = 0U;
        vlSelf->__VdfgTmp_h315738f9__0 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = 
        ((0x73U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
         & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                    >> 3U)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) 
           & (0U != (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                      >> 0xfU)))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
            & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_heb865217__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R2_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
            & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8[0U]))
            ? vlSelf->__VdfgTmp_h2fe899d6__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0));
    __Vtemp_h3c1ab257__0[0U] = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                            >> 0x3fU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x30U))))))
                                         : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x20U))))))
                                             : ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x10U))))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))))
                                                  : 0ULL)))));
    __Vtemp_h3c1ab257__0[1U] = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                           >> 0x30U))))))
                                          : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x20U))))))
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h94f171c3__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 7U))))))))) 
                                 << 8U) | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)));
    __Vtemp_h94f171c3__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 7U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 8U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 7U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[2U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 8U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 7U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[3U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x10U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0xfU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[4U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x10U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0xfU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x18U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x17U))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[5U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x18U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x17U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x18U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x17U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[6U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x18U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x17U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x20U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[7U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x20U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x1fU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x20U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[8U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x20U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x1fU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x28U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[9U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x28U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x27U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x28U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[0xaU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x28U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x30U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU))))))))) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xbU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                         >> 0x30U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x30U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xcU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x30U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U))))))))) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xdU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                         >> 0x38U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xeU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))))) 
                                   << 8U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U)))))))) 
                                                      >> 0x20U)) 
                                             >> 0x18U));
    __Vtemp_h94f171c3__0[0xfU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x3fU))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h9b08c88b__0[0U] = (IData)((((QData)((IData)(
                                                         __Vtemp_h94f171c3__0[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                               << 6U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                  << 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                 << 6U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                __Vtemp_h94f171c3__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))) 
                                           | ((QData)((IData)(
                                                              __Vtemp_h94f171c3__0[
                                                              (0xeU 
                                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))));
    __Vtemp_h9b08c88b__0[1U] = (IData)(((((QData)((IData)(
                                                          __Vtemp_h94f171c3__0[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 __Vtemp_h94f171c3__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               __Vtemp_h94f171c3__0[
                                                               (0xeU 
                                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0U] = 0U;
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[1U] = 0U;
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[2U] 
        = __Vtemp_h9b08c88b__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[3U] 
        = __Vtemp_h9b08c88b__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[4U] 
        = __Vtemp_h3c1ab257__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[5U] 
        = __Vtemp_h3c1ab257__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[6U] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                               >> 0x3fU))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                     >> 0x20U))))
                    : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))
                        : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[7U] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                >> 0x3fU))))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                      >> 0x20U))))
                     : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))
                         : 0ULL)) >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[8U] 
        = (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value);
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[9U] 
        = (IData)((vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xaU] 
        = (IData)((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                        >> 0x38U))
                                             : ((6U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           ((((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                                 << 0x30U) 
                                                                | (0xffffffffffffULL 
                                                                   & vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))) 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 3U))))))))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xbU] 
        = (IData)(((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                         >> 0x38U))
                                              : ((6U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                                  << 0x30U) 
                                                                 | (0xffffffffffffULL 
                                                                    & vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))) 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                 << 3U))))))))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xcU] 
        = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                       >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                   >> 0x20U)))))
                                     : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x10U)))))
                                         : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))))
                                             : 0ULL)))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xdU] 
        = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                        >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                    >> 0x20U)))))
                                      : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x10U)))))
                                          : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))))
                                              : 0ULL)))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xeU] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                       >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))
                                     : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xfU] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                        >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))
                                      : 0ULL)) >> 0x20U));
    __Vtemp_hbc2686fa__0[0U] = 0U;
    __Vtemp_hbc2686fa__0[1U] = 0U;
    __Vtemp_hbc2686fa__0[2U] = 0U;
    __Vtemp_hbc2686fa__0[3U] = 0U;
    __Vtemp_hbc2686fa__0[4U] = 0U;
    __Vtemp_hbc2686fa__0[5U] = 0U;
    __Vtemp_hbc2686fa__0[6U] = (IData)(((1U & ((~ ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                   >> 1U)) 
                                               | (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h67a1ffee__0)))
                                         ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata));
    __Vtemp_hbc2686fa__0[7U] = (IData)((((1U & ((~ 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                  >> 1U)) 
                                                | (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h67a1ffee__0)))
                                          ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
        = (((QData)((IData)(__Vtemp_hbc2686fa__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hbc2686fa__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hbc2686fa__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    __Vtemp_h33da069b__0[0U] = 0U;
    __Vtemp_h33da069b__0[1U] = 0U;
    __Vtemp_h33da069b__0[2U] = 0U;
    __Vtemp_h33da069b__0[3U] = 0U;
    __Vtemp_h33da069b__0[4U] = 0U;
    __Vtemp_h33da069b__0[5U] = 0U;
    __Vtemp_h33da069b__0[6U] = (IData)(((1U & ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h67a1ffee__0) 
                                               | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                  >> 1U)))
                                         ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata));
    __Vtemp_h33da069b__0[7U] = (IData)((((1U & ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h67a1ffee__0) 
                                                | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                   >> 1U)))
                                          ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
        = (((QData)((IData)(__Vtemp_h33da069b__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_h33da069b__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_h33da069b__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8c8e4077__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8c8e4077__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3))));
    vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8c8e4077__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2))));
    vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_type) 
           & ((~ (IData)((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))) 
              & (0U != vlSelf->__VdfgTmp_h6a80e86b__0)));
    if ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) {
        vlSelf->__VdfgTmp_hb4817c0b__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result = 0ULL;
    } else {
        vlSelf->__VdfgTmp_hb4817c0b__0 = (IData)(vlSelf->__VdfgTmp_h6a80e86b__0);
        vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
            = vlSelf->__VdfgTmp_h6a80e86b__0;
    }
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
            & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
               | ((0x30200073U == (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7)))) 
           | ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
              | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                 | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                    | ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                       | (6U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
    Soc__DOT__core__DOT__decode__DOT___load_use_T_8 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
    Soc__DOT__core__DOT__decode__DOT___load_use_T_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 
        = ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
              ? (7U & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                               >> 0xcU))) : 0U) << 7U) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R3_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
            & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
            ? vlSelf->__VdfgTmp_hb3a84c04__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0) 
           & ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
              & (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R3_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
            & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
            ? vlSelf->__VdfgTmp_h5f294843__0 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
           & ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
              & (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata 
        = (((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
            | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)))
            ? vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata
            : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                ? (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                    (((IData)(0x3fU) 
                                      + (0x1ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                   << 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                        << 6U))))) 
                   | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                        << 6U))) ? 0ULL
                        : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                           (((IData)(0x1fU) 
                                             + (0x1ffU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                   << 6U))) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                    << 6U))))) 
                      | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                         (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                  << 1U))])) 
                         >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                      << 6U))))) : 0ULL));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[0U] = 
        (((IData)((((QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                    << 0x38U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                 >> 8U))) << 8U) | 
         (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[1U] = 
        (((IData)((((QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                    << 0x38U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                 >> 8U))) >> 0x18U) 
         | ((IData)(((((QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                       << 0x38U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                    >> 8U)) >> 0x20U)) 
            << 8U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[2U] = 
        (((IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                    << 0x30U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                 >> 0x10U))) << 0x10U) 
         | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                        << 8U)) | ((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                                              << 0x38U) 
                                             | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                >> 8U)) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[3U] = 
        (((IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                    << 0x30U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                 >> 0x10U))) >> 0x10U) 
         | ((IData)(((((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                       << 0x30U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                    >> 0x10U)) >> 0x20U)) 
            << 0x10U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[4U] = 
        (((IData)((((QData)((IData)((0xffffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                    << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                 >> 0x18U))) << 0x18U) 
         | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                          << 0x10U)) | ((IData)(((((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                                                   << 0x30U) 
                                                  | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                     >> 0x10U)) 
                                                 >> 0x20U)) 
                                        >> 0x10U)));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[5U] = 
        (((IData)((((QData)((IData)((0xffffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                    << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                 >> 0x18U))) >> 8U) 
         | ((IData)(((((QData)((IData)((0xffffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                       << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                    >> 0x18U)) >> 0x20U)) 
            << 0x18U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[6U] = 
        (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
          << 0x18U) | ((IData)(((((QData)((IData)((0xffffffU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)))) 
                                  << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                               >> 0x18U)) 
                                >> 0x20U)) >> 8U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[7U] = (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                             >> 0x20U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[8U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                                                >> 0x28U)) 
                                                                                << 8U) 
                                                                               | (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data))));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[9U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                                                >> 0x28U)) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data))) 
                                                             >> 0x20U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[0xaU] 
        = (IData)((0xffffffffffULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[0xbU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                              >> 0x30U))))))) 
            << 0x10U) | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 8U)) | (IData)(
                                                       ((0xffffffffffULL 
                                                         & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data) 
                                                        >> 0x20U))));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[0xcU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                              >> 0x30U))))))) 
            >> 0x10U) | ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                                            >> 0x30U)))))) 
                                  >> 0x20U)) << 0x10U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[0xdU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                           >> 0x38U))))))) 
            << 0x18U) | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U)) | 
                         ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                     << 0x10U) | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                                             >> 0x30U)))))) 
                                   >> 0x20U)) >> 0x10U)));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[0xeU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                           >> 0x38U))))))) 
            >> 8U) | ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                                      >> 0x38U)))))) 
                               >> 0x20U)) << 0x18U));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_21[0xfU] 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
            << 0x18U) | ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                                                         >> 0x38U)))))) 
                                  >> 0x20U)) >> 8U));
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
            = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[
                                (((IData)(0x3fU) + 
                                  (0x1ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16[
                                     (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                  << 6U)))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
            = (((QData)((IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                (((IData)(0x3fU) + 
                                  (0x1ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 6U))))) 
                  | ((QData)((IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                     (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                  << 6U)))));
    } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))) 
                    << 0x30U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))) 
                    << 0x30U) | (0xffffffffffffULL 
                                 & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data));
        } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0)));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                               >> 0x30U)) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)));
        } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e4b031__0)) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0)))));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)((((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data))))));
        } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
                = ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))));
        } else {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data = 0ULL;
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data = 0ULL;
        }
    } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0)));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data)));
        } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e4b031__0)) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        } else {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data = 0ULL;
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data = 0ULL;
        }
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27deda75__0;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27deda75__0;
    }
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[0U] = 
        (((IData)((((QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                    << 0x38U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                 >> 8U))) << 8U) | 
         (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[1U] = 
        (((IData)((((QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                    << 0x38U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                 >> 8U))) >> 0x18U) 
         | ((IData)(((((QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                       << 0x38U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                    >> 8U)) >> 0x20U)) 
            << 8U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[2U] = 
        (((IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                    << 0x30U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                 >> 0x10U))) << 0x10U) 
         | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                        << 8U)) | ((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                                              << 0x38U) 
                                             | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                >> 8U)) 
                                            >> 0x20U)) 
                                   >> 0x18U)));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[3U] = 
        (((IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                    << 0x30U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                 >> 0x10U))) >> 0x10U) 
         | ((IData)(((((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                       << 0x30U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                    >> 0x10U)) >> 0x20U)) 
            << 0x10U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[4U] = 
        (((IData)((((QData)((IData)((0xffffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                    << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                 >> 0x18U))) << 0x18U) 
         | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                          << 0x10U)) | ((IData)(((((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                                                   << 0x30U) 
                                                  | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                     >> 0x10U)) 
                                                 >> 0x20U)) 
                                        >> 0x10U)));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[5U] = 
        (((IData)((((QData)((IData)((0xffffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                    << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                 >> 0x18U))) >> 8U) 
         | ((IData)(((((QData)((IData)((0xffffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                       << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                    >> 0x18U)) >> 0x20U)) 
            << 0x18U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[6U] = 
        (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
          << 0x18U) | ((IData)(((((QData)((IData)((0xffffffU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)))) 
                                  << 0x28U) | (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                               >> 0x18U)) 
                                >> 0x20U)) >> 8U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[7U] = (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                             >> 0x20U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[8U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                                                >> 0x28U)) 
                                                                                << 8U) 
                                                                               | (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data))));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[9U] = (IData)(
                                                            ((((QData)((IData)(
                                                                               (((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                                                >> 0x28U)) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data))) 
                                                             >> 0x20U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[0xaU] 
        = (IData)((0xffffffffffULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[0xbU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                              >> 0x30U))))))) 
            << 0x10U) | ((0xff00U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 8U)) | (IData)(
                                                       ((0xffffffffffULL 
                                                         & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data) 
                                                        >> 0x20U))));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[0xcU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                              >> 0x30U))))))) 
            >> 0x10U) | ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                                            >> 0x30U)))))) 
                                  >> 0x20U)) << 0x10U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[0xdU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                           >> 0x38U))))))) 
            << 0x18U) | ((0xff0000U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                       << 0x10U)) | 
                         ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                     << 0x10U) | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                                             >> 0x30U)))))) 
                                   >> 0x20U)) >> 0x10U)));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[0xeU] 
        = (((IData)(((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                           >> 0x38U))))))) 
            >> 8U) | ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                                      >> 0x38U)))))) 
                               >> 0x20U)) << 0x18U));
    Soc__DOT__core__DOT__Icache__DOT___GEN_21[0xfU] 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
            << 0x18U) | ((IData)((((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                                                         >> 0x38U)))))) 
                                  >> 0x20U)) >> 8U));
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
            = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                (((IData)(0x3fU) + 
                                  (0x1ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                     (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                  << 6U)))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
            = (((QData)((IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                (((IData)(0x3fU) + 
                                  (0x1ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 6U))))) 
                  | ((QData)((IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                     (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                  << 6U)))));
    } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))) 
                    << 0x30U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0);
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))) 
                    << 0x30U) | (0xffffffffffffULL 
                                 & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data));
        } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0)));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                               >> 0x30U)) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)));
        } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e4b031__0)) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0)))));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data))))));
        } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
                = ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))));
        } else {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data = 0ULL;
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data = 0ULL;
        }
    } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0)));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data)));
        } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
                = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e4b031__0)) 
                    << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
                = (((QData)((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        } else {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data = 0ULL;
            vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data = 0ULL;
        }
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27deda75__0;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27deda75__0;
    }
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose 
        = ((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid))) 
             | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
            & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid))
            ? 9U : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid)
                     ? 0xaU : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid)
                                ? 0xcU : 0U)));
    Soc__DOT__core__DOT__Icache__DOT___GEN_12 = ((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    Soc__DOT__core__DOT__Icache__DOT___GEN_14 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_12 = ((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_14 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
                ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                : 0ULL));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
           & ((0U != ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                       ? 0ULL : (vlSelf->__VdfgTmp_h6a80e86b__0 
                                 >> 0x19U))) & (0x200c000ULL 
                                                > vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                        : 0ULL))) : ((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                      ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                      : ((0x300U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                          ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                          : (((0x344U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)) 
                                              | (0x304U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)))
                                              ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                              : ((0x341U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                                  : 
                                                 ((0x342U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                    : 0ULL)))))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 
        = ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9 
        = ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0 
        = ((0x2f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x373U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 
        = ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 
        = ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x1f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0 
        = ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x83U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x103U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x203U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x283U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x303U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | (0x183U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5 
        = ((0x63U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0xe3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x263U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x2e3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x363U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x3e3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1 
        = (((IData)(__VdfgTmp_h726b6097__0) << 0xaU) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
              ? (0x3fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                  >> 0x1aU))) : 0U) 
            << 0xaU) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_12));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_12));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_27 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_14));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22 
        = (1U & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                    | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_12));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_12));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_27 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_14));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22 
        = (1U & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                    | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                        : 0ULL))) : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                      : 0ULL));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                        : 0ULL))) : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                      : 0ULL));
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)));
    vlSelf->__VdfgTmp_h7283ee9f__0 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0)
            ? 0U : ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0) 
           | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0) 
           | ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
              | ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 
        = ((0x3bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x803bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0xbbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                 | ((0x2bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x82bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x43bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x63bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x6bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x73bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | (0x7bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11 
        = ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x113U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x193U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x213U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x313U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x393U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | ((0x93U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                             | ((0x293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                | ((0x4293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                   | ((0x33U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x8033U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                         | ((0xb3U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                            | ((0x133U 
                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                               | ((0x1b3U 
                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                  | ((0x233U 
                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                     | ((0x2b3U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                        | ((0x82b3U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                           | ((0x333U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                              | ((0x3b3U 
                                                                  == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                 | (0x433U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))))));
    Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 
        = ((0x1b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x233U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0x2b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                 | ((0x82b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x333U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x3b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x433U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x4b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x533U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | ((0x5b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x633U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                         | ((0x6b3U 
                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                            | ((0x733U 
                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                               | ((0x7b3U 
                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                  | ((0x1bU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x9bU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                        | ((0x29bU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                           | ((0x429bU 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                              | ((0x3bU 
                                                                  == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                 | ((0x803bU 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                    | ((0xbbU 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                       | ((0x2bbU 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                          | ((0x82bbU 
                                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                             | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0))))))))))))))))))))))))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0 
        = ((0x113U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x193U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x213U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x313U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x393U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x93U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                          | ((0x293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                             | (0x4293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0 
        = ((0x33U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x8033U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0xb3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                 | ((0x133U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x1b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x233U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x2b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x82b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x333U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | ((0x3b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x433U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                         | ((0x4b3U 
                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                            | ((0x533U 
                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                               | ((0x5b3U 
                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                  | ((0x633U 
                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                     | ((0x6b3U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                        | ((0x733U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                           | (0x7b3U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? vlSelf->__VdfgTmp_hb4817c0b__0 : 0U) 
           | ((IData)(vlSelf->__VdfgTmp_h7283ee9f__0)
               ? vlSelf->__VdfgTmp_hb4817c0b__0 : 0U));
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
             : 0ULL) | ((IData)(vlSelf->__VdfgTmp_h7283ee9f__0)
                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                         : 0ULL));
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0)
            ? 0U : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                     ? 1U : ((0x83U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                              ? 2U : ((0x103U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                       ? 3U : ((0x203U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                ? 5U
                                                : (
                                                   (0x283U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 6U
                                                    : 
                                                   ((0x303U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 7U
                                                     : 
                                                    ((0x183U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     << 2U))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0 
        = ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 
        = ((0x1bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x9bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
              | ((0x29bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                 | ((0x429bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                    | (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)))));
    __Vtemp_hd669a72b__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr));
    __Vtemp_hd669a72b__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hd669a72b__0[2U] = ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                   ? (0xfffffU & (IData)(
                                                         (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                          >> 0xcU)))
                                   : 0U) << 0xcU) | 
                                ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    __Vtemp_hd669a72b__0[3U] = (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)));
    __Vtemp_hd669a72b__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0x14U) | ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                                 ? 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                            >> 0xcU)))
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) 
                                                   & (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                              >> 0x14U))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                                      ? 
                                                     (0x3ffU 
                                                      & (IData)(
                                                                (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                                 >> 0x15U)))
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_hd669a72b__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hd669a72b__0[6U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (((IData)(__VdfgTmp_h726b6097__0) 
                                              << 5U) 
                                             | (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr)));
    __Vtemp_hd669a72b__0[7U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hd669a72b__0[8U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h315738f9__0) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->__VdfgTmp_h722d7b58__0) 
                                                 << 5U) 
                                                | ((IData)(vlSelf->__VdfgTmp_h6dbd61c0__0) 
                                                   << 1U))));
    __Vtemp_hd669a72b__0[9U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hd669a72b__0[0xaU] = vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr;
    __Vtemp_hd669a72b__0[0xbU] = 0U;
    __Vtemp_hd669a72b__0[0xcU] = 0U;
    __Vtemp_hd669a72b__0[0xdU] = 0U;
    __Vtemp_hd669a72b__0[0xeU] = 0U;
    __Vtemp_hd669a72b__0[0xfU] = 0U;
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)(__Vtemp_hd669a72b__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & (((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                           ? 2U
                                                           : 
                                                          (((0x67U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                            | ((0x63U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                               | ((0xe3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                  | ((0x263U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                     | ((0x2e3U 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x363U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                           | ((0x3e3U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                              | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                            ? 0U
                                                            : 
                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                             ? 3U
                                                             : 
                                                            ((1U 
                                                              & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                                  | ((0x4b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                     | (0x533U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                                 | ((0x5b3U 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                    | ((0x633U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                       | ((0x6b3U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                          | ((0x733U 
                                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                             | ((0x7b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                              ? 0U
                                                              : 5U)))))) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                            ? 1U : 
                                           ((0x6fU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                             ? 2U : 
                                            (((0x67U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                              | ((0x63U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                 | ((0xe3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | ((0x263U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0x2e3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | ((0x363U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x3e3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                               ? 3U
                                               : ((1U 
                                                   & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                       | ((0x4b3U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                          | (0x533U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                      | ((0x5b3U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                         | ((0x633U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                            | ((0x6b3U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                               | ((0x733U 
                                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                  | ((0x7b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                     | ((0x1bU 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x9bU 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                           | ((0x29bU 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                              | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                   ? 0U
                                                   : 5U)))))) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & (((0x13U 
                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                               ? 1U
                                               : ((0x6fU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                   ? 2U
                                                   : 
                                                  (((0x67U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | ((0x63U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0xe3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | ((0x263U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x2e3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | ((0x363U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                   | ((0x3e3U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                      | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                          | ((0x4b3U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                             | (0x533U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                         | ((0x5b3U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                            | ((0x633U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                               | ((0x6b3U 
                                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                  | ((0x733U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                     | ((0x7b3U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                        | ((0x1bU 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                           | ((0x9bU 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                              | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                      ? 0U
                                                      : 5U)))))) 
                                            << 6U))))) 
           | (((0U == (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                           ? 1U : (
                                                   (0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                    ? 2U
                                                    : 
                                                   (((0x67U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x63U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                        | ((0xe3U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                           | ((0x263U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                              | ((0x2e3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                 | ((0x363U 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                    | ((0x3e3U 
                                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                      ? 3U
                                                      : 
                                                     ((1U 
                                                       & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                           | ((0x4b3U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                              | (0x533U 
                                                                 == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                          | ((0x5b3U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                             | ((0x633U 
                                                                 == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                | ((0x6b3U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                   | ((0x733U 
                                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                      | ((0x7b3U 
                                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                         | ((0x1bU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                            | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                               | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                       ? 0U
                                                       : 5U)))))) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hd669a72b__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((0x13U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x6fU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                                             ? 2U
                                                                             : 
                                                                            (((0x67U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                              | ((0x63U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0xe3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x263U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x2e3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x363U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x3e3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                                              ? 0U
                                                                              : 
                                                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                                               ? 3U
                                                                               : 
                                                                              ((1U 
                                                                                & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                                                | ((0x4b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | (0x533U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                                                | ((0x5b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x633U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x733U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                                                ? 0U
                                                                                : 5U)))))) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((0x13U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                            ? 2U
                                                            : 
                                                           (((0x67U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x63U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | ((0xe3U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                   | ((0x263U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                      | ((0x2e3U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                         | ((0x363U 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                            | ((0x3e3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                              ? 3U
                                                              : 
                                                             ((1U 
                                                               & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                                   | ((0x4b3U 
                                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                      | (0x533U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                                  | ((0x5b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                     | ((0x633U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                        | ((0x6b3U 
                                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                           | ((0x733U 
                                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                              | ((0x7b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                               ? 0U
                                                               : 5U)))))) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hd669a72b__0[
                                 (0xeU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                            ? 0U : 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                             ? 1U : 
                                            ((0x6fU 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                              ? 2U : 
                                             (((0x67U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                               | ((0x63U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                  | ((0xe3U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x263U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                        | ((0x2e3U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                           | ((0x363U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                              | ((0x3e3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                               ? 0U
                                               : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                        | ((0x4b3U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                           | (0x533U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                       | ((0x5b3U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                          | ((0x633U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                             | ((0x6b3U 
                                                                 == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                | ((0x733U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                   | ((0x7b3U 
                                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                      | ((0x1bU 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                         | ((0x9bU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                            | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                               | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                    ? 0U
                                                    : 5U)))))) 
                                          << 1U))])) 
                 >> (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                         ? 1U : ((0x6fU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                  ? 2U
                                                  : 
                                                 (((0x67U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   | ((0x63U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                      | ((0xe3U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                         | ((0x263U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                            | ((0x2e3U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                               | ((0x363U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                  | ((0x3e3U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                         | ((0x4b3U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                            | (0x533U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
                                                        | ((0x5b3U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                           | ((0x633U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                              | ((0x6b3U 
                                                                  == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                 | ((0x733U 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                    | ((0x7b3U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                       | ((0x1bU 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                          | ((0x9bU 
                                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                             | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                     ? 0U
                                                     : 5U)))))) 
                              << 6U)))));
    vlSelf->__VdfgTmp_ha3b20136__0 = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5) 
                                       | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                          | ((0x83U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                             | ((0x103U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                | ((0x203U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   | ((0x283U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                      | ((0x303U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                         | ((0x183U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                            | ((0x23U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                               | ((0xa3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                  | ((0x123U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                     | ((0x1a3U 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x13U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                           | ((0x113U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                              | ((0x193U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x213U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x313U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x393U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x93U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x293U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x4293U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x33U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xb3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | (0x133U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))))))))))) 
                                      | (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3));
    if ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) {
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = 0x3fU;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                ? 0U : ((0x63U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                         ? 2U : ((0xe3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                  ? 3U : ((0x263U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                           ? 4U : (
                                                   (0x2e3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 5U
                                                    : 
                                                   ((0x363U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 6U
                                                     : 
                                                    ((0x3e3U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                      ? 7U
                                                      : 
                                                     ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0)
                                                       ? 0U
                                                       : 
                                                      ((0x113U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                        ? 4U
                                                        : 
                                                       ((0x193U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                         ? 6U
                                                         : 
                                                        ((0x213U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                          ? 8U
                                                          : 
                                                         ((0x313U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                           ? 9U
                                                           : 
                                                          ((0x393U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                            ? 0x10U
                                                            : 
                                                           ((0x93U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                             ? 0xdU
                                                             : 
                                                            ((0x293U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                              ? 0xeU
                                                              : 
                                                             ((0x4293U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                               ? 0xfU
                                                               : 
                                                              ((0x33U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                ? 0U
                                                                : 
                                                               ((0x8033U 
                                                                 == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                 ? 1U
                                                                 : 
                                                                ((0xb3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                  ? 0xaU
                                                                  : 
                                                                 ((0x133U 
                                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                   ? 4U
                                                                   : 
                                                                  ((0x1b3U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                    ? 6U
                                                                    : 
                                                                   ((0x233U 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                     ? 8U
                                                                     : 
                                                                    ((0x2b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                      ? 0xbU
                                                                      : 
                                                                     ((0x82b3U 
                                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                       ? 0xcU
                                                                       : 
                                                                      ((0x333U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                        ? 9U
                                                                        : 
                                                                       ((0x3b3U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                         ? 0x10U
                                                                         : 
                                                                        ((0x433U 
                                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                          ? 0x12U
                                                                          : 
                                                                         ((0x4b3U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                           ? 0x13U
                                                                           : 
                                                                          ((0x533U 
                                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                            ? 0x14U
                                                                            : 
                                                                           ((0x5b3U 
                                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                             ? 0x15U
                                                                             : 
                                                                            ((0x633U 
                                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                              ? 0x16U
                                                                              : 
                                                                             ((0x6b3U 
                                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                               ? 0x17U
                                                                               : 
                                                                              ((0x733U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                ? 0x18U
                                                                                : 
                                                                               ((0x7b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x2f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x373U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x28U
                                                                                 : 0x3fU))))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                         ? 3U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                  ? 2U : (((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0) 
                                           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))
                                           ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0)
                                                    ? 2U
                                                    : 
                                                   (((0x1bU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x9bU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                        | ((0x29bU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                           | (0x429bU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)))))
                                                     ? 1U
                                                     : 
                                                    ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)
                                                      ? 2U
                                                      : 
                                                     ((0xf3U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                       ? 0U
                                                       : 
                                                      ((IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0)
                                                        ? 4U
                                                        : 
                                                       ((0x2f3U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                         ? 0U
                                                         : 
                                                        ((0x373U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                          ? 4U
                                                          : 
                                                         ((0x3f3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          << 2U))))))))))));
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type 
            = ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                ? 1U : ((0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                         ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                                  ? 1U : ((IData)(vlSelf->__VdfgTmp_ha3b20136__0)
                                           ? 2U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0)
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x3f3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))));
    }
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall 
        = ((((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
             & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T)) 
            & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
           | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)));
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid 
        = ((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) 
           & (0xa0000000ULL > vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha26fe365__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0 
        = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
            [(0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                 >> 3U)) << 1U))] == 
            (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                  >> 0xbU)))) & __Vtemp_ha26fe365__0[0U]);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen 
        = ((~ (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
                | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                   | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                      | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                         | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                            | ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))))))) 
               | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))) 
           & ((0xf3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x1f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x2f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x373U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | (0U != (3U & (- (IData)(
                                                    (0x3f3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)
            ? ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                    : 0U)) : ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)
                               ? (IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)
                               : ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag)
                                   ? ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                       ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                       : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                           ? (0xfffffffeU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                                 + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                           : 0x80000000U))
                                   : 0x80000000U)));
    VL_SHIFTR_WWI(512,512,10, __Vtemp_h773c399d__0, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) 
           | ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
               [(0x1ffU & ((IData)(1U) + (0x1feU & 
                                          ((IData)(
                                                   (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                    >> 3U)) 
                                           << 1U))))] 
               == (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                        >> 0xbU)))) 
              & __Vtemp_h773c399d__0[0U]));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 
        = ((((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type)) 
             & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_12)) 
            | (((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)) 
                & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_8)) 
               | (((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9) 
                      & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_8))) 
                  | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
                     & (IData)(Soc__DOT__core__DOT__decode__DOT___load_use_T_12))))) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd)));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0))));
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0 
        = (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
            & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                  & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                     | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                        & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                           & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started))))))) 
           | ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                 & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                        & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                    & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                       | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                           & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                          & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                             | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)))))))));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22) {
        __Vtemp_hdace100e__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hdace100e__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hdace100e__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hdace100e__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hdace100e__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hdace100e__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hdace100e__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hdace100e__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hdace100e__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hdace100e__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hdace100e__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hdace100e__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hdace100e__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hdace100e__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hdace100e__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hdace100e__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_h291dd8b0__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h291dd8b0__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h291dd8b0__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h291dd8b0__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h291dd8b0__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h291dd8b0__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h291dd8b0__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h291dd8b0__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h291dd8b0__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h291dd8b0__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h291dd8b0__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h291dd8b0__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h291dd8b0__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h291dd8b0__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h291dd8b0__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h291dd8b0__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else {
        __Vtemp_hdace100e__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_hdace100e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_hdace100e__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_hdace100e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_hdace100e__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_hdace100e__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_hdace100e__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_hdace100e__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_hdace100e__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_hdace100e__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_hdace100e__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_hdace100e__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_hdace100e__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_hdace100e__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_hdace100e__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_hdace100e__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU];
        __Vtemp_h291dd8b0__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_h291dd8b0__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_h291dd8b0__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_h291dd8b0__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_h291dd8b0__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_h291dd8b0__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_h291dd8b0__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_h291dd8b0__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_h291dd8b0__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_h291dd8b0__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_h291dd8b0__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_h291dd8b0__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_h291dd8b0__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_h291dd8b0__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_h291dd8b0__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_h291dd8b0__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU];
    }
    __Vtemp_hdace100e__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_hdace100e__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_hdace100e__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_hdace100e__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_hdace100e__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_hdace100e__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_hdace100e__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_hdace100e__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_hdace100e__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_hdace100e__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_hdace100e__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_hdace100e__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_hdace100e__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_hdace100e__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_hdace100e__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_hdace100e__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_hdace100e__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_hdace100e__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_hdace100e__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_hdace100e__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_hdace100e__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_hdace100e__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_hdace100e__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_hdace100e__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_hdace100e__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_hdace100e__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_hdace100e__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_hdace100e__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_hdace100e__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_hdace100e__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_hdace100e__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_hdace100e__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) {
        __Vtemp_hdace100e__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_hdace100e__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_hdace100e__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_hdace100e__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_hdace100e__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_hdace100e__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_hdace100e__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_hdace100e__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_hdace100e__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_hdace100e__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_hdace100e__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_hdace100e__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_hdace100e__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_hdace100e__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_hdace100e__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_hdace100e__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU];
    } else {
        __Vtemp_hdace100e__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hdace100e__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hdace100e__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hdace100e__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hdace100e__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hdace100e__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hdace100e__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hdace100e__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hdace100e__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hdace100e__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hdace100e__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hdace100e__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hdace100e__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hdace100e__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hdace100e__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hdace100e__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_h1db9c6ed__0, __Vtemp_hdace100e__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum) {
        __Vtemp_h4589acab__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        __Vtemp_h4589acab__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        __Vtemp_h4589acab__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        __Vtemp_h4589acab__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        __Vtemp_h4589acab__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        __Vtemp_h4589acab__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        __Vtemp_h4589acab__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        __Vtemp_h4589acab__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        __Vtemp_h4589acab__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        __Vtemp_h4589acab__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        __Vtemp_h4589acab__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        __Vtemp_h4589acab__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        __Vtemp_h4589acab__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        __Vtemp_h4589acab__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        __Vtemp_h4589acab__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        __Vtemp_h4589acab__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        __Vtemp_h24e1c136__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0U];
        __Vtemp_h24e1c136__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[1U];
        __Vtemp_h24e1c136__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[2U];
        __Vtemp_h24e1c136__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[3U];
        __Vtemp_h24e1c136__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[4U];
        __Vtemp_h24e1c136__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[5U];
        __Vtemp_h24e1c136__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[6U];
        __Vtemp_h24e1c136__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[7U];
        __Vtemp_h24e1c136__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[8U];
        __Vtemp_h24e1c136__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[9U];
        __Vtemp_h24e1c136__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        __Vtemp_h24e1c136__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        __Vtemp_h24e1c136__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        __Vtemp_h24e1c136__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        __Vtemp_h24e1c136__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        __Vtemp_h24e1c136__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        __Vtemp_h4589acab__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        __Vtemp_h4589acab__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        __Vtemp_h4589acab__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        __Vtemp_h4589acab__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        __Vtemp_h4589acab__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        __Vtemp_h4589acab__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        __Vtemp_h4589acab__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        __Vtemp_h4589acab__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        __Vtemp_h4589acab__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        __Vtemp_h4589acab__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        __Vtemp_h4589acab__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        __Vtemp_h4589acab__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        __Vtemp_h4589acab__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        __Vtemp_h4589acab__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        __Vtemp_h4589acab__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        __Vtemp_h4589acab__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        __Vtemp_h24e1c136__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0U];
        __Vtemp_h24e1c136__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[1U];
        __Vtemp_h24e1c136__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[2U];
        __Vtemp_h24e1c136__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[3U];
        __Vtemp_h24e1c136__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[4U];
        __Vtemp_h24e1c136__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[5U];
        __Vtemp_h24e1c136__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[6U];
        __Vtemp_h24e1c136__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[7U];
        __Vtemp_h24e1c136__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[8U];
        __Vtemp_h24e1c136__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[9U];
        __Vtemp_h24e1c136__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        __Vtemp_h24e1c136__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        __Vtemp_h24e1c136__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        __Vtemp_h24e1c136__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        __Vtemp_h24e1c136__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        __Vtemp_h24e1c136__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_hb0c2184e__0, __Vtemp_h1db9c6ed__0, __Vtemp_h4589acab__0);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h1b744e70__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h1b744e70__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3) {
        __Vtemp_h1d721c1f__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h1d721c1f__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h1d721c1f__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h1d721c1f__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h1d721c1f__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h1d721c1f__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h1d721c1f__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h1d721c1f__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h1d721c1f__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h1d721c1f__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h1d721c1f__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h1d721c1f__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h1d721c1f__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h1d721c1f__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h1d721c1f__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h1d721c1f__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) {
        __Vtemp_h1d721c1f__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
                                       | __Vtemp_h1b744e70__0[0U]));
        __Vtemp_h1d721c1f__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
                                       | __Vtemp_h1b744e70__0[1U]));
        __Vtemp_h1d721c1f__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
                                       | __Vtemp_h1b744e70__0[2U]));
        __Vtemp_h1d721c1f__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
                                       | __Vtemp_h1b744e70__0[3U]));
        __Vtemp_h1d721c1f__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
                                       | __Vtemp_h1b744e70__0[4U]));
        __Vtemp_h1d721c1f__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
                                       | __Vtemp_h1b744e70__0[5U]));
        __Vtemp_h1d721c1f__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
                                       | __Vtemp_h1b744e70__0[6U]));
        __Vtemp_h1d721c1f__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
                                       | __Vtemp_h1b744e70__0[7U]));
        __Vtemp_h1d721c1f__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
                                       | __Vtemp_h1b744e70__0[8U]));
        __Vtemp_h1d721c1f__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
                                       | __Vtemp_h1b744e70__0[9U]));
        __Vtemp_h1d721c1f__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
                                         | __Vtemp_h1b744e70__0[0xaU]));
        __Vtemp_h1d721c1f__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
                                         | __Vtemp_h1b744e70__0[0xbU]));
        __Vtemp_h1d721c1f__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
                                         | __Vtemp_h1b744e70__0[0xcU]));
        __Vtemp_h1d721c1f__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
                                         | __Vtemp_h1b744e70__0[0xdU]));
        __Vtemp_h1d721c1f__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
                                         | __Vtemp_h1b744e70__0[0xeU]));
        __Vtemp_h1d721c1f__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
                                         | __Vtemp_h1b744e70__0[0xfU]));
    } else {
        __Vtemp_h1d721c1f__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
                                    | __Vtemp_h1b744e70__1[0U]);
        __Vtemp_h1d721c1f__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
                                    | __Vtemp_h1b744e70__1[1U]);
        __Vtemp_h1d721c1f__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
                                    | __Vtemp_h1b744e70__1[2U]);
        __Vtemp_h1d721c1f__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
                                    | __Vtemp_h1b744e70__1[3U]);
        __Vtemp_h1d721c1f__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
                                    | __Vtemp_h1b744e70__1[4U]);
        __Vtemp_h1d721c1f__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
                                    | __Vtemp_h1b744e70__1[5U]);
        __Vtemp_h1d721c1f__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
                                    | __Vtemp_h1b744e70__1[6U]);
        __Vtemp_h1d721c1f__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
                                    | __Vtemp_h1b744e70__1[7U]);
        __Vtemp_h1d721c1f__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
                                    | __Vtemp_h1b744e70__1[8U]);
        __Vtemp_h1d721c1f__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
                                    | __Vtemp_h1b744e70__1[9U]);
        __Vtemp_h1d721c1f__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
                                      | __Vtemp_h1b744e70__1[0xaU]);
        __Vtemp_h1d721c1f__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
                                      | __Vtemp_h1b744e70__1[0xbU]);
        __Vtemp_h1d721c1f__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
                                      | __Vtemp_h1b744e70__1[0xcU]);
        __Vtemp_h1d721c1f__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
                                      | __Vtemp_h1b744e70__1[0xdU]);
        __Vtemp_h1d721c1f__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
                                      | __Vtemp_h1b744e70__1[0xeU]);
        __Vtemp_h1d721c1f__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
                                      | __Vtemp_h1b744e70__1[0xfU]);
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_h1fa9981c__0, __Vtemp_hb0c2184e__0, __Vtemp_h1d721c1f__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1fa9981c__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1fa9981c__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    __Vtemp_h291dd8b0__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_h291dd8b0__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_h291dd8b0__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_h291dd8b0__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_h291dd8b0__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_h291dd8b0__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_h291dd8b0__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_h291dd8b0__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_h291dd8b0__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_h291dd8b0__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_h291dd8b0__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_h291dd8b0__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_h291dd8b0__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_h291dd8b0__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_h291dd8b0__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_h291dd8b0__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_h291dd8b0__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_h291dd8b0__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_h291dd8b0__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_h291dd8b0__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_h291dd8b0__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_h291dd8b0__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_h291dd8b0__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_h291dd8b0__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_h291dd8b0__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_h291dd8b0__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_h291dd8b0__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_h291dd8b0__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_h291dd8b0__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_h291dd8b0__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_h291dd8b0__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_h291dd8b0__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) {
        __Vtemp_h291dd8b0__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_h291dd8b0__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_h291dd8b0__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_h291dd8b0__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_h291dd8b0__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_h291dd8b0__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_h291dd8b0__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_h291dd8b0__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_h291dd8b0__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_h291dd8b0__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_h291dd8b0__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_h291dd8b0__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_h291dd8b0__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_h291dd8b0__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_h291dd8b0__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_h291dd8b0__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU];
    } else {
        __Vtemp_h291dd8b0__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h291dd8b0__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h291dd8b0__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h291dd8b0__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h291dd8b0__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h291dd8b0__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h291dd8b0__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h291dd8b0__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h291dd8b0__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h291dd8b0__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h291dd8b0__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h291dd8b0__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h291dd8b0__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h291dd8b0__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h291dd8b0__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h291dd8b0__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_he362a9c1__0, __Vtemp_h291dd8b0__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_h3537412a__0, __Vtemp_he362a9c1__0, __Vtemp_h24e1c136__0);
    VL_SHIFTL_WWI(512,512,10, __Vtemp_he80100a8__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_he80100a8__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3) {
        __Vtemp_h7030f67e__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h7030f67e__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h7030f67e__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h7030f67e__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h7030f67e__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h7030f67e__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h7030f67e__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h7030f67e__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h7030f67e__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h7030f67e__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h7030f67e__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h7030f67e__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h7030f67e__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h7030f67e__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h7030f67e__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h7030f67e__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) {
        __Vtemp_h7030f67e__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
                                    | __Vtemp_he80100a8__0[0U]);
        __Vtemp_h7030f67e__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
                                    | __Vtemp_he80100a8__0[1U]);
        __Vtemp_h7030f67e__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
                                    | __Vtemp_he80100a8__0[2U]);
        __Vtemp_h7030f67e__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
                                    | __Vtemp_he80100a8__0[3U]);
        __Vtemp_h7030f67e__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
                                    | __Vtemp_he80100a8__0[4U]);
        __Vtemp_h7030f67e__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
                                    | __Vtemp_he80100a8__0[5U]);
        __Vtemp_h7030f67e__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
                                    | __Vtemp_he80100a8__0[6U]);
        __Vtemp_h7030f67e__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
                                    | __Vtemp_he80100a8__0[7U]);
        __Vtemp_h7030f67e__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
                                    | __Vtemp_he80100a8__0[8U]);
        __Vtemp_h7030f67e__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
                                    | __Vtemp_he80100a8__0[9U]);
        __Vtemp_h7030f67e__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
                                      | __Vtemp_he80100a8__0[0xaU]);
        __Vtemp_h7030f67e__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
                                      | __Vtemp_he80100a8__0[0xbU]);
        __Vtemp_h7030f67e__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
                                      | __Vtemp_he80100a8__0[0xcU]);
        __Vtemp_h7030f67e__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
                                      | __Vtemp_he80100a8__0[0xdU]);
        __Vtemp_h7030f67e__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
                                      | __Vtemp_he80100a8__0[0xeU]);
        __Vtemp_h7030f67e__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
                                      | __Vtemp_he80100a8__0[0xfU]);
    } else {
        __Vtemp_h7030f67e__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
                                       | __Vtemp_he80100a8__1[0U]));
        __Vtemp_h7030f67e__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
                                       | __Vtemp_he80100a8__1[1U]));
        __Vtemp_h7030f67e__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
                                       | __Vtemp_he80100a8__1[2U]));
        __Vtemp_h7030f67e__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
                                       | __Vtemp_he80100a8__1[3U]));
        __Vtemp_h7030f67e__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
                                       | __Vtemp_he80100a8__1[4U]));
        __Vtemp_h7030f67e__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
                                       | __Vtemp_he80100a8__1[5U]));
        __Vtemp_h7030f67e__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
                                       | __Vtemp_he80100a8__1[6U]));
        __Vtemp_h7030f67e__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
                                       | __Vtemp_he80100a8__1[7U]));
        __Vtemp_h7030f67e__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
                                       | __Vtemp_he80100a8__1[8U]));
        __Vtemp_h7030f67e__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
                                       | __Vtemp_he80100a8__1[9U]));
        __Vtemp_h7030f67e__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
                                         | __Vtemp_he80100a8__1[0xaU]));
        __Vtemp_h7030f67e__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
                                         | __Vtemp_he80100a8__1[0xbU]));
        __Vtemp_h7030f67e__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
                                         | __Vtemp_he80100a8__1[0xcU]));
        __Vtemp_h7030f67e__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
                                         | __Vtemp_he80100a8__1[0xdU]));
        __Vtemp_h7030f67e__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
                                         | __Vtemp_he80100a8__1[0xeU]));
        __Vtemp_h7030f67e__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
                                         | __Vtemp_he80100a8__1[0xfU]));
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_h1d04a2ef__0, __Vtemp_h3537412a__0, __Vtemp_h7030f67e__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h1d04a2ef__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h1d04a2ef__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall) 
           | (IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall)) 
                 & (~ (IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0))));
    vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0) 
                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag))))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                        | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag))))))) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3))));
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0)
            ? vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc
            : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                ? vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3)
                    ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                        ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                            ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                            : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))
                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h90dffb35__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                             >> 2U)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0 
        = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
            [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                        >> 2U))] == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                     >> 0xbU)) & __Vtemp_h90dffb35__0[0U]);
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) 
           | ((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
               [(0x1ffU & ((IData)(1U) + (0x1feU & 
                                          (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                           >> 2U))))] 
               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                   >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)) 
                 | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22) {
        __Vtemp_hf1012f5d__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hf1012f5d__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hf1012f5d__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hf1012f5d__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hf1012f5d__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hf1012f5d__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hf1012f5d__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hf1012f5d__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hf1012f5d__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hf1012f5d__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hf1012f5d__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hf1012f5d__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hf1012f5d__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hf1012f5d__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hf1012f5d__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hf1012f5d__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_hc16f4300__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hc16f4300__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hc16f4300__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hc16f4300__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hc16f4300__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hc16f4300__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hc16f4300__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hc16f4300__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hc16f4300__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hc16f4300__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hc16f4300__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hc16f4300__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hc16f4300__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hc16f4300__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hc16f4300__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hc16f4300__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else {
        __Vtemp_hf1012f5d__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_hf1012f5d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_hf1012f5d__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_hf1012f5d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_hf1012f5d__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_hf1012f5d__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_hf1012f5d__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_hf1012f5d__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_hf1012f5d__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_hf1012f5d__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_hf1012f5d__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_hf1012f5d__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_hf1012f5d__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_hf1012f5d__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_hf1012f5d__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_hf1012f5d__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU];
        __Vtemp_hc16f4300__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_hc16f4300__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_hc16f4300__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_hc16f4300__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_hc16f4300__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_hc16f4300__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_hc16f4300__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_hc16f4300__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_hc16f4300__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_hc16f4300__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_hc16f4300__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_hc16f4300__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_hc16f4300__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_hc16f4300__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_hc16f4300__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_hc16f4300__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU];
    }
    __Vtemp_hf1012f5d__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_hf1012f5d__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_hf1012f5d__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_hf1012f5d__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_hf1012f5d__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_hf1012f5d__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_hf1012f5d__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_hf1012f5d__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_hf1012f5d__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_hf1012f5d__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_hf1012f5d__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_hf1012f5d__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_hf1012f5d__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_hf1012f5d__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_hf1012f5d__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_hf1012f5d__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_hf1012f5d__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_hf1012f5d__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_hf1012f5d__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_hf1012f5d__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_hf1012f5d__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_hf1012f5d__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_hf1012f5d__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_hf1012f5d__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_hf1012f5d__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_hf1012f5d__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_hf1012f5d__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_hf1012f5d__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_hf1012f5d__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_hf1012f5d__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_hf1012f5d__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_hf1012f5d__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) {
        __Vtemp_hf1012f5d__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_hf1012f5d__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_hf1012f5d__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_hf1012f5d__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_hf1012f5d__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_hf1012f5d__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_hf1012f5d__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_hf1012f5d__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_hf1012f5d__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_hf1012f5d__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_hf1012f5d__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_hf1012f5d__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_hf1012f5d__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_hf1012f5d__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_hf1012f5d__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_hf1012f5d__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU];
    } else {
        __Vtemp_hf1012f5d__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hf1012f5d__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hf1012f5d__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hf1012f5d__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hf1012f5d__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hf1012f5d__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hf1012f5d__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hf1012f5d__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hf1012f5d__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hf1012f5d__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hf1012f5d__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hf1012f5d__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hf1012f5d__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hf1012f5d__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hf1012f5d__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hf1012f5d__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_h84430b2a__0, __Vtemp_hf1012f5d__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum) {
        __Vtemp_hb1565afd__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        __Vtemp_hb1565afd__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        __Vtemp_hb1565afd__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        __Vtemp_hb1565afd__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        __Vtemp_hb1565afd__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        __Vtemp_hb1565afd__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        __Vtemp_hb1565afd__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        __Vtemp_hb1565afd__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        __Vtemp_hb1565afd__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        __Vtemp_hb1565afd__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        __Vtemp_hb1565afd__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        __Vtemp_hb1565afd__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        __Vtemp_hb1565afd__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        __Vtemp_hb1565afd__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        __Vtemp_hb1565afd__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        __Vtemp_hb1565afd__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        __Vtemp_h74456a53__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0U];
        __Vtemp_h74456a53__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[1U];
        __Vtemp_h74456a53__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[2U];
        __Vtemp_h74456a53__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[3U];
        __Vtemp_h74456a53__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[4U];
        __Vtemp_h74456a53__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[5U];
        __Vtemp_h74456a53__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[6U];
        __Vtemp_h74456a53__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[7U];
        __Vtemp_h74456a53__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[8U];
        __Vtemp_h74456a53__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[9U];
        __Vtemp_h74456a53__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        __Vtemp_h74456a53__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        __Vtemp_h74456a53__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        __Vtemp_h74456a53__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        __Vtemp_h74456a53__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        __Vtemp_h74456a53__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        __Vtemp_hb1565afd__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        __Vtemp_hb1565afd__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        __Vtemp_hb1565afd__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        __Vtemp_hb1565afd__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        __Vtemp_hb1565afd__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        __Vtemp_hb1565afd__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        __Vtemp_hb1565afd__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        __Vtemp_hb1565afd__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        __Vtemp_hb1565afd__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        __Vtemp_hb1565afd__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        __Vtemp_hb1565afd__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        __Vtemp_hb1565afd__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        __Vtemp_hb1565afd__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        __Vtemp_hb1565afd__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        __Vtemp_hb1565afd__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        __Vtemp_hb1565afd__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        __Vtemp_h74456a53__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0U];
        __Vtemp_h74456a53__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[1U];
        __Vtemp_h74456a53__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[2U];
        __Vtemp_h74456a53__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[3U];
        __Vtemp_h74456a53__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[4U];
        __Vtemp_h74456a53__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[5U];
        __Vtemp_h74456a53__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[6U];
        __Vtemp_h74456a53__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[7U];
        __Vtemp_h74456a53__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[8U];
        __Vtemp_h74456a53__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[9U];
        __Vtemp_h74456a53__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        __Vtemp_h74456a53__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        __Vtemp_h74456a53__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        __Vtemp_h74456a53__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        __Vtemp_h74456a53__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        __Vtemp_h74456a53__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_h3c5f0df7__0, __Vtemp_h84430b2a__0, __Vtemp_hb1565afd__0);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h3b94b080__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                             >> 2U)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h3b94b080__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                             >> 2U)));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3) {
        __Vtemp_h67dad240__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h67dad240__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h67dad240__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h67dad240__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h67dad240__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h67dad240__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h67dad240__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h67dad240__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h67dad240__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h67dad240__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h67dad240__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h67dad240__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h67dad240__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h67dad240__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h67dad240__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h67dad240__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) {
        __Vtemp_h67dad240__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
                                       | __Vtemp_h3b94b080__0[0U]));
        __Vtemp_h67dad240__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
                                       | __Vtemp_h3b94b080__0[1U]));
        __Vtemp_h67dad240__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
                                       | __Vtemp_h3b94b080__0[2U]));
        __Vtemp_h67dad240__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
                                       | __Vtemp_h3b94b080__0[3U]));
        __Vtemp_h67dad240__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
                                       | __Vtemp_h3b94b080__0[4U]));
        __Vtemp_h67dad240__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
                                       | __Vtemp_h3b94b080__0[5U]));
        __Vtemp_h67dad240__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
                                       | __Vtemp_h3b94b080__0[6U]));
        __Vtemp_h67dad240__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
                                       | __Vtemp_h3b94b080__0[7U]));
        __Vtemp_h67dad240__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
                                       | __Vtemp_h3b94b080__0[8U]));
        __Vtemp_h67dad240__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
                                       | __Vtemp_h3b94b080__0[9U]));
        __Vtemp_h67dad240__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
                                         | __Vtemp_h3b94b080__0[0xaU]));
        __Vtemp_h67dad240__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
                                         | __Vtemp_h3b94b080__0[0xbU]));
        __Vtemp_h67dad240__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
                                         | __Vtemp_h3b94b080__0[0xcU]));
        __Vtemp_h67dad240__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
                                         | __Vtemp_h3b94b080__0[0xdU]));
        __Vtemp_h67dad240__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
                                         | __Vtemp_h3b94b080__0[0xeU]));
        __Vtemp_h67dad240__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
                                         | __Vtemp_h3b94b080__0[0xfU]));
    } else {
        __Vtemp_h67dad240__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
                                    | __Vtemp_h3b94b080__1[0U]);
        __Vtemp_h67dad240__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
                                    | __Vtemp_h3b94b080__1[1U]);
        __Vtemp_h67dad240__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
                                    | __Vtemp_h3b94b080__1[2U]);
        __Vtemp_h67dad240__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
                                    | __Vtemp_h3b94b080__1[3U]);
        __Vtemp_h67dad240__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
                                    | __Vtemp_h3b94b080__1[4U]);
        __Vtemp_h67dad240__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
                                    | __Vtemp_h3b94b080__1[5U]);
        __Vtemp_h67dad240__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
                                    | __Vtemp_h3b94b080__1[6U]);
        __Vtemp_h67dad240__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
                                    | __Vtemp_h3b94b080__1[7U]);
        __Vtemp_h67dad240__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
                                    | __Vtemp_h3b94b080__1[8U]);
        __Vtemp_h67dad240__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
                                    | __Vtemp_h3b94b080__1[9U]);
        __Vtemp_h67dad240__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
                                      | __Vtemp_h3b94b080__1[0xaU]);
        __Vtemp_h67dad240__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
                                      | __Vtemp_h3b94b080__1[0xbU]);
        __Vtemp_h67dad240__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
                                      | __Vtemp_h3b94b080__1[0xcU]);
        __Vtemp_h67dad240__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
                                      | __Vtemp_h3b94b080__1[0xdU]);
        __Vtemp_h67dad240__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
                                      | __Vtemp_h3b94b080__1[0xeU]);
        __Vtemp_h67dad240__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
                                      | __Vtemp_h3b94b080__1[0xfU]);
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_h5d265de5__0, __Vtemp_h3c5f0df7__0, __Vtemp_h67dad240__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h5d265de5__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h5d265de5__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    __Vtemp_hc16f4300__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_hc16f4300__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_hc16f4300__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_hc16f4300__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_hc16f4300__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_hc16f4300__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_hc16f4300__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_hc16f4300__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_hc16f4300__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_hc16f4300__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_hc16f4300__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_hc16f4300__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_hc16f4300__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_hc16f4300__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_hc16f4300__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_hc16f4300__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_hc16f4300__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_hc16f4300__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_hc16f4300__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_hc16f4300__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_hc16f4300__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_hc16f4300__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_hc16f4300__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_hc16f4300__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_hc16f4300__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_hc16f4300__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_hc16f4300__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_hc16f4300__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_hc16f4300__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_hc16f4300__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_hc16f4300__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_hc16f4300__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) {
        __Vtemp_hc16f4300__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_hc16f4300__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_hc16f4300__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_hc16f4300__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_hc16f4300__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_hc16f4300__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_hc16f4300__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_hc16f4300__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_hc16f4300__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_hc16f4300__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_hc16f4300__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_hc16f4300__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_hc16f4300__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_hc16f4300__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_hc16f4300__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_hc16f4300__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU];
    } else {
        __Vtemp_hc16f4300__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hc16f4300__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hc16f4300__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hc16f4300__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hc16f4300__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hc16f4300__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hc16f4300__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hc16f4300__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hc16f4300__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hc16f4300__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hc16f4300__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hc16f4300__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hc16f4300__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hc16f4300__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hc16f4300__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hc16f4300__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_hb5cd95f5__0, __Vtemp_hc16f4300__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_h5fbc1f80__0, __Vtemp_hb5cd95f5__0, __Vtemp_h74456a53__0);
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h879ffeb8__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h879ffeb8__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3) {
        __Vtemp_h0b41d904__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h0b41d904__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h0b41d904__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h0b41d904__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h0b41d904__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h0b41d904__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h0b41d904__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h0b41d904__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h0b41d904__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h0b41d904__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h0b41d904__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h0b41d904__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h0b41d904__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h0b41d904__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h0b41d904__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h0b41d904__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) {
        __Vtemp_h0b41d904__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
                                    | __Vtemp_h879ffeb8__0[0U]);
        __Vtemp_h0b41d904__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
                                    | __Vtemp_h879ffeb8__0[1U]);
        __Vtemp_h0b41d904__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
                                    | __Vtemp_h879ffeb8__0[2U]);
        __Vtemp_h0b41d904__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
                                    | __Vtemp_h879ffeb8__0[3U]);
        __Vtemp_h0b41d904__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
                                    | __Vtemp_h879ffeb8__0[4U]);
        __Vtemp_h0b41d904__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
                                    | __Vtemp_h879ffeb8__0[5U]);
        __Vtemp_h0b41d904__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
                                    | __Vtemp_h879ffeb8__0[6U]);
        __Vtemp_h0b41d904__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
                                    | __Vtemp_h879ffeb8__0[7U]);
        __Vtemp_h0b41d904__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
                                    | __Vtemp_h879ffeb8__0[8U]);
        __Vtemp_h0b41d904__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
                                    | __Vtemp_h879ffeb8__0[9U]);
        __Vtemp_h0b41d904__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
                                      | __Vtemp_h879ffeb8__0[0xaU]);
        __Vtemp_h0b41d904__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
                                      | __Vtemp_h879ffeb8__0[0xbU]);
        __Vtemp_h0b41d904__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
                                      | __Vtemp_h879ffeb8__0[0xcU]);
        __Vtemp_h0b41d904__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
                                      | __Vtemp_h879ffeb8__0[0xdU]);
        __Vtemp_h0b41d904__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
                                      | __Vtemp_h879ffeb8__0[0xeU]);
        __Vtemp_h0b41d904__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
                                      | __Vtemp_h879ffeb8__0[0xfU]);
    } else {
        __Vtemp_h0b41d904__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
                                       | __Vtemp_h879ffeb8__1[0U]));
        __Vtemp_h0b41d904__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
                                       | __Vtemp_h879ffeb8__1[1U]));
        __Vtemp_h0b41d904__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
                                       | __Vtemp_h879ffeb8__1[2U]));
        __Vtemp_h0b41d904__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
                                       | __Vtemp_h879ffeb8__1[3U]));
        __Vtemp_h0b41d904__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
                                       | __Vtemp_h879ffeb8__1[4U]));
        __Vtemp_h0b41d904__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
                                       | __Vtemp_h879ffeb8__1[5U]));
        __Vtemp_h0b41d904__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
                                       | __Vtemp_h879ffeb8__1[6U]));
        __Vtemp_h0b41d904__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
                                       | __Vtemp_h879ffeb8__1[7U]));
        __Vtemp_h0b41d904__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
                                       | __Vtemp_h879ffeb8__1[8U]));
        __Vtemp_h0b41d904__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
                                       | __Vtemp_h879ffeb8__1[9U]));
        __Vtemp_h0b41d904__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
                                         | __Vtemp_h879ffeb8__1[0xaU]));
        __Vtemp_h0b41d904__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
                                         | __Vtemp_h879ffeb8__1[0xbU]));
        __Vtemp_h0b41d904__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
                                         | __Vtemp_h879ffeb8__1[0xcU]));
        __Vtemp_h0b41d904__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
                                         | __Vtemp_h879ffeb8__1[0xdU]));
        __Vtemp_h0b41d904__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
                                         | __Vtemp_h879ffeb8__1[0xeU]));
        __Vtemp_h0b41d904__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
                                         | __Vtemp_h879ffeb8__1[0xfU]));
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_h31056a89__0, __Vtemp_h5fbc1f80__0, __Vtemp_h0b41d904__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h31056a89__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h31056a89__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
}
