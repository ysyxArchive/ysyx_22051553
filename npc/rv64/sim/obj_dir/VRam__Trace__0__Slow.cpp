// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRam__Syms.h"


VL_ATTR_COLD void VRam___024root__trace_init_sub__TOP__0(VRam___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBit(c+6,"io_dataOut_valid", false,-1);
    tracep->declBus(c+7,"io_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+8,"io_pc_valid", false,-1);
    tracep->declBus(c+9,"io_pc_bits", false,-1, 31,0);
    tracep->pushNamePrefix("Ram ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBit(c+6,"io_dataOut_valid", false,-1);
    tracep->declBus(c+7,"io_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+8,"io_pc_valid", false,-1);
    tracep->declBus(c+9,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+1,"SyncMem_io_dataOut_bits_MPORT_en", false,-1);
    tracep->declBus(c+2,"SyncMem_io_dataOut_bits_MPORT_addr", false,-1, 7,0);
    tracep->declBus(c+7,"SyncMem_io_dataOut_bits_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+1,"SyncMem_io_dataOut_bits_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+2,"SyncMem_io_dataOut_bits_MPORT_addr_pipe_0", false,-1, 7,0);
    tracep->declBit(c+3,"inst_valid", false,-1);
    tracep->declBus(c+10,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VRam___024root__trace_init_top(VRam___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_init_top\n"); );
    // Body
    VRam___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRam___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRam___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRam___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRam___024root__trace_register(VRam___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRam___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRam___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRam___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRam___024root__trace_full_sub_0(VRam___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRam___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_full_top_0\n"); );
    // Init
    VRam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRam___024root*>(voidSelf);
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRam___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRam___024root__trace_full_sub_0(VRam___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRam___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0));
    bufp->fullCData(oldp+2,(vlSelf->Ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0),8);
    bufp->fullBit(oldp+3,(vlSelf->Ram__DOT__inst_valid));
    bufp->fullBit(oldp+4,(vlSelf->clock));
    bufp->fullBit(oldp+5,(vlSelf->reset));
    bufp->fullBit(oldp+6,(vlSelf->io_dataOut_valid));
    bufp->fullIData(oldp+7,(vlSelf->io_dataOut_bits),32);
    bufp->fullBit(oldp+8,(vlSelf->io_pc_valid));
    bufp->fullIData(oldp+9,(vlSelf->io_pc_bits),32);
    bufp->fullIData(oldp+10,(vlSelf->Ram__DOT__initvar),32);
}
