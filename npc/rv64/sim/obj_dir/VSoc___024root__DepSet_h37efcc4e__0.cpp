// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___ico_sequent__TOP__0__PROF__Soc__l4652(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ico_sequent__TOP__0__PROF__Soc__l4652\n"); );
    // Body
    vlSelf->Soc__DOT____Vcellinp__sram__ARESETn = (1U 
                                                   & (~ (IData)(vlSelf->reset)));
}

void VSoc___024root___eval_ico(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VSoc___024root___ico_sequent__TOP__0__PROF__Soc__l4652(vlSelf);
    }
}

void VSoc___024root___eval_act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0__PROF__Soc__l4904(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0__PROF__Soc__l4904\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__sram__DOT__w_count = vlSelf->Soc__DOT__sram__DOT__w_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__1__PROF__Soc__l4975(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__1__PROF__Soc__l4975\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = vlSelf->Soc__DOT__sram__DOT__r_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__2__PROF__Soc__l4976(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__2__PROF__Soc__l4976\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__sram__DOT__rlast = vlSelf->Soc__DOT__sram__DOT__rlast;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__8__PROF__Soc__l4922(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__8__PROF__Soc__l4922\n"); );
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (vlSelf->Soc__DOT__sram__DOT__need_resp) {
            vlSelf->Soc__DOT__sram__DOT__bresp = 0U;
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__9__PROF__Soc__l4883(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__9__PROF__Soc__l4883\n"); );
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2) {
            vlSelf->Soc__DOT__sram__DOT__awaddr_buffer 
                = vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__awaddr_buffer = 0U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__10__PROF__Soc__l4922(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__10__PROF__Soc__l4922\n"); );
    // Body
    if (vlSelf->Soc__DOT____Vcellinp__sram__ARESETn) {
        if (vlSelf->Soc__DOT__sram__DOT__need_resp) {
            vlSelf->Soc__DOT__sram__DOT__bvalid = 1U;
        } else if (vlSelf->Soc__DOT___sram_S_AXI_BVALID) {
            vlSelf->Soc__DOT__sram__DOT__bvalid = 0U;
        }
    } else {
        vlSelf->Soc__DOT__sram__DOT__bvalid = 0U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__11__PROF__Soc__l4904(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__11__PROF__Soc__l4904\n"); );
    // Body
    vlSelf->Soc__DOT__sram__DOT__w_count = vlSelf->__Vdly__Soc__DOT__sram__DOT__w_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__15__PROF__Soc__l4868(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__15__PROF__Soc__l4868\n"); );
    // Body
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = vlSelf->Soc__DOT__sram__DOT__bvalid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__16__PROF__Soc__l889(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__16__PROF__Soc__l889\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__17__PROF__Soc__l2099(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__17__PROF__Soc__l2099\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__18__PROF__Soc__l267(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__18__PROF__Soc__l267\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__19__PROF__Soc__l266(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__19__PROF__Soc__l266\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
        = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__20__PROF__Soc__l2097(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__20__PROF__Soc__l2097\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__21__PROF__Soc__l2098(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__21__PROF__Soc__l2098\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__22__PROF__Soc__l1177(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__22__PROF__Soc__l1177\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__23__PROF__Soc__l1771(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__23__PROF__Soc__l1771\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP 
        = vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__24__PROF__Soc__l212(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__24__PROF__Soc__l212\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__25__PROF__Soc__l214(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__25__PROF__Soc__l214\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__26__PROF__Soc__l216(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__26__PROF__Soc__l216\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__27__PROF__Soc__l218(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__27__PROF__Soc__l218\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__28__PROF__Soc__l1946(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__28__PROF__Soc__l1946\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__trap__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__trap__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__29__PROF__Soc__l212(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__29__PROF__Soc__l212\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__30__PROF__Soc__l214(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__30__PROF__Soc__l214\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__31__PROF__Soc__l216(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__31__PROF__Soc__l216\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__32__PROF__Soc__l218(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__32__PROF__Soc__l218\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__33__PROF__Soc__l3672(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__33__PROF__Soc__l3672\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__34__PROF__Soc__l1333(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__34__PROF__Soc__l1333\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__35__PROF__Soc__l3667(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__35__PROF__Soc__l3667\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__36__PROF__Soc__l3666(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__36__PROF__Soc__l3666\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__37__PROF__Soc__l887(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__37__PROF__Soc__l887\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__38__PROF__Soc__l886(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__38__PROF__Soc__l886\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__39__PROF__Soc__l883(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__39__PROF__Soc__l883\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__40__PROF__Soc__l888(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__40__PROF__Soc__l888\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__42__PROF__Soc__l882(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__42__PROF__Soc__l882\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__43__PROF__Soc__l881(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__43__PROF__Soc__l881\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__44__PROF__Soc__l3134(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__44__PROF__Soc__l3134\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__45__PROF__Soc__l3136(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__45__PROF__Soc__l3136\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__46__PROF__Soc__l3123(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__46__PROF__Soc__l3123\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__dirty 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__47__PROF__Soc__l3135(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__47__PROF__Soc__l3135\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__49__PROF__Soc__l3124(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__49__PROF__Soc__l3124\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__replace 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__50__PROF__Soc__l3125(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__50__PROF__Soc__l3125\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__51__PROF__Soc__l3122(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__51__PROF__Soc__l3122\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__valid 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__52__PROF__Soc__l3121(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__52__PROF__Soc__l3121\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__53__PROF__Soc__l1332(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__53__PROF__Soc__l1332\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__54__PROF__Soc__l2100(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__54__PROF__Soc__l2100\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_count 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__55__PROF__Soc__l2101(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__55__PROF__Soc__l2101\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU] 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__56__PROF__Soc__l1467(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__56__PROF__Soc__l1467\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__clint__DOT__MTIME 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__57__PROF__Soc__l1466(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__57__PROF__Soc__l1466\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__clint__DOT__MTIMECMP 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__58__PROF__Soc__l1465(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__58__PROF__Soc__l1465\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__clint__DOT__MSIP 
        = vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__59__PROF__Soc__l2096(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__59__PROF__Soc__l2096\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__60__PROF__Soc__l725(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__60__PROF__Soc__l725\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__61__PROF__Soc__l724(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__61__PROF__Soc__l724\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__62__PROF__Soc__l723(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__62__PROF__Soc__l723\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__63__PROF__Soc__l722(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__63__PROF__Soc__l722\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__64__PROF__Soc__l721(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__64__PROF__Soc__l721\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__65__PROF__Soc__l720(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__65__PROF__Soc__l720\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U];
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__66__PROF__Soc__l717(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__66__PROF__Soc__l717\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid 
        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__67__PROF__Soc__l1331(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__67__PROF__Soc__l1331\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer 
        = vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__68__PROF__Soc__l3134(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__68__PROF__Soc__l3134\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__69__PROF__Soc__l3136(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__69__PROF__Soc__l3136\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__70__PROF__Soc__l3123(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__70__PROF__Soc__l3123\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__71__PROF__Soc__l3135(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__71__PROF__Soc__l3135\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__73__PROF__Soc__l3122(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__73__PROF__Soc__l3122\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__valid 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__74__PROF__Soc__l3124(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__74__PROF__Soc__l3124\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__replace 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__75__PROF__Soc__l3121(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__75__PROF__Soc__l3121\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__state 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__76__PROF__Soc__l3125(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__76__PROF__Soc__l3125\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__inDataOneArray 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__77__PROF__Soc__l4777(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__77__PROF__Soc__l4777\n"); );
    // Body
    vlSelf->__Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
        = vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__79__PROF__Soc__l78(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__79__PROF__Soc__l78\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__80__PROF__Soc__l80(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__80__PROF__Soc__l80\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__81__PROF__Soc__l82(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__81__PROF__Soc__l82\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__82__PROF__Soc__l84(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__82__PROF__Soc__l84\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__83__PROF__Soc__l86(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__83__PROF__Soc__l86\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__84__PROF__Soc__l88(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__84__PROF__Soc__l88\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__85__PROF__Soc__l78(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__85__PROF__Soc__l78\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__86__PROF__Soc__l80(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__86__PROF__Soc__l80\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__87__PROF__Soc__l82(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__87__PROF__Soc__l82\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__88__PROF__Soc__l84(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__88__PROF__Soc__l84\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__89__PROF__Soc__l86(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__89__PROF__Soc__l86\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__90__PROF__Soc__l88(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__90__PROF__Soc__l88\n"); );
    // Body
    vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 = 0U;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__128__PROF__Soc__l880(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__128__PROF__Soc__l880\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = 0U;
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = 0U;
    } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4)))) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)));
        }
    } else if ((1U & (~ ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10))))) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__129__PROF__Soc__l2094(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__129__PROF__Soc__l2094\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1)))) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__130__PROF__Soc__l264(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__130__PROF__Soc__l264\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc = 0x80000000U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc;
    } else if (vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
            = vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
            = ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc);
    } else {
        vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3)
                ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                    ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                        ? vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7
                        : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))
                : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc);
        if (vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) {
            vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__131__PROF__Soc__l2094(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__131__PROF__Soc__l2094\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1)))) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__132__PROF__Soc__l2094(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__132__PROF__Soc__l2094\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1)))) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)) 
               & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6) 
                   & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5)) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__133__PROF__Soc__l211(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__133__PROF__Soc__l211\n"); );
    // Body
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_27) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__134__PROF__Soc__l1943(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__134__PROF__Soc__l1943\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__trap__DOT__state = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__dereg_has_inst) 
                | (IData)(vlSelf->Soc__DOT__core__DOT__emreg_has_inst)) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
        vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 
            = (0x1c08c0U | ((((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2)
                               ? (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)
                               : 6U) << 0xfU) | ((((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2)
                                                    ? (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)
                                                    : 2U) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2)
                                                     ? 1U
                                                     : 
                                                    ((0x30200073U 
                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7)
                                                       ? 1U
                                                       : (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__trap__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                ? (7U & (vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))
                : 0U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__135__PROF__Soc__l211(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__135__PROF__Soc__l211\n"); );
    // Body
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_27) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag;
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__136__PROF__Soc__l142(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__136__PROF__Soc__l142\n"); );
    // Body
    vlSelf->__Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = ((((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
             & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))) 
            & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
            ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
            : vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data);
    vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1 
        = vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr;
}

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__137__PROF__Soc__l2094(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__137__PROF__Soc__l2094\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_hdc6fb3d8__0;
    VlWide<4>/*127:0*/ __Vtemp_hecd27c85__0;
    VlWide<68>/*2175:0*/ __Vtemp_hdcbe4efb__0;
    VlWide<70>/*2239:0*/ __Vtemp_h331304b1__0;
    VlWide<26>/*831:0*/ __Vtemp_hefa07e10__0;
    VlWide<96>/*3071:0*/ __Vtemp_h123585d4__0;
    VlWide<6>/*191:0*/ __Vtemp_h5ffbe826__0;
    VlWide<102>/*3263:0*/ __Vtemp_h017724ab__0;
    VlWide<104>/*3327:0*/ __Vtemp_h0426cd2b__0;
    VlWide<24>/*767:0*/ __Vtemp_h35ad81be__0;
    VlWide<128>/*4095:0*/ __Vtemp_h5f848f8d__0;
    VlWide<8>/*255:0*/ __Vtemp_hc71fcde0__0;
    VlWide<136>/*4351:0*/ __Vtemp_h06182045__0;
    VlWide<138>/*4415:0*/ __Vtemp_h8ea0b821__0;
    VlWide<22>/*703:0*/ __Vtemp_h20d53c54__0;
    VlWide<160>/*5119:0*/ __Vtemp_h8f8cb9b9__0;
    VlWide<10>/*319:0*/ __Vtemp_he4694692__0;
    VlWide<170>/*5439:0*/ __Vtemp_h038a5581__0;
    VlWide<172>/*5503:0*/ __Vtemp_h3743c1c2__0;
    VlWide<20>/*639:0*/ __Vtemp_ha452ccb3__0;
    VlWide<192>/*6143:0*/ __Vtemp_h886f4724__0;
    VlWide<12>/*383:0*/ __Vtemp_hb2d58916__0;
    VlWide<204>/*6527:0*/ __Vtemp_h1fd75e93__0;
    VlWide<206>/*6591:0*/ __Vtemp_h08e3032a__0;
    VlWide<18>/*575:0*/ __Vtemp_hd0d4d3d7__0;
    VlWide<224>/*7167:0*/ __Vtemp_hb8d83725__0;
    VlWide<14>/*447:0*/ __Vtemp_h49387257__0;
    VlWide<238>/*7615:0*/ __Vtemp_hb1479439__0;
    VlWide<240>/*7679:0*/ __Vtemp_h6f9232d3__0;
    VlWide<16>/*511:0*/ __Vtemp_h6cd66365__0;
    VlWide<256>/*8191:0*/ __Vtemp_h9f092cdb__0;
    VlWide<16>/*511:0*/ __Vtemp_h6cf52845__0;
    VlWide<272>/*8703:0*/ __Vtemp_hae6f07a9__0;
    VlWide<274>/*8767:0*/ __Vtemp_hc39d7f42__0;
    VlWide<14>/*447:0*/ __Vtemp_h6eab26db__0;
    VlWide<288>/*9215:0*/ __Vtemp_h5a0e961e__0;
    VlWide<18>/*575:0*/ __Vtemp_hd130b52b__0;
    VlWide<306>/*9791:0*/ __Vtemp_hde5b10a6__0;
    VlWide<308>/*9855:0*/ __Vtemp_hc8989180__0;
    VlWide<12>/*383:0*/ __Vtemp_hb2febcee__0;
    VlWide<320>/*10239:0*/ __Vtemp_h7192c0fc__0;
    VlWide<20>/*639:0*/ __Vtemp_ha4b92c4b__0;
    VlWide<340>/*10879:0*/ __Vtemp_h6a7d6a02__0;
    VlWide<342>/*10943:0*/ __Vtemp_h131671e6__0;
    VlWide<10>/*319:0*/ __Vtemp_he517779e__0;
    VlWide<352>/*11263:0*/ __Vtemp_h6e7fa3a0__0;
    VlWide<22>/*703:0*/ __Vtemp_h2153a290__0;
    VlWide<374>/*11967:0*/ __Vtemp_h4d1252de__0;
    VlWide<376>/*12031:0*/ __Vtemp_h32344650__0;
    VlWide<8>/*255:0*/ __Vtemp_hc750a8b0__0;
    VlWide<384>/*12287:0*/ __Vtemp_hf58a116c__0;
    VlWide<24>/*767:0*/ __Vtemp_h361ea36e__0;
    VlWide<408>/*13055:0*/ __Vtemp_ha860f115__0;
    VlWide<410>/*13119:0*/ __Vtemp_hd9ae11de__0;
    VlWide<6>/*191:0*/ __Vtemp_h7017038a__0;
    VlWide<416>/*13311:0*/ __Vtemp_h1e9174d0__0;
    VlWide<26>/*831:0*/ __Vtemp_hefb27604__0;
    VlWide<442>/*14143:0*/ __Vtemp_hac1b5de2__0;
    VlWide<444>/*14207:0*/ __Vtemp_h9e23c45f__0;
    VlWide<4>/*127:0*/ __Vtemp_hed65610d__0;
    VlWide<448>/*14335:0*/ __Vtemp_hb1aa529c__0;
    VlWide<28>/*895:0*/ __Vtemp_h5ba78f94__0;
    VlWide<476>/*15231:0*/ __Vtemp_h442bbfa2__0;
    VlWide<478>/*15295:0*/ __Vtemp_h031c80d3__0;
    VlWide<480>/*15359:0*/ __Vtemp_hf91dcad2__0;
    VlWide<30>/*959:0*/ __Vtemp_hcd8dfef1__0;
    VlWide<510>/*16319:0*/ __Vtemp_hd1d2be61__0;
    VlWide<512>/*16383:0*/ __Vtemp_h219c05b1__0;
    VlWide<64>/*2047:0*/ __Vtemp_h4e1367ee__0;
    VlWide<96>/*3071:0*/ __Vtemp_h10021897__0;
    VlWide<128>/*4095:0*/ __Vtemp_hbb309a7e__0;
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_count = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU] = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_14 
            = (1U & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7)) 
                     | (~ (IData)((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))))));
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_15 
            = (((((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_10))
                  ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                << 6U) | (((((((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T)) 
                               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2))) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7)) 
                             & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9))
                             ? 3U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                           << 4U) | ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4)
                                        ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                      << 2U) | ((8U 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                 ? 
                                                ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                                   >> 3U) 
                                                  & ((1U 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                      ? (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw)
                                                       : 
                                                      (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose) 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw)))))
                                                  ? 2U
                                                  : 1U)
                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_15) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 1U))));
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_16 
            = ((0xf000U & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_14)
                             ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count)
                             : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_10)
                                 ? 0U : ((IData)(vlSelf->Soc__DOT__sram__DOT__rvalid)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count))
                                          : (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count)))) 
                           << 0xcU)) | (0xfffU & (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                      << 4U) 
                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count)))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_count 
            = (0xfU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_16) 
                       >> (0xfU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                   << 2U))));
        __Vtemp_hdc6fb3d8__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_hdc6fb3d8__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_hdc6fb3d8__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hdc6fb3d8__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_hdc6fb3d8__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_hdc6fb3d8__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_hdc6fb3d8__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hdc6fb3d8__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_hdc6fb3d8__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_hdc6fb3d8__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_hdc6fb3d8__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_hdc6fb3d8__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_hdc6fb3d8__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_hdc6fb3d8__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_hdc6fb3d8__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_hdc6fb3d8__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_hdc6fb3d8__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_hdc6fb3d8__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_hdc6fb3d8__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_hdc6fb3d8__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_hdc6fb3d8__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_hdc6fb3d8__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_hdc6fb3d8__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_hdc6fb3d8__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_hdc6fb3d8__0[0x18U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hdc6fb3d8__0[0x19U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_hdc6fb3d8__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_hdc6fb3d8__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_hdc6fb3d8__0[0x1cU] = (IData)(vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_hdc6fb3d8__0[0x1dU] = (IData)((vlSelf->Soc__DOT__sram__DOT__rdata 
                                               >> 0x20U));
        __Vtemp_hdc6fb3d8__0[0x1eU] = (IData)((((QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU]))));
        __Vtemp_hdc6fb3d8__0[0x1fU] = (IData)(((((QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU]))) 
                                               >> 0x20U));
        __Vtemp_hdc6fb3d8__0[0x20U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_hdc6fb3d8__0[0x21U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_hdc6fb3d8__0[0x22U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hdc6fb3d8__0[0x23U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_hdc6fb3d8__0[0x24U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_hdc6fb3d8__0[0x25U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_hdc6fb3d8__0[0x26U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hdc6fb3d8__0[0x27U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_hdc6fb3d8__0[0x28U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_hdc6fb3d8__0[0x29U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_hdc6fb3d8__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_hdc6fb3d8__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_hdc6fb3d8__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_hdc6fb3d8__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_hdc6fb3d8__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_hdc6fb3d8__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_hdc6fb3d8__0[0x30U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_hdc6fb3d8__0[0x31U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_hdc6fb3d8__0[0x32U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_hdc6fb3d8__0[0x33U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_hdc6fb3d8__0[0x34U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_hdc6fb3d8__0[0x35U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_hdc6fb3d8__0[0x36U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_hdc6fb3d8__0[0x37U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_hdc6fb3d8__0[0x38U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hdc6fb3d8__0[0x39U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_hdc6fb3d8__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_hdc6fb3d8__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_hdc6fb3d8__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_hdc6fb3d8__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_hdc6fb3d8__0[0x3eU] = (IData)(vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_hdc6fb3d8__0[0x3fU] = (IData)((vlSelf->Soc__DOT__sram__DOT__rdata 
                                               >> 0x20U));
        __Vtemp_hecd27c85__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_hecd27c85__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_hecd27c85__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_hecd27c85__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(2176,2048,128, __Vtemp_hdcbe4efb__0, __Vtemp_hdc6fb3d8__0, __Vtemp_hecd27c85__0);
        VL_CONCAT_WWQ(2240,2176,64, __Vtemp_h331304b1__0, __Vtemp_hdcbe4efb__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_hefa07e10__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_hefa07e10__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_hefa07e10__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hefa07e10__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_hefa07e10__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_hefa07e10__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_hefa07e10__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hefa07e10__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_hefa07e10__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_hefa07e10__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_hefa07e10__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_hefa07e10__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_hefa07e10__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_hefa07e10__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_hefa07e10__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_hefa07e10__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_hefa07e10__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_hefa07e10__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_hefa07e10__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_hefa07e10__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_hefa07e10__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_hefa07e10__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_hefa07e10__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_hefa07e10__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_hefa07e10__0[0x18U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hefa07e10__0[0x19U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        VL_CONCAT_WWW(3072,2240,832, __Vtemp_h123585d4__0, __Vtemp_h331304b1__0, __Vtemp_hefa07e10__0);
        __Vtemp_h5ffbe826__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_h5ffbe826__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_h5ffbe826__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_h5ffbe826__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_h5ffbe826__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_h5ffbe826__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(3264,3072,192, __Vtemp_h017724ab__0, __Vtemp_h123585d4__0, __Vtemp_h5ffbe826__0);
        VL_CONCAT_WWQ(3328,3264,64, __Vtemp_h0426cd2b__0, __Vtemp_h017724ab__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_h35ad81be__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_h35ad81be__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_h35ad81be__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_h35ad81be__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_h35ad81be__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_h35ad81be__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_h35ad81be__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_h35ad81be__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_h35ad81be__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_h35ad81be__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_h35ad81be__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h35ad81be__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h35ad81be__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h35ad81be__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_h35ad81be__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_h35ad81be__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_h35ad81be__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_h35ad81be__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_h35ad81be__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h35ad81be__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h35ad81be__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h35ad81be__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_h35ad81be__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_h35ad81be__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        VL_CONCAT_WWW(4096,3328,768, __Vtemp_h5f848f8d__0, __Vtemp_h0426cd2b__0, __Vtemp_h35ad81be__0);
        __Vtemp_hc71fcde0__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hc71fcde0__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_hc71fcde0__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_hc71fcde0__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_hc71fcde0__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_hc71fcde0__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_hc71fcde0__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_hc71fcde0__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(4352,4096,256, __Vtemp_h06182045__0, __Vtemp_h5f848f8d__0, __Vtemp_hc71fcde0__0);
        VL_CONCAT_WWQ(4416,4352,64, __Vtemp_h8ea0b821__0, __Vtemp_h06182045__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_h20d53c54__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_h20d53c54__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_h20d53c54__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_h20d53c54__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_h20d53c54__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_h20d53c54__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_h20d53c54__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_h20d53c54__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_h20d53c54__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_h20d53c54__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_h20d53c54__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h20d53c54__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h20d53c54__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h20d53c54__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_h20d53c54__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_h20d53c54__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_h20d53c54__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_h20d53c54__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_h20d53c54__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h20d53c54__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h20d53c54__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h20d53c54__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        VL_CONCAT_WWW(5120,4416,704, __Vtemp_h8f8cb9b9__0, __Vtemp_h8ea0b821__0, __Vtemp_h20d53c54__0);
        __Vtemp_he4694692__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_he4694692__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_he4694692__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_he4694692__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_he4694692__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_he4694692__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_he4694692__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_he4694692__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_he4694692__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_he4694692__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(5440,5120,320, __Vtemp_h038a5581__0, __Vtemp_h8f8cb9b9__0, __Vtemp_he4694692__0);
        VL_CONCAT_WWQ(5504,5440,64, __Vtemp_h3743c1c2__0, __Vtemp_h038a5581__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_ha452ccb3__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_ha452ccb3__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_ha452ccb3__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_ha452ccb3__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_ha452ccb3__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_ha452ccb3__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_ha452ccb3__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_ha452ccb3__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_ha452ccb3__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_ha452ccb3__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_ha452ccb3__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_ha452ccb3__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_ha452ccb3__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_ha452ccb3__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_ha452ccb3__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_ha452ccb3__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_ha452ccb3__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_ha452ccb3__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_ha452ccb3__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_ha452ccb3__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        VL_CONCAT_WWW(6144,5504,640, __Vtemp_h886f4724__0, __Vtemp_h3743c1c2__0, __Vtemp_ha452ccb3__0);
        __Vtemp_hb2d58916__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_hb2d58916__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_hb2d58916__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_hb2d58916__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_hb2d58916__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hb2d58916__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_hb2d58916__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_hb2d58916__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_hb2d58916__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_hb2d58916__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_hb2d58916__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_hb2d58916__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(6528,6144,384, __Vtemp_h1fd75e93__0, __Vtemp_h886f4724__0, __Vtemp_hb2d58916__0);
        VL_CONCAT_WWQ(6592,6528,64, __Vtemp_h08e3032a__0, __Vtemp_h1fd75e93__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_hd0d4d3d7__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_hd0d4d3d7__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_hd0d4d3d7__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hd0d4d3d7__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_hd0d4d3d7__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_hd0d4d3d7__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_hd0d4d3d7__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hd0d4d3d7__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_hd0d4d3d7__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_hd0d4d3d7__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_hd0d4d3d7__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_hd0d4d3d7__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_hd0d4d3d7__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_hd0d4d3d7__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_hd0d4d3d7__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_hd0d4d3d7__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_hd0d4d3d7__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_hd0d4d3d7__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        VL_CONCAT_WWW(7168,6592,576, __Vtemp_hb8d83725__0, __Vtemp_h08e3032a__0, __Vtemp_hd0d4d3d7__0);
        __Vtemp_h49387257__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h49387257__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h49387257__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h49387257__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_h49387257__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_h49387257__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_h49387257__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_h49387257__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_h49387257__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_h49387257__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_h49387257__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_h49387257__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_h49387257__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_h49387257__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(7616,7168,448, __Vtemp_hb1479439__0, __Vtemp_hb8d83725__0, __Vtemp_h49387257__0);
        VL_CONCAT_WWQ(7680,7616,64, __Vtemp_h6f9232d3__0, __Vtemp_hb1479439__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_h6cd66365__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_h6cd66365__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_h6cd66365__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_h6cd66365__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_h6cd66365__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_h6cd66365__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_h6cd66365__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_h6cd66365__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_h6cd66365__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_h6cd66365__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_h6cd66365__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h6cd66365__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h6cd66365__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h6cd66365__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_h6cd66365__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_h6cd66365__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        VL_CONCAT_WWW(8192,7680,512, __Vtemp_h9f092cdb__0, __Vtemp_h6f9232d3__0, __Vtemp_h6cd66365__0);
        __Vtemp_h6cf52845__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_h6cf52845__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_h6cf52845__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h6cf52845__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h6cf52845__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h6cf52845__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_h6cf52845__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_h6cf52845__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_h6cf52845__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_h6cf52845__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_h6cf52845__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_h6cf52845__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_h6cf52845__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_h6cf52845__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_h6cf52845__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_h6cf52845__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(8704,8192,512, __Vtemp_hae6f07a9__0, __Vtemp_h9f092cdb__0, __Vtemp_h6cf52845__0);
        VL_CONCAT_WWQ(8768,8704,64, __Vtemp_hc39d7f42__0, __Vtemp_hae6f07a9__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_h6eab26db__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_h6eab26db__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_h6eab26db__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_h6eab26db__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_h6eab26db__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_h6eab26db__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_h6eab26db__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_h6eab26db__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_h6eab26db__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_h6eab26db__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_h6eab26db__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h6eab26db__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h6eab26db__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h6eab26db__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        VL_CONCAT_WWW(9216,8768,448, __Vtemp_h5a0e961e__0, __Vtemp_hc39d7f42__0, __Vtemp_h6eab26db__0);
        __Vtemp_hd130b52b__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_hd130b52b__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_hd130b52b__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_hd130b52b__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_hd130b52b__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_hd130b52b__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_hd130b52b__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_hd130b52b__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_hd130b52b__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_hd130b52b__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_hd130b52b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hd130b52b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_hd130b52b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_hd130b52b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_hd130b52b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_hd130b52b__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_hd130b52b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_hd130b52b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(9792,9216,576, __Vtemp_hde5b10a6__0, __Vtemp_h5a0e961e__0, __Vtemp_hd130b52b__0);
        VL_CONCAT_WWQ(9856,9792,64, __Vtemp_hc8989180__0, __Vtemp_hde5b10a6__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_hb2febcee__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_hb2febcee__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_hb2febcee__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hb2febcee__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_hb2febcee__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_hb2febcee__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_hb2febcee__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hb2febcee__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_hb2febcee__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_hb2febcee__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_hb2febcee__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_hb2febcee__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        VL_CONCAT_WWW(10240,9856,384, __Vtemp_h7192c0fc__0, __Vtemp_hc8989180__0, __Vtemp_hb2febcee__0);
        __Vtemp_ha4b92c4b__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_ha4b92c4b__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_ha4b92c4b__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_ha4b92c4b__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_ha4b92c4b__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_ha4b92c4b__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_ha4b92c4b__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_ha4b92c4b__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_ha4b92c4b__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_ha4b92c4b__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_ha4b92c4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_ha4b92c4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_ha4b92c4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_ha4b92c4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_ha4b92c4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_ha4b92c4b__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_ha4b92c4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_ha4b92c4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_ha4b92c4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_ha4b92c4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(10880,10240,640, __Vtemp_h6a7d6a02__0, __Vtemp_h7192c0fc__0, __Vtemp_ha4b92c4b__0);
        VL_CONCAT_WWQ(10944,10880,64, __Vtemp_h131671e6__0, __Vtemp_h6a7d6a02__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_he517779e__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_he517779e__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_he517779e__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_he517779e__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_he517779e__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_he517779e__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_he517779e__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_he517779e__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_he517779e__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_he517779e__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        VL_CONCAT_WWW(11264,10944,320, __Vtemp_h6e7fa3a0__0, __Vtemp_h131671e6__0, __Vtemp_he517779e__0);
        __Vtemp_h2153a290__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h2153a290__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h2153a290__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h2153a290__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_h2153a290__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_h2153a290__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_h2153a290__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_h2153a290__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_h2153a290__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h2153a290__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h2153a290__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h2153a290__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_h2153a290__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_h2153a290__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_h2153a290__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_h2153a290__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_h2153a290__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_h2153a290__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_h2153a290__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_h2153a290__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_h2153a290__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_h2153a290__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(11968,11264,704, __Vtemp_h4d1252de__0, __Vtemp_h6e7fa3a0__0, __Vtemp_h2153a290__0);
        VL_CONCAT_WWQ(12032,11968,64, __Vtemp_h32344650__0, __Vtemp_h4d1252de__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_hc750a8b0__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_hc750a8b0__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_hc750a8b0__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hc750a8b0__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_hc750a8b0__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_hc750a8b0__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_hc750a8b0__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hc750a8b0__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        VL_CONCAT_WWW(12288,12032,256, __Vtemp_hf58a116c__0, __Vtemp_h32344650__0, __Vtemp_hc750a8b0__0);
        __Vtemp_h361ea36e__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_h361ea36e__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_h361ea36e__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h361ea36e__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h361ea36e__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h361ea36e__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_h361ea36e__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_h361ea36e__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_h361ea36e__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_h361ea36e__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_h361ea36e__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h361ea36e__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h361ea36e__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h361ea36e__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_h361ea36e__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_h361ea36e__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_h361ea36e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_h361ea36e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_h361ea36e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_h361ea36e__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_h361ea36e__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_h361ea36e__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_h361ea36e__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_h361ea36e__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(13056,12288,768, __Vtemp_ha860f115__0, __Vtemp_hf58a116c__0, __Vtemp_h361ea36e__0);
        VL_CONCAT_WWQ(13120,13056,64, __Vtemp_hd9ae11de__0, __Vtemp_ha860f115__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_h7017038a__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_h7017038a__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_h7017038a__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_h7017038a__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_h7017038a__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_h7017038a__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        VL_CONCAT_WWW(13312,13120,192, __Vtemp_h1e9174d0__0, __Vtemp_hd9ae11de__0, __Vtemp_h7017038a__0);
        __Vtemp_hefb27604__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hefb27604__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_hefb27604__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_hefb27604__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_hefb27604__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_hefb27604__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_hefb27604__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_hefb27604__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_hefb27604__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_hefb27604__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_hefb27604__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_hefb27604__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_hefb27604__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_hefb27604__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_hefb27604__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_hefb27604__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_hefb27604__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_hefb27604__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_hefb27604__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hefb27604__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_hefb27604__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_hefb27604__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_hefb27604__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_hefb27604__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_hefb27604__0[0x18U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_hefb27604__0[0x19U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(14144,13312,832, __Vtemp_hac1b5de2__0, __Vtemp_h1e9174d0__0, __Vtemp_hefb27604__0);
        VL_CONCAT_WWQ(14208,14144,64, __Vtemp_h9e23c45f__0, __Vtemp_hac1b5de2__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        __Vtemp_hed65610d__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_hed65610d__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_hed65610d__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hed65610d__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        VL_CONCAT_WWW(14336,14208,128, __Vtemp_hb1aa529c__0, __Vtemp_h9e23c45f__0, __Vtemp_hed65610d__0);
        __Vtemp_h5ba78f94__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_h5ba78f94__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_h5ba78f94__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_h5ba78f94__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_h5ba78f94__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_h5ba78f94__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_h5ba78f94__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h5ba78f94__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h5ba78f94__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h5ba78f94__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_h5ba78f94__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_h5ba78f94__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_h5ba78f94__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_h5ba78f94__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_h5ba78f94__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h5ba78f94__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h5ba78f94__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h5ba78f94__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_h5ba78f94__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_h5ba78f94__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_h5ba78f94__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_h5ba78f94__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_h5ba78f94__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_h5ba78f94__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_h5ba78f94__0[0x18U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_h5ba78f94__0[0x19U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_h5ba78f94__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_h5ba78f94__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(15232,14336,896, __Vtemp_h442bbfa2__0, __Vtemp_hb1aa529c__0, __Vtemp_h5ba78f94__0);
        VL_CONCAT_WWQ(15296,15232,64, __Vtemp_h031c80d3__0, __Vtemp_h442bbfa2__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        VL_CONCAT_WWQ(15360,15296,64, __Vtemp_hf91dcad2__0, __Vtemp_h031c80d3__0, 
                      (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U]))));
        __Vtemp_hcd8dfef1__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_hcd8dfef1__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_hcd8dfef1__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_hcd8dfef1__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_hcd8dfef1__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_hcd8dfef1__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_hcd8dfef1__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_hcd8dfef1__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_hcd8dfef1__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_hcd8dfef1__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_hcd8dfef1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_hcd8dfef1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_hcd8dfef1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_hcd8dfef1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_hcd8dfef1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_hcd8dfef1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_hcd8dfef1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_hcd8dfef1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_hcd8dfef1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_hcd8dfef1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_hcd8dfef1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_hcd8dfef1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_hcd8dfef1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_hcd8dfef1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_hcd8dfef1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_hcd8dfef1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_hcd8dfef1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_hcd8dfef1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_hcd8dfef1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_hcd8dfef1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        VL_CONCAT_WWW(16320,15360,960, __Vtemp_hd1d2be61__0, __Vtemp_hf91dcad2__0, __Vtemp_hcd8dfef1__0);
        VL_CONCAT_WWQ(16384,16320,64, __Vtemp_h219c05b1__0, __Vtemp_hd1d2be61__0, vlSelf->Soc__DOT__sram__DOT__rdata);
        VL_ASSIGN_W(16384,vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17, __Vtemp_h219c05b1__0);
        __Vtemp_h4e1367ee__0[0U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
        __Vtemp_h4e1367ee__0[1U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
        __Vtemp_h4e1367ee__0[2U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
        __Vtemp_h4e1367ee__0[3U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
        __Vtemp_h4e1367ee__0[4U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
        __Vtemp_h4e1367ee__0[5U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
        __Vtemp_h4e1367ee__0[6U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
        __Vtemp_h4e1367ee__0[7U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
        __Vtemp_h4e1367ee__0[8U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
        __Vtemp_h4e1367ee__0[9U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
        __Vtemp_h4e1367ee__0[0xaU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
        __Vtemp_h4e1367ee__0[0xbU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
        __Vtemp_h4e1367ee__0[0xcU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
        __Vtemp_h4e1367ee__0[0xdU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
        __Vtemp_h4e1367ee__0[0xeU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
        __Vtemp_h4e1367ee__0[0xfU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
        __Vtemp_h4e1367ee__0[0x10U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
        __Vtemp_h4e1367ee__0[0x11U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
        __Vtemp_h4e1367ee__0[0x12U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
        __Vtemp_h4e1367ee__0[0x13U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
        __Vtemp_h4e1367ee__0[0x14U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
        __Vtemp_h4e1367ee__0[0x15U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
        __Vtemp_h4e1367ee__0[0x16U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
        __Vtemp_h4e1367ee__0[0x17U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
        __Vtemp_h4e1367ee__0[0x18U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
        __Vtemp_h4e1367ee__0[0x19U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
        __Vtemp_h4e1367ee__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
        __Vtemp_h4e1367ee__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
        __Vtemp_h4e1367ee__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
        __Vtemp_h4e1367ee__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
        __Vtemp_h4e1367ee__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
        __Vtemp_h4e1367ee__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_14) {
            __Vtemp_h4e1367ee__0[0x20U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
            __Vtemp_h4e1367ee__0[0x21U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
            __Vtemp_h4e1367ee__0[0x22U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
            __Vtemp_h4e1367ee__0[0x23U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
            __Vtemp_h4e1367ee__0[0x24U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
            __Vtemp_h4e1367ee__0[0x25U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
            __Vtemp_h4e1367ee__0[0x26U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
            __Vtemp_h4e1367ee__0[0x27U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
            __Vtemp_h4e1367ee__0[0x28U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
            __Vtemp_h4e1367ee__0[0x29U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
            __Vtemp_h4e1367ee__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
            __Vtemp_h4e1367ee__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
            __Vtemp_h4e1367ee__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
            __Vtemp_h4e1367ee__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
            __Vtemp_h4e1367ee__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
            __Vtemp_h4e1367ee__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
            __Vtemp_h4e1367ee__0[0x30U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
            __Vtemp_h4e1367ee__0[0x31U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
            __Vtemp_h4e1367ee__0[0x32U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
            __Vtemp_h4e1367ee__0[0x33U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
            __Vtemp_h4e1367ee__0[0x34U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
            __Vtemp_h4e1367ee__0[0x35U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
            __Vtemp_h4e1367ee__0[0x36U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
            __Vtemp_h4e1367ee__0[0x37U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
            __Vtemp_h4e1367ee__0[0x38U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
            __Vtemp_h4e1367ee__0[0x39U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
            __Vtemp_h4e1367ee__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
            __Vtemp_h4e1367ee__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
            __Vtemp_h4e1367ee__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
            __Vtemp_h4e1367ee__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
            __Vtemp_h4e1367ee__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
            __Vtemp_h4e1367ee__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        } else if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_10) {
            __Vtemp_h4e1367ee__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            __Vtemp_h4e1367ee__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            __Vtemp_h4e1367ee__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_h4e1367ee__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_h4e1367ee__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_h4e1367ee__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_h4e1367ee__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_h4e1367ee__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_h4e1367ee__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_h4e1367ee__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_h4e1367ee__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_h4e1367ee__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_h4e1367ee__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_h4e1367ee__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_h4e1367ee__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_h4e1367ee__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_h4e1367ee__0[0x30U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_h4e1367ee__0[0x31U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_h4e1367ee__0[0x32U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_h4e1367ee__0[0x33U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_h4e1367ee__0[0x34U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_h4e1367ee__0[0x35U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_h4e1367ee__0[0x36U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_h4e1367ee__0[0x37U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_h4e1367ee__0[0x38U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_h4e1367ee__0[0x39U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_h4e1367ee__0[0x3aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_h4e1367ee__0[0x3bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_h4e1367ee__0[0x3cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_h4e1367ee__0[0x3dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_h4e1367ee__0[0x3eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            __Vtemp_h4e1367ee__0[0x3fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        } else if (vlSelf->Soc__DOT__sram__DOT__rvalid) {
            __Vtemp_h4e1367ee__0[0x20U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(1U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              (0x1e0U 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                  << 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x21U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(2U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(1U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x22U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(3U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(2U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x23U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(4U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(3U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x24U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(5U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(4U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x25U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(6U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(5U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x26U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(7U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(6U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x27U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(8U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(7U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x28U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(9U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(8U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x29U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0xaU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(9U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x2aU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0xbU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0xaU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x2bU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0xcU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0xbU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x2cU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0xdU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0xcU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x2dU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0xeU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0xdU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x2eU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0xfU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0xeU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x2fU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x10U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0xfU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x30U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x11U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x10U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x31U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x12U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x11U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x32U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x13U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x12U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x33U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x14U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x13U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x34U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x15U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x14U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x35U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x16U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x15U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x36U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x17U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x16U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x37U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x18U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x17U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x38U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x19U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x18U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x39U] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x1aU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x19U) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x3aU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x1bU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x1aU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x3bU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x1cU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x1bU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x3cU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x1dU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x1cU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x3dU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x1eU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x1dU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x3eU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x1fU) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x1eU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
            __Vtemp_h4e1367ee__0[0x3fU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                 << 0xaU)))
                                             ? 0U : 
                                            (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                             ((IData)(0x20U) 
                                              + (0x1e0U 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                    << 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))))) 
                                           | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17[
                                              ((IData)(0x1fU) 
                                               + (0x1e0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count) 
                                                     << 0xaU))));
        } else {
            __Vtemp_h4e1367ee__0[0x20U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
            __Vtemp_h4e1367ee__0[0x21U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
            __Vtemp_h4e1367ee__0[0x22U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
            __Vtemp_h4e1367ee__0[0x23U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
            __Vtemp_h4e1367ee__0[0x24U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
            __Vtemp_h4e1367ee__0[0x25U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
            __Vtemp_h4e1367ee__0[0x26U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
            __Vtemp_h4e1367ee__0[0x27U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
            __Vtemp_h4e1367ee__0[0x28U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
            __Vtemp_h4e1367ee__0[0x29U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
            __Vtemp_h4e1367ee__0[0x2aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
            __Vtemp_h4e1367ee__0[0x2bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
            __Vtemp_h4e1367ee__0[0x2cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
            __Vtemp_h4e1367ee__0[0x2dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
            __Vtemp_h4e1367ee__0[0x2eU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
            __Vtemp_h4e1367ee__0[0x2fU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
            __Vtemp_h4e1367ee__0[0x30U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
            __Vtemp_h4e1367ee__0[0x31U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
            __Vtemp_h4e1367ee__0[0x32U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
            __Vtemp_h4e1367ee__0[0x33U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
            __Vtemp_h4e1367ee__0[0x34U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
            __Vtemp_h4e1367ee__0[0x35U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
            __Vtemp_h4e1367ee__0[0x36U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
            __Vtemp_h4e1367ee__0[0x37U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
            __Vtemp_h4e1367ee__0[0x38U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
            __Vtemp_h4e1367ee__0[0x39U] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
            __Vtemp_h4e1367ee__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
            __Vtemp_h4e1367ee__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
            __Vtemp_h4e1367ee__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
            __Vtemp_h4e1367ee__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
            __Vtemp_h4e1367ee__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
            __Vtemp_h4e1367ee__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
        }
        VL_CONCAT_WWW(3072,2048,1024, __Vtemp_h10021897__0, __Vtemp_h4e1367ee__0, vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer);
        VL_CONCAT_WWW(4096,3072,1024, __Vtemp_hbb309a7e__0, __Vtemp_h10021897__0, vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer);
        VL_ASSIGN_W(4096,vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18, __Vtemp_hbb309a7e__0);
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(1U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                            << 5U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                  << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(2U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(1U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(3U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(2U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(4U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(3U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(5U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(4U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(6U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(5U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(7U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(6U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(8U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(7U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(9U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                          << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(8U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0xaU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(9U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                           << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0xbU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0xaU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0xcU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0xbU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0xdU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0xcU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0xeU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0xdU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0xfU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0xeU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x10U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0xfU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x11U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x10U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x12U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x11U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x13U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x12U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x14U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x13U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x15U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x14U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x16U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x15U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x17U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x16U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x18U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x17U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x19U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x18U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x1aU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x19U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x1bU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x1aU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x1cU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x1bU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x1dU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x1cU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x1eU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x1dU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x1fU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x1eU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                 ((IData)(0x20U) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18[
                  ((IData)(0x1fU) + (0x60U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                               << 0xaU))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__138__PROF__Soc__l4776(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__138__PROF__Soc__l4776\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__interact__DOT__over_count = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__interact__DOT__over_count 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)));
        if (VL_UNLIKELY((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count)))) {
            VL_WRITEF("ebreak!\n");
            VL_FINISH_MT("vsrc/Soc.v", 4783, "");
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__141__PROF__Soc__l77(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__141__PROF__Soc__l77\n"); );
    // Body
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[1U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[2U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[3U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[4U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[5U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[6U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[7U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[8U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[9U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x10U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x11U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x12U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x13U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x14U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x15U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x16U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x17U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x18U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x19U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[1U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[2U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[3U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[4U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[5U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[6U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[7U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[8U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[9U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xaU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xbU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xcU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xdU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xeU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xfU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x10U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x11U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x12U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x13U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x14U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x15U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x16U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x17U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x18U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x19U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                       << 1U)));
    }
    if (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum)) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_27) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
               << 1U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__142__PROF__Soc__l77(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__142__PROF__Soc__l77\n"); );
    // Body
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[1U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[2U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[3U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[4U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[5U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[6U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[7U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[8U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[9U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0xaU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0xbU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0xcU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0xdU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0xeU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0xfU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x10U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x11U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x12U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x13U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x14U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x15U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x16U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x17U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x18U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x19U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v0 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[1U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[2U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[3U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[4U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[5U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[6U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[7U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[8U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[9U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0xaU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0xbU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0xcU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0xdU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0xeU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0xfU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x10U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x11U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x12U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x13U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x14U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x15U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x16U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x17U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x18U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x19U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v1 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    if (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v2 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                       << 1U)));
    }
    if (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum)) 
         & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0))) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v3 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v4 
            = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                                       << 1U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_27) {
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[1U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[2U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[3U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[4U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[5U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[6U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[7U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[8U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[9U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU];
        vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU];
        vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 = 1U;
        vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory__v5 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
               << 1U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__143__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__143__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen 
            = vlSelf->Soc__DOT__core__DOT__emreg_csr_wen;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__144__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__144__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                : vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__145__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__145__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_branch_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_branch_addr 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                ? 0ULL : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc)) 
                          + (((- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))) 
                              << 0xcU) | (QData)((IData)(
                                                         (((IData)(vlSelf->__VdfgTmp_h8f698259__0) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->__VdfgTmp_h4013b3a0__0) 
                                                              << 5U) 
                                                             | ((IData)(vlSelf->__VdfgTmp_h47a28028__0) 
                                                                << 1U))))))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__146__PROF__Soc__l1943(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__146__PROF__Soc__l1943\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = 0ULL;
        vlSelf->Soc__DOT__core__DOT__trap__DOT__pc = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1 
            = (1U & ((0x30200073U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                     | (~ (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7))));
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))) {
            if (vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) {
                vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = 0xbULL;
            } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1)))) {
                vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = 0x8000000000000007ULL;
            }
        }
        if (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
             & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
                | (~ (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1))))) {
            vlSelf->Soc__DOT__core__DOT__trap__DOT__pc 
                = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__147__PROF__Soc__l620(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__147__PROF__Soc__l620\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) {
        vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
                | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type)))
                ? 0U : (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                 >> 7U)));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__148__PROF__Soc__l1176(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__148__PROF__Soc__l1176\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer = 0ULL;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer));
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2) 
               | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4)) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer 
                = vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result;
        } else if (vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer = 0ULL;
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__149__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__149__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
                ? (7U & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result))
                : 0U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__150__PROF__Soc__l1766(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__150__PROF__Soc__l1766\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE = 0ULL;
        vlSelf->__Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS = 0ULL;
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH = 0ULL;
    } else {
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr) 
               | (IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1 
            = (0x305U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2 
            = (0x342U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3 
            = (0x341U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4 
            = (0x304U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5 
            = (0x344U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6 
            = (0x300U == (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T));
        if (vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ ((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ (((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ ((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                     | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)) 
                   | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5))))) {
            if ((vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME 
                 >= vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP)) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP 
                    = ((0xffffffffffffff00ULL & vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP) 
                       | (QData)((IData)((0x80U | (0x7fU 
                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP))))));
            }
        } else {
            vlSelf->__Vdly__Soc__DOT__core__DOT__csrs__DOT__MIP 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ ((((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5)) 
                      | (~ (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
        if ((1U & (~ (((((((IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2)) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3)) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4)) 
                        | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5)) 
                       | (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6)) 
                      | (0x340U != (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T)))))) {
            vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH 
                = ((IData)(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen)
                    ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen)
                        ? vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata
                        : 0ULL));
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__151__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__151__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__emreg_ld_type 
            = vlSelf->Soc__DOT__core__DOT__dereg_ld_type;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__152__PROF__Soc__l1330(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__152__PROF__Soc__l1330\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer = 0ULL;
    } else {
        vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer)));
        vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12) 
               | ((~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer))) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12) {
            vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer 
                = vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits;
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__153__PROF__Soc__l880(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__153__PROF__Soc__l880\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h75017c4d__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_he18af335__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2a169e7__0;
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient = 0ULL;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[0U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[1U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[2U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33 = 0ULL;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw) 
                << 1U) | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid)));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13 
            = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15 
            = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T) 
               & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo)) 
                     & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo)) 
                     & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3)
                   ? (((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7)) 
                      | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid))
                   : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9)
                       ? (((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)) 
                           & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13)) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid))
                       : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                          | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid)))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[0U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[1U] = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[2U] 
            = (IData)(((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient)))
                        : ((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                          >> 0x21U)))
                            ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                       << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                  << 1U))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[3U] 
            = (IData)((((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient)))
                         : ((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                           >> 0x21U)))
                             ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                        << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                   << 1U))) 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[4U] 
            = (IData)(((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                        ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient
                        : ((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                            ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                       << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                  << 1U))));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[5U] 
            = (IData)((((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient
                         : ((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                             ? (1ULL | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                        << 1U)) : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
                                                   << 1U))) 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[6U] 
            = (IData)((((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                        & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo))
                        ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient))
                        : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient));
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[7U] 
            = (IData)(((((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                         & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo))
                         ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient))
                         : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient) 
                       >> 0x20U));
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient 
            = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0[
                                     (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                                  << 6U)))));
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T) {
            if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2) {
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN)
                        ? ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T))
                            ? (QData)((IData)(((1U 
                                                & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                                           >> 0x1fU)))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend)))
                                                : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend))))
                            : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15)
                                ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend))
                                : (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13) 
                                    & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                               >> 0x3fU)))
                                    ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend))
                                    : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend)))
                        : 0ULL);
                if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw) {
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                        = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2)));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                        = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2)) 
                                   >> 0x20U));
                } else {
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
                        = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2);
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                        = (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                                   >> 0x20U));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] = 0U;
                }
            }
        } else if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3) {
            if ((0x20U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))) {
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
                    = (((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                       >> 0x21U))) ? 
                        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]
                         : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                       << 1U);
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                    = ((((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                        >> 0x21U)))
                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]
                          : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                                     >> 0x21U)))
                                       ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]
                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                                     << 1U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                    = ((((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                        >> 0x21U)))
                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]
                          : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                                     >> 0x21U)))
                                       ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34) 
                                           << 0x1fU) 
                                          | (0x7fffffffU 
                                             & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]))
                                       : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                                     << 1U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                    = ((((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                        >> 0x21U)))
                          ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34) 
                              << 0x1fU) | (0x7fffffffU 
                                           & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]))
                          : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                        >> 0x1fU) | (((1U & (IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 
                                                     >> 0x21U)))
                                       ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34) 
                                          >> 1U) : 
                                      vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U]) 
                                     << 1U));
            }
        } else if ((1U & (~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9)) 
                             | (0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter)))))) {
            __Vtemp_h75017c4d__0[1U] = ((((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                           ? (IData)(
                                                     (0x7fffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))))
                                           : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                                         >> 0x1fU) 
                                        | (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                             ? (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                                 << 0x1fU) 
                                                | (IData)(
                                                          ((0x7fffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))) 
                                                           >> 0x20U)))
                                             : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                                           << 1U));
            __Vtemp_h75017c4d__0[2U] = ((((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                           ? (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                               << 0x1fU) 
                                              | (IData)(
                                                        ((0x7fffffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))) 
                                                         >> 0x20U)))
                                           : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U]) 
                                         >> 0x1fU) 
                                        | (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                             ? (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                                 >> 1U) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U]))) 
                                                            >> 0x20U)) 
                                                   << 0x1fU))
                                             : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                                           << 1U));
            __Vtemp_h75017c4d__0[3U] = ((((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                           ? (((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U])))) 
                                               >> 1U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U]))) 
                                                          >> 0x20U)) 
                                                 << 0x1fU))
                                           : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U]) 
                                         >> 0x1fU) 
                                        | (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                                             ? ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[0U]))) 
                                                         >> 0x20U)) 
                                                >> 1U)
                                             : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U]) 
                                           << 1U));
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U] 
                = (((2U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66[2U])
                     ? (IData)((0x7fffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U])))))
                     : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[0U]) 
                   << 1U);
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[1U] 
                = __Vtemp_h75017c4d__0[1U];
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[2U] 
                = __Vtemp_h75017c4d__0[2U];
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder[3U] 
                = __Vtemp_h75017c4d__0[3U];
        }
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x1fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x1fU))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x1fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x1fU))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN)
                    ? ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T))
                        ? (QData)((IData)(((1U & (IData)(
                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                                          >> 0x1fU)))
                                            ? ((IData)(1U) 
                                               + (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor)))
                                            : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor))))
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15)
                            ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor))
                            : (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13) 
                                & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                           >> 0x3fU)))
                                ? (1ULL + (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor))
                                : vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor)))
                    : 0ULL);
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x3fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x3fU))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11 
                = ((2U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend 
                                   >> 0x3fU)) << 1U)) 
                   | (1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor 
                                    >> 0x3fU))));
            __Vtemp_h639dda77__0[0U] = 1U;
            __Vtemp_h639dda77__0[1U] = 0U;
            __Vtemp_h639dda77__0[2U] = 0U;
            __Vtemp_he18af335__0[0U] = (IData)((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3));
            __Vtemp_he18af335__0[1U] = (IData)(((~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3) 
                                                >> 0x20U));
            __Vtemp_he18af335__0[2U] = 1U;
            VL_ADD_W(3, __Vtemp_hb2a169e7__0, __Vtemp_h639dda77__0, __Vtemp_he18af335__0);
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[0U] 
                = __Vtemp_hb2a169e7__0[0U];
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[1U] 
                = __Vtemp_hb2a169e7__0[1U];
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65[2U] 
                = (1U & __Vtemp_hb2a169e7__0[2U]);
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw)
                       ? ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2)) 
                          & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2)) 
                             | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2))))
                       : ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11)) 
                          & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11)) 
                             | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11))))));
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw)
                       ? ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2)) 
                          & (2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2)))
                       : ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11)) 
                          & (2U != (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11)))));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33 
                = (0x1ffffffffULL & (1ULL + (0x100000000ULL 
                                             | (QData)((IData)(
                                                               (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3)))))));
        }
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1 
            = ((((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                  ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13)
                      ? 0U : 3U) : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                << 4U) | ((((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter))
                             ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7)
                                 ? 0U : 3U) : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state)) 
                           << 2U) | ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2)
                                      ? ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw)
                                          ? 1U : 2U)
                                      : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state))));
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state 
            = (3U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1) 
                     >> (7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state) 
                               << 1U))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__154__PROF__Soc__l1330(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__154__PROF__Soc__l1330\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer = 0ULL;
    } else {
        vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer)));
        vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7) 
               | ((~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer))) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7) {
            vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer 
                = vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data;
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__155__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__155__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_branch_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_branch_type 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
               & ((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                  & ((0x17U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                     & ((0x37U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                        & ((0x6fU != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                           & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)))))));
    }
}

