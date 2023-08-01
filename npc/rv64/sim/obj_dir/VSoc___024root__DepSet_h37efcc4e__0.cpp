// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"

#include "VSoc___024root.h"

void VSoc___024root___eval_act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x100073U == ((IData)(vlSelf->Soc__DOT__ram__DOT__inst_valid)
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
                                        : 0U) : 0U)))) {
        VL_WRITEF("ebreak hit!\n");
        VL_FINISH_MT("vsrc/Interact.v", 9, "");
    }
    if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0 = 1U;
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0 = 1U;
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0 = 1U;
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0 = 1U;
        vlSelf->Soc__DOT__ram__DOT__inst_valid = 1U;
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0 
            = (0xffU & ((IData)(3U) + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_addr_pipe_0 
            = (0xffU & ((IData)(2U) + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_addr_pipe_0 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_addr_pipe_0 
            = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc));
    } else {
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_3_en_pipe_0 = 0U;
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_1_en_pipe_0 = 0U;
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_2_en_pipe_0 = 0U;
        vlSelf->Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0 = 0U;
        vlSelf->Soc__DOT__ram__DOT__inst_valid = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000ULL;
    } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
        vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_1;
    }
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_1 
        = (4ULL + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started 
        = (1U & (~ (IData)(vlSelf->reset)));
}

void VSoc___024root___eval_nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSoc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSoc___024root___eval_triggers__act(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf);
#endif  // VL_DEBUG

void VSoc___024root___eval(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval\n"); );
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
            VSoc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSoc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/Soc.v", 246, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSoc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSoc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Soc.v", 246, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSoc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSoc___024root___eval_debug_assertions(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
