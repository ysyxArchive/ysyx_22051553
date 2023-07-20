// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRam.h for the primary calling header

#include "verilated.h"

#include "VRam___024root.h"

void VRam___024root___eval_act(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_act\n"); );
}

VL_INLINE_OPT void VRam___024root___nba_sequent__TOP__0(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->io_pc_valid) {
        vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0 = 1U;
        vlSelf->Ram__DOT__inst_valid = 1U;
        vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0 
            = (0xffU & vlSelf->io_pc_bits);
    } else {
        vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0 = 0U;
        vlSelf->Ram__DOT__inst_valid = 0U;
    }
    vlSelf->io_dataOut_valid = vlSelf->Ram__DOT__inst_valid;
    vlSelf->io_dataOut_bits = vlSelf->Ram__DOT__SyncMem
        [vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0];
}

void VRam___024root___eval_nba(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VRam___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VRam___024root___eval_triggers__act(VRam___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRam___024root___dump_triggers__act(VRam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRam___024root___dump_triggers__nba(VRam___024root* vlSelf);
#endif  // VL_DEBUG

void VRam___024root___eval(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval\n"); );
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
            VRam___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VRam___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/Ram.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VRam___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VRam___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Ram.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VRam___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VRam___024root___eval_debug_assertions(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_pc_valid & 0xfeU))) {
        Verilated::overWidthError("io_pc_valid");}
}
#endif  // VL_DEBUG
