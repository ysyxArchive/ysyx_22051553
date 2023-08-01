// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"

#include "VSoc___024root.h"

void VSoc___024root___eval_act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0;
    Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0;
    CData/*7:0*/ __VdfgTmp_h8133e384__0;
    __VdfgTmp_h8133e384__0 = 0;
    QData/*63:0*/ __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0;
    CData/*4:0*/ __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    QData/*63:0*/ __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 = 0;
    // Body
    __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    if (VL_UNLIKELY((0x100073U == ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                    ? vlSelf->Soc__DOT___ram_io_dataOut_bits
                                    : 0U)))) {
        VL_WRITEF("ebreak hit!\n");
        VL_FINISH_MT("vsrc/Soc.v", 640, "");
    }
    __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
            & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
            ? vlSelf->Soc__DOT__core__DOT__mwreg_alu_res
            : vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data);
    __Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Soc__DOT__core__DOT__mwreg_rd;
    if (vlSelf->reset) {
        __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000ULL;
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__mwreg_alu_res = 0ULL;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__emreg_alu_res = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_rd = 0U;
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 0x1fU;
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = 0x80000000ULL;
    } else {
        if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
            __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = (4ULL + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
        }
        vlSelf->Soc__DOT__core__DOT__mwreg_wb_type 
            = vlSelf->Soc__DOT__core__DOT__emreg_wb_type;
        vlSelf->Soc__DOT__core__DOT__mwreg_rd = vlSelf->Soc__DOT__core__DOT__emreg_rd;
        vlSelf->Soc__DOT__core__DOT__mwreg_alu_res 
            = vlSelf->Soc__DOT__core__DOT__emreg_alu_res;
        vlSelf->Soc__DOT__core__DOT__emreg_wb_type 
            = vlSelf->Soc__DOT__core__DOT__dereg_wb_type;
        vlSelf->Soc__DOT__core__DOT__emreg_rd = vlSelf->Soc__DOT__core__DOT__dereg_rd;
        vlSelf->Soc__DOT__core__DOT__emreg_alu_res 
            = ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                   + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                : 0ULL);
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type 
            = ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0));
        vlSelf->Soc__DOT__core__DOT__dereg_rd = ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                  ? 
                                                 ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                   ? 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__VdfgTmp_h50f8190e__0) 
                                                      >> 7U))
                                                   : 0U)
                                                  : 0U);
        vlSelf->Soc__DOT__core__DOT__dereg_alu_op = 
            (0x1fU & (- (IData)((1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0)) 
                                       | (0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T))))));
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = (
                                                   ((0x13U 
                                                     != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                                    & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9))
                                                    ? 
                                                   (((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
                                                     & (0U 
                                                        != (IData)(vlSelf->__VdfgTmp_h049a0a75__0)))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                                    [
                                                    ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                      ? (IData)(vlSelf->__VdfgTmp_h049a0a75__0)
                                                      : 0U)]
                                                     : 0ULL)
                                                    : vlSelf->Soc__DOT__core__DOT__fdreg_pc);
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = ((IData)(vlSelf->__VdfgTmp_h490969a2__0)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))))) 
                                                     << 0x28U) 
                                                    | ((QData)((IData)(
                                                                       ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                         ? 
                                                                        ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                          ? 
                                                                         (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                                                              << 4U) 
                                                                             | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                                                                 ? 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                                                                >> 4U))
                                                                                 : 0U)))
                                                                          : 0U)
                                                                         : 0U))) 
                                                       << 0x14U))
                                                    : 
                                                   ((IData)(vlSelf->__VdfgTmp_h490969a2__0)
                                                     ? 0ULL
                                                     : 
                                                    (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                         ? 
                                                                        ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                                                          ? 
                                                                         (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                                           << 4U) 
                                                                          | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1)
                                                                              ? 
                                                                             (0xfU 
                                                                              & ((IData)(vlSelf->__VdfgTmp_hae2d2759__0) 
                                                                                >> 4U))
                                                                              : 0U))
                                                                          : 0U)
                                                                         : 0U))))));
        vlSelf->Soc__DOT__core__DOT__fdreg_pc = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    }
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_0 
        = (0xffU & ((IData)(3U) + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_2 
        = (0xffU & ((IData)(2U) + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_4 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_6 
        = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc));
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    __VdfgTmp_h8133e384__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_0];
    vlSelf->__VdfgTmp_h7cec4c01__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_6];
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0U] = 0ULL;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1] 
        = __Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN)
            ? (IData)(__VdfgTmp_h8133e384__0) : 0U);
    vlSelf->__VdfgTmp_hae2d2759__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_2];
    vlSelf->__VdfgTmp_h483daa03__0 = vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory
        [vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_4];
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
        [vlSelf->Soc__DOT__core__DOT__mwreg_rd];
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__ram__DOT__inst_valid = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = __Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
    vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1)
            ? (IData)(vlSelf->__VdfgTmp_hae2d2759__0)
            : 0U);
    vlSelf->__VdfgTmp_h50f8190e__0 = ((((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                         ? (IData)(vlSelf->__VdfgTmp_h483daa03__0)
                                         : 0U) << 8U) 
                                      | ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                                          ? (IData)(vlSelf->__VdfgTmp_h7cec4c01__0)
                                          : 0U));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 
        = ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid) 
           & ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN) 
              & ((IData)(__VdfgTmp_h8133e384__0) >> 7U)));
    vlSelf->__VdfgTmp_h7f65c8dc__0 = (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R1_data) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_h50f8190e__0));
    if (vlSelf->Soc__DOT__ram__DOT__inst_valid) {
        Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 
            = ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                ? ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5)
                    ? (0x7fU & (IData)(vlSelf->__VdfgTmp_h7cec4c01__0))
                    : 0U) : 0U);
        vlSelf->__VdfgTmp_h049a0a75__0 = (0x1fU & (vlSelf->__VdfgTmp_h7f65c8dc__0 
                                                   >> 0xfU));
        vlSelf->Soc__DOT___ram_io_dataOut_bits = (((IData)(vlSelf->Soc__DOT__ram__DOT___SyncMem_ext_R0_data) 
                                                   << 0x18U) 
                                                  | vlSelf->__VdfgTmp_h7f65c8dc__0);
        vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T 
            = vlSelf->Soc__DOT___ram_io_dataOut_bits;
    } else {
        Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0x13U;
        vlSelf->__VdfgTmp_h049a0a75__0 = 0U;
        vlSelf->Soc__DOT___ram_io_dataOut_bits = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T = 0x13U;
    }
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9 
        = (0x13U == ((((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                        ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                            ? ((IData)(vlSelf->Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3)
                                ? (7U & ((IData)(vlSelf->__VdfgTmp_h483daa03__0) 
                                         >> 4U)) : 0U)
                            : 0U) : 0U) << 7U) | (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9) 
           | (0x17U == (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
    vlSelf->__VdfgTmp_h490969a2__0 = ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT___inst_T) 
                                      & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9)) 
                                         & (0x17U == (IData)(Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))));
}

void VSoc___024root___eval_nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSoc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSoc___024root___eval_triggers__act(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf);
#endif  // VL_DEBUG

void VSoc___024root___eval(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSoc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSoc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/Soc.v", 604, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSoc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSoc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Soc.v", 604, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSoc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSoc___024root___eval_debug_assertions(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
