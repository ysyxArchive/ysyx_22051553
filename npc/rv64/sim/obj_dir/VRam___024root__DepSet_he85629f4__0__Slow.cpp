// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRam.h for the primary calling header

#include "verilated.h"

#include "VRam___024root.h"

VL_ATTR_COLD void VRam___024root___eval_static(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRam___024root___eval_initial__TOP(VRam___024root* vlSelf);

VL_ATTR_COLD void VRam___024root___eval_initial(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_initial\n"); );
    // Body
    VRam___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VRam___024root___eval_initial__TOP(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_pc_ready = 0U;
}

VL_ATTR_COLD void VRam___024root___eval_final(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_final\n"); );
}

VL_ATTR_COLD void VRam___024root___eval_triggers__stl(VRam___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRam___024root___dump_triggers__stl(VRam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VRam___024root___eval_stl(VRam___024root* vlSelf);

VL_ATTR_COLD void VRam___024root___eval_settle(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VRam___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VRam___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Ram.v", 40, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VRam___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRam___024root___dump_triggers__stl(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRam___024root___stl_sequent__TOP__0(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_inst_valid = vlSelf->Ram__DOT__inst_valid;
    vlSelf->io_inst_bits = ((IData)(vlSelf->Ram__DOT__SyncMem_ext__DOT___GEN)
                             ? vlSelf->Ram__DOT__SyncMem_ext__DOT__Memory
                            [vlSelf->Ram__DOT__SyncMem_ext__DOT___GEN_0]
                             : 0U);
}

VL_ATTR_COLD void VRam___024root___eval_stl(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VRam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRam___024root___dump_triggers__act(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VRam___024root___dump_triggers__nba(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRam___024root___ctor_var_reset(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->io_inst_ready = VL_RAND_RESET_I(1);
    vlSelf->io_pc_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pc_bits = VL_RAND_RESET_I(32);
    vlSelf->io_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->io_inst_bits = VL_RAND_RESET_I(32);
    vlSelf->io_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->Ram__DOT__inst_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->Ram__DOT__SyncMem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Ram__DOT__SyncMem_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Ram__DOT__SyncMem_ext__DOT___GEN_0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
}
