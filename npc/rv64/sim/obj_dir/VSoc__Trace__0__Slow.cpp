// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


VL_ATTR_COLD void VSoc___024root__trace_init_sub__TOP__0(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->pushNamePrefix("Soc ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->declBit(c+21,"core_clock", false,-1);
    tracep->declBit(c+22,"core_reset", false,-1);
    tracep->declBit(c+1,"core_io_ramio_dataOut_valid", false,-1);
    tracep->declBus(c+2,"core_io_ramio_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+3,"core_io_ramio_pc_valid", false,-1);
    tracep->declQuad(c+4,"core_io_ramio_pc_bits", false,-1, 63,0);
    tracep->declBit(c+21,"ram_clock", false,-1);
    tracep->declBit(c+1,"ram_io_dataOut_valid", false,-1);
    tracep->declBus(c+2,"ram_io_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+3,"ram_io_pc_valid", false,-1);
    tracep->declQuad(c+6,"ram_io_pc_bits", false,-1, 63,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->declBit(c+1,"io_ramio_dataOut_valid", false,-1);
    tracep->declBus(c+2,"io_ramio_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+3,"io_ramio_pc_valid", false,-1);
    tracep->declQuad(c+4,"io_ramio_pc_bits", false,-1, 63,0);
    tracep->declBus(c+8,"interact_inst", false,-1, 31,0);
    tracep->declBit(c+21,"interact_clk", false,-1);
    tracep->declBit(c+21,"fetch_clock", false,-1);
    tracep->declBit(c+22,"fetch_reset", false,-1);
    tracep->declBit(c+3,"fetch_io_pc_valid", false,-1);
    tracep->declQuad(c+4,"fetch_io_pc_bits", false,-1, 63,0);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+4,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+3,"started", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interact ");
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->declBit(c+21,"clk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+1,"io_dataOut_valid", false,-1);
    tracep->declBus(c+2,"io_dataOut_bits", false,-1, 31,0);
    tracep->declBit(c+3,"io_pc_valid", false,-1);
    tracep->declQuad(c+6,"io_pc_bits", false,-1, 63,0);
    tracep->declBit(c+9,"SyncMem_io_dataOut_bits_MPORT_en", false,-1);
    tracep->declBus(c+10,"SyncMem_io_dataOut_bits_MPORT_addr", false,-1, 7,0);
    tracep->declBus(c+11,"SyncMem_io_dataOut_bits_MPORT_data", false,-1, 7,0);
    tracep->declBit(c+12,"SyncMem_io_dataOut_bits_MPORT_1_en", false,-1);
    tracep->declBus(c+13,"SyncMem_io_dataOut_bits_MPORT_1_addr", false,-1, 7,0);
    tracep->declBus(c+14,"SyncMem_io_dataOut_bits_MPORT_1_data", false,-1, 7,0);
    tracep->declBit(c+15,"SyncMem_io_dataOut_bits_MPORT_2_en", false,-1);
    tracep->declBus(c+16,"SyncMem_io_dataOut_bits_MPORT_2_addr", false,-1, 7,0);
    tracep->declBus(c+17,"SyncMem_io_dataOut_bits_MPORT_2_data", false,-1, 7,0);
    tracep->declBit(c+18,"SyncMem_io_dataOut_bits_MPORT_3_en", false,-1);
    tracep->declBus(c+19,"SyncMem_io_dataOut_bits_MPORT_3_addr", false,-1, 7,0);
    tracep->declBus(c+20,"SyncMem_io_dataOut_bits_MPORT_3_data", false,-1, 7,0);
    tracep->declBit(c+9,"SyncMem_io_dataOut_bits_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+10,"SyncMem_io_dataOut_bits_MPORT_addr_pipe_0", false,-1, 7,0);
    tracep->declBit(c+12,"SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0", false,-1);
    tracep->declBus(c+13,"SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0", false,-1, 7,0);
    tracep->declBit(c+15,"SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0", false,-1);
    tracep->declBus(c+16,"SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0", false,-1, 7,0);
    tracep->declBit(c+18,"SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0", false,-1);
    tracep->declBus(c+19,"SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0", false,-1, 7,0);
    tracep->declBit(c+1,"inst_valid", false,-1);
    tracep->declBus(c+23,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSoc___024root__trace_init_top(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_init_top\n"); );
    // Body
    VSoc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSoc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSoc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSoc___024root__trace_register(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSoc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSoc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSoc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSoc___024root__trace_full_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSoc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_full_top_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSoc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSoc___024root__trace_full_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Soc__DOT__ram__DOT__inst_valid));
    bufp->fullIData(oldp+2,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                              ? ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                  [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0] 
                                  << 0x18U) | ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0] 
                                                << 0x10U) 
                                               | ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                   [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0] 
                                                   << 8U) 
                                                  | vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                  [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0])))
                              : 0U)),32);
    bufp->fullBit(oldp+3,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
    bufp->fullQData(oldp+4,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
    bufp->fullQData(oldp+6,((vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
                             - 0x80000000ULL)),64);
    bufp->fullIData(oldp+8,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                              ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                  ? ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                      [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0] 
                                      << 0x18U) | (
                                                   (vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                    [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0] 
                                                    << 0x10U) 
                                                   | ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                       [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0] 
                                                       << 8U) 
                                                      | vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                      [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0])))
                                  : 0U) : 0U)),32);
    bufp->fullBit(oldp+9,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0));
    bufp->fullCData(oldp+10,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0),8);
    bufp->fullCData(oldp+11,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                             [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+12,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0));
    bufp->fullCData(oldp+13,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0),8);
    bufp->fullCData(oldp+14,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                             [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0]),8);
    bufp->fullBit(oldp+15,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0));
    bufp->fullCData(oldp+16,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0),8);
    bufp->fullCData(oldp+17,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                             [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0]),8);
    bufp->fullBit(oldp+18,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0));
    bufp->fullCData(oldp+19,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0),8);
    bufp->fullCData(oldp+20,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                             [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0]),8);
    bufp->fullBit(oldp+21,(vlSelf->clock));
    bufp->fullBit(oldp+22,(vlSelf->reset));
    bufp->fullIData(oldp+23,(vlSelf->Soc__DOT__ram__DOT__initvar),32);
}
