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
                VL_FATAL_MT("vsrc/Soc.v", 1922, "", "Settle region did not converge.");
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
    VlWide<3>/*95:0*/ __Vtemp_h5ee83ed9__0;
    VlWide<16>/*511:0*/ __Vtemp_h9ff76cf3__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ce0e83e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6eeb50c9__0;
    VlWide<3>/*95:0*/ __Vtemp_h238ea762__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__0;
    VlWide<4>/*127:0*/ __Vtemp_hb46e09a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__1;
    VlWide<4>/*127:0*/ __Vtemp_he3381e13__0;
    VlWide<12>/*383:0*/ __Vtemp_h30b8d56e__0;
    VlWide<16>/*511:0*/ __Vtemp_he17264f4__0;
    VlWide<14>/*447:0*/ __Vtemp_h881cf063__0;
    VlWide<4>/*127:0*/ __Vtemp_hde8f545e__0;
    VlWide<4>/*127:0*/ __Vtemp_h31e9c9ac__0;
    VlWide<4>/*127:0*/ __Vtemp_h40386c7d__0;
    VlWide<4>/*127:0*/ __Vtemp_hbf25ab7a__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f9be4f4__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__2;
    VlWide<4>/*127:0*/ __Vtemp_h197b5ff8__0;
    VlWide<4>/*127:0*/ __Vtemp_h2b127288__0;
    VlWide<4>/*127:0*/ __Vtemp_h197b5ff8__1;
    VlWide<4>/*127:0*/ __Vtemp_hd8984f98__0;
    VlWide<16>/*511:0*/ __Vtemp_h03069de3__0;
    // Body
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 
        = (4ULL + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
            ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                        ? 0xfU : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                   ? 3U : (1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
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
    __Vtemp_h9ff76cf3__0[0U] = 0U;
    __Vtemp_h9ff76cf3__0[1U] = 0U;
    __Vtemp_h9ff76cf3__0[2U] = 0U;
    __Vtemp_h9ff76cf3__0[3U] = 0U;
    __Vtemp_h9ff76cf3__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__pc);
    __Vtemp_h9ff76cf3__0[5U] = (IData)((vlSelf->Soc__DOT__core__DOT__trap__DOT__pc 
                                        >> 0x20U));
    __Vtemp_h9ff76cf3__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__cause);
    __Vtemp_h9ff76cf3__0[7U] = (IData)((vlSelf->Soc__DOT__core__DOT__trap__DOT__cause 
                                        >> 0x20U));
    __Vtemp_h9ff76cf3__0[8U] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
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
    __Vtemp_h9ff76cf3__0[9U] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                          >> 8U)) >> 0x18U) 
                                | ((IData)(((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                             >> 8U) 
                                            >> 0x20U)) 
                                   << 8U));
    __Vtemp_h9ff76cf3__0[0xaU] = 0U;
    __Vtemp_h9ff76cf3__0[0xbU] = 0U;
    __Vtemp_h9ff76cf3__0[0xcU] = (IData)(((0x8000000000000007ULL 
                                           == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                           ? ((0xffffffffffffff00ULL 
                                               & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                                              | (QData)((IData)(
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP)))))
                                           : 0ULL));
    __Vtemp_h9ff76cf3__0[0xdU] = (IData)((((0x8000000000000007ULL 
                                            == vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE)
                                            ? ((0xffffffffffffff00ULL 
                                                & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                                               | (QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP)))))
                                            : 0ULL) 
                                          >> 0x20U));
    __Vtemp_h9ff76cf3__0[0xeU] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 4U)) 
                                   << 4U) | ((8U & 
                                              ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                        >> 7U)) 
                                               << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS))));
    __Vtemp_h9ff76cf3__0[0xfU] = (((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 4U)) 
                                   >> 0x1cU) | ((IData)(
                                                        ((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                                          >> 4U) 
                                                         >> 0x20U)) 
                                                << 4U));
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata 
        = (((QData)((IData)(__Vtemp_h9ff76cf3__0[(((IData)(0x3fU) 
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
                                                                   __Vtemp_h9ff76cf3__0[
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
              | ((QData)((IData)(__Vtemp_h9ff76cf3__0[
                                 (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                                          << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = 
        (1U & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP 
                        >> 7U)) & ((IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                                            >> 3U)) 
                                   & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE 
                                              >> 7U)))));
    vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
           | (7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)) 
           | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf)
            ? vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf
            : vlSelf->Soc__DOT___tm_rdata);
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
    vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
        = ((1U & (IData)((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                          >> 2U))) ? (IData)((vlSelf->Soc__DOT___tm_inst 
                                              >> 0x20U))
            : (IData)(vlSelf->Soc__DOT___tm_inst));
    __Vtemp_h30b8d56e__0[0U] = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                            >> 0x3fU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                          >> 0x30U))))))
                                         : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x2fU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                              >> 0x20U))))))
                                             : ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x1fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                               >> 0x10U))))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))))
                                                  : 0ULL)))));
    __Vtemp_h30b8d56e__0[1U] = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                             >> 0x3fU)))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                           >> 0x30U))))))
                                          : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x2fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                               >> 0x20U))))))
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x1fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x10U))))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_he17264f4__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                              >> 7U))))))))) 
                                 << 8U) | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)));
    __Vtemp_he17264f4__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                              >> 7U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 8U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 7U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he17264f4__0[2U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                        >> 8U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                               >> 7U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x10U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0xfU))))))))) 
                                              << 8U));
    __Vtemp_he17264f4__0[3U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                       >> 0x10U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                              >> 0xfU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x10U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0xfU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he17264f4__0[4U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                        >> 0x10U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                               >> 0xfU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x18U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x17U))))))))) 
                                              << 8U));
    __Vtemp_he17264f4__0[5U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                       >> 0x18U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                              >> 0x17U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x18U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x17U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he17264f4__0[6U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                        >> 0x18U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                               >> 0x17U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x20U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x1fU))))))))) 
                                              << 8U));
    __Vtemp_he17264f4__0[7U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                       >> 0x20U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                              >> 0x1fU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x20U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x1fU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he17264f4__0[8U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                        >> 0x20U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                               >> 0x1fU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x28U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x27U))))))))) 
                                              << 8U));
    __Vtemp_he17264f4__0[9U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                       >> 0x28U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                              >> 0x27U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x28U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x27U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he17264f4__0[0xaU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                          >> 0x28U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x27U)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x30U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x2fU))))))))) 
                                                << 8U));
    __Vtemp_he17264f4__0[0xbU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                         >> 0x30U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x2fU))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x30U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x2fU)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_he17264f4__0[0xcU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                          >> 0x30U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x2fU)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x38U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x37U))))))))) 
                                                << 8U));
    __Vtemp_he17264f4__0[0xdU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                         >> 0x38U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x37U))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x38U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x37U)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_he17264f4__0[0xeU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                             >> 0x3fU)))))))) 
                                   << 8U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x38U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x37U)))))))) 
                                                      >> 0x20U)) 
                                             >> 0x18U));
    __Vtemp_he17264f4__0[0xfU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                             >> 0x3fU)))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                                >> 0x3fU))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h881cf063__0[0U] = (IData)((((QData)((IData)(
                                                         __Vtemp_he17264f4__0[
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
                                                                __Vtemp_he17264f4__0[
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
                                                              __Vtemp_he17264f4__0[
                                                              (0xeU 
                                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))));
    __Vtemp_h881cf063__0[1U] = (IData)(((((QData)((IData)(
                                                          __Vtemp_he17264f4__0[
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
                                                                 __Vtemp_he17264f4__0[
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
                                                               __Vtemp_he17264f4__0[
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
        = __Vtemp_h881cf063__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[3U] 
        = __Vtemp_h881cf063__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[4U] 
        = __Vtemp_h30b8d56e__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[5U] 
        = __Vtemp_h30b8d56e__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[6U] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                               >> 0x3fU))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                     >> 0x20U))))
                    : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))
                        : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[7U] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                >> 0x3fU))))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                      >> 0x20U))))
                     : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))
                         : 0ULL)) >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[8U] 
        = (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T);
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[9U] 
        = (IData)((vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xaU] 
        = (IData)((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                        >> 0x38U))
                                             : ((6U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           ((((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))) 
                                                                 << 0x30U) 
                                                                | (0xffffffffffffULL 
                                                                   & vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T))) 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 3U))))))))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xbU] 
        = (IData)(((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                         >> 0x38U))
                                              : ((6U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T)))) 
                                                                  << 0x30U) 
                                                                 | (0xffffffffffffULL 
                                                                    & vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T))) 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                 << 3U))))))))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xcU] 
        = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                       >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                   >> 0x20U)))))
                                     : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                       >> 0x10U)))))
                                         : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T))))
                                             : 0ULL)))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xdU] 
        = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                        >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                    >> 0x20U)))))
                                      : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                                                                        >> 0x10U)))))
                                          : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T))))
                                              : 0ULL)))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xeU] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                       >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T))
                                     : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xfU] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T 
                        >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T))
                                      : 0ULL)) >> 0x20U));
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
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                            >> 0x14U))) & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
                                           & ((0x1fU 
                                               & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                            >> 0x14U))) & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
                                           & ((0x1fU 
                                               & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                            >> 0x14U))) & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                           & ((0x1fU 
                                               & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen) 
           & ((vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
               >> 0x14U) == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen) 
           & ((vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
               >> 0x14U) == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen) 
           & ((vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
               >> 0x14U) == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr)));
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = 
        ((0x73U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
         & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                    >> 3U)));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                            >> 0xfU))) & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
                                          & ((0x1fU 
                                              & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                            >> 0xfU))) & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
                                          & ((0x1fU 
                                              & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                            >> 0xfU))) & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                          & ((0x1fU 
                                              & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12 
        = ((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                     >> 0xfU)) == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8 
        = ((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                     >> 0x14U)) == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 
        = ((0x17U == (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
           | (0x37U == (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((0x380U & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                      >> 5U)) | (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst));
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
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
            & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
               | ((0x30200073U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7)))) 
           | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 
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
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 
        = ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x1f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 
        = ((0x6fU == (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
           | (0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
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
        = ((0x1fc00U & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                        >> 0xfU)) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((0xfc00U & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                       >> 0x10U)) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
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
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0)
            ? 0U : ((0x6fU == (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0) 
           | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0) 
           | ((0x6fU == (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
              | ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 
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
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 
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
                                                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0))))))))))))))))))))))))))))));
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
    vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_type) 
           & ((~ (IData)((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))) 
              & (0U != vlSelf->__VdfgTmp_h6a80e86b__0)));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
        = ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
            ? 0ULL : vlSelf->__VdfgTmp_h6a80e86b__0);
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)));
    if ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) {
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = 0x3fU;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = 0U;
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
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0)
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
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type 
            = ((0x17U == (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
                ? 1U : ((0x37U == (0x7fU & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
                         ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                                  ? 1U : ((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5) 
                                            | ((3U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
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
                                           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3))
                                           ? 2U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0)
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x3f3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))));
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                         ? 3U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                  ? 2U : (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0) 
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
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)
                                                      ? 2U
                                                      : 
                                                     ((0xf3U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0)
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
    }
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0)
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
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 
        = ((0x1bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x9bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
              | ((0x29bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                 | ((0x429bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)))));
    __Vtemp_h03069de3__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 << 0xcU) | (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                             >> 0x14U));
    __Vtemp_h03069de3__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                              >> 0x1fU))))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h03069de3__0[2U] = ((0xfffff000U & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                | ((IData)(((0xfffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                   >> 0x1fU))))) 
                                            >> 0x20U)) 
                                   >> 0x14U));
    __Vtemp_h03069de3__0[3U] = (- (IData)((vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                           >> 0x1fU)));
    __Vtemp_h03069de3__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                              | ((0x800U 
                                                  & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                       >> 0x14U)))));
    __Vtemp_h03069de3__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h03069de3__0[6U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                   >> 7U))));
    __Vtemp_h03069de3__0[7U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                              >> 0x1fU))))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h03069de3__0[8U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                      >> 7U)))));
    __Vtemp_h03069de3__0[9U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                >> 0x1fU)))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                              >> 0x1fU))))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h03069de3__0[0xaU] = (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                           >> 0xfU));
    __Vtemp_h03069de3__0[0xbU] = 0U;
    __Vtemp_h03069de3__0[0xcU] = 0U;
    __Vtemp_h03069de3__0[0xdU] = 0U;
    __Vtemp_h03069de3__0[0xeU] = 0U;
    __Vtemp_h03069de3__0[0xfU] = 0U;
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)(__Vtemp_h03069de3__0[(((IData)(0x3fU) 
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
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                             == (0x7fU 
                                                 & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                                                   __Vtemp_h03069de3__0[
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
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
              | ((QData)((IData)(__Vtemp_h03069de3__0[
                                 (0xeU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                            ? 0U : 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                             ? 1U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                        : 0ULL))) : ((0x340U == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                 >> 0x14U))
                                      ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                      : ((0x300U == 
                                          (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                           >> 0x14U))
                                          ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                          : (((0x344U 
                                               == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                   >> 0x14U)) 
                                              | (0x304U 
                                                 == 
                                                 (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))
                                              ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                              : ((0x341U 
                                                  == 
                                                  (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                   >> 0x14U))
                                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                    >> 0x14U))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                     >> 0x14U))
                                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                    : 0ULL)))))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)) 
            | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) 
           & ((0U != ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                       ? 0ULL : (vlSelf->__VdfgTmp_h6a80e86b__0 
                                 >> 0x19U))) & (0x200c000ULL 
                                                > vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)));
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
                ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                : 0ULL));
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
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 
        = ((((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type)) 
             & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12)) 
            | (((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8)) 
               | (((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8))) 
                  | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12))))) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd)));
    vlSelf->Soc__DOT__core__DOT___excute_io_waddr = 
        (((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
          & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))
          ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
          : 0ULL);
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)));
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
                        : 0ULL))) : ((0U != (0x1fU 
                                             & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                >> 0x14U)))
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                >> 0x14U))]
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
                        : 0ULL))) : ((0U != (0x1fU 
                                             & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                >> 0xfU)))
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                >> 0xfU))]
                                      : 0ULL));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
              | ((~ (IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag)) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 
        = (((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
            & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
               | ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag) 
                  | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                     | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag))))) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag))));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
            : 0ULL);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag)
            ? ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                    : 0ULL)) : ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)
                                 ? vlSelf->Soc__DOT__core__DOT__dereg_branch_addr
                                 : ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag)
                                     ? ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                         ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                            + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                         : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                             ? (0xfffffffffffffffeULL 
                                                & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                                   + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                             : 0x80000000ULL))
                                     : 0x80000000ULL)));
    vlSelf->io_next_pc = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                           ? (4ULL + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                           : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                               ? (4ULL + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                               : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc));
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)
            ? vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc
            : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                ? vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc
                : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc));
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
    vlSelf->io_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT___tm_inst = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT___tm_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___excute_io_waddr = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___excute_io_clex_wmask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__fdreg_pc = VL_RAND_RESET_Q(64);
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
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 = VL_RAND_RESET_I(16);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1 = VL_RAND_RESET_I(17);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5);
    VL_RAND_RESET_W(128, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6);
    VL_RAND_RESET_W(65, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT___get_value_T = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1);
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
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 = VL_RAND_RESET_I(1);
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
    vlSelf->Soc__DOT__core__DOT__trap__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(24);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__tm__DOT__old_inst = VL_RAND_RESET_Q(64);
    vlSelf->__VdfgTmp_h6a80e86b__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
