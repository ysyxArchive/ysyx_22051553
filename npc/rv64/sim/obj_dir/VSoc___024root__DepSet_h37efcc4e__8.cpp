// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__749__PROF__Soc__l1695(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__749__PROF__Soc__l1695\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8 = (0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__750__PROF__Soc__l2389(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__750__PROF__Soc__l2389\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_24 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__751__PROF__Soc__l2698(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__751__PROF__Soc__l2698\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_2907 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__752__PROF__Soc__l2703(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__752__PROF__Soc__l2703\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_2913 
        = (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__753__PROF__Soc__l2370(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__753__PROF__Soc__l2370\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4 
        = (5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__754__PROF__Soc__l2377(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__754__PROF__Soc__l2377\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10 
        = (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__755__PROF__Soc__l2712(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__755__PROF__Soc__l2712\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_2914 
        = (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__756__PROF__Soc__l2700(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__756__PROF__Soc__l2700\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
               ? ((0x1fU >= (0x3fU & ((IData)(1U) + 
                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                       << 1U)))) ? 
                  (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace 
                   >> (0x3fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                               << 1U))))
                   : 0U) : ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                            & ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
                               & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                  & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                     & ((0x1fU >= (0x3fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                                       << 1U))))
                                         ? (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace 
                                            >> (0x3fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                                    << 1U))))
                                         : 0U)))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__757__PROF__Soc__l2384(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__757__PROF__Soc__l2384\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (5U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__758__PROF__Soc__l265(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__758__PROF__Soc__l265\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started 
        = (1U & (~ (IData)(vlSelf->reset)));
}

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__759__PROF__Soc__l2485(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__759__PROF__Soc__l2485\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h65fd7140__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd53294c8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h21ba2e41__0;
    VlWide<32>/*1023:0*/ __Vtemp_hac4c107b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5a51b209__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb294189d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1a28d418__0;
    VlWide<32>/*1023:0*/ __Vtemp_h88b1f47d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h67c85c69__0;
    VlWide<32>/*1023:0*/ __Vtemp_hee4efbc9__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3f51d991__0;
    VlWide<32>/*1023:0*/ __Vtemp_h8e193aee__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2310b940__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha1666930__0;
    VlWide<32>/*1023:0*/ __Vtemp_h022b47e7__0;
    VlWide<32>/*1023:0*/ __Vtemp_h39c0d1b4__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6fa0b313__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7d0678a4__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2b851c69__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc8c70d9d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h68cea491__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7139eba8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5834ca16__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha57efb6b__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha1574b03__0;
    VlWide<32>/*1023:0*/ __Vtemp_h0ef308b1__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb2f933f7__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1880e756__0;
    VlWide<32>/*1023:0*/ __Vtemp_h859d833c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h478ca6c4__0;
    VlWide<32>/*1023:0*/ __Vtemp_h92cac4db__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3e54c87e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5b33b2b1__0;
    VlWide<32>/*1023:0*/ __Vtemp_he45a0956__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc56c3ce1__0;
    VlWide<32>/*1023:0*/ __Vtemp_hafa6fc75__0;
    // Body
    if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a151b__0[1U];
        __Vtemp_h65fd7140__0[3U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a151b__0[3U]);
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1137__0[1U];
        __Vtemp_h65fd7140__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216aed03__0[1U];
        __Vtemp_h65fd7140__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0U];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae91f__0 
                                            >> 0x20U));
        __Vtemp_h65fd7140__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[1U] 
                                                  << 0x10U));
    } else if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))) 
                                              << 0x30U) 
                                             | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0) 
                                            >> 0x20U));
        __Vtemp_h65fd7140__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[1U];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_h65fd7140__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[2U] 
                                                  << 0x10U));
    } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0U];
        __Vtemp_h65fd7140__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[2U];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h65fd7140__0[1U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[1U] 
                                                  << 0x10U));
        __Vtemp_h65fd7140__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[3U] 
                                                  << 0x10U));
    } else {
        __Vtemp_h65fd7140__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h65fd7140__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    }
    if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[0U];
        __Vtemp_hd53294c8__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[2U];
        __Vtemp_hd53294c8__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_hd53294c8__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[1U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[2U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[3U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[4U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[5U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[6U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[7U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[8U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[9U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xcU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0[0x1bU] 
                                        << 0x10U));
    } else if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a151b__0[0U];
        __Vtemp_hd53294c8__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a151b__0[2U];
        __Vtemp_hd53294c8__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0U];
        __Vtemp_hd53294c8__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[1U];
        __Vtemp_hd53294c8__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[2U];
        __Vtemp_hd53294c8__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[3U];
        __Vtemp_hd53294c8__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[4U];
        __Vtemp_hd53294c8__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[5U];
        __Vtemp_hd53294c8__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[6U];
        __Vtemp_hd53294c8__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[7U];
        __Vtemp_hd53294c8__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[8U];
        __Vtemp_hd53294c8__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[9U];
        __Vtemp_hd53294c8__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xaU];
        __Vtemp_hd53294c8__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xbU];
        __Vtemp_hd53294c8__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xcU];
        __Vtemp_hd53294c8__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xdU];
        __Vtemp_hd53294c8__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xeU];
        __Vtemp_hd53294c8__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xfU];
        __Vtemp_hd53294c8__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x10U];
        __Vtemp_hd53294c8__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x11U];
        __Vtemp_hd53294c8__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x12U];
        __Vtemp_hd53294c8__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x13U];
        __Vtemp_hd53294c8__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x14U];
        __Vtemp_hd53294c8__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x15U];
        __Vtemp_hd53294c8__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x16U];
        __Vtemp_hd53294c8__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x17U];
        __Vtemp_hd53294c8__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x18U];
        __Vtemp_hd53294c8__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x19U];
        __Vtemp_hd53294c8__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x1aU];
        __Vtemp_hd53294c8__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x1bU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1137__0[0U];
        __Vtemp_hd53294c8__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1137__0[2U];
        __Vtemp_hd53294c8__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[1U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[2U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[3U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[4U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[5U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[6U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[7U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[8U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[9U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0[0x1cU] 
                                        << 0x10U));
    } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216aed03__0[0U];
        __Vtemp_hd53294c8__0[2U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216aed03__0[2U]);
        __Vtemp_hd53294c8__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[1U];
        __Vtemp_hd53294c8__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[2U];
        __Vtemp_hd53294c8__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[3U];
        __Vtemp_hd53294c8__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[4U];
        __Vtemp_hd53294c8__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[5U];
        __Vtemp_hd53294c8__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[6U];
        __Vtemp_hd53294c8__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[7U];
        __Vtemp_hd53294c8__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[8U];
        __Vtemp_hd53294c8__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[9U];
        __Vtemp_hd53294c8__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xaU];
        __Vtemp_hd53294c8__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xbU];
        __Vtemp_hd53294c8__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xcU];
        __Vtemp_hd53294c8__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xdU];
        __Vtemp_hd53294c8__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xeU];
        __Vtemp_hd53294c8__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xfU];
        __Vtemp_hd53294c8__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x10U];
        __Vtemp_hd53294c8__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x11U];
        __Vtemp_hd53294c8__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x12U];
        __Vtemp_hd53294c8__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x13U];
        __Vtemp_hd53294c8__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x14U];
        __Vtemp_hd53294c8__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x15U];
        __Vtemp_hd53294c8__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x16U];
        __Vtemp_hd53294c8__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x17U];
        __Vtemp_hd53294c8__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x18U];
        __Vtemp_hd53294c8__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x19U];
        __Vtemp_hd53294c8__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x1aU];
        __Vtemp_hd53294c8__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x1bU];
        __Vtemp_hd53294c8__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x1cU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae91f__0);
        __Vtemp_hd53294c8__0[2U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_hd53294c8__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[2U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[3U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[4U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[5U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[6U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[6U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[7U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[8U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[9U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xcU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xdU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x1cU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x1cU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0[0x1dU] 
                                        << 0x10U));
    } else if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))) 
                                             << 0x30U) 
                                            | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0));
        __Vtemp_hd53294c8__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0U];
        __Vtemp_hd53294c8__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[2U];
        __Vtemp_hd53294c8__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[3U];
        __Vtemp_hd53294c8__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[4U];
        __Vtemp_hd53294c8__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[5U];
        __Vtemp_hd53294c8__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[6U];
        __Vtemp_hd53294c8__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[7U];
        __Vtemp_hd53294c8__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[8U];
        __Vtemp_hd53294c8__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[9U];
        __Vtemp_hd53294c8__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xaU];
        __Vtemp_hd53294c8__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xbU];
        __Vtemp_hd53294c8__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xcU];
        __Vtemp_hd53294c8__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xdU];
        __Vtemp_hd53294c8__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xeU];
        __Vtemp_hd53294c8__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xfU];
        __Vtemp_hd53294c8__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x10U];
        __Vtemp_hd53294c8__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x11U];
        __Vtemp_hd53294c8__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x12U];
        __Vtemp_hd53294c8__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x13U];
        __Vtemp_hd53294c8__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x14U];
        __Vtemp_hd53294c8__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x15U];
        __Vtemp_hd53294c8__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x16U];
        __Vtemp_hd53294c8__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x17U];
        __Vtemp_hd53294c8__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x18U];
        __Vtemp_hd53294c8__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x19U];
        __Vtemp_hd53294c8__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1aU];
        __Vtemp_hd53294c8__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1bU];
        __Vtemp_hd53294c8__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1cU];
        __Vtemp_hd53294c8__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1dU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0;
        __Vtemp_hd53294c8__0[2U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[1U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[3U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[4U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[5U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[6U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[6U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[7U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[7U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[8U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[9U] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xcU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xdU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xdU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xeU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1cU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1cU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1dU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1dU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0[0x1eU] 
                                        << 0x10U));
    } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 0x10U) | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0));
        __Vtemp_hd53294c8__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[1U];
        __Vtemp_hd53294c8__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[3U];
        __Vtemp_hd53294c8__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[4U];
        __Vtemp_hd53294c8__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[5U];
        __Vtemp_hd53294c8__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[6U];
        __Vtemp_hd53294c8__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[7U];
        __Vtemp_hd53294c8__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[8U];
        __Vtemp_hd53294c8__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[9U];
        __Vtemp_hd53294c8__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xaU];
        __Vtemp_hd53294c8__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xbU];
        __Vtemp_hd53294c8__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xcU];
        __Vtemp_hd53294c8__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xdU];
        __Vtemp_hd53294c8__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xeU];
        __Vtemp_hd53294c8__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xfU];
        __Vtemp_hd53294c8__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x10U];
        __Vtemp_hd53294c8__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x11U];
        __Vtemp_hd53294c8__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x12U];
        __Vtemp_hd53294c8__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x13U];
        __Vtemp_hd53294c8__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x14U];
        __Vtemp_hd53294c8__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x15U];
        __Vtemp_hd53294c8__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x16U];
        __Vtemp_hd53294c8__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x17U];
        __Vtemp_hd53294c8__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x18U];
        __Vtemp_hd53294c8__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x19U];
        __Vtemp_hd53294c8__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1aU];
        __Vtemp_hd53294c8__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1bU];
        __Vtemp_hd53294c8__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1cU];
        __Vtemp_hd53294c8__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1dU];
        __Vtemp_hd53294c8__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1eU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hd53294c8__0[0U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_hd53294c8__0[2U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[2U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[4U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[5U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[6U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[6U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[7U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[7U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[8U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[8U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[9U] 
                                                  << 0x10U));
        __Vtemp_hd53294c8__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xcU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xdU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xdU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xeU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xeU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xfU] 
                                       << 0x10U));
        __Vtemp_hd53294c8__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1cU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1cU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1dU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1dU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1eU] 
                                        << 0x10U));
        __Vtemp_hd53294c8__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1eU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0[0x1fU] 
                                        << 0x10U));
    } else {
        __Vtemp_hd53294c8__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_hd53294c8__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_hd53294c8__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_hd53294c8__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_hd53294c8__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_hd53294c8__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_hd53294c8__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_hd53294c8__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_hd53294c8__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_hd53294c8__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_hd53294c8__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_hd53294c8__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_hd53294c8__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_hd53294c8__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_hd53294c8__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_hd53294c8__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_hd53294c8__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_hd53294c8__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_hd53294c8__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_hd53294c8__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_hd53294c8__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_hd53294c8__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_hd53294c8__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_hd53294c8__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_hd53294c8__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_hd53294c8__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_hd53294c8__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_hd53294c8__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_hd53294c8__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_hd53294c8__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[7U];
        __Vtemp_h21ba2e41__0[8U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[8U]);
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[7U];
        __Vtemp_h21ba2e41__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[7U]);
        __Vtemp_h21ba2e41__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_h21ba2e41__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[1U] 
                                                  << 0x10U));
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0U];
        __Vtemp_h21ba2e41__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[1U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[1U] 
                                                  << 0x10U));
        __Vtemp_h21ba2e41__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[2U] 
                                                  << 0x10U));
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[1U];
        __Vtemp_h21ba2e41__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[2U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[2U] 
                                                  << 0x10U));
        __Vtemp_h21ba2e41__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[3U] 
                                                  << 0x10U));
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h21ba2e41__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[2U];
        __Vtemp_h21ba2e41__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[3U];
    } else {
        __Vtemp_h21ba2e41__0[7U] = __Vtemp_hd53294c8__0[7U];
        __Vtemp_h21ba2e41__0[8U] = __Vtemp_hd53294c8__0[8U];
    }
    if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_hac4c107b__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[1U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[2U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[3U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[4U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[5U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[6U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[7U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[8U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[9U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xaU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xbU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xcU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0[0x16U] 
                                        << 0x10U));
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0U];
        __Vtemp_hac4c107b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[1U];
        __Vtemp_hac4c107b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[2U];
        __Vtemp_hac4c107b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[3U];
        __Vtemp_hac4c107b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[4U];
        __Vtemp_hac4c107b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[5U];
        __Vtemp_hac4c107b__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[6U];
        __Vtemp_hac4c107b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[7U];
        __Vtemp_hac4c107b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[8U];
        __Vtemp_hac4c107b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[9U];
        __Vtemp_hac4c107b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xaU];
        __Vtemp_hac4c107b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xbU];
        __Vtemp_hac4c107b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xcU];
        __Vtemp_hac4c107b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xdU];
        __Vtemp_hac4c107b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xeU];
        __Vtemp_hac4c107b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xfU];
        __Vtemp_hac4c107b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x10U];
        __Vtemp_hac4c107b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x11U];
        __Vtemp_hac4c107b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x12U];
        __Vtemp_hac4c107b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x13U];
        __Vtemp_hac4c107b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x14U];
        __Vtemp_hac4c107b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x15U];
        __Vtemp_hac4c107b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x16U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[1U] 
                                                  << 0x10U));
        __Vtemp_hac4c107b__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[2U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[3U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[4U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[5U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[6U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[7U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[8U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[9U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xaU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xbU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xcU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0[0x17U] 
                                        << 0x10U));
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[1U];
        __Vtemp_hac4c107b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[2U];
        __Vtemp_hac4c107b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[3U];
        __Vtemp_hac4c107b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[4U];
        __Vtemp_hac4c107b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[5U];
        __Vtemp_hac4c107b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[6U];
        __Vtemp_hac4c107b__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[7U];
        __Vtemp_hac4c107b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[8U];
        __Vtemp_hac4c107b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[9U];
        __Vtemp_hac4c107b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xaU];
        __Vtemp_hac4c107b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xbU];
        __Vtemp_hac4c107b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xcU];
        __Vtemp_hac4c107b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xdU];
        __Vtemp_hac4c107b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xeU];
        __Vtemp_hac4c107b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xfU];
        __Vtemp_hac4c107b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x10U];
        __Vtemp_hac4c107b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x11U];
        __Vtemp_hac4c107b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x12U];
        __Vtemp_hac4c107b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x13U];
        __Vtemp_hac4c107b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x14U];
        __Vtemp_hac4c107b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x15U];
        __Vtemp_hac4c107b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x16U];
        __Vtemp_hac4c107b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x17U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[2U] 
                                                  << 0x10U));
        __Vtemp_hac4c107b__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[3U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[4U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[5U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[6U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[7U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[8U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[9U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xaU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xbU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xcU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0[0x18U] 
                                        << 0x10U));
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[2U];
        __Vtemp_hac4c107b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[3U];
        __Vtemp_hac4c107b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[4U];
        __Vtemp_hac4c107b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[5U];
        __Vtemp_hac4c107b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[6U];
        __Vtemp_hac4c107b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[7U];
        __Vtemp_hac4c107b__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[8U];
        __Vtemp_hac4c107b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[9U];
        __Vtemp_hac4c107b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xaU];
        __Vtemp_hac4c107b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xbU];
        __Vtemp_hac4c107b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xcU];
        __Vtemp_hac4c107b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xdU];
        __Vtemp_hac4c107b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xeU];
        __Vtemp_hac4c107b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xfU];
        __Vtemp_hac4c107b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x10U];
        __Vtemp_hac4c107b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x11U];
        __Vtemp_hac4c107b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x12U];
        __Vtemp_hac4c107b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x13U];
        __Vtemp_hac4c107b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x14U];
        __Vtemp_hac4c107b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x15U];
        __Vtemp_hac4c107b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x16U];
        __Vtemp_hac4c107b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x17U];
        __Vtemp_hac4c107b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x18U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[3U] 
                                                  << 0x10U));
        __Vtemp_hac4c107b__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[4U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[5U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[6U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[7U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[8U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[9U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xaU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xbU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xcU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0x19U] 
                                        << 0x10U));
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[3U];
        __Vtemp_hac4c107b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[4U];
        __Vtemp_hac4c107b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[5U];
        __Vtemp_hac4c107b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[6U];
        __Vtemp_hac4c107b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[7U];
        __Vtemp_hac4c107b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[8U];
        __Vtemp_hac4c107b__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[9U];
        __Vtemp_hac4c107b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xaU];
        __Vtemp_hac4c107b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xbU];
        __Vtemp_hac4c107b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xcU];
        __Vtemp_hac4c107b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xdU];
        __Vtemp_hac4c107b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xeU];
        __Vtemp_hac4c107b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xfU];
        __Vtemp_hac4c107b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x10U];
        __Vtemp_hac4c107b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x11U];
        __Vtemp_hac4c107b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x12U];
        __Vtemp_hac4c107b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x13U];
        __Vtemp_hac4c107b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x14U];
        __Vtemp_hac4c107b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x15U];
        __Vtemp_hac4c107b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x16U];
        __Vtemp_hac4c107b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x17U];
        __Vtemp_hac4c107b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x18U];
        __Vtemp_hac4c107b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x19U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[4U] 
                                                  << 0x10U));
        __Vtemp_hac4c107b__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[5U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[6U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[7U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[8U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[9U] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hac4c107b__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xbU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xcU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hac4c107b__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0x1aU] 
                                        << 0x10U));
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hac4c107b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[4U];
        __Vtemp_hac4c107b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[5U];
        __Vtemp_hac4c107b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[6U];
        __Vtemp_hac4c107b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[7U];
        __Vtemp_hac4c107b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[8U];
        __Vtemp_hac4c107b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[9U];
        __Vtemp_hac4c107b__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xaU];
        __Vtemp_hac4c107b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xbU];
        __Vtemp_hac4c107b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xcU];
        __Vtemp_hac4c107b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xdU];
        __Vtemp_hac4c107b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xeU];
        __Vtemp_hac4c107b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xfU];
        __Vtemp_hac4c107b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x10U];
        __Vtemp_hac4c107b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x11U];
        __Vtemp_hac4c107b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x12U];
        __Vtemp_hac4c107b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x13U];
        __Vtemp_hac4c107b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x14U];
        __Vtemp_hac4c107b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x15U];
        __Vtemp_hac4c107b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x16U];
        __Vtemp_hac4c107b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x17U];
        __Vtemp_hac4c107b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x18U];
        __Vtemp_hac4c107b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x19U];
        __Vtemp_hac4c107b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x1aU];
    } else {
        __Vtemp_hac4c107b__0[9U] = __Vtemp_hd53294c8__0[9U];
        __Vtemp_hac4c107b__0[0xaU] = __Vtemp_hd53294c8__0[0xaU];
        __Vtemp_hac4c107b__0[0xbU] = __Vtemp_hd53294c8__0[0xbU];
        __Vtemp_hac4c107b__0[0xcU] = __Vtemp_hd53294c8__0[0xcU];
        __Vtemp_hac4c107b__0[0xdU] = __Vtemp_hd53294c8__0[0xdU];
        __Vtemp_hac4c107b__0[0xeU] = __Vtemp_hd53294c8__0[0xeU];
        __Vtemp_hac4c107b__0[0xfU] = __Vtemp_hd53294c8__0[0xfU];
        __Vtemp_hac4c107b__0[0x10U] = __Vtemp_hd53294c8__0[0x10U];
        __Vtemp_hac4c107b__0[0x11U] = __Vtemp_hd53294c8__0[0x11U];
        __Vtemp_hac4c107b__0[0x12U] = __Vtemp_hd53294c8__0[0x12U];
        __Vtemp_hac4c107b__0[0x13U] = __Vtemp_hd53294c8__0[0x13U];
        __Vtemp_hac4c107b__0[0x14U] = __Vtemp_hd53294c8__0[0x14U];
        __Vtemp_hac4c107b__0[0x15U] = __Vtemp_hd53294c8__0[0x15U];
        __Vtemp_hac4c107b__0[0x16U] = __Vtemp_hd53294c8__0[0x16U];
        __Vtemp_hac4c107b__0[0x17U] = __Vtemp_hd53294c8__0[0x17U];
        __Vtemp_hac4c107b__0[0x18U] = __Vtemp_hd53294c8__0[0x18U];
        __Vtemp_hac4c107b__0[0x19U] = __Vtemp_hd53294c8__0[0x19U];
        __Vtemp_hac4c107b__0[0x1aU] = __Vtemp_hd53294c8__0[0x1aU];
        __Vtemp_hac4c107b__0[0x1bU] = __Vtemp_hd53294c8__0[0x1bU];
        __Vtemp_hac4c107b__0[0x1cU] = __Vtemp_hd53294c8__0[0x1cU];
        __Vtemp_hac4c107b__0[0x1dU] = __Vtemp_hd53294c8__0[0x1dU];
        __Vtemp_hac4c107b__0[0x1eU] = __Vtemp_hd53294c8__0[0x1eU];
        __Vtemp_hac4c107b__0[0x1fU] = __Vtemp_hd53294c8__0[0x1fU];
    }
    __Vtemp_h5a51b209__0[6U] = ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[6U]
                                 : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[6U]
                                     : ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[6U]
                                         : ((0x20U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[6U]
                                             : ((0x1eU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[6U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[6U]
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                    << 0x10U) 
                                                   | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0[6U])
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0[0U] 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0U]
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0U] 
                                                       >> 0x10U) 
                                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[1U] 
                                                         << 0x10U))
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[1U]
                                                       : 
                                                      __Vtemp_hd53294c8__0[6U])))))))))));
    __Vtemp_hb294189d__0[5U] = ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[5U]
                                 : ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[5U]
                                     : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[5U]
                                         : ((0x22U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[5U]
                                             : ((0x20U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[5U]
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[5U]
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[5U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0[5U]
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[5U]
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                       << 0x10U) 
                                                      | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae56b__0[5U])
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0[0U] 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0U]
                                                        : 
                                                       __Vtemp_hd53294c8__0[5U]))))))))))));
    __Vtemp_h1a28d418__0[4U] = ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[4U]
                                 : ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[4U]
                                     : ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[4U]
                                         : ((0x26U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[4U]
                                             : ((0x24U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[4U]
                                                 : 
                                                ((0x22U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[4U]
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[4U]
                                                   : 
                                                  ((0x1eU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[4U]
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[4U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0[4U]
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[4U]
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae56b__0[4U]
                                                        : 
                                                       ((0x14U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[4U]
                                                         : 
                                                        ((0x12U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                           << 0x10U) 
                                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216afd53__0[4U])
                                                          : 
                                                         __Vtemp_hd53294c8__0[4U]))))))))))))));
    if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[3U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[3U];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[3U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[3U];
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[3U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[3U];
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[3U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[3U];
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[3U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[3U];
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0[3U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[3U];
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae56b__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae56b__0[3U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[3U];
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216afd53__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216afd53__0[3U];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h88b1f47d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[1U];
        __Vtemp_h88b1f47d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[3U];
    } else {
        __Vtemp_h88b1f47d__0[1U] = __Vtemp_h65fd7140__0[1U];
        __Vtemp_h88b1f47d__0[3U] = __Vtemp_h65fd7140__0[3U];
    }
    if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[2U];
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[2U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[2U];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[2U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[2U];
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[2U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[2U];
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0[2U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[2U];
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0[2U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[2U];
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0[2U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[2U];
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae56b__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae56b__0[2U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[2U];
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h67c85c69__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216afd53__0[0U];
        __Vtemp_h67c85c69__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216afd53__0[2U];
    } else {
        __Vtemp_h67c85c69__0[0U] = __Vtemp_hd53294c8__0[0U];
        __Vtemp_h67c85c69__0[2U] = __Vtemp_hd53294c8__0[2U];
    }
    if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[0xcU];
        __Vtemp_hee4efbc9__0[0xdU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                       << 0x10U) | 
                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[0xdU]);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0xcU];
        __Vtemp_hee4efbc9__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                       << 0x10U) | 
                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[0xcU]);
        __Vtemp_hee4efbc9__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_hee4efbc9__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[1U] 
                                       << 0x10U));
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0U];
        __Vtemp_hee4efbc9__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[1U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[1U] 
                                       << 0x10U));
        __Vtemp_hee4efbc9__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[2U] 
                                       << 0x10U));
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[1U];
        __Vtemp_hee4efbc9__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[2U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[2U] 
                                       << 0x10U));
        __Vtemp_hee4efbc9__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[3U] 
                                       << 0x10U));
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hee4efbc9__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[2U];
        __Vtemp_hee4efbc9__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[3U];
    } else {
        __Vtemp_hee4efbc9__0[0xcU] = __Vtemp_hac4c107b__0[0xcU];
        __Vtemp_hee4efbc9__0[0xdU] = __Vtemp_hac4c107b__0[0xdU];
    }
    if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_h3f51d991__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[1U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[2U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[3U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[4U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[5U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[6U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[7U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[8U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[9U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0[0x11U] 
                                        << 0x10U));
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0U];
        __Vtemp_h3f51d991__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[1U];
        __Vtemp_h3f51d991__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[2U];
        __Vtemp_h3f51d991__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[3U];
        __Vtemp_h3f51d991__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[4U];
        __Vtemp_h3f51d991__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[5U];
        __Vtemp_h3f51d991__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[6U];
        __Vtemp_h3f51d991__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[7U];
        __Vtemp_h3f51d991__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[8U];
        __Vtemp_h3f51d991__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[9U];
        __Vtemp_h3f51d991__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xaU];
        __Vtemp_h3f51d991__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xbU];
        __Vtemp_h3f51d991__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xcU];
        __Vtemp_h3f51d991__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xdU];
        __Vtemp_h3f51d991__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xeU];
        __Vtemp_h3f51d991__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xfU];
        __Vtemp_h3f51d991__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0x10U];
        __Vtemp_h3f51d991__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0x11U];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[1U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[2U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[3U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[4U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[5U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[6U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[7U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[8U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[9U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0[0x12U] 
                                        << 0x10U));
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[1U];
        __Vtemp_h3f51d991__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[2U];
        __Vtemp_h3f51d991__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[3U];
        __Vtemp_h3f51d991__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[4U];
        __Vtemp_h3f51d991__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[5U];
        __Vtemp_h3f51d991__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[6U];
        __Vtemp_h3f51d991__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[7U];
        __Vtemp_h3f51d991__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[8U];
        __Vtemp_h3f51d991__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[9U];
        __Vtemp_h3f51d991__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xaU];
        __Vtemp_h3f51d991__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xbU];
        __Vtemp_h3f51d991__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xcU];
        __Vtemp_h3f51d991__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xdU];
        __Vtemp_h3f51d991__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xeU];
        __Vtemp_h3f51d991__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xfU];
        __Vtemp_h3f51d991__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0x10U];
        __Vtemp_h3f51d991__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0x11U];
        __Vtemp_h3f51d991__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0x12U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[2U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[3U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[4U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[5U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[6U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[7U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[8U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[9U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0x12U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0[0x13U] 
                                        << 0x10U));
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[2U];
        __Vtemp_h3f51d991__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[3U];
        __Vtemp_h3f51d991__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[4U];
        __Vtemp_h3f51d991__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[5U];
        __Vtemp_h3f51d991__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[6U];
        __Vtemp_h3f51d991__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[7U];
        __Vtemp_h3f51d991__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[8U];
        __Vtemp_h3f51d991__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[9U];
        __Vtemp_h3f51d991__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xaU];
        __Vtemp_h3f51d991__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xbU];
        __Vtemp_h3f51d991__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xcU];
        __Vtemp_h3f51d991__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xdU];
        __Vtemp_h3f51d991__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xeU];
        __Vtemp_h3f51d991__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xfU];
        __Vtemp_h3f51d991__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x10U];
        __Vtemp_h3f51d991__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x11U];
        __Vtemp_h3f51d991__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x12U];
        __Vtemp_h3f51d991__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x13U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[3U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[4U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[5U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[6U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[7U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[8U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[9U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x12U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x13U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0x14U] 
                                        << 0x10U));
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[3U];
        __Vtemp_h3f51d991__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[4U];
        __Vtemp_h3f51d991__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[5U];
        __Vtemp_h3f51d991__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[6U];
        __Vtemp_h3f51d991__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[7U];
        __Vtemp_h3f51d991__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[8U];
        __Vtemp_h3f51d991__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[9U];
        __Vtemp_h3f51d991__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xaU];
        __Vtemp_h3f51d991__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xbU];
        __Vtemp_h3f51d991__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xcU];
        __Vtemp_h3f51d991__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xdU];
        __Vtemp_h3f51d991__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xeU];
        __Vtemp_h3f51d991__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xfU];
        __Vtemp_h3f51d991__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x10U];
        __Vtemp_h3f51d991__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x11U];
        __Vtemp_h3f51d991__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x12U];
        __Vtemp_h3f51d991__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x13U];
        __Vtemp_h3f51d991__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x14U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[4U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[5U] 
                                       << 0x10U));
        __Vtemp_h3f51d991__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[6U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[7U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[8U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[9U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x12U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x13U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x14U] 
                                        << 0x10U));
        __Vtemp_h3f51d991__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0x15U] 
                                        << 0x10U));
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f51d991__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[4U];
        __Vtemp_h3f51d991__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[5U];
        __Vtemp_h3f51d991__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[6U];
        __Vtemp_h3f51d991__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[7U];
        __Vtemp_h3f51d991__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[8U];
        __Vtemp_h3f51d991__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[9U];
        __Vtemp_h3f51d991__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xaU];
        __Vtemp_h3f51d991__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xbU];
        __Vtemp_h3f51d991__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xcU];
        __Vtemp_h3f51d991__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xdU];
        __Vtemp_h3f51d991__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xeU];
        __Vtemp_h3f51d991__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xfU];
        __Vtemp_h3f51d991__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x10U];
        __Vtemp_h3f51d991__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x11U];
        __Vtemp_h3f51d991__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x12U];
        __Vtemp_h3f51d991__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x13U];
        __Vtemp_h3f51d991__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x14U];
        __Vtemp_h3f51d991__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x15U];
    } else {
        __Vtemp_h3f51d991__0[0xeU] = __Vtemp_hac4c107b__0[0xeU];
        __Vtemp_h3f51d991__0[0xfU] = __Vtemp_hac4c107b__0[0xfU];
        __Vtemp_h3f51d991__0[0x10U] = __Vtemp_hac4c107b__0[0x10U];
        __Vtemp_h3f51d991__0[0x11U] = __Vtemp_hac4c107b__0[0x11U];
        __Vtemp_h3f51d991__0[0x12U] = __Vtemp_hac4c107b__0[0x12U];
        __Vtemp_h3f51d991__0[0x13U] = __Vtemp_hac4c107b__0[0x13U];
        __Vtemp_h3f51d991__0[0x14U] = __Vtemp_hac4c107b__0[0x14U];
        __Vtemp_h3f51d991__0[0x15U] = __Vtemp_hac4c107b__0[0x15U];
        __Vtemp_h3f51d991__0[0x16U] = __Vtemp_hac4c107b__0[0x16U];
        __Vtemp_h3f51d991__0[0x17U] = __Vtemp_hac4c107b__0[0x17U];
        __Vtemp_h3f51d991__0[0x18U] = __Vtemp_hac4c107b__0[0x18U];
        __Vtemp_h3f51d991__0[0x19U] = __Vtemp_hac4c107b__0[0x19U];
        __Vtemp_h3f51d991__0[0x1aU] = __Vtemp_hac4c107b__0[0x1aU];
        __Vtemp_h3f51d991__0[0x1bU] = __Vtemp_hac4c107b__0[0x1bU];
        __Vtemp_h3f51d991__0[0x1cU] = __Vtemp_hac4c107b__0[0x1cU];
        __Vtemp_h3f51d991__0[0x1dU] = __Vtemp_hac4c107b__0[0x1dU];
        __Vtemp_h3f51d991__0[0x1eU] = __Vtemp_hac4c107b__0[0x1eU];
        __Vtemp_h3f51d991__0[0x1fU] = __Vtemp_hac4c107b__0[0x1fU];
    }
    __Vtemp_h8e193aee__0[0xbU] = ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[0xbU]
                                   : ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xbU]
                                       : ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[0xbU]
                                           : ((0x34U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0xbU]
                                               : ((0x32U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[0xbU]
                                                   : 
                                                  ((0x30U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0xbU]
                                                    : 
                                                   ((0x2eU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                      << 0x10U) 
                                                     | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[0xbU])
                                                     : 
                                                    ((0x2cU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0[0U] 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                                                      : 
                                                     ((0x2aU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0U]
                                                       : 
                                                      ((0x28U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0U] 
                                                         >> 0x10U) 
                                                        | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[1U] 
                                                           << 0x10U))
                                                        : 
                                                       ((0x26U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[1U]
                                                         : 
                                                        __Vtemp_hac4c107b__0[0xbU])))))))))));
    __Vtemp_h2310b940__0[0xaU] = ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xaU]
                                   : ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[0xaU]
                                       : ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xaU]
                                           : ((0x36U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[0xaU]
                                               : ((0x34U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0xaU]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[0xaU]
                                                    : 
                                                   ((0x30U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0xaU]
                                                     : 
                                                    ((0x2eU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[0xaU]
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[0xaU]
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                         << 0x10U) 
                                                        | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[0xaU])
                                                        : 
                                                       ((0x28U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0[0U] 
                                                          << 0x10U) 
                                                         | (0xffffU 
                                                            & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                                                         : 
                                                        ((0x26U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0U]
                                                          : 
                                                         __Vtemp_hac4c107b__0[0xaU]))))))))))));
    __Vtemp_ha1666930__0[9U] = ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[9U]
                                 : ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[9U]
                                     : ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[9U]
                                         : ((0x3aU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[9U]
                                             : ((0x38U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[9U]
                                                 : 
                                                ((0x36U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[9U]
                                                  : 
                                                 ((0x34U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[9U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[9U]
                                                    : 
                                                   ((0x30U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[9U]
                                                     : 
                                                    ((0x2eU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[9U]
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[9U]
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[9U]
                                                        : 
                                                       ((0x28U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[9U]
                                                         : 
                                                        ((0x26U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                           << 0x10U) 
                                                          | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[9U])
                                                          : 
                                                         __Vtemp_hac4c107b__0[9U]))))))))))))));
    if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[8U];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[8U];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[8U];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[8U];
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[8U];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[8U];
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[8U];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[8U];
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[8U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[8U];
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[8U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[8U];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[8U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[8U];
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0[8U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h022b47e7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[7U];
        __Vtemp_h022b47e7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[8U];
    } else {
        __Vtemp_h022b47e7__0[7U] = __Vtemp_h21ba2e41__0[7U];
        __Vtemp_h022b47e7__0[8U] = __Vtemp_h21ba2e41__0[8U];
    }
    __Vtemp_h39c0d1b4__0[6U] = ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[6U]
                                 : ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[6U]
                                     : ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[6U]
                                         : ((0x40U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[6U]
                                             : ((0x3eU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[6U]
                                                 : 
                                                ((0x3cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[6U]
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[6U]
                                                   : 
                                                  ((0x38U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[6U]
                                                    : 
                                                   ((0x36U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[6U]
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[6U]
                                                      : 
                                                     ((0x32U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[6U]
                                                       : 
                                                      ((0x30U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[6U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[6U]
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[6U]
                                                          : 
                                                         ((0x2aU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[6U]
                                                           : 
                                                          ((0x28U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[6U]
                                                            : 
                                                           __Vtemp_h5a51b209__0[6U]))))))))))))))));
    __Vtemp_h6fa0b313__0[5U] = ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[5U]
                                 : ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[5U]
                                     : ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[5U]
                                         : ((0x42U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[5U]
                                             : ((0x40U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[5U]
                                                 : 
                                                ((0x3eU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[5U]
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[5U]
                                                   : 
                                                  ((0x3aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[5U]
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[5U]
                                                     : 
                                                    ((0x36U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[5U]
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[5U]
                                                       : 
                                                      ((0x32U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[5U]
                                                        : 
                                                       ((0x30U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[5U]
                                                         : 
                                                        ((0x2eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[5U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[5U]
                                                           : 
                                                          ((0x2aU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0[5U]
                                                            : 
                                                           __Vtemp_hb294189d__0[5U]))))))))))))))));
    if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0x11U];
        __Vtemp_h7d0678a4__0[0x12U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0x12U]);
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0x11U];
        __Vtemp_h7d0678a4__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0x11U]);
        __Vtemp_h7d0678a4__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0U];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_h7d0678a4__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[1U] 
                                        << 0x10U));
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0U];
        __Vtemp_h7d0678a4__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[1U];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[1U] 
                                        << 0x10U));
        __Vtemp_h7d0678a4__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[2U] 
                                        << 0x10U));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[1U];
        __Vtemp_h7d0678a4__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[2U];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[2U] 
                                        << 0x10U));
        __Vtemp_h7d0678a4__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[3U] 
                                        << 0x10U));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h7d0678a4__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[2U];
        __Vtemp_h7d0678a4__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[3U];
    } else {
        __Vtemp_h7d0678a4__0[0x11U] = __Vtemp_h3f51d991__0[0x11U];
        __Vtemp_h7d0678a4__0[0x12U] = __Vtemp_h3f51d991__0[0x12U];
    }
    if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_h2b851c69__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[1U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[2U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[3U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[4U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[5U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[6U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[7U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[8U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[9U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0[0xcU] 
                                        << 0x10U));
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0U];
        __Vtemp_h2b851c69__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[1U];
        __Vtemp_h2b851c69__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[2U];
        __Vtemp_h2b851c69__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[3U];
        __Vtemp_h2b851c69__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[4U];
        __Vtemp_h2b851c69__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[5U];
        __Vtemp_h2b851c69__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[6U];
        __Vtemp_h2b851c69__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[7U];
        __Vtemp_h2b851c69__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[8U];
        __Vtemp_h2b851c69__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[9U];
        __Vtemp_h2b851c69__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0xaU];
        __Vtemp_h2b851c69__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0xbU];
        __Vtemp_h2b851c69__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0xcU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[1U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[2U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[3U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[4U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[5U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[6U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[7U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[8U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[9U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0[0xdU] 
                                        << 0x10U));
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[1U];
        __Vtemp_h2b851c69__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[2U];
        __Vtemp_h2b851c69__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[3U];
        __Vtemp_h2b851c69__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[4U];
        __Vtemp_h2b851c69__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[5U];
        __Vtemp_h2b851c69__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[6U];
        __Vtemp_h2b851c69__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[7U];
        __Vtemp_h2b851c69__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[8U];
        __Vtemp_h2b851c69__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[9U];
        __Vtemp_h2b851c69__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xaU];
        __Vtemp_h2b851c69__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xbU];
        __Vtemp_h2b851c69__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xcU];
        __Vtemp_h2b851c69__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xdU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[2U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[3U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[4U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[5U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[6U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[7U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[8U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[9U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0[0xeU] 
                                        << 0x10U));
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[2U];
        __Vtemp_h2b851c69__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[3U];
        __Vtemp_h2b851c69__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[4U];
        __Vtemp_h2b851c69__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[5U];
        __Vtemp_h2b851c69__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[6U];
        __Vtemp_h2b851c69__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[7U];
        __Vtemp_h2b851c69__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[8U];
        __Vtemp_h2b851c69__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[9U];
        __Vtemp_h2b851c69__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xaU];
        __Vtemp_h2b851c69__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xbU];
        __Vtemp_h2b851c69__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xcU];
        __Vtemp_h2b851c69__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xdU];
        __Vtemp_h2b851c69__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xeU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[3U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[4U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[5U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[6U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[7U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[8U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[9U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0xfU] 
                                        << 0x10U));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[3U];
        __Vtemp_h2b851c69__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[4U];
        __Vtemp_h2b851c69__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[5U];
        __Vtemp_h2b851c69__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[6U];
        __Vtemp_h2b851c69__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[7U];
        __Vtemp_h2b851c69__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[8U];
        __Vtemp_h2b851c69__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[9U];
        __Vtemp_h2b851c69__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xaU];
        __Vtemp_h2b851c69__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xbU];
        __Vtemp_h2b851c69__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xcU];
        __Vtemp_h2b851c69__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xdU];
        __Vtemp_h2b851c69__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xeU];
        __Vtemp_h2b851c69__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xfU];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[4U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[5U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[6U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[7U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[8U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[9U] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h2b851c69__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0x10U] 
                                        << 0x10U));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2b851c69__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[4U];
        __Vtemp_h2b851c69__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[4U];
        __Vtemp_h2b851c69__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[5U];
        __Vtemp_h2b851c69__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[6U];
        __Vtemp_h2b851c69__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[7U];
        __Vtemp_h2b851c69__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[8U];
        __Vtemp_h2b851c69__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[9U];
        __Vtemp_h2b851c69__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xaU];
        __Vtemp_h2b851c69__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xbU];
        __Vtemp_h2b851c69__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xcU];
        __Vtemp_h2b851c69__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xdU];
        __Vtemp_h2b851c69__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xeU];
        __Vtemp_h2b851c69__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xfU];
        __Vtemp_h2b851c69__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0x10U];
    } else {
        __Vtemp_h2b851c69__0[4U] = ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[4U]
                                     : ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[4U]
                                         : ((0x34U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[4U]
                                             : ((0x32U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[4U]
                                                 : 
                                                ((0x30U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[4U]
                                                  : 
                                                 ((0x2eU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0[4U]
                                                   : 
                                                  __Vtemp_h1a28d418__0[4U]))))));
        __Vtemp_h2b851c69__0[0x13U] = __Vtemp_h3f51d991__0[0x13U];
        __Vtemp_h2b851c69__0[0x14U] = __Vtemp_h3f51d991__0[0x14U];
        __Vtemp_h2b851c69__0[0x15U] = __Vtemp_h3f51d991__0[0x15U];
        __Vtemp_h2b851c69__0[0x16U] = __Vtemp_h3f51d991__0[0x16U];
        __Vtemp_h2b851c69__0[0x17U] = __Vtemp_h3f51d991__0[0x17U];
        __Vtemp_h2b851c69__0[0x18U] = __Vtemp_h3f51d991__0[0x18U];
        __Vtemp_h2b851c69__0[0x19U] = __Vtemp_h3f51d991__0[0x19U];
        __Vtemp_h2b851c69__0[0x1aU] = __Vtemp_h3f51d991__0[0x1aU];
        __Vtemp_h2b851c69__0[0x1bU] = __Vtemp_h3f51d991__0[0x1bU];
        __Vtemp_h2b851c69__0[0x1cU] = __Vtemp_h3f51d991__0[0x1cU];
        __Vtemp_h2b851c69__0[0x1dU] = __Vtemp_h3f51d991__0[0x1dU];
        __Vtemp_h2b851c69__0[0x1eU] = __Vtemp_h3f51d991__0[0x1eU];
        __Vtemp_h2b851c69__0[0x1fU] = __Vtemp_h3f51d991__0[0x1fU];
    }
    if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0x10U];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0x10U];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0x10U];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0x10U];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0x10U];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0x10U];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0x10U]);
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0U];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[1U] 
                                        << 0x10U));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[1U];
        __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[3U];
        __Vtemp_hc8c70d9d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[1U];
    } else {
        if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[1U];
            __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[3U];
        } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[1U];
            __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[3U];
        } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[1U];
            __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[3U];
        } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[1U];
            __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[3U];
        } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hc8c70d9d__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[1U];
            __Vtemp_hc8c70d9d__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[3U];
        } else {
            __Vtemp_hc8c70d9d__0[1U] = __Vtemp_h88b1f47d__0[1U];
            __Vtemp_hc8c70d9d__0[3U] = __Vtemp_h88b1f47d__0[3U];
        }
        __Vtemp_hc8c70d9d__0[0x10U] = __Vtemp_h3f51d991__0[0x10U];
    }
    if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xfU];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0xfU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xfU];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0xfU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xfU];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0xfU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xfU];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0xfU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xfU];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[2U];
        __Vtemp_h68cea491__0[0xfU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                       << 0x10U) | 
                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[0xfU]);
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[2U];
        __Vtemp_h68cea491__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[0U];
        __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[2U];
        __Vtemp_h68cea491__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0U];
    } else {
        if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0U];
            __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[2U];
        } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[0U];
            __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0[2U];
        } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0U];
            __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[2U];
        } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h68cea491__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[0U];
            __Vtemp_h68cea491__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0[2U];
        } else {
            __Vtemp_h68cea491__0[0U] = __Vtemp_h67c85c69__0[0U];
            __Vtemp_h68cea491__0[2U] = __Vtemp_h67c85c69__0[2U];
        }
        __Vtemp_h68cea491__0[0xfU] = __Vtemp_h3f51d991__0[0xfU];
    }
    __Vtemp_h7139eba8__0[0xeU] = ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xeU]
                                   : ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0xeU]
                                       : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xeU]
                                           : ((0x4eU 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0xeU]
                                               : ((0x4cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xeU]
                                                   : 
                                                  ((0x4aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0xeU]
                                                    : 
                                                   ((0x48U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xeU]
                                                     : 
                                                    ((0x46U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0xeU]
                                                      : 
                                                     ((0x44U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xeU]
                                                       : 
                                                      ((0x42U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0xeU]
                                                        : 
                                                       ((0x40U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xeU]
                                                         : 
                                                        ((0x3eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[0xeU]
                                                          : 
                                                         ((0x3cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xeU]
                                                           : 
                                                          ((0x3aU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                             << 0x10U) 
                                                            | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[0xeU])
                                                            : 
                                                           __Vtemp_h3f51d991__0[0xeU]))))))))))))));
    if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0xdU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xdU];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0xdU];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xdU];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0xdU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xdU];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0xdU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xdU];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0xdU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xdU];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0xdU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xdU];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[0xdU];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xdU];
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0[0xdU];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h5834ca16__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xdU];
    } else {
        __Vtemp_h5834ca16__0[0xcU] = __Vtemp_hee4efbc9__0[0xcU];
        __Vtemp_h5834ca16__0[0xdU] = __Vtemp_hee4efbc9__0[0xdU];
    }
    __Vtemp_ha57efb6b__0[0xbU] = ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0xbU]
                                   : ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xbU]
                                       : ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0xbU]
                                           : ((0x54U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xbU]
                                               : ((0x52U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0xbU]
                                                   : 
                                                  ((0x50U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xbU]
                                                    : 
                                                   ((0x4eU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0xbU]
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xbU]
                                                      : 
                                                     ((0x4aU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0xbU]
                                                       : 
                                                      ((0x48U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xbU]
                                                        : 
                                                       ((0x46U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0xbU]
                                                         : 
                                                        ((0x44U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xbU]
                                                          : 
                                                         ((0x42U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0xbU]
                                                           : 
                                                          ((0x40U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xbU]
                                                            : 
                                                           ((0x3eU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                             ? 
                                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[0xbU]
                                                             : 
                                                            ((0x3cU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                              ? 
                                                             vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xbU]
                                                              : 
                                                             __Vtemp_h8e193aee__0[0xbU]))))))))))))))));
    __Vtemp_ha1574b03__0[0xaU] = ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xaU]
                                   : ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0xaU]
                                       : ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xaU]
                                           : ((0x56U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0xaU]
                                               : ((0x54U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xaU]
                                                   : 
                                                  ((0x52U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0xaU]
                                                    : 
                                                   ((0x50U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xaU]
                                                     : 
                                                    ((0x4eU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0xaU]
                                                      : 
                                                     ((0x4cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xaU]
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[0xaU]
                                                        : 
                                                       ((0x48U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xaU]
                                                         : 
                                                        ((0x46U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[0xaU]
                                                          : 
                                                         ((0x44U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xaU]
                                                           : 
                                                          ((0x42U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[0xaU]
                                                            : 
                                                           ((0x40U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                             ? 
                                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xaU]
                                                             : 
                                                            ((0x3eU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                              ? 
                                                             vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0[0xaU]
                                                              : 
                                                             __Vtemp_h2310b940__0[0xaU]))))))))))))))));
    if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x16U];
        __Vtemp_h0ef308b1__0[0x17U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x17U]);
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x16U];
        __Vtemp_h0ef308b1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0x16U]);
        __Vtemp_h0ef308b1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[0U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_h0ef308b1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[1U] 
                                        << 0x10U));
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[0U];
        __Vtemp_h0ef308b1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[1U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[1U] 
                                        << 0x10U));
        __Vtemp_h0ef308b1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[2U] 
                                        << 0x10U));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[1U];
        __Vtemp_h0ef308b1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[2U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[2U] 
                                        << 0x10U));
        __Vtemp_h0ef308b1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[3U] 
                                        << 0x10U));
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0ef308b1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[2U];
        __Vtemp_h0ef308b1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[3U];
    } else {
        __Vtemp_h0ef308b1__0[0x16U] = __Vtemp_h2b851c69__0[0x16U];
        __Vtemp_h0ef308b1__0[0x17U] = __Vtemp_h2b851c69__0[0x17U];
    }
    if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        __Vtemp_hb2f933f7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[1U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[2U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[3U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[4U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[5U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[6U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0[7U] 
                                        << 0x10U));
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[0U];
        __Vtemp_hb2f933f7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[1U];
        __Vtemp_hb2f933f7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[2U];
        __Vtemp_hb2f933f7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[3U];
        __Vtemp_hb2f933f7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[4U];
        __Vtemp_hb2f933f7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[5U];
        __Vtemp_hb2f933f7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[6U];
        __Vtemp_hb2f933f7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[7U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[1U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[2U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[3U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[4U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[5U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[6U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[7U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0[8U] 
                                        << 0x10U));
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[1U];
        __Vtemp_hb2f933f7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[2U];
        __Vtemp_hb2f933f7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[3U];
        __Vtemp_hb2f933f7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[4U];
        __Vtemp_hb2f933f7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[5U];
        __Vtemp_hb2f933f7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[6U];
        __Vtemp_hb2f933f7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[7U];
        __Vtemp_hb2f933f7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[8U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[2U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[3U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[4U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[5U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[6U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[7U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[8U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0[9U] 
                                        << 0x10U));
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[2U];
        __Vtemp_hb2f933f7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[3U];
        __Vtemp_hb2f933f7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[4U];
        __Vtemp_hb2f933f7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[5U];
        __Vtemp_hb2f933f7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[6U];
        __Vtemp_hb2f933f7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[7U];
        __Vtemp_hb2f933f7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[8U];
        __Vtemp_hb2f933f7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[9U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[3U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[4U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[5U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[6U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[7U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[8U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[9U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[0xaU] 
                                        << 0x10U));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[3U];
        __Vtemp_hb2f933f7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[4U];
        __Vtemp_hb2f933f7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[5U];
        __Vtemp_hb2f933f7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[6U];
        __Vtemp_hb2f933f7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[7U];
        __Vtemp_hb2f933f7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[8U];
        __Vtemp_hb2f933f7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[9U];
        __Vtemp_hb2f933f7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[0xaU];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[4U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[5U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[6U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[7U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[8U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[9U] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[0xaU] 
                                        << 0x10U));
        __Vtemp_hb2f933f7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[0xbU] 
                                        << 0x10U));
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hb2f933f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[9U];
        __Vtemp_hb2f933f7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[4U];
        __Vtemp_hb2f933f7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[5U];
        __Vtemp_hb2f933f7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[6U];
        __Vtemp_hb2f933f7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[7U];
        __Vtemp_hb2f933f7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[8U];
        __Vtemp_hb2f933f7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[9U];
        __Vtemp_hb2f933f7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0xaU];
        __Vtemp_hb2f933f7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0xbU];
    } else {
        __Vtemp_hb2f933f7__0[9U] = ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[9U]
                                     : ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[9U]
                                         : ((0x48U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[9U]
                                             : ((0x46U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[9U]
                                                 : 
                                                ((0x44U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[9U]
                                                  : 
                                                 ((0x42U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0[9U]
                                                   : 
                                                  __Vtemp_ha1666930__0[9U]))))));
        __Vtemp_hb2f933f7__0[0x18U] = __Vtemp_h2b851c69__0[0x18U];
        __Vtemp_hb2f933f7__0[0x19U] = __Vtemp_h2b851c69__0[0x19U];
        __Vtemp_hb2f933f7__0[0x1aU] = __Vtemp_h2b851c69__0[0x1aU];
        __Vtemp_hb2f933f7__0[0x1bU] = __Vtemp_h2b851c69__0[0x1bU];
        __Vtemp_hb2f933f7__0[0x1cU] = __Vtemp_h2b851c69__0[0x1cU];
        __Vtemp_hb2f933f7__0[0x1dU] = __Vtemp_h2b851c69__0[0x1dU];
        __Vtemp_hb2f933f7__0[0x1eU] = __Vtemp_h2b851c69__0[0x1eU];
        __Vtemp_hb2f933f7__0[0x1fU] = __Vtemp_h2b851c69__0[0x1fU];
    }
    if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x15U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x15U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x15U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x15U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0x15U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x15U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[8U];
        __Vtemp_h1880e756__0[0x15U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0x15U]);
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[8U];
        __Vtemp_h1880e756__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[0U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[8U];
        __Vtemp_h1880e756__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[1U] 
                                        << 0x10U));
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[7U];
        __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[8U];
        __Vtemp_h1880e756__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[1U];
    } else {
        if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[7U];
            __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[8U];
        } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[7U];
            __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[8U];
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[7U];
            __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[8U];
        } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[7U];
            __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0[8U];
        } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h1880e756__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[7U];
            __Vtemp_h1880e756__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[8U];
        } else {
            __Vtemp_h1880e756__0[7U] = __Vtemp_h022b47e7__0[7U];
            __Vtemp_h1880e756__0[8U] = __Vtemp_h022b47e7__0[8U];
        }
        __Vtemp_h1880e756__0[0x15U] = __Vtemp_h2b851c69__0[0x15U];
    }
    __Vtemp_h859d833c__0[0x14U] = ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x14U]
                                    : ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                        ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x14U]
                                        : ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x14U]
                                            : ((0x5eU 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x14U]
                                                : (
                                                   (0x5cU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x14U]
                                                    : 
                                                   ((0x5aU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0x14U]
                                                     : 
                                                    ((0x58U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x14U]
                                                      : 
                                                     ((0x56U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0x14U]
                                                       : 
                                                      ((0x54U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x14U]
                                                        : 
                                                       ((0x52U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                          << 0x10U) 
                                                         | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0x14U])
                                                         : 
                                                        ((0x50U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0[0U] 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                                                          : 
                                                         ((0x4eU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0U]
                                                           : 
                                                          __Vtemp_h2b851c69__0[0x14U]))))))))))));
    __Vtemp_h478ca6c4__0[6U] = ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[6U]
                                 : ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[6U]
                                     : ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[6U]
                                         : ((0x60U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[6U]
                                             : ((0x5eU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[6U]
                                                 : 
                                                ((0x5cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[6U]
                                                  : 
                                                 ((0x5aU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[6U]
                                                   : 
                                                  ((0x58U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[6U]
                                                    : 
                                                   ((0x56U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[6U]
                                                     : 
                                                    ((0x54U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[6U]
                                                      : 
                                                     ((0x52U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[6U]
                                                       : 
                                                      ((0x50U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[6U]
                                                        : 
                                                       ((0x4eU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[6U]
                                                         : 
                                                        ((0x4cU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[6U]
                                                          : 
                                                         ((0x4aU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[6U]
                                                           : 
                                                          ((0x48U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[6U]
                                                            : 
                                                           __Vtemp_h39c0d1b4__0[6U]))))))))))))))));
    if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x13U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x13U];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x13U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x13U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x13U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x13U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x13U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0x13U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x13U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0x13U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x13U];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0x13U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x13U];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h92cac4db__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[5U];
        __Vtemp_h92cac4db__0[0x13U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0x13U]);
    } else {
        __Vtemp_h92cac4db__0[5U] = ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[5U]
                                     : ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0[5U]
                                         : __Vtemp_h6fa0b313__0[5U]));
        __Vtemp_h92cac4db__0[0x13U] = __Vtemp_h2b851c69__0[0x13U];
    }
    if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x12U];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x12U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x12U];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x12U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x12U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x12U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x12U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x12U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0x12U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x12U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0x12U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x12U];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0x12U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x12U];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[0x12U];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3e54c87e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0x12U];
    } else {
        __Vtemp_h3e54c87e__0[0x11U] = __Vtemp_h7d0678a4__0[0x11U];
        __Vtemp_h3e54c87e__0[0x12U] = __Vtemp_h7d0678a4__0[0x12U];
    }
    __Vtemp_h5b33b2b1__0[4U] = ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[4U]
                                 : ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[4U]
                                     : ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[4U]
                                         : ((0x66U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[4U]
                                             : ((0x64U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[4U]
                                                 : 
                                                ((0x62U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[4U]
                                                  : 
                                                 ((0x60U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[4U]
                                                   : 
                                                  ((0x5eU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[4U]
                                                    : 
                                                   ((0x5cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[4U]
                                                     : 
                                                    ((0x5aU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[4U]
                                                      : 
                                                     ((0x58U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[4U]
                                                       : 
                                                      ((0x56U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[4U]
                                                        : 
                                                       ((0x54U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[4U]
                                                         : 
                                                        ((0x52U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[4U]
                                                          : 
                                                         ((0x50U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[4U]
                                                           : 
                                                          ((0x4eU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0[4U]
                                                            : 
                                                           __Vtemp_h2b851c69__0[4U]))))))))))))))));
    if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x10U];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x10U];
    } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x10U];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x10U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x10U];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x10U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x10U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x10U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0x10U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x10U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0x10U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x10U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0x10U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x10U];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0x10U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he45a0956__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[1U];
        __Vtemp_he45a0956__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[3U];
        __Vtemp_he45a0956__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x10U];
    } else {
        __Vtemp_he45a0956__0[1U] = __Vtemp_hc8c70d9d__0[1U];
        __Vtemp_he45a0956__0[3U] = __Vtemp_hc8c70d9d__0[3U];
        __Vtemp_he45a0956__0[0x10U] = __Vtemp_hc8c70d9d__0[0x10U];
    }
    if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xfU];
    } else if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0xfU];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xfU];
    } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0xfU];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xfU];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0xfU];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xfU];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0xfU];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xfU];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0xfU];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xfU];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0xfU];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xfU];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0xfU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xfU];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hc56c3ce1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0[0xfU];
    } else {
        __Vtemp_hc56c3ce1__0[0U] = __Vtemp_h68cea491__0[0U];
        __Vtemp_hc56c3ce1__0[2U] = __Vtemp_h68cea491__0[2U];
        __Vtemp_hc56c3ce1__0[0xfU] = __Vtemp_h68cea491__0[0xfU];
    }
    if ((0x72U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_hafa6fc75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x1bU];
        __Vtemp_hafa6fc75__0[0x1cU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x1cU]);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
            = __Vtemp_hafa6fc75__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
            = __Vtemp_hafa6fc75__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc86d03f__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc86d03f__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc86d03f__0[2U];
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0U] 
            = __Vtemp_hc56c3ce1__0[0U];
        if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hafa6fc75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x1bU];
            __Vtemp_hafa6fc75__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0[0U] 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[1U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[1U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[2U] 
                = __Vtemp_hc56c3ce1__0[2U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[3U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[3U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[4U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[4U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[5U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[5U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[6U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[7U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[8U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[9U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xaU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xbU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xcU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xdU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xeU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                = __Vtemp_hc56c3ce1__0[0xfU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x10U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x11U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x12U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x13U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x14U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x15U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x16U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x17U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x18U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x19U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x1aU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                = __Vtemp_hafa6fc75__0[0x1bU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                = __Vtemp_hafa6fc75__0[0x1cU];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0[0U] 
                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0[1U] 
                                 << 0x10U));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0[1U] 
                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0[2U] 
                                 << 0x10U));
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0[2U] 
                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0[3U] 
                                 << 0x10U));
        } else {
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[1U] 
                = __Vtemp_he45a0956__0[1U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[2U] 
                = __Vtemp_hc56c3ce1__0[2U];
            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[3U] 
                = __Vtemp_he45a0956__0[3U];
            if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_hafa6fc75__0[0x1bU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                << 0x10U) 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x1bU]);
                __Vtemp_hafa6fc75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[0U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[4U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[4U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[5U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[5U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[6U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[7U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[8U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[9U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0xaU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0xbU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0xcU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0xdU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0xeU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                    = __Vtemp_hc56c3ce1__0[0xfU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                    = __Vtemp_he45a0956__0[0x10U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x11U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x12U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x13U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x14U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x15U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x16U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x17U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x18U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x19U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0[0x1aU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                    = __Vtemp_hafa6fc75__0[0x1bU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                    = __Vtemp_hafa6fc75__0[0x1cU];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[1U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[2U];
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[3U];
            } else {
                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[4U] 
                    = __Vtemp_h5b33b2b1__0[4U];
                if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                    __Vtemp_hafa6fc75__0[0x1bU] = (
                                                   (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[0U] 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
                    __Vtemp_hafa6fc75__0[0x1cU] = (
                                                   (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[0U] 
                                                    >> 0x10U) 
                                                   | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[1U] 
                                                      << 0x10U));
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[5U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[5U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[6U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[7U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[8U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[9U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xaU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xbU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xcU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xdU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xeU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                        = __Vtemp_hc56c3ce1__0[0xfU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                        = __Vtemp_he45a0956__0[0x10U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x11U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x12U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x13U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x14U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x15U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x16U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x17U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x18U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x19U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x1aU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                        = __Vtemp_hafa6fc75__0[0x1bU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                        = __Vtemp_hafa6fc75__0[0x1cU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                        = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[1U] 
                            >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[2U] 
                                         << 0x10U));
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                        = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[2U] 
                            >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[3U] 
                                         << 0x10U));
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                        = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[3U] 
                            >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0[4U] 
                                         << 0x10U));
                } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                    __Vtemp_hafa6fc75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[0U];
                    __Vtemp_hafa6fc75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[1U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[5U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[5U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[6U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[7U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[8U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[9U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0xaU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0xbU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0xcU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0xdU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0xeU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                        = __Vtemp_hc56c3ce1__0[0xfU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                        = __Vtemp_he45a0956__0[0x10U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                        = __Vtemp_h3e54c87e__0[0x11U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                        = __Vtemp_h3e54c87e__0[0x12U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x13U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x14U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x15U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x16U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x17U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x18U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x19U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                            << 0x10U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0[0x1aU]);
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                        = __Vtemp_hafa6fc75__0[0x1bU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                        = __Vtemp_hafa6fc75__0[0x1cU];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[2U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[3U];
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[4U];
                } else {
                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[5U] 
                        = __Vtemp_h92cac4db__0[5U];
                    if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                        __Vtemp_hafa6fc75__0[0x1bU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[0U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[1U] 
                                             << 0x10U));
                        __Vtemp_hafa6fc75__0[0x1cU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[1U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[2U] 
                                             << 0x10U));
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[6U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[7U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[8U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[9U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xaU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xbU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xcU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xdU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xeU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                            = __Vtemp_hc56c3ce1__0[0xfU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                            = __Vtemp_he45a0956__0[0x10U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                            = __Vtemp_h3e54c87e__0[0x11U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                            = __Vtemp_h3e54c87e__0[0x12U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                            = __Vtemp_h92cac4db__0[0x13U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x14U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x15U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x16U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x17U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x18U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x19U];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[0U] 
                                << 0x10U) | (0xffffU 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                            = __Vtemp_hafa6fc75__0[0x1bU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                            = __Vtemp_hafa6fc75__0[0x1cU];
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[2U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[3U] 
                                             << 0x10U));
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[3U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[4U] 
                                             << 0x10U));
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[4U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0[5U] 
                                             << 0x10U));
                    } else {
                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U] 
                            = __Vtemp_h478ca6c4__0[6U];
                        if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                            __Vtemp_hafa6fc75__0[0x1bU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[1U];
                            __Vtemp_hafa6fc75__0[0x1cU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[2U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[7U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[8U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[9U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0xaU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0xbU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0xcU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0xdU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0xeU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                                = __Vtemp_hc56c3ce1__0[0xfU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                                = __Vtemp_he45a0956__0[0x10U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                                = __Vtemp_h3e54c87e__0[0x11U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                                = __Vtemp_h3e54c87e__0[0x12U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                                = __Vtemp_h92cac4db__0[0x13U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x14U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x15U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x16U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x17U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x18U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                                = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                    << 0x10U) | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0[0x19U]);
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[0U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                                = __Vtemp_hafa6fc75__0[0x1bU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                                = __Vtemp_hafa6fc75__0[0x1cU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[3U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[4U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[5U];
                        } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                            __Vtemp_hafa6fc75__0[0x1bU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[1U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[2U] 
                                                 << 0x10U));
                            __Vtemp_hafa6fc75__0[0x1cU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[2U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[3U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[7U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[8U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[9U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xaU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xbU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xcU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xdU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xeU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                                = __Vtemp_hc56c3ce1__0[0xfU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                                = __Vtemp_he45a0956__0[0x10U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                                = __Vtemp_h3e54c87e__0[0x11U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                                = __Vtemp_h3e54c87e__0[0x12U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                                = __Vtemp_h92cac4db__0[0x13U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                                = __Vtemp_h859d833c__0[0x14U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x15U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x16U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x17U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x18U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[0U] 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[0U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[1U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                                = __Vtemp_hafa6fc75__0[0x1bU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                                = __Vtemp_hafa6fc75__0[0x1cU];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[3U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[4U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[4U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[5U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[5U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0[6U] 
                                                 << 0x10U));
                        } else {
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U] 
                                = __Vtemp_h1880e756__0[7U];
                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U] 
                                = __Vtemp_h1880e756__0[8U];
                            if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                                __Vtemp_hafa6fc75__0[0x1bU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[2U];
                                __Vtemp_hafa6fc75__0[0x1cU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[3U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[9U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0xaU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0xbU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0xcU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0xdU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0xeU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                                    = __Vtemp_hc56c3ce1__0[0xfU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                                    = __Vtemp_he45a0956__0[0x10U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                                    = __Vtemp_h3e54c87e__0[0x11U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                                    = __Vtemp_h3e54c87e__0[0x12U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                                    = __Vtemp_h92cac4db__0[0x13U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                                    = __Vtemp_h859d833c__0[0x14U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                                    = __Vtemp_h1880e756__0[0x15U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x16U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x17U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                                    = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0[0x18U]);
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[0U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[1U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                                    = __Vtemp_hafa6fc75__0[0x1bU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                                    = __Vtemp_hafa6fc75__0[0x1cU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[4U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[5U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                                    = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[6U];
                            } else {
                                __Vtemp_hafa6fc75__0[0x1bU] 
                                    = __Vtemp_hb2f933f7__0[0x1bU];
                                __Vtemp_hafa6fc75__0[0x1cU] 
                                    = __Vtemp_hb2f933f7__0[0x1cU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U] 
                                    = __Vtemp_hb2f933f7__0[9U];
                                if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xaU];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xbU];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xcU];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xdU];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xeU];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                                        = __Vtemp_hc56c3ce1__0[0xfU];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                                        = __Vtemp_he45a0956__0[0x10U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                                        = __Vtemp_h3e54c87e__0[0x11U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                                        = __Vtemp_h3e54c87e__0[0x12U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                                        = __Vtemp_h92cac4db__0[0x13U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                                        = __Vtemp_h859d833c__0[0x14U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                                        = __Vtemp_h1880e756__0[0x15U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x16U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                                        = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x17U];
                                } else {
                                    if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0xaU];
                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0xbU];
                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0xcU];
                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0xdU];
                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0[0xeU];
                                    } else {
                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU] 
                                            = __Vtemp_ha1574b03__0[0xaU];
                                        if ((0x5cU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xbU];
                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xcU];
                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xdU];
                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                                = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xeU];
                                        } else {
                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU] 
                                                = __Vtemp_ha57efb6b__0[0xbU];
                                            if ((0x5aU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0xcU];
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0xdU];
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0[0xeU];
                                            } else if (
                                                       (0x58U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xcU];
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xdU];
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xeU];
                                            } else {
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU] 
                                                    = 
                                                    __Vtemp_h5834ca16__0[0xcU];
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU] 
                                                    = 
                                                    __Vtemp_h5834ca16__0[0xdU];
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU] 
                                                    = 
                                                    ((0x56U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0[0xeU]
                                                      : 
                                                     __Vtemp_h7139eba8__0[0xeU]);
                                            }
                                        }
                                    }
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU] 
                                        = __Vtemp_hc56c3ce1__0[0xfU];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U] 
                                        = __Vtemp_he45a0956__0[0x10U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U] 
                                        = __Vtemp_h3e54c87e__0[0x11U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U] 
                                        = __Vtemp_h3e54c87e__0[0x12U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U] 
                                        = __Vtemp_h92cac4db__0[0x13U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U] 
                                        = __Vtemp_h859d833c__0[0x14U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U] 
                                        = __Vtemp_h1880e756__0[0x15U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U] 
                                        = __Vtemp_h0ef308b1__0[0x16U];
                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U] 
                                        = __Vtemp_h0ef308b1__0[0x17U];
                                }
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U] 
                                    = __Vtemp_hb2f933f7__0[0x18U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U] 
                                    = __Vtemp_hb2f933f7__0[0x19U];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU] 
                                    = __Vtemp_hb2f933f7__0[0x1aU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU] 
                                    = __Vtemp_hafa6fc75__0[0x1bU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU] 
                                    = __Vtemp_hafa6fc75__0[0x1cU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU] 
                                    = __Vtemp_hb2f933f7__0[0x1dU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU] 
                                    = __Vtemp_hb2f933f7__0[0x1eU];
                                vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU] 
                                    = __Vtemp_hb2f933f7__0[0x1fU];
                            }
                        }
                    }
                }
            }
        }
    }
}
