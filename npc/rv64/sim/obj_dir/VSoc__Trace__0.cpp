// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


void VSoc___024root__trace_chg_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSoc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_top_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSoc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSoc___024root__trace_chg_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Soc__DOT__ram__DOT__inst_valid));
        bufp->chgIData(oldp+1,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                 ? ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                     [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0] 
                                     << 0x18U) | ((
                                                   vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                   [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0] 
                                                   << 0x10U) 
                                                  | ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                      [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0] 
                                                      << 8U) 
                                                     | vlSelf->Soc__DOT__ram__DOT__SyncMem
                                                     [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0])))
                                 : 0U)),32);
        bufp->chgBit(oldp+2,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+3,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
        bufp->chgQData(oldp+5,((vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
                                - 0x80000000ULL)),64);
        bufp->chgIData(oldp+7,(((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                 ? ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
                                     ? ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                         [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0] 
                                         << 0x18U) 
                                        | ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                            [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0] 
                                            << 0x10U) 
                                           | ((vlSelf->Soc__DOT__ram__DOT__SyncMem
                                               [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0] 
                                               << 8U) 
                                              | vlSelf->Soc__DOT__ram__DOT__SyncMem
                                              [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0])))
                                     : 0U) : 0U)),32);
        bufp->chgBit(oldp+8,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0));
        bufp->chgCData(oldp+9,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0),8);
        bufp->chgCData(oldp+10,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                                [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+11,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0));
        bufp->chgCData(oldp+12,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0),8);
        bufp->chgCData(oldp+13,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                                [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0]),8);
        bufp->chgBit(oldp+14,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0));
        bufp->chgCData(oldp+15,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0),8);
        bufp->chgCData(oldp+16,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                                [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0]),8);
        bufp->chgBit(oldp+17,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0));
        bufp->chgCData(oldp+18,(vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0),8);
        bufp->chgCData(oldp+19,(vlSelf->Soc__DOT__ram__DOT__SyncMem
                                [vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0]),8);
    }
    bufp->chgBit(oldp+20,(vlSelf->clock));
    bufp->chgBit(oldp+21,(vlSelf->reset));
}

void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_cleanup\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
