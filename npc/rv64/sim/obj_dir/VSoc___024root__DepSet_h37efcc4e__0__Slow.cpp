// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"

#include "VSoc___024root.h"

VL_ATTR_COLD void VSoc___024root___eval_static(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSoc___024root___eval_initial__TOP(VSoc___024root* vlSelf);

VL_ATTR_COLD void VSoc___024root___eval_initial(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_initial\n"); );
    // Body
    VSoc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSoc___024root___eval_initial__TOP(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 8, 256, 0, std::string{"inst"}
                 ,  &(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory)
                 , 0, ~0ULL);
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
                VL_FATAL_MT("vsrc/Soc.v", 670, "", "Settle region did not converge.");
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

VL_ATTR_COLD void VSoc___024root___stl_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0;
    Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 = 0;
    CData/*7:0*/ __VdfgTmp_hae2d2759__0;
    __VdfgTmp_hae2d2759__0 = 0;
    CData/*7:0*/ __VdfgTmp_h8133e384__0;
    __VdfgTmp_h8133e384__0 = 0;
    VlWide<8>/*255:0*/ __Vtemp_hb27e78c7__0;
    // Body
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__mwreg_rd];
    __VdfgTmp_h8133e384__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_0];
    __VdfgTmp_hae2d2759__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_2];
    vlSelf->__VdfgTmp_h483daa03__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_4];
    vlSelf->__VdfgTmp_h7cec4c01__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_6];
    Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
           & ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN) 
              & ((IData)(__VdfgTmp_h8133e384__0) >> 7U)));
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN)
            ? (IData)(__VdfgTmp_h8133e384__0) : 0U);
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1)
            ? (IData)(__VdfgTmp_hae2d2759__0) : 0U);
    vlSelf->__VdfgTmp_h50f8190e__0 = ((((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                         ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                         : 0U) << 8U) 
                                      | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                          ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                          : 0U));
    vlSelf->__VdfgTmp_h7f65c8dc__0 = (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_h50f8190e__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
            ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                ? ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                    ? (0x7fU & (IData)(vlSelf->__VdfgTmp_h7cec4c01__0))
                    : 0U) : 0U) : 0x13U);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h253792fe__0 
        = ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           & (0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3 
        = (0x13U == ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                        ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                            ? ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                ? (7U & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                         >> 4U)) : 0U)
                            : 0U) : 0U) << 7U) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
    vlSelf->__VdfgTmp_h27324541__0 = (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                       << 0x18U) | vlSelf->__VdfgTmp_h7f65c8dc__0);
    if (vlSelf->Soc__DOT__ram__DOT__inst_valid) {
        vlSelf->Soc__DOT___ram_io_dataOut_bits = vlSelf->__VdfgTmp_h27324541__0;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T 
            = vlSelf->Soc__DOT___ram_io_dataOut_bits;
    } else {
        vlSelf->Soc__DOT___ram_io_dataOut_bits = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T = 0x13U;
    }
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3) 
           | ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
              | ((0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                 | (0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type 
        = ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h4b61693b__0 
        = ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
           & (~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3)));
    __Vtemp_hb27e78c7__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                              ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                   << 4U) 
                                                  | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1)
                                                      ? 
                                                     (0xfU 
                                                      & ((IData)(__VdfgTmp_hae2d2759__0) 
                                                         >> 4U))
                                                      : 0U))
                                                  : 0U)
                                              : 0U));
    __Vtemp_hb27e78c7__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hb27e78c7__0[2U] = ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                   ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                       ? (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                              << 4U) 
                                             | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                                 ? 
                                                (0xfU 
                                                 & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                    >> 4U))
                                                 : 0U)))
                                       : 0U) : 0U) 
                                 << 0xcU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    __Vtemp_hb27e78c7__0[3U] = (- (IData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)));
    __Vtemp_hb27e78c7__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0x14U) | ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                 ? 
                                                ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                                     >> 1U))
                                                  : 0U)
                                                 : 9U) 
                                               << 0xaU) 
                                              | ((0xfffffe00U 
                                                  & (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                                      << 9U) 
                                                     & (((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3) 
                                                         << 9U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                           << 6U)))) 
                                                 | (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                      ? 
                                                     ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                       ? 
                                                      (0xffU 
                                                       & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                          >> 0xcU))
                                                       : 0U)
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_hb27e78c7__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_hb27e78c7__0[6U] = 0U;
    __Vtemp_hb27e78c7__0[7U] = 0U;
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)(__Vtemp_hb27e78c7__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((((0x13U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                         | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                         ? 0U
                                                         : 
                                                        (((0x17U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                          | (0x37U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                          << 1U))) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                   ? 0U : (((0x17U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                            | (0x37U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                            ? 1U : 
                                           ((0x6fU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                            << 1U))) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((((0x13U 
                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                              | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                              ? 0U : 
                                             (((0x17U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                               | (0x37U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                               ? 1U
                                               : ((0x6fU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                  << 1U))) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                  ? 0U : (((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                           | (0x37U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                           ? 1U : (
                                                   (0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   << 1U))) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hb27e78c7__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((((0x13U 
                                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                                           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                                           ? 0U
                                                                           : 
                                                                          (((0x17U 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                                            | (0x37U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                                            ? 1U
                                                                            : 
                                                                           ((0x6fU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                                            << 1U))) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((((0x13U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                          | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                                          ? 0U
                                                          : 
                                                         (((0x17U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                           | (0x37U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                           << 1U))) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hb27e78c7__0[
                                 (6U & ((((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                          | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                          ? 0U : ((
                                                   (0x17U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   | (0x37U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                   << 1U))) 
                                        << 1U))])) 
                 >> (0x1fU & ((((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3))
                                ? 0U : (((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                         | (0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)))
                                         ? 1U : ((0x6fU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                 << 1U))) 
                              << 6U)))));
    vlSelf->__VdfgTmp_h35b167b6__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h4b61693b__0) 
                                      & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                         & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h253792fe__0)));
    if (vlSelf->__VdfgTmp_h35b167b6__0) {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
            = ((IData)(vlSelf->__VdfgTmp_h35b167b6__0)
                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                : 0x80000000ULL);
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
    } else {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = 0x80000000ULL;
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    }
}

VL_ATTR_COLD void VSoc___024root___eval_stl(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSoc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSoc___024root___ctor_var_reset(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT___ram_io_dataOut_bits = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__fdreg_pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_op_a = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_op_b = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_rd = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__dereg_alu_op = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__dereg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__emreg_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__emreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__emreg_rd = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__mwreg_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__mwreg_rd = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h4b61693b__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h253792fe__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__ram__DOT__inst_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_0 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_2 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_4 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_6 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgTmp_h27324541__0 = 0;
    vlSelf->__VdfgTmp_h50f8190e__0 = 0;
    vlSelf->__VdfgTmp_h35b167b6__0 = 0;
    vlSelf->__VdfgTmp_h483daa03__0 = 0;
    vlSelf->__VdfgTmp_h7cec4c01__0 = 0;
    vlSelf->__VdfgTmp_h7f65c8dc__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
