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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0));
        bufp->chgCData(oldp+1,(vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0),8);
        bufp->chgBit(oldp+2,(vlSelf->Ram__DOT__inst_valid));
    }
    bufp->chgBit(oldp+3,(vlSelf->clock));
    bufp->chgBit(oldp+4,(vlSelf->reset));
    bufp->chgBit(oldp+5,(vlSelf->io_dataOut_valid));
    bufp->chgIData(oldp+6,(vlSelf->io_dataOut_bits),32);
    bufp->chgBit(oldp+7,(vlSelf->io_pc_valid));
    bufp->chgIData(oldp+8,(vlSelf->io_pc_bits),32);
}

void VRam___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_cleanup\n"); );
    // Init
    VRam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRam___024root*>(voidSelf);
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
