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
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"io_inst_ready", false,-1);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declBus(c+4,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+5,"io_inst_valid", false,-1);
    tracep->declBus(c+6,"io_inst_bits", false,-1, 31,0);
    tracep->declBit(c+7,"io_pc_ready", false,-1);
    tracep->pushNamePrefix("Ram ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"io_inst_ready", false,-1);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declBus(c+4,"io_pc_bits", false,-1, 31,0);
    tracep->declBit(c+5,"io_inst_valid", false,-1);
    tracep->declBus(c+6,"io_inst_bits", false,-1, 31,0);
    tracep->declBit(c+7,"io_pc_ready", false,-1);
    tracep->declBit(c+8,"inst_valid", false,-1);
    tracep->pushNamePrefix("SyncMem_ext ");
    tracep->declBus(c+9,"R0_addr", false,-1, 7,0);
    tracep->declBit(c+10,"R0_en", false,-1);
    tracep->declBit(c+1,"R0_clk", false,-1);
    tracep->declBus(c+6,"R0_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
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
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->io_inst_ready));
    bufp->fullBit(oldp+3,(vlSelf->io_pc_valid));
    bufp->fullIData(oldp+4,(vlSelf->io_pc_bits),32);
    bufp->fullBit(oldp+5,(vlSelf->io_inst_valid));
    bufp->fullIData(oldp+6,(vlSelf->io_inst_bits),32);
    bufp->fullBit(oldp+7,(vlSelf->io_pc_ready));
    bufp->fullBit(oldp+8,(vlSelf->Ram__DOT__inst_valid));
    bufp->fullCData(oldp+9,((0xffU & vlSelf->io_pc_bits)),8);
    bufp->fullBit(oldp+10,(1U));
}
