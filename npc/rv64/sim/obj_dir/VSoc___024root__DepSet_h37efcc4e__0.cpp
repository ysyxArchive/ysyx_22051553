// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___ico_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Soc__DOT____Vcellinp__sram__ARESETn = (1U 
                                                   & (~ (IData)(vlSelf->reset)));
}

void VSoc___024root___eval_ico(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VSoc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VSoc___024root___eval_act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__4(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8) {
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr = 0U;
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len = 0U;
    } else {
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr 
            = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr;
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len 
            = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len;
    }
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
}

void VSoc___024root___eval_triggers__ico(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
void VSoc___024root___eval_triggers__act(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
void VSoc___024root___eval_nba(VSoc___024root* vlSelf);

void VSoc___024root___eval(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VSoc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VSoc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Soc.v", 9536, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VSoc___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("vsrc/Soc.v", 9536, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/Soc.v", 9536, "", "NBA region did not converge.");
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