extern const VlWide<13>/*415:0*/ VSoc__ConstPool__CONST_h1ab9d0d3_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__156__PROF__Soc__l716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__156__PROF__Soc__l716\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hae518860__0;
    VlWide<5>/*159:0*/ __Vtemp_h6715fe3f__0;
    VlWide<5>/*159:0*/ __Vtemp_h9668e9a5__0;
    VlWide<5>/*159:0*/ __Vtemp_he3792748__0;
    VlWide<5>/*159:0*/ __Vtemp_ha285151e__0;
    VlWide<7>/*223:0*/ __Vtemp_h18181908__0;
    VlWide<9>/*287:0*/ __Vtemp_hc32c987f__0;
    VlWide<15>/*479:0*/ __Vtemp_hdb7ecb01__0;
    VlWide<17>/*543:0*/ __Vtemp_h0aaf08a3__0;
    VlWide<21>/*671:0*/ __Vtemp_h7ef64bbb__0;
    VlWide<33>/*1055:0*/ __Vtemp_h240ba972__0;
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = 0U;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi = 0ULL;
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo = 0ULL;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = 0U;
        vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter) 
               == (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total));
        if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state) {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN 
                = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4;
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state)) 
                         | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4)));
            if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN) {
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi 
                    = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U])));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo 
                    = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U])));
            }
            if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0)))) {
                if (((2U == (7U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                     | (1U == (7U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))) {
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U];
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                        = vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U];
                } else {
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] = 0U;
                    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] = 0U;
                }
                VL_NEGATE_W(5, __Vtemp_hae518860__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                    = __Vtemp_hae518860__0[0U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                    = __Vtemp_hae518860__0[1U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                    = __Vtemp_hae518860__0[2U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                    = __Vtemp_hae518860__0[3U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                    = (0xfU & __Vtemp_hae518860__0[4U]);
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                        << 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
                                     >> 2U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                        << 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                                     >> 2U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                    = (1U & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                             >> 2U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                    = (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                       << 2U);
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        >> 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                     << 2U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                        >> 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                     << 2U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                        >> 0x1eU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                     << 2U));
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                        >> 0x1eU) | (0xcU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                                             << 2U)));
                __Vtemp_h6715fe3f__0[0U] = (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                                            << 1U);
                __Vtemp_h6715fe3f__0[1U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                               << 1U));
                __Vtemp_h6715fe3f__0[2U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                               << 1U));
                __Vtemp_h6715fe3f__0[3U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                               << 1U));
                __Vtemp_h6715fe3f__0[4U] = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                             >> 0x1fU) 
                                            | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                                               << 1U));
                VL_NEGATE_W(5, __Vtemp_h9668e9a5__0, __Vtemp_h6715fe3f__0);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[0U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[1U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[1U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[2U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[2U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[3U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[3U] 
                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U]);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[4U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[4U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                           << 5U) | vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U]));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[5U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[5U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                           >> 0x1bU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                                        << 5U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[6U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[6U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                           >> 0x1bU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                                        << 5U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[7U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[7U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                           >> 0x1bU) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                        << 5U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[8U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[8U] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                           << 0xaU) | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                        >> 0x1bU) | 
                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                                        << 5U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[9U] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[9U] 
                       & (((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[0U] 
                            >> 0x16U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                                         << 0xaU)) 
                          | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                             >> 0x1bU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xaU] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[0xaU] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[1U] 
                           >> 0x16U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                                        << 0xaU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xbU] 
                    = (VSoc__ConstPool__CONST_h1ab9d0d3_0[0xbU] 
                       & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[2U] 
                           >> 0x16U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                        << 0xaU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xcU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        << 0x10U) | (VSoc__ConstPool__CONST_h1ab9d0d3_0[0xcU] 
                                     & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[3U] 
                                         >> 0x16U) 
                                        | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1[4U] 
                                           << 0xaU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xdU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                                     << 0x10U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xeU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                        >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                                     << 0x10U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0xfU] 
                    = ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                        >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                                     << 0x10U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x10U] 
                    = ((__Vtemp_h9668e9a5__0[0U] << 0x14U) 
                       | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                           >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                                        << 0x10U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x11U] 
                    = ((__Vtemp_h9668e9a5__0[0U] >> 0xcU) 
                       | (__Vtemp_h9668e9a5__0[1U] 
                          << 0x14U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x12U] 
                    = ((__Vtemp_h9668e9a5__0[1U] >> 0xcU) 
                       | (__Vtemp_h9668e9a5__0[2U] 
                          << 0x14U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x13U] 
                    = ((__Vtemp_h9668e9a5__0[2U] >> 0xcU) 
                       | (__Vtemp_h9668e9a5__0[3U] 
                          << 0x14U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x14U] 
                    = ((__Vtemp_h9668e9a5__0[3U] >> 0xcU) 
                       | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                           << 0x19U) | (0x1f00000U 
                                        & (__Vtemp_h9668e9a5__0[4U] 
                                           << 0x14U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x15U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                    >> 7U)) | ((0x1f00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                                   >> 7U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                                  << 0x19U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x16U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                    >> 7U)) | ((0x1f00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                                   >> 7U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                  << 0x19U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x17U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                    >> 7U)) | ((0x1f00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                   >> 7U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                  << 0x19U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x18U] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                    >> 7U)) | ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                                << 0x1eU) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                      >> 7U)) 
                                                  | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                                     << 0x19U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x19U] 
                    = ((0xfffffU & ((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                     >> 2U) | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                               >> 7U))) 
                       | ((0x3ff00000U & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                                          >> 2U)) | 
                          (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                           << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1aU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                    >> 2U)) | ((0x3ff00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                                                   >> 2U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                  << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1bU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                    >> 2U)) | ((0x3ff00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                                                   >> 2U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                  << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1cU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                    >> 2U)) | ((0x3ff00000U 
                                                & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                                                   >> 2U)) 
                                               | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                                  << 0x1eU)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1dU] 
                    = ((0xfffffU & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                    >> 2U)) | (0x3ff00000U 
                                               & (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                                                  >> 2U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1eU] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x1fU] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x20U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[0x21U] = 0U;
                if ((0x427U >= (0x7ffU & ((IData)(0x85U) 
                                          * (7U & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))) {
                    __Vtemp_he3792748__0[0U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[1U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[2U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[3U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                    __Vtemp_he3792748__0[4U] = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x85U) 
                                                      * 
                                                      (7U 
                                                       & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U]))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x3fU 
                                                    & (((IData)(0x85U) 
                                                        * 
                                                        (7U 
                                                         & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))))) 
                                                | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x85U) 
                                                         * 
                                                         (7U 
                                                          & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x85U) 
                                                       * 
                                                       (7U 
                                                        & vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U])))));
                } else {
                    __Vtemp_he3792748__0[0U] = 0U;
                    __Vtemp_he3792748__0[1U] = 0U;
                    __Vtemp_he3792748__0[2U] = 0U;
                    __Vtemp_he3792748__0[3U] = 0U;
                    __Vtemp_he3792748__0[4U] = 0U;
                }
                VL_ADD_W(5, __Vtemp_ha285151e__0, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg, __Vtemp_he3792748__0);
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] 
                    = __Vtemp_ha285151e__0[0U];
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] 
                    = __Vtemp_ha285151e__0[1U];
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] 
                    = __Vtemp_ha285151e__0[2U];
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] 
                    = __Vtemp_ha285151e__0[3U];
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] 
                    = (0xfU & __Vtemp_ha285151e__0[4U]);
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter)));
            }
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
                = (((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state)) 
                    | (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4))) 
                   & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
        } else {
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN = 0U;
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = 0U;
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T 
                = ((((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                     & (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))) 
                    << 2U) | ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8)
                               ? (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
                                   | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                                   ? 3U : ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                                           << 1U)) : 0U));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8) 
                   & (~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid)));
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi = 0ULL;
            vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo = 0ULL;
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = 0U;
            if (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2) {
                __Vtemp_h18181908__0[6U] = (((0x3fU 
                                              & ((IData)((QData)((IData)(
                                                                         (3U 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                 >> 0x19U)) 
                                             | ((IData)(
                                                        (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                          << 1U) 
                                                         >> 0x20U)) 
                                                >> 0x1aU)) 
                                            | ((0x40U 
                                                & ((IData)((QData)((IData)(
                                                                           (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                   >> 0x19U)) 
                                               | ((IData)(
                                                          ((QData)((IData)(
                                                                           (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU)))))))) 
                                                           >> 0x20U)) 
                                                  << 7U)));
                __Vtemp_hc32c987f__0[7U] = ((7U & ((IData)(
                                                           ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                            << 1U)) 
                                                   >> 0x17U)) 
                                            | ((0x1f8U 
                                                & ((IData)(
                                                           ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                            << 1U)) 
                                                   >> 0x17U)) 
                                               | (((IData)((QData)((IData)(
                                                                           (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                   << 0xaU) 
                                                  | ((IData)(
                                                             (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                               << 1U) 
                                                              >> 0x20U)) 
                                                     << 9U))));
                __Vtemp_hdb7ecb01__0[0xbU] = ((0x3fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                  >> 0x10U)) 
                                              | ((0x1c0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                     >> 0x10U)) 
                                                 | ((0xe00U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                        >> 0x10U)) 
                                                    | (0xf000U 
                                                       & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                          >> 0x10U)))));
                __Vtemp_hdb7ecb01__0[0xcU] = ((IData)(
                                                      ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                       << 1U)) 
                                              << 0x12U);
                __Vtemp_hdb7ecb01__0[0xdU] = ((0x3fU 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                           << 1U)) 
                                                  >> 0xeU)) 
                                              | ((0x1c0U 
                                                  & ((IData)(
                                                             ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                              << 1U)) 
                                                     >> 0xeU)) 
                                                 | (__Vtemp_hc32c987f__0[7U] 
                                                    << 9U)));
                __Vtemp_hdb7ecb01__0[0xeU] = ((0x3fU 
                                               & (__Vtemp_hc32c987f__0[7U] 
                                                  >> 0x17U)) 
                                              | ((0x1c0U 
                                                  & (__Vtemp_hc32c987f__0[7U] 
                                                     >> 0x17U)) 
                                                 | ((0xe00U 
                                                     & ((0x7fe00U 
                                                         & ((IData)((QData)((IData)(
                                                                                (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x1fU))))))))) 
                                                            >> 0xdU)) 
                                                        | (0x3fe00U 
                                                           & ((IData)(
                                                                      (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier)) 
                                                                        << 1U) 
                                                                       >> 0x20U)) 
                                                              >> 0xeU)))) 
                                                    | (__Vtemp_h18181908__0[6U] 
                                                       << 0xcU))));
                __Vtemp_h0aaf08a3__0[8U] = ((7U & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                            >> 0x20U)) 
                                                   >> 0x16U)) 
                                            | ((0x1f8U 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                            >> 0x20U)) 
                                                   >> 0x16U)) 
                                               | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   << 0xdU) 
                                                  | ((0xc00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                                >> 0x3fU))))) 
                                                         << 0xaU)) 
                                                     | (0x200U 
                                                        & ((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                                    >> 0x20U)) 
                                                           >> 0x16U))))));
                __Vtemp_h0aaf08a3__0[9U] = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   >> 0x13U)) 
                                            | ((0x1f8U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   >> 0x13U)) 
                                               | ((0xe00U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                      >> 0x13U)) 
                                                  | (0x1000U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                        >> 0x13U)))));
                __Vtemp_h0aaf08a3__0[0xaU] = 0U;
                __Vtemp_h0aaf08a3__0[0xbU] = 0U;
                __Vtemp_h0aaf08a3__0[0xcU] = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                              << 0x13U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                       << 1U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[1U] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                        >> 0x1fU) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                              >> 0x20U)) 
                                     << 1U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[2U] 
                    = ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                >> 0x20U)) >> 0x1fU);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[3U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[4U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                       << 7U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[5U] 
                    = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                              >> 0x19U)) | ((0x78U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                >> 0x19U)) 
                                            | ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                        >> 0x20U)) 
                                               << 7U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[6U] 
                    = ((7U & ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                       >> 0x20U)) >> 0x19U)) 
                       | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                           << 0xaU) | (0x78U & ((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                         >> 0x20U)) 
                                                >> 0x19U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[7U] 
                    = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                              >> 0x16U)) | ((0x1f8U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                >> 0x16U)) 
                                            | ((0x200U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                                                   >> 0x16U)) 
                                               | ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier 
                                                           >> 0x20U)) 
                                                  << 0xaU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[8U] 
                    = __Vtemp_h0aaf08a3__0[8U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[9U] 
                    = __Vtemp_h0aaf08a3__0[9U];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xaU] 
                    = __Vtemp_h0aaf08a3__0[0xaU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xbU] 
                    = __Vtemp_h0aaf08a3__0[0xbU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xcU] 
                    = __Vtemp_h0aaf08a3__0[0xcU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xdU] 
                    = ((7U & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier) 
                              >> 0xdU)) | (__Vtemp_hdb7ecb01__0[0xbU] 
                                           << 3U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xeU] 
                    = ((__Vtemp_hdb7ecb01__0[0xbU] 
                        >> 0x1dU) | (__Vtemp_hdb7ecb01__0[0xcU] 
                                     << 3U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0xfU] 
                    = ((__Vtemp_hdb7ecb01__0[0xcU] 
                        >> 0x1dU) | (__Vtemp_hdb7ecb01__0[0xdU] 
                                     << 3U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[0x10U] 
                    = ((__Vtemp_hdb7ecb01__0[0xdU] 
                        >> 0x1dU) | (__Vtemp_hdb7ecb01__0[0xeU] 
                                     << 3U));
                __Vtemp_h7ef64bbb__0[0x10U] = ((0xfU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 0x14U)) 
                                               | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                   << 0x10U) 
                                                  | ((0xff0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 0x14U)) 
                                                     | (0xf000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                           << 0xcU)))));
                __Vtemp_h240ba972__0[0x1aU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 8U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 8U)) 
                                                  | ((0xff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 8U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x18U))));
                __Vtemp_h240ba972__0[0x1bU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 8U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 8U)) 
                                                  | ((0xff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 8U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x18U))));
                __Vtemp_h240ba972__0[0x1cU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 8U)) 
                                               | (__Vtemp_h7ef64bbb__0[0x10U] 
                                                  << 0xcU));
                __Vtemp_h240ba972__0[0x1dU] = ((__Vtemp_h7ef64bbb__0[0x10U] 
                                                >> 0x14U) 
                                               | ((0xf000U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                __Vtemp_h240ba972__0[0x1eU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 4U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                __Vtemp_h240ba972__0[0x1fU] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 4U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                __Vtemp_h240ba972__0[0x20U] = ((0xfffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                          >> 0x1fU))))) 
                                                   >> 4U)) 
                                               | ((0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x1fU))))) 
                                                      >> 4U)) 
                                                  | ((0xfff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                                >> 0x1fU))))) 
                                                         >> 4U)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                               >> 0x1fU))))) 
                                                        << 0x1cU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0U] 
                    = (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[1U] 
                    = (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                               >> 0x20U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[2U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[3U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[4U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[5U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[6U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[7U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[8U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                       << 8U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[9U] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                        >> 0x18U) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                              >> 0x20U)) 
                                     << 8U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xaU] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        << 8U) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                           >> 0x20U)) 
                                  >> 0x18U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xbU] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        >> 0x18U) | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                            >> 0x3fU))))) 
                                     << 8U));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xcU] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                        << 0xcU) | (((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                            >> 0x3fU))))) 
                                     >> 0x18U) | (0xf00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                            >> 0x3fU))))) 
                                                     << 8U))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xdU] 
                    = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                        >> 0x14U) | ((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                              >> 0x20U)) 
                                     << 0xcU));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xeU] 
                    = (((IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                 >> 0x20U)) >> 0x14U) 
                       | ((- (IData)((1U & (IData)(
                                                   (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                    >> 0x3fU))))) 
                          << 0xcU));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0xfU] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        >> 0x14U) | ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                            >> 0x3fU))))) 
                                     << 0xcU));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x10U] 
                    = (((- (IData)((1U & (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                  >> 0x3fU))))) 
                        >> 0x14U) | (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                      << 0x10U) | (0xf000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                             >> 0x3fU))))) 
                                                      << 0xcU))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x11U] 
                    = ((0xfffU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                  >> 0x10U)) | (0xf000U 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                   >> 0x10U)));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x12U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x13U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x14U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x15U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x16U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x17U] = 0U;
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x18U] 
                    = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                       << 0x18U);
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x19U] 
                    = ((0xfffU & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                  >> 8U)) | ((0xf000U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                 >> 8U)) 
                                             | (((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand 
                                                                        >> 0x1fU))))) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand) 
                                                      >> 8U)))));
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1aU] 
                    = __Vtemp_h240ba972__0[0x1aU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1bU] 
                    = __Vtemp_h240ba972__0[0x1bU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1cU] 
                    = __Vtemp_h240ba972__0[0x1cU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1dU] 
                    = __Vtemp_h240ba972__0[0x1dU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1eU] 
                    = __Vtemp_h240ba972__0[0x1eU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x1fU] 
                    = __Vtemp_h240ba972__0[0x1fU];
                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[0x20U] 
                    = __Vtemp_h240ba972__0[0x20U];
                if ((0x217U >= (0x3ffU & ((IData)(0x43U) 
                                          * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))) {
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] 
                        = (((0U == (0x1fU & ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0x43U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                              (0x1fU & (((IData)(0x43U) 
                                         * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0x43U) 
                                        * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] 
                        = (((0U == (0x1fU & ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0x43U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x43U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                              ((IData)(1U) + (0x1fU 
                                              & (((IData)(0x43U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x43U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] 
                        = (7U & (((0U == (0x1fU & ((IData)(0x43U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                                   ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                           ((IData)(3U) 
                                            + (0x1fU 
                                               & (((IData)(0x43U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                  >> 5U)))] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x43U) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                                 | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4[
                                    ((IData)(2U) + 
                                     (0x1fU & (((IData)(0x43U) 
                                                * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                               >> 5U)))] 
                                    >> (0x1fU & ((IData)(0x43U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))));
                } else {
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[0U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[1U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg[2U] = 0U;
                }
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[0U] = 0U;
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[1U] = 0U;
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[2U] = 0U;
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[3U] = 0U;
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg[4U] = 0U;
                if ((0x41fU >= (0x7ffU & ((IData)(0x84U) 
                                          * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))) {
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(1U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              (0x3fU & (((IData)(0x84U) 
                                         * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0x84U) 
                                        * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(2U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              ((IData)(1U) + (0x3fU 
                                              & (((IData)(0x84U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x84U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(3U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              ((IData)(2U) + (0x3fU 
                                              & (((IData)(0x84U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x84U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] 
                        = (((0U == (0x1fU & ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                             ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                     ((IData)(4U) + 
                                      (0x3fU & (((IData)(0x84U) 
                                                 * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                           | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                              ((IData)(3U) + (0x3fU 
                                              & (((IData)(0x84U) 
                                                  * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x84U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))));
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] 
                        = (0xfU & (((0U == (0x1fU & 
                                            ((IData)(0x84U) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                                     ? 0U : (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                             ((IData)(5U) 
                                              + (0x3fU 
                                                 & (((IData)(0x84U) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x84U) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)))))) 
                                   | (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5[
                                      ((IData)(4U) 
                                       + (0x3fU & (
                                                   ((IData)(0x84U) 
                                                    * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T)) 
                                                   >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x84U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))));
                } else {
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[0U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[1U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[2U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[3U] = 0U;
                    vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg[4U] = 0U;
                }
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total 
                    = ((0x2fU >= (0x3fU & ((IData)(6U) 
                                           * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))
                        ? (0x3fU & (IData)((0x411011821021ULL 
                                            >> (0x3fU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T))))))
                        : 0U);
            } else {
                vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = 0U;
            }
            vlSelf->__Vdly__Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state));
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__157__PROF__Soc__l73(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__157__PROF__Soc__l73\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN 
        = (1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                  ? ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))
                  : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                      ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8
                      : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                         | ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
                            & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                               & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8
                                   : (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__158__PROF__Soc__l74(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__158__PROF__Soc__l74\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hfa2dc9d8__0;
    // Body
    __Vtemp_hfa2dc9d8__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                           ? 
                                                          (0x1eU 
                                                           & ((IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                       >> 7U)) 
                                                              << 1U))
                                                           : 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0x1eU 
                                                               & ((IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                           >> 7U)) 
                                                                  << 1U)))))
                                                          : 0U)
                                                         : 0U))));
    __Vtemp_hfa2dc9d8__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)
                                                            ? 
                                                           (0x1eU 
                                                            & ((IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                        >> 7U)) 
                                                               << 1U))
                                                            : 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1eU 
                                                                & ((IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                            >> 7U)) 
                                                                   << 1U)))))
                                                           : 0U)
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_hfa2dc9d8__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_hfa2dc9d8__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_hfa2dc9d8__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    __Vtemp_hfa2dc9d8__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_hfa2dc9d8__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_hfa2dc9d8__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0 
        = (0x1fU & (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                      << 5U))) ? 0U
                      : (__Vtemp_hfa2dc9d8__0[(((IData)(4U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                  << 5U))))) 
                    | (__Vtemp_hfa2dc9d8__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
                       >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                    << 5U)))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__159__PROF__Soc__l1330(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__159__PROF__Soc__l1330\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer = 0U;
        vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer = 0ULL;
    } else {
        vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
               & (~ (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer)));
        vlSelf->__Vdly__Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2) 
               | ((~ ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer))) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer)));
        if (vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2) {
            vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer 
                = vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf;
        }
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__160__PROF__Soc__l73(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__160__PROF__Soc__l73\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN 
        = (1U & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                  ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))
                  : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                      ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8
                      : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                         | ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
                            & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                               & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8
                                   : (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__161__PROF__Soc__l74(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__161__PROF__Soc__l74\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h78afa619__0;
    // Body
    __Vtemp_h78afa619__0[0U] = (IData)((QData)((IData)(
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                           ? 
                                                          (0x1eU 
                                                           & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                              >> 6U))
                                                           : 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0x1eU 
                                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                  >> 6U)))))
                                                          : 0U)
                                                         : 0U))));
    __Vtemp_h78afa619__0[1U] = (IData)(((QData)((IData)(
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                                                            ? 
                                                           (0x1eU 
                                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                               >> 6U))
                                                            : 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (0x1eU 
                                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                                   >> 6U)))))
                                                           : 0U)
                                                          : 0U))) 
                                        >> 0x20U));
    __Vtemp_h78afa619__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h78afa619__0[3U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h78afa619__0[4U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    __Vtemp_h78afa619__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0;
    __Vtemp_h78afa619__0[6U] = (IData)((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)));
    __Vtemp_h78afa619__0[7U] = (IData)(((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0)) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0 
        = (0x1fU & (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                      << 5U))) ? 0U
                      : (__Vtemp_h78afa619__0[(((IData)(4U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                  << 5U))))) 
                    | (__Vtemp_h78afa619__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
                       >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                    << 5U)))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__162__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__162__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_shamt = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_shamt = 
            ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
              ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                       ? (0x3fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                           >> 0x14U)))
                       : 0U));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__163__PROF__Soc__l2099(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__163__PROF__Soc__l2099\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__164__PROF__Soc__l267(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__164__PROF__Soc__l267\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__old_pc;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__165__PROF__Soc__l266(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__165__PROF__Soc__l266\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = vlSelf->__Vdly__Soc__DOT__core__DOT__fetch__DOT__pc;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__166__PROF__Soc__l2097(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__166__PROF__Soc__l2097\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__167__PROF__Soc__l2098(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__167__PROF__Soc__l2098\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__w_comp;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__168__PROF__Soc__l212(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__168__PROF__Soc__l212\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v1;
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v2;
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory__v3;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__171__PROF__Soc__l212(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__171__PROF__Soc__l212\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v1;
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v2;
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory__v3;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__173__PROF__Soc__l142(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__173__PROF__Soc__l142\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0U] = 0ULL;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1] 
        = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory__v1;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__177__PROF__Soc__l2100(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__177__PROF__Soc__l2100\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__178__PROF__Soc__l2101(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__178__PROF__Soc__l2101\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[1U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[2U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[3U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[4U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[5U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[6U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[7U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[8U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[9U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xaU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xbU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xcU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xdU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xeU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0xfU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x10U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x11U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x12U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x13U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x14U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x15U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x16U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x17U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x18U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x19U];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1aU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1bU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1cU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1dU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1eU];
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU] 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__r_buffer[0x1fU];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__180__PROF__Soc__l4777(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__180__PROF__Soc__l4777\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__interact__DOT__over_count;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__182__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__182__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_op_b = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                     ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                      ? 4ULL
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                       ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                        ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                        : 0ULL)))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__183__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__183__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_op_a = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                                                    ? 0ULL
                                                    : 
                                                   (((0x13U 
                                                      != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                                                     & ((0x17U 
                                                         != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                        & ((0x37U 
                                                            != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
                                                           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)) 
                                                              & ((~ (IData)(vlSelf->__VdfgTmp_hebccc2f1__0)) 
                                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                    | (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (- (IData)(
                                                                                (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))
                                                     ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                                      ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                                                      : (QData)((IData)(
                                                                        ((1U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                                                          ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                                                          : 0U))))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__184__PROF__Soc__l78(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__184__PROF__Soc__l78\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][1U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][2U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][3U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][4U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][5U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][6U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][7U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][8U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][9U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0xaU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0xbU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0xcU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0xdU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0xeU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0xfU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x10U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x11U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x12U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x13U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x14U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x15U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x16U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x17U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x18U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x19U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x1aU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x1bU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x1cU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x1dU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x1eU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0][0x1fU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v0[0x1fU];
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][1U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][2U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][3U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][4U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][5U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][6U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][7U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][8U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][9U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0xaU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0xbU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0xcU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0xdU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0xeU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0xfU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x10U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x11U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x12U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x13U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x14U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x15U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x16U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x17U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x18U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x19U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x1aU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x1bU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x1cU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x1dU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x1eU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1][0x1fU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v1[0x1fU];
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][1U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][2U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][3U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][4U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][5U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][6U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][7U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][8U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][9U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0xaU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0xbU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0xcU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0xdU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0xeU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0xfU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x10U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x11U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x12U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x13U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x14U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x15U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x16U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x17U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x18U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x19U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x1aU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x1bU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x1cU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x1dU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x1eU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2][0x1fU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v2[0x1fU];
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][1U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][2U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][3U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][4U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][5U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][6U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][7U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][8U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][9U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0xaU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0xbU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0xcU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0xdU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0xeU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0xfU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x10U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x11U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x12U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x13U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x14U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x15U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x16U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x17U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x18U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x19U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x1aU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x1bU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x1cU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x1dU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x1eU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3][0x1fU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v3[0x1fU];
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][1U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][2U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][3U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][4U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][5U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][6U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][7U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][8U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][9U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0xaU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0xbU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0xcU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0xdU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0xeU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0xfU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x10U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x11U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x12U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x13U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x14U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x15U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x16U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x17U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x18U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x19U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x1aU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x1bU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x1cU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x1dU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x1eU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4][0x1fU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v4[0x1fU];
    }
    if (vlSelf->__Vdlyvset__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][1U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][2U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][3U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][4U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][5U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][6U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][7U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][8U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][9U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0xaU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0xbU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0xcU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0xdU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0xeU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0xfU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x10U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x11U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x12U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x13U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x14U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x15U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x16U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x17U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x18U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x19U] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x1aU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x1bU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x1cU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x1dU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x1eU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[vlSelf->__Vdlyvdim0__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5][0x1fU] 
            = vlSelf->__Vdlyvval__Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory__v5[0x1fU];
    }
}
