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
                VL_FATAL_MT("vsrc/Soc.v", 8485, "", "Settle region did not converge.");
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
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_10;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_10 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_11;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_11 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_15;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_15 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<3>/*95:0*/ __Vtemp_hbe1b9e8a__0;
    VlWide<3>/*95:0*/ __Vtemp_h68469746__0;
    VlWide<3>/*95:0*/ __Vtemp_hbdab5a46__0;
    VlWide<16>/*511:0*/ __Vtemp_h11a82919__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__0;
    VlWide<4>/*127:0*/ __Vtemp_hb46e09a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__1;
    VlWide<4>/*127:0*/ __Vtemp_he3381e13__0;
    VlWide<8>/*255:0*/ __Vtemp_hda373ffc__0;
    VlWide<8>/*255:0*/ __Vtemp_hc9b9f8b9__0;
    // Body
    vlSelf->Soc__DOT____Vcellinp__sram__ARESETn = (1U 
                                                   & (~ (IData)(vlSelf->reset)));
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = vlSelf->Soc__DOT__sram__DOT__bvalid;
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 
        = ((IData)(4U) + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = 
        (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_5 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T 
        = (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T 
        = (0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4 
        = (0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10 
        = (0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter));
    vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
            | ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
               | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))
            ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr);
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
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9 
        = ((IData)(vlSelf->Soc__DOT__sram__DOT__rvalid) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer));
    __Vtemp_hbe1b9e8a__0[0U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                                 << 1U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                                           >> 0x1fU));
    __Vtemp_hbe1b9e8a__0[1U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                                 << 1U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                                           >> 0x1fU));
    __Vtemp_hbe1b9e8a__0[2U] = (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                                >> 0x1fU);
    __Vtemp_h68469746__0[0U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[0U];
    __Vtemp_h68469746__0[1U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[1U];
    __Vtemp_h68469746__0[2U] = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[2U];
    VL_ADD_W(3, __Vtemp_hbdab5a46__0, __Vtemp_hbe1b9e8a__0, __Vtemp_h68469746__0);
    if (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
         | ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
            | ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
               | (0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)))))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U] = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U] 
            = __Vtemp_hbdab5a46__0[0U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U] 
            = __Vtemp_hbdab5a46__0[1U];
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U] 
            = (3U & __Vtemp_hbdab5a46__0[2U]);
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
            | ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
               | (0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))))
            ? 0ULL : (0x3ffffffffULL & ((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U])) 
                                               >> 0x1fU))) 
                                        + vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33)));
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
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3 
        = (vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc 
           == vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0 
        = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5 
        = (IData)((2U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6 
        = (IData)((0U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2 
        = (1U & ((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                        >> 3U))) | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13 
        = (1U & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 | ((~ (IData)((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))) 
                    | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__sram__DOT__rvalid)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp) 
              & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                    & (IData)(vlSelf->Soc__DOT__sram__DOT__bvalid)))));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)) 
           | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)));
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = 
        (1U & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP 
                        >> 7U)) & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 3U)) 
                                   & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE 
                                              >> 7U)))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
           | (7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0 
        = ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | (0x25U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)) 
           | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 
        = VL_MODDIV_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 
        = VL_MODDIVS_QQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    if ((0x1fU >= (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), 
                             (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 = 0U;
    }
    __Vtemp_h7cb4ecaa__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__0[2U] = 0U;
    __Vtemp_h7cb4ecaa__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hb46e09a5__0, __Vtemp_h7cb4ecaa__0, 
                  (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U] 
        = __Vtemp_hb46e09a5__0[0U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[1U] 
        = __Vtemp_hb46e09a5__0[1U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[2U] 
        = __Vtemp_hb46e09a5__0[2U];
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[3U] 
        = (0x7fffffffU & __Vtemp_hb46e09a5__0[3U]);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           - (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    if ((0x1fU >= (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a), (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
               >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 
            = (- ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                  >> 0x1fU));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           & vlSelf->Soc__DOT__core__DOT__dereg_op_b);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
        = (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
           >> (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, 
                         (0x3fU & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 
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
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
           + (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b));
    vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN)
            ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
           | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | ((0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                 | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
    vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2)
            ? 0U : (0xffU & ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                              ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask)
                              : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                  ? 0xffU : (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                           >> 2U))))))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3 
        = ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)) 
           & (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)) 
           & (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_10 = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                       >> 1U)) 
                                                     | (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0)));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_11 = (1U 
                                                  & ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0) 
                                                     | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                        >> 1U)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 & ((IData)(vlSelf->Soc__DOT__sram__DOT__rlast) 
                    & (IData)(vlSelf->Soc__DOT__sram__DOT__rvalid)))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15 
        = ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5 
        = (((QData)((IData)((- (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58)));
    if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_a;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_b;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand = 0ULL;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier = 0ULL;
    }
    vlSelf->Soc__DOT__sram__DOT__need_resp = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3) 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4));
    vlSelf->Soc__DOT__sram__DOT__awaddr = (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4))
                                            ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                            : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer);
    Soc__DOT__core__DOT__arbitor__DOT___GEN_15 = (1U 
                                                  & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)) 
                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)));
    if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15) {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw 
            = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed 
            = ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
               | (0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_a;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
            = vlSelf->Soc__DOT__core__DOT__dereg_op_b;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend = 0ULL;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor = 0ULL;
    }
    vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16 
        = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                 | ((0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                    | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15))))));
    __Vtemp_h7cb4ecaa__1[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__1[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__1[2U] = 0U;
    __Vtemp_h7cb4ecaa__1[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_he3381e13__0, __Vtemp_h7cb4ecaa__1, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid)
            ? (((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo
                : (((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                    | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                       | (0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))))
                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi
                    : 0ULL)) : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid)
                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient
                                 : ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                     ? 0ULL : ((0x28U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                ? (
                                                   (~ vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                   & vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                : (
                                                   (0x27U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100)))
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97)))
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92)))
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87)))
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U] 
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
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78)))
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69)))
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65)))
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (__Vtemp_he3381e13__0[0U] 
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
                                                              ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100
                                                                : 
                                                               ((0x11U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                 ? 
                                                                (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47)
                                                                 : 
                                                                ((0x10U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47
                                                                  : 
                                                                 ((0xfU 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                   ? 
                                                                  VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                   : 
                                                                  ((0xeU 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                    ? 
                                                                   (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                    >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                    : 
                                                                   ((0xdU 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                     ? 
                                                                    (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                     << (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                     : 
                                                                    (((QData)((IData)(
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
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[1U]
                                                                                 : (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 
                                                                                >> 0x20U))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                ((0xcU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? 
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U]
                                                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126)))))))))))))))))))))))))))));
    if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) {
        vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask = 0xffU;
        vlSelf->Soc__DOT__core__DOT___excute_io_wmask = 0xffU;
    } else if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) {
        vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask = 0xfU;
        vlSelf->Soc__DOT__core__DOT___excute_io_wmask 
            = (0xffU & ((IData)(0xfU) << (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))));
    } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) {
        vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask = 3U;
        vlSelf->Soc__DOT__core__DOT___excute_io_wmask 
            = (0xffU & ((IData)(3U) << (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))));
    } else {
        vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask 
            = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type));
        vlSelf->Soc__DOT__core__DOT___excute_io_wmask 
            = (0xffU & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                         ? ((IData)(1U) << (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)))
                         : 0U));
    }
    __Vtemp_hda373ffc__0[0U] = 0U;
    __Vtemp_hda373ffc__0[1U] = 0U;
    __Vtemp_hda373ffc__0[2U] = 0U;
    __Vtemp_hda373ffc__0[3U] = 0U;
    __Vtemp_hda373ffc__0[4U] = 0U;
    __Vtemp_hda373ffc__0[5U] = 0U;
    __Vtemp_hda373ffc__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                                    ? 
                                                   ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11)
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata)
                                                    : 
                                                   ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                      >> 1U) 
                                                     & (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11))
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata))));
    __Vtemp_hda373ffc__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                           ? ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11)
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata)
                                           : ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                >> 1U) 
                                               & (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11))
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
        = (((QData)((IData)(__Vtemp_hda373ffc__0[(((IData)(0x3fU) 
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
                                                                   __Vtemp_hda373ffc__0[
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
              | ((QData)((IData)(__Vtemp_hda373ffc__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    __Vtemp_hc9b9f8b9__0[0U] = 0U;
    __Vtemp_hc9b9f8b9__0[1U] = 0U;
    __Vtemp_hc9b9f8b9__0[2U] = 0U;
    __Vtemp_hc9b9f8b9__0[3U] = 0U;
    __Vtemp_hc9b9f8b9__0[4U] = 0U;
    __Vtemp_hc9b9f8b9__0[5U] = 0U;
    __Vtemp_hc9b9f8b9__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                                    ? 
                                                   ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata)
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)) 
                                                        | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                           >> 1U)))
                                                     ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                     : 0ULL))));
    __Vtemp_hc9b9f8b9__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                           ? ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata)
                                           : ((1U & 
                                               ((~ (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)) 
                                                | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                   >> 1U)))
                                               ? vlSelf->Soc__DOT__sram__DOT__rdata
                                               : 0ULL))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
        = (((QData)((IData)(__Vtemp_hc9b9f8b9__0[(((IData)(0x3fU) 
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
                                                                   __Vtemp_hc9b9f8b9__0[
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
              | ((QData)((IData)(__Vtemp_hc9b9f8b9__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16)
            ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid) 
                | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer))
                ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer)
                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer
                    : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                : 0ULL) : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result);
    vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_type) 
           & (0U != vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
           & ((0U != (vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
                      >> 0x19U)) & (0x200c000ULL > vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
                ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                : 0ULL));
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)));
    vlSelf->__VdfgTmp_h9d5684c6__0 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
             : 0ULL) | ((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                         : 0ULL));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
             : 0U) | ((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                       ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                       : 0U));
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid 
        = ((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
              & (0xa0000000ULL > vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall 
        = ((((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
             & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T)) 
            & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
           | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge Soc.__Vcellinp__sram__ARESETn or posedge clock)\n");
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge Soc.__Vcellinp__sram__ARESETn or posedge clock)\n");
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
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT____Vcellinp__sram__ARESETn = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___excute_io_wmask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fdreg_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__dereg_op_a = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_op_b = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__dereg_branch_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__dereg_branch_addr = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_alu_op = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__dereg_shamt = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__dereg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__dereg_sd_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_t = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__dereg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__emreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__emreg_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__emreg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__mwreg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT____Vcellinp__trap__io_inst = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 = VL_RAND_RESET_I(16);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1 = VL_RAND_RESET_I(17);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(67, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg);
    VL_RAND_RESET_W(132, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg);
    VL_RAND_RESET_W(132, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(133, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1);
    VL_RAND_RESET_W(133, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2);
    VL_RAND_RESET_W(1064, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(536, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4);
    VL_RAND_RESET_W(1056, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder);
    VL_RAND_RESET_W(65, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33 = VL_RAND_RESET_Q(33);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = VL_RAND_RESET_I(7);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(66, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0 = 0;
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 = 0;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h87b31294__0 = 0;
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(24);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 = 0;
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__sram__DOT__w_count = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__sram__DOT__r_count = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__sram__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__sram__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__sram__DOT__rlast = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__sram__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__awaddr_buffer = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__need_resp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__need_read = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hae56d818__0 = 0;
    vlSelf->__VdfgTmp_h3db68a5f__0 = 0;
    vlSelf->__VdfgTmp_hd31110f2__0 = 0;
    vlSelf->__VdfgTmp_hd0a2fa80__0 = 0;
    vlSelf->__VdfgTmp_h9d5684c6__0 = 0;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__Soc__DOT__sram__DOT__rlast = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__Soc__DOT____Vcellinp__sram__ARESETn = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
