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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

extern const VlWide<12>/*383:0*/ VRam__ConstPool__CONST_hfbabf176_0;

VL_ATTR_COLD void VRam___024root___eval_initial__TOP(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(12, VRam__ConstPool__CONST_hfbabf176_0)
                 ,  &(vlSelf->Ram__DOT__SyncMem), 0
                 , ~0ULL);
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
                VL_FATAL_MT("vsrc/Ram.v", 1, "", "Settle region did not converge.");
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
    if (vlSelf->Ram__DOT__inst_valid) {
        vlSelf->io_dataOut_valid = 1U;
        vlSelf->io_dataOut_bits = vlSelf->Ram__DOT__SyncMem
            [vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0];
    } else {
        vlSelf->io_dataOut_valid = 0U;
        vlSelf->io_dataOut_bits = 0U;
    }
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
    vlSelf->io_dataOut_valid = VL_RAND_RESET_I(1);
    vlSelf->io_dataOut_bits = VL_RAND_RESET_I(32);
    vlSelf->io_pc_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pc_bits = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->Ram__DOT__SyncMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0 = VL_RAND_RESET_I(8);
    vlSelf->Ram__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->Ram__DOT__pc_addr = VL_RAND_RESET_I(32);
    vlSelf->Ram__DOT__initvar = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
