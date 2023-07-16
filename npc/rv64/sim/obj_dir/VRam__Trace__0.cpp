// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRam__Syms.h"


void VRam___024root__trace_chg_sub_0(VRam___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRam___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_chg_top_0\n"); );
    // Init
    VRam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRam___024root*>(voidSelf);
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRam___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VRam___024root__trace_chg_sub_0(VRam___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->io_inst_ready));
    bufp->chgBit(oldp+2,(vlSelf->io_pc_valid));
    bufp->chgIData(oldp+3,(vlSelf->io_pc_bits),32);
    bufp->chgBit(oldp+4,(vlSelf->io_inst_valid));
    bufp->chgIData(oldp+5,(vlSelf->io_inst_bits),32);
    bufp->chgBit(oldp+6,(vlSelf->io_pc_ready));
    bufp->chgBit(oldp+7,(vlSelf->Ram__DOT__inst_valid));
    bufp->chgCData(oldp+8,((0xffU & vlSelf->io_pc_bits)),8);
}

void VRam___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_cleanup\n"); );
    // Init
    VRam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRam___024root*>(voidSelf);
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
