// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRam.h for the primary calling header

#include "verilated.h"

#include "VRam__Syms.h"
#include "VRam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRam___024root___dump_triggers__act(VRam___024root* vlSelf);
#endif  // VL_DEBUG

void VRam___024root___eval_triggers__act(VRam___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
