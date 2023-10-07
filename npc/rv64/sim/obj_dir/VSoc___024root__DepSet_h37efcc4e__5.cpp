// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__600__PROF__Soc__l1046(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__600__PROF__Soc__l1046\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5 
        = (((QData)((IData)((- (IData)((vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__601__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__601__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_csr_wen = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_csr_wen 
            = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
               & (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__602__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__602__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr 
            = vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__603__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__603__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata 
            = vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__604__PROF__Soc__l3663(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__604__PROF__Soc__l3663\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_5 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__605__PROF__Soc__l3662(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__605__PROF__Soc__l3662\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T 
        = (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__606__PROF__Soc__l2094(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__606__PROF__Soc__l2094\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer = 0U;
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer 
            = ((8U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose))
                ? (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose)
                : 0U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__607__PROF__Soc__l3120(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__607__PROF__Soc__l3120\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type = 0U;
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type = 0U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__608__PROF__Soc__l3120(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__608__PROF__Soc__l3120\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum = 0U;
    } else if (((((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                 & (0U != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum 
            = (1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0)));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__609__PROF__Soc__l3249(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__609__PROF__Soc__l3249\n"); );
    // Body
    if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset 
            = ((IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)
                ? (0x7fU & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask))
                             ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                 ? (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)
                                 : (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T))
                             : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)
                                 ? (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)
                                 : (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T))))
                : 0U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__610__PROF__Soc__l3119(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__610__PROF__Soc__l3119\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_29;
    Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_29 = 0;
    // Body
    Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_29 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
            & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask)) 
              | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3))));
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr = 0U;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask = 0U;
    } else if (Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_29) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr 
            = (IData)(vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
            = vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata;
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask 
            = vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask;
    }
    if (Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT___GEN_29) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag 
            = (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                    >> 0xbU)));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index 
            = (0xfU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                               >> 7U)));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__611__PROF__Soc__l1032(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__611__PROF__Soc__l1032\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0 
        = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__612__PROF__Soc__l1036(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__612__PROF__Soc__l1036\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0 
        = ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | (0x25U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__613__PROF__Soc__l1056(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__613__PROF__Soc__l1056\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 
        = ((9U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
            ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
               | vlSelf->Soc__DOT__core__DOT__dereg_op_b)
            : ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                   ^ vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                    ? (QData)((IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                       >= vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                    : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                        ? (QData)((IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                           < vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                        : ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                            ? (QData)((IData)(VL_GTES_IQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                            : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                ? (QData)((IData)(VL_LTS_IQQ(64, vlSelf->Soc__DOT__core__DOT__dereg_op_a, vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                    ? (QData)((IData)(
                                                      (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                       != vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                    : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                        ? (QData)((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                           == vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                        : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                            ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                               - vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                            : ((0U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                ? (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                   + vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                : 0ULL))))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__614__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__614__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_ld_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_ld_type 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__615__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__615__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_sd_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_sd_type 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
                         ? 0U : ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                  ? 1U : ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                           ? 2U : (
                                                   (0x123U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 3U
                                                    : 
                                                   ((0x1a3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    << 2U))))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__622__PROF__Soc__l3134(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__622__PROF__Soc__l3134\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__624__PROF__Soc__l3136(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__624__PROF__Soc__l3136\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__625__PROF__Soc__l3123(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__625__PROF__Soc__l3123\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__dirty;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__626__PROF__Soc__l3135(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__626__PROF__Soc__l3135\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__628__PROF__Soc__l3122(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__628__PROF__Soc__l3122\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__valid;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__630__PROF__Soc__l3124(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__630__PROF__Soc__l3124\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__replace;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__635__PROF__Soc__l3125(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__635__PROF__Soc__l3125\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__inDataOneArray;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__644__PROF__Soc__l2096(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__644__PROF__Soc__l2096\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__654__PROF__Soc__l3121(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__654__PROF__Soc__l3121\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__state;
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__655__PROF__Soc__l1032(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__655__PROF__Soc__l1032\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0) 
           | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | ((0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                 | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__656__PROF__Soc__l1036(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__656__PROF__Soc__l1036\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15 
        = ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
           | ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
              | (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__657__PROF__Soc__l1089(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__657__PROF__Soc__l1089\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h7cb4ecaa__0;
    VlWide<4>/*127:0*/ __Vtemp_h42b64a29__0;
    // Body
    __Vtemp_h7cb4ecaa__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a);
    __Vtemp_h7cb4ecaa__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                        >> 0x20U));
    __Vtemp_h7cb4ecaa__0[2U] = 0U;
    __Vtemp_h7cb4ecaa__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h42b64a29__0, __Vtemp_h7cb4ecaa__0, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt));
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid)
            ? (((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                | (0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)))
                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo
                : (((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                    | ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op)) 
                       | (0x15U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))))
                    ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi
                    : 0ULL)) : ((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid)
                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient
                                 : ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                     ? 0ULL : ((0x28U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                ? (
                                                   (~ vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                   & vlSelf->Soc__DOT__core__DOT__dereg_op_b)
                                                : (
                                                   (0x27U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100)))
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97)))
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92)))
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87)))
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U] 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0x1fU 
                                                                            >= 
                                                                            (0x3fU 
                                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                                                            ? 
                                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                                            << 
                                                                            (0x3fU 
                                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_b)))
                                                                            : 0U))))
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78)))
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 
                                                                                >> 0x1fU))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69)))
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65)))
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (__Vtemp_h42b64a29__0[0U] 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x1fU 
                                                                                >= (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                                 ? 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_op_a) 
                                                                                << (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                                 : 0U))))
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                              ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                               ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100
                                                                : 
                                                               ((0x11U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                 ? 
                                                                (~ vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47)
                                                                 : 
                                                                ((0x10U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47
                                                                  : 
                                                                 ((0xfU 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                   ? 
                                                                  VL_SHIFTRS_QQI(64,64,6, vlSelf->Soc__DOT__core__DOT__dereg_op_a, (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                   : 
                                                                  ((0xeU 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                    ? 
                                                                   (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                    >> (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                    : 
                                                                   ((0xdU 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                     ? 
                                                                    (vlSelf->Soc__DOT__core__DOT__dereg_op_a 
                                                                     << (IData)(vlSelf->Soc__DOT__core__DOT__dereg_shamt))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                ((0xcU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 
                                                                                >> 0x20U))
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 
                                                                                >> 0x20U))
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? 
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[1U]
                                                                                 : (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 
                                                                                >> 0x20U))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                ((0xcU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                                                                 ? 
                                                                                vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81[0U]
                                                                                 : (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126)))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__660__PROF__Soc__l4064(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__660__PROF__Soc__l4064\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_has_inst 
            = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)) 
                     & (~ ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__661__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__661__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                ? 0U : (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__662__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__662__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_wb_type 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                ? 0U : ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                         ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                  ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                           ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                      | ((0x4b3U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                         | ((0x533U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                            | ((0x5b3U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                               | ((0x633U 
                                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                  | ((0x6b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                     | ((0x733U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                        | ((0x7b3U 
                                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))))))))
                                                      ? 1U
                                                      : 
                                                     (((0xf3U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0x173U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | ((0x1f3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0))))
                                                       ? 3U
                                                       : 
                                                      (3U 
                                                       & (- (IData)(
                                                                    (0x3f3U 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__663__PROF__Soc__l3120(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__663__PROF__Soc__l3120\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum = 0U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__664__PROF__Soc__l3119(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__664__PROF__Soc__l3119\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_29;
    Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_29 = 0;
    // Body
    Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_29 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
            & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)) 
           & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)));
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask = 0U;
    } else if (Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_29) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr 
            = vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__data = 0ULL;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask = 0U;
    }
    if (Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT___GEN_29) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag 
            = (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
               >> 0xbU);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__index 
            = (0xfU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                       >> 7U));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__665__PROF__Soc__l3120(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__665__PROF__Soc__l3120\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type = 0U;
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT__started;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__666__PROF__Soc__l3249(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__666__PROF__Soc__l3249\n"); );
    // Body
    if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                ? (0x7fU & vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc)
                : 0U);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__667__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__667__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                         ? (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)
                         : 0U));
    }
}

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__668__PROF__Soc__l2052(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__668__PROF__Soc__l2052\n"); );
    // Body
    if ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))) {
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data);
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[1U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[2U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[3U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[4U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[5U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[6U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[7U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[8U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[9U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xaU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xbU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xcU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xdU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xeU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xfU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x10U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x11U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x12U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x13U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x14U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x15U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x16U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x17U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x18U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x19U] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1aU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1bU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1cU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1dU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1eU] = 0U;
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1fU] = 0U;
    } else if ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))) {
        if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray) {
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[1U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[1U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[2U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[2U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[3U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[3U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[4U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[4U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[5U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[5U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[6U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[6U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[7U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[7U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[8U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[8U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[9U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[9U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xaU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xaU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xbU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xbU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xcU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xcU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xdU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xdU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xeU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xeU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xfU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0xfU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x10U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x10U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x11U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x11U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x12U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x12U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x13U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x13U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x14U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x14U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x15U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x15U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x16U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x16U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x17U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x17U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x18U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x18U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x19U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x19U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1aU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1aU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1bU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1bU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1cU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1cU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1dU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1dU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1eU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1eU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1fU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[0x1fU];
        } else {
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[1U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[2U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[3U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[4U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[5U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[6U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[7U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[8U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[9U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xaU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xbU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xcU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xdU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xeU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xfU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x10U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x11U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x12U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x13U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x14U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x15U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x16U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x17U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x18U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x19U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1aU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1bU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1cU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1dU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1eU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1fU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
    } else if ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))) {
        if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray) {
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[1U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[1U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[2U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[2U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[3U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[3U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[4U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[4U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[5U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[5U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[6U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[6U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[7U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[7U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[8U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[8U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[9U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[9U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xaU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xaU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xbU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xbU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xcU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xcU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xdU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xdU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xeU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xeU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xfU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0xfU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x10U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x10U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x11U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x11U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x12U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x12U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x13U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x13U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x14U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x14U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x15U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x15U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x16U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x16U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x17U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x17U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x18U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x18U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x19U] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x19U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1aU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1aU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1bU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1bU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1cU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1cU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1dU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1dU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1eU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1eU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1fU] 
                = vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[0x1fU];
        } else {
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[1U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[2U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[3U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[4U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[5U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[6U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[7U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[8U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[9U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xaU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xbU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xcU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xdU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xeU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xfU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x10U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x11U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x12U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x13U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x14U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x15U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x16U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x17U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x18U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x19U] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1aU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1bU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1cU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1dU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1eU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1fU] 
                = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
    } else {
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[1U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[2U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[3U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[4U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[5U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[6U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[7U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[8U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[9U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xaU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xbU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xcU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xdU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xeU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0xfU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x10U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x11U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x12U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x13U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x14U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x15U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x16U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x17U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x18U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x19U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1aU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1bU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1cU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1dU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1eU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0[0x1fU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__669__PROF__Soc__l2050(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__669__PROF__Soc__l2050\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6 
        = ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
            ? vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr
            : ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr
                : ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr
                    : 0U)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__670__PROF__Soc__l2083(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__670__PROF__Soc__l2083\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8 
        = (IData)((0U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__671__PROF__Soc__l2082(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__671__PROF__Soc__l2082\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7 
        = (IData)((2U == (3U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__672__PROF__Soc__l2063(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__672__PROF__Soc__l2063\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__673__PROF__Soc__l2084(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__673__PROF__Soc__l2084\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__674__PROF__Soc__l2062(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__674__PROF__Soc__l2062\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = 
        (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__675__PROF__Soc__l2066(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__675__PROF__Soc__l2066\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__676__PROF__Soc__l2064(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__676__PROF__Soc__l2064\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN 
        = (1U & ((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                        >> 3U))) | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__677__PROF__Soc__l2067(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__677__PROF__Soc__l2067\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__678__PROF__Soc__l2087(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__678__PROF__Soc__l2087\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__679__PROF__Soc__l2085(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__679__PROF__Soc__l2085\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__680__PROF__Soc__l3603(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__680__PROF__Soc__l3603\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray)
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type)
                ? (QData)((IData)(((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                    ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3383bb42__0
                                    : ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                        ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                            ? vlSelf->__VdfgTmp_h0981aadf__0[0x1eU]
                                            : 0U) : 
                                       ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                             ? vlSelf->__VdfgTmp_h0981aadf__0[0x1dU]
                                             : 0U) : 
                                        ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                          ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                              ? vlSelf->__VdfgTmp_h0981aadf__0[0x1cU]
                                              : 0U)
                                          : ((0x6cU 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                              ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                  ? 
                                                 vlSelf->__VdfgTmp_h0981aadf__0[0x1bU]
                                                  : 0U)
                                              : ((0x68U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                   ? 
                                                  vlSelf->__VdfgTmp_h0981aadf__0[0x1aU]
                                                   : 0U)
                                                  : 
                                                 ((0x64U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                    ? 
                                                   vlSelf->__VdfgTmp_h0981aadf__0[0x19U]
                                                    : 0U)
                                                   : 
                                                  ((0x60U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                     ? 
                                                    vlSelf->__VdfgTmp_h0981aadf__0[0x18U]
                                                     : 0U)
                                                    : 
                                                   ((0x5cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                      ? 
                                                     vlSelf->__VdfgTmp_h0981aadf__0[0x17U]
                                                      : 0U)
                                                     : 
                                                    ((0x58U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                       ? 
                                                      vlSelf->__VdfgTmp_h0981aadf__0[0x16U]
                                                       : 0U)
                                                      : 
                                                     ((0x54U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                        ? 
                                                       vlSelf->__VdfgTmp_h0981aadf__0[0x15U]
                                                        : 0U)
                                                       : 
                                                      ((0x50U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                         ? 
                                                        vlSelf->__VdfgTmp_h0981aadf__0[0x14U]
                                                         : 0U)
                                                        : 
                                                       ((0x4cU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                          ? 
                                                         vlSelf->__VdfgTmp_h0981aadf__0[0x13U]
                                                          : 0U)
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                           ? 
                                                          vlSelf->__VdfgTmp_h0981aadf__0[0x12U]
                                                           : 0U)
                                                          : 
                                                         ((0x44U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                            ? 
                                                           vlSelf->__VdfgTmp_h0981aadf__0[0x11U]
                                                            : 0U)
                                                           : 
                                                          ((0x40U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                             ? 
                                                            vlSelf->__VdfgTmp_h0981aadf__0[0x10U]
                                                             : 0U)
                                                            : 
                                                           ((0x3cU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                             ? 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                              ? 
                                                             vlSelf->__VdfgTmp_h0981aadf__0[0xfU]
                                                              : 0U)
                                                             : 
                                                            ((0x38U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                              ? 
                                                             ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                               ? 
                                                              vlSelf->__VdfgTmp_h0981aadf__0[0xeU]
                                                               : 0U)
                                                              : 
                                                             ((0x34U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                               ? 
                                                              ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                ? 
                                                               vlSelf->__VdfgTmp_h0981aadf__0[0xdU]
                                                                : 0U)
                                                               : 
                                                              ((0x30U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                ? 
                                                               ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                 ? 
                                                                vlSelf->__VdfgTmp_h0981aadf__0[0xcU]
                                                                 : 0U)
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                 ? 
                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_h0981aadf__0[0xbU]
                                                                  : 0U)
                                                                 : 
                                                                ((0x28U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                  ? 
                                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                   ? 
                                                                  vlSelf->__VdfgTmp_h0981aadf__0[0xaU]
                                                                   : 0U)
                                                                  : 
                                                                 ((0x24U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                   ? 
                                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                    ? 
                                                                   vlSelf->__VdfgTmp_h0981aadf__0[9U]
                                                                    : 0U)
                                                                   : 
                                                                  ((0x20U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                    ? 
                                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                     ? 
                                                                    vlSelf->__VdfgTmp_h0981aadf__0[8U]
                                                                     : 0U)
                                                                    : 
                                                                   ((0x1cU 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                     ? 
                                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                      ? 
                                                                     vlSelf->__VdfgTmp_h0981aadf__0[7U]
                                                                      : 0U)
                                                                     : 
                                                                    ((0x18U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                      ? 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                       ? 
                                                                      vlSelf->__VdfgTmp_h0981aadf__0[6U]
                                                                       : 0U)
                                                                      : 
                                                                     ((0x14U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                       ? 
                                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                        ? 
                                                                       vlSelf->__VdfgTmp_h0981aadf__0[5U]
                                                                        : 0U)
                                                                       : 
                                                                      ((0x10U 
                                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                        ? 
                                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                         ? 
                                                                        vlSelf->__VdfgTmp_h0981aadf__0[4U]
                                                                         : 0U)
                                                                        : 
                                                                       ((0xcU 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                         ? 
                                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                          ? 
                                                                         vlSelf->__VdfgTmp_h0981aadf__0[3U]
                                                                          : 0U)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                          ? 
                                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                           ? 
                                                                          vlSelf->__VdfgTmp_h0981aadf__0[2U]
                                                                           : 0U)
                                                                          : 
                                                                         ((4U 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                           ? 
                                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN)
                                                                            ? 
                                                                           vlSelf->__VdfgTmp_h0981aadf__0[1U]
                                                                            : 0U)
                                                                           : 
                                                                          ((0U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                                            ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0
                                                                            : 0U))))))))))))))))))))))))))))))))))
                : (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[
                                    (((IData)(0x3fU) 
                                      + (0x3c0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 3U))) 
                                     >> 5U)])) << 0x20U) 
                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray[
                                     (0x1eU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               >> 2U))]))))
            : vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__681__PROF__Soc__l2706(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__681__PROF__Soc__l2706\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0 
        = (0x3fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__682__PROF__Soc__l236(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__682__PROF__Soc__l236\n"); );
    // Body
    vlSelf->__VdfgTmp_h4fb76d38__0 = vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
        [(0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                    << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)))];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__683__PROF__Soc__l2911(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__683__PROF__Soc__l2911\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4385e347__0 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace 
           | ((IData)(1U) << ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                              << 1U)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__684__PROF__Soc__l2911(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__684__PROF__Soc__l2911\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hd6c4a0b5__0 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace) 
              | ((IData)(1U) << ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                 << 1U))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__685__PROF__Soc__l2918(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__685__PROF__Soc__l2918\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha6af1649__0 
        = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace) 
              | ((0x1fU >= (0x3fU & ((IData)(1U) + 
                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                      << 1U)))) ? ((IData)(1U) 
                                                   << 
                                                   (0x3fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                                        << 1U))))
                  : 0U)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__686__PROF__Soc__l2918(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__686__PROF__Soc__l2918\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h93208993__0 
        = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace 
           | ((0x1fU >= (0x3fU & ((IData)(1U) + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                                 << 1U))))
               ? ((IData)(1U) << (0x3fU & ((IData)(1U) 
                                           + ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index) 
                                              << 1U))))
               : 0U));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__687__PROF__Soc__l3974(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__687__PROF__Soc__l3974\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)))) {
        vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata 
            = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush)
                ? 0ULL : vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__688__PROF__Soc__l2485(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__688__PROF__Soc__l2485\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h09e42635__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb8d3fe15__0;
    VlWide<32>/*1023:0*/ __Vtemp_h20ba67d3__0;
    VlWide<32>/*1023:0*/ __Vtemp_he3306bd1__0;
    VlWide<32>/*1023:0*/ __Vtemp_h161b7317__0;
    VlWide<32>/*1023:0*/ __Vtemp_h556eceaa__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf8ad0f86__0;
    VlWide<32>/*1023:0*/ __Vtemp_hfac1660b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h8af64861__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb8a996e0__0;
    VlWide<32>/*1023:0*/ __Vtemp_h05a66de7__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc0d12163__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6d0bd1e7__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc294dc40__0;
    VlWide<32>/*1023:0*/ __Vtemp_haa5f8a6c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h737c57fb__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf7abf738__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd02d6a0e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h17cc39f1__0;
    VlWide<32>/*1023:0*/ __Vtemp_hbf87084d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h896c5c6f__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf2028f37__0;
    VlWide<32>/*1023:0*/ __Vtemp_h00c1ab01__0;
    VlWide<32>/*1023:0*/ __Vtemp_hcf882db5__0;
    VlWide<32>/*1023:0*/ __Vtemp_h84f687bb__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha54815e9__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf6dd4a13__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc09eec67__0;
    VlWide<32>/*1023:0*/ __Vtemp_heb6d390d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h929e340d__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc8ca0c48__0;
    VlWide<32>/*1023:0*/ __Vtemp_h62ad313c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2c49b55d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7f58ce7e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5c60adf2__0;
    VlWide<32>/*1023:0*/ __Vtemp_h410d1f8a__0;
    // Body
    if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a151b__0[1U];
        __Vtemp_h09e42635__0[3U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a151b__0[3U]);
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1137__0[1U];
        __Vtemp_h09e42635__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216aed03__0[1U];
        __Vtemp_h09e42635__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0U];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae91f__0 
                                            >> 0x20U));
        __Vtemp_h09e42635__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[1U] 
                                                  << 0x10U));
    } else if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))) 
                                              << 0x30U) 
                                             | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0) 
                                            >> 0x20U));
        __Vtemp_h09e42635__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[1U];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h09e42635__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[2U] 
                                                  << 0x10U));
    } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0U];
        __Vtemp_h09e42635__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[2U];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09e42635__0[1U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[1U] 
                                                  << 0x10U));
        __Vtemp_h09e42635__0[3U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[3U] 
                                                  << 0x10U));
    } else {
        __Vtemp_h09e42635__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h09e42635__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    }
    if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216af94f__0[0U];
        __Vtemp_hb8d3fe15__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216af94f__0[2U];
        __Vtemp_hb8d3fe15__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_hb8d3fe15__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[1U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[2U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[3U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[4U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[5U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[6U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[7U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[8U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[9U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xcU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0[0x1bU] 
                                        << 0x10U));
    } else if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a151b__0[0U];
        __Vtemp_hb8d3fe15__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a151b__0[2U];
        __Vtemp_hb8d3fe15__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0U];
        __Vtemp_hb8d3fe15__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[1U];
        __Vtemp_hb8d3fe15__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[2U];
        __Vtemp_hb8d3fe15__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[3U];
        __Vtemp_hb8d3fe15__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[4U];
        __Vtemp_hb8d3fe15__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[5U];
        __Vtemp_hb8d3fe15__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[6U];
        __Vtemp_hb8d3fe15__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[7U];
        __Vtemp_hb8d3fe15__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[8U];
        __Vtemp_hb8d3fe15__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[9U];
        __Vtemp_hb8d3fe15__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0xaU];
        __Vtemp_hb8d3fe15__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0xbU];
        __Vtemp_hb8d3fe15__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0xcU];
        __Vtemp_hb8d3fe15__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0xdU];
        __Vtemp_hb8d3fe15__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0xeU];
        __Vtemp_hb8d3fe15__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0xfU];
        __Vtemp_hb8d3fe15__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x10U];
        __Vtemp_hb8d3fe15__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x11U];
        __Vtemp_hb8d3fe15__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x12U];
        __Vtemp_hb8d3fe15__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x13U];
        __Vtemp_hb8d3fe15__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x14U];
        __Vtemp_hb8d3fe15__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x15U];
        __Vtemp_hb8d3fe15__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x16U];
        __Vtemp_hb8d3fe15__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x17U];
        __Vtemp_hb8d3fe15__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x18U];
        __Vtemp_hb8d3fe15__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x19U];
        __Vtemp_hb8d3fe15__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x1aU];
        __Vtemp_hb8d3fe15__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0[0x1bU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1137__0[0U];
        __Vtemp_hb8d3fe15__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1137__0[2U];
        __Vtemp_hb8d3fe15__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[1U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[2U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[3U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[4U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[5U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[6U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[7U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[8U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[9U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xdU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0[0x1cU] 
                                        << 0x10U));
    } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216aed03__0[0U];
        __Vtemp_hb8d3fe15__0[2U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216aed03__0[2U]);
        __Vtemp_hb8d3fe15__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[1U];
        __Vtemp_hb8d3fe15__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[2U];
        __Vtemp_hb8d3fe15__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[3U];
        __Vtemp_hb8d3fe15__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[4U];
        __Vtemp_hb8d3fe15__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[5U];
        __Vtemp_hb8d3fe15__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[6U];
        __Vtemp_hb8d3fe15__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[7U];
        __Vtemp_hb8d3fe15__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[8U];
        __Vtemp_hb8d3fe15__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[9U];
        __Vtemp_hb8d3fe15__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0xaU];
        __Vtemp_hb8d3fe15__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0xbU];
        __Vtemp_hb8d3fe15__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0xcU];
        __Vtemp_hb8d3fe15__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0xdU];
        __Vtemp_hb8d3fe15__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0xeU];
        __Vtemp_hb8d3fe15__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0xfU];
        __Vtemp_hb8d3fe15__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x10U];
        __Vtemp_hb8d3fe15__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x11U];
        __Vtemp_hb8d3fe15__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x12U];
        __Vtemp_hb8d3fe15__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x13U];
        __Vtemp_hb8d3fe15__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x14U];
        __Vtemp_hb8d3fe15__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x15U];
        __Vtemp_hb8d3fe15__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x16U];
        __Vtemp_hb8d3fe15__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x17U];
        __Vtemp_hb8d3fe15__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x18U];
        __Vtemp_hb8d3fe15__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x19U];
        __Vtemp_hb8d3fe15__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x1aU];
        __Vtemp_hb8d3fe15__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x1bU];
        __Vtemp_hb8d3fe15__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0[0x1cU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae91f__0);
        __Vtemp_hb8d3fe15__0[2U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_hb8d3fe15__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[2U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[3U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[4U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[5U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[6U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[6U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[7U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[8U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[9U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xcU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xdU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xeU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x1cU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x1cU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0[0x1dU] 
                                        << 0x10U));
    } else if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))) 
                                             << 0x30U) 
                                            | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0));
        __Vtemp_hb8d3fe15__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0U];
        __Vtemp_hb8d3fe15__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[2U];
        __Vtemp_hb8d3fe15__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[3U];
        __Vtemp_hb8d3fe15__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[4U];
        __Vtemp_hb8d3fe15__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[5U];
        __Vtemp_hb8d3fe15__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[6U];
        __Vtemp_hb8d3fe15__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[7U];
        __Vtemp_hb8d3fe15__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[8U];
        __Vtemp_hb8d3fe15__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[9U];
        __Vtemp_hb8d3fe15__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0xaU];
        __Vtemp_hb8d3fe15__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0xbU];
        __Vtemp_hb8d3fe15__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0xcU];
        __Vtemp_hb8d3fe15__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0xdU];
        __Vtemp_hb8d3fe15__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0xeU];
        __Vtemp_hb8d3fe15__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0xfU];
        __Vtemp_hb8d3fe15__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x10U];
        __Vtemp_hb8d3fe15__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x11U];
        __Vtemp_hb8d3fe15__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x12U];
        __Vtemp_hb8d3fe15__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x13U];
        __Vtemp_hb8d3fe15__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x14U];
        __Vtemp_hb8d3fe15__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x15U];
        __Vtemp_hb8d3fe15__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x16U];
        __Vtemp_hb8d3fe15__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x17U];
        __Vtemp_hb8d3fe15__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x18U];
        __Vtemp_hb8d3fe15__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x19U];
        __Vtemp_hb8d3fe15__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x1aU];
        __Vtemp_hb8d3fe15__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x1bU];
        __Vtemp_hb8d3fe15__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x1cU];
        __Vtemp_hb8d3fe15__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0[0x1dU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0;
        __Vtemp_hb8d3fe15__0[2U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[1U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[3U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[4U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[5U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[6U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[6U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[7U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[7U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[8U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[9U] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xcU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xdU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xdU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xeU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xfU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1cU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1cU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1dU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1dU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0[0x1eU] 
                                        << 0x10U));
    } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0));
        __Vtemp_hb8d3fe15__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[1U];
        __Vtemp_hb8d3fe15__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[3U];
        __Vtemp_hb8d3fe15__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[4U];
        __Vtemp_hb8d3fe15__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[5U];
        __Vtemp_hb8d3fe15__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[6U];
        __Vtemp_hb8d3fe15__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[7U];
        __Vtemp_hb8d3fe15__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[8U];
        __Vtemp_hb8d3fe15__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[9U];
        __Vtemp_hb8d3fe15__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0xaU];
        __Vtemp_hb8d3fe15__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0xbU];
        __Vtemp_hb8d3fe15__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0xcU];
        __Vtemp_hb8d3fe15__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0xdU];
        __Vtemp_hb8d3fe15__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0xeU];
        __Vtemp_hb8d3fe15__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0xfU];
        __Vtemp_hb8d3fe15__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x10U];
        __Vtemp_hb8d3fe15__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x11U];
        __Vtemp_hb8d3fe15__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x12U];
        __Vtemp_hb8d3fe15__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x13U];
        __Vtemp_hb8d3fe15__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x14U];
        __Vtemp_hb8d3fe15__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x15U];
        __Vtemp_hb8d3fe15__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x16U];
        __Vtemp_hb8d3fe15__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x17U];
        __Vtemp_hb8d3fe15__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x18U];
        __Vtemp_hb8d3fe15__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x19U];
        __Vtemp_hb8d3fe15__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x1aU];
        __Vtemp_hb8d3fe15__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x1bU];
        __Vtemp_hb8d3fe15__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x1cU];
        __Vtemp_hb8d3fe15__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x1dU];
        __Vtemp_hb8d3fe15__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0[0x1eU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8d3fe15__0[0U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_hb8d3fe15__0[2U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[2U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[4U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[4U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[5U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[4U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[5U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[6U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[5U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[6U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[6U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[7U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[7U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[8U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[8U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[9U] 
                                                  << 0x10U));
        __Vtemp_hb8d3fe15__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xaU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xaU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xbU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xbU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xcU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xcU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xdU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xdU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xeU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xeU] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xfU] 
                                       << 0x10U));
        __Vtemp_hb8d3fe15__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x10U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x11U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x12U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x13U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x14U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x15U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x16U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x17U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x18U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x19U] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1aU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1aU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1bU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1bU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1cU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1cU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1dU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1dU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1eU] 
                                        << 0x10U));
        __Vtemp_hb8d3fe15__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1eU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0[0x1fU] 
                                        << 0x10U));
    } else {
        __Vtemp_hb8d3fe15__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_hb8d3fe15__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_hb8d3fe15__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_hb8d3fe15__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_hb8d3fe15__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_hb8d3fe15__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_hb8d3fe15__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_hb8d3fe15__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_hb8d3fe15__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_hb8d3fe15__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_hb8d3fe15__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_hb8d3fe15__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_hb8d3fe15__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_hb8d3fe15__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_hb8d3fe15__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_hb8d3fe15__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_hb8d3fe15__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_hb8d3fe15__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_hb8d3fe15__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_hb8d3fe15__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_hb8d3fe15__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_hb8d3fe15__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_hb8d3fe15__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_hb8d3fe15__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_hb8d3fe15__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_hb8d3fe15__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_hb8d3fe15__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_hb8d3fe15__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_hb8d3fe15__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_hb8d3fe15__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[7U];
        __Vtemp_h20ba67d3__0[8U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[8U]);
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[7U];
        __Vtemp_h20ba67d3__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[7U]);
        __Vtemp_h20ba67d3__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h20ba67d3__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[1U] 
                                                  << 0x10U));
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0U];
        __Vtemp_h20ba67d3__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[1U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[1U] 
                                                  << 0x10U));
        __Vtemp_h20ba67d3__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[2U] 
                                                  << 0x10U));
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[1U];
        __Vtemp_h20ba67d3__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[2U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[2U] 
                                                  << 0x10U));
        __Vtemp_h20ba67d3__0[8U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[3U] 
                                                  << 0x10U));
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20ba67d3__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[2U];
        __Vtemp_h20ba67d3__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[3U];
    } else {
        __Vtemp_h20ba67d3__0[7U] = __Vtemp_hb8d3fe15__0[7U];
        __Vtemp_h20ba67d3__0[8U] = __Vtemp_hb8d3fe15__0[8U];
    }
    if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0U] 
                                     << 0x10U) | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_he3306bd1__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[1U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[2U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[3U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[4U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[5U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[6U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[7U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[8U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[9U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xaU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xbU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xcU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xdU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xeU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xfU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x10U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x11U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x12U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x13U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x14U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x15U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0[0x16U] 
                                        << 0x10U));
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0U];
        __Vtemp_he3306bd1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[1U];
        __Vtemp_he3306bd1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[2U];
        __Vtemp_he3306bd1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[3U];
        __Vtemp_he3306bd1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[4U];
        __Vtemp_he3306bd1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[5U];
        __Vtemp_he3306bd1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[6U];
        __Vtemp_he3306bd1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[7U];
        __Vtemp_he3306bd1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[8U];
        __Vtemp_he3306bd1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[9U];
        __Vtemp_he3306bd1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0xaU];
        __Vtemp_he3306bd1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0xbU];
        __Vtemp_he3306bd1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0xcU];
        __Vtemp_he3306bd1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0xdU];
        __Vtemp_he3306bd1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0xeU];
        __Vtemp_he3306bd1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0xfU];
        __Vtemp_he3306bd1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0x10U];
        __Vtemp_he3306bd1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0x11U];
        __Vtemp_he3306bd1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0x12U];
        __Vtemp_he3306bd1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0x13U];
        __Vtemp_he3306bd1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0x14U];
        __Vtemp_he3306bd1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0x15U];
        __Vtemp_he3306bd1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0[0x16U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[1U] 
                                                  << 0x10U));
        __Vtemp_he3306bd1__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[2U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[3U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[4U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[5U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[6U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[7U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[8U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[9U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xaU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xbU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xcU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xdU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xeU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xfU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x10U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x11U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x12U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x13U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x14U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x15U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x16U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0[0x17U] 
                                        << 0x10U));
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[1U];
        __Vtemp_he3306bd1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[2U];
        __Vtemp_he3306bd1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[3U];
        __Vtemp_he3306bd1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[4U];
        __Vtemp_he3306bd1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[5U];
        __Vtemp_he3306bd1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[6U];
        __Vtemp_he3306bd1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[7U];
        __Vtemp_he3306bd1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[8U];
        __Vtemp_he3306bd1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[9U];
        __Vtemp_he3306bd1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0xaU];
        __Vtemp_he3306bd1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0xbU];
        __Vtemp_he3306bd1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0xcU];
        __Vtemp_he3306bd1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0xdU];
        __Vtemp_he3306bd1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0xeU];
        __Vtemp_he3306bd1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0xfU];
        __Vtemp_he3306bd1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x10U];
        __Vtemp_he3306bd1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x11U];
        __Vtemp_he3306bd1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x12U];
        __Vtemp_he3306bd1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x13U];
        __Vtemp_he3306bd1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x14U];
        __Vtemp_he3306bd1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x15U];
        __Vtemp_he3306bd1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x16U];
        __Vtemp_he3306bd1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0[0x17U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[1U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[2U] 
                                                  << 0x10U));
        __Vtemp_he3306bd1__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[3U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[4U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[5U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[6U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[7U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[8U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[9U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xaU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xbU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xcU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xdU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xeU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xfU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x10U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x11U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x12U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x13U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x14U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x15U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x16U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x17U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0[0x18U] 
                                        << 0x10U));
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[2U];
        __Vtemp_he3306bd1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[3U];
        __Vtemp_he3306bd1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[4U];
        __Vtemp_he3306bd1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[5U];
        __Vtemp_he3306bd1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[6U];
        __Vtemp_he3306bd1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[7U];
        __Vtemp_he3306bd1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[8U];
        __Vtemp_he3306bd1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[9U];
        __Vtemp_he3306bd1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0xaU];
        __Vtemp_he3306bd1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0xbU];
        __Vtemp_he3306bd1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0xcU];
        __Vtemp_he3306bd1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0xdU];
        __Vtemp_he3306bd1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0xeU];
        __Vtemp_he3306bd1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0xfU];
        __Vtemp_he3306bd1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x10U];
        __Vtemp_he3306bd1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x11U];
        __Vtemp_he3306bd1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x12U];
        __Vtemp_he3306bd1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x13U];
        __Vtemp_he3306bd1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x14U];
        __Vtemp_he3306bd1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x15U];
        __Vtemp_he3306bd1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x16U];
        __Vtemp_he3306bd1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x17U];
        __Vtemp_he3306bd1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0[0x18U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[2U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[3U] 
                                                  << 0x10U));
        __Vtemp_he3306bd1__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[4U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[5U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[6U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[7U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[8U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[9U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xaU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xbU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xcU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xdU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xeU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xfU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x10U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x11U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x12U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x13U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x14U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x15U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x16U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x17U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x18U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0x19U] 
                                        << 0x10U));
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[3U];
        __Vtemp_he3306bd1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[4U];
        __Vtemp_he3306bd1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[5U];
        __Vtemp_he3306bd1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[6U];
        __Vtemp_he3306bd1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[7U];
        __Vtemp_he3306bd1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[8U];
        __Vtemp_he3306bd1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[9U];
        __Vtemp_he3306bd1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0xaU];
        __Vtemp_he3306bd1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0xbU];
        __Vtemp_he3306bd1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0xcU];
        __Vtemp_he3306bd1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0xdU];
        __Vtemp_he3306bd1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0xeU];
        __Vtemp_he3306bd1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0xfU];
        __Vtemp_he3306bd1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x10U];
        __Vtemp_he3306bd1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x11U];
        __Vtemp_he3306bd1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x12U];
        __Vtemp_he3306bd1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x13U];
        __Vtemp_he3306bd1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x14U];
        __Vtemp_he3306bd1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x15U];
        __Vtemp_he3306bd1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x16U];
        __Vtemp_he3306bd1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x17U];
        __Vtemp_he3306bd1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x18U];
        __Vtemp_he3306bd1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0x19U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[3U] 
                                     >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[4U] 
                                                  << 0x10U));
        __Vtemp_he3306bd1__0[0xaU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[5U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xbU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[5U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[6U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[6U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[7U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[7U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[8U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[8U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[9U] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[9U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xaU] 
                                       << 0x10U));
        __Vtemp_he3306bd1__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xbU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xcU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xdU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xeU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xfU] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x10U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x11U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x12U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x13U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x14U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x15U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x15U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x16U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x16U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x17U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x17U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x18U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x18U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x19U] 
                                        << 0x10U));
        __Vtemp_he3306bd1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x19U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0x1aU] 
                                        << 0x10U));
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3306bd1__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[4U];
        __Vtemp_he3306bd1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[5U];
        __Vtemp_he3306bd1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[6U];
        __Vtemp_he3306bd1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[7U];
        __Vtemp_he3306bd1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[8U];
        __Vtemp_he3306bd1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[9U];
        __Vtemp_he3306bd1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0xaU];
        __Vtemp_he3306bd1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0xbU];
        __Vtemp_he3306bd1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0xcU];
        __Vtemp_he3306bd1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0xdU];
        __Vtemp_he3306bd1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0xeU];
        __Vtemp_he3306bd1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0xfU];
        __Vtemp_he3306bd1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x10U];
        __Vtemp_he3306bd1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x11U];
        __Vtemp_he3306bd1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x12U];
        __Vtemp_he3306bd1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x13U];
        __Vtemp_he3306bd1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x14U];
        __Vtemp_he3306bd1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x15U];
        __Vtemp_he3306bd1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x16U];
        __Vtemp_he3306bd1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x17U];
        __Vtemp_he3306bd1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x18U];
        __Vtemp_he3306bd1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x19U];
        __Vtemp_he3306bd1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0x1aU];
    } else {
        __Vtemp_he3306bd1__0[9U] = __Vtemp_hb8d3fe15__0[9U];
        __Vtemp_he3306bd1__0[0xaU] = __Vtemp_hb8d3fe15__0[0xaU];
        __Vtemp_he3306bd1__0[0xbU] = __Vtemp_hb8d3fe15__0[0xbU];
        __Vtemp_he3306bd1__0[0xcU] = __Vtemp_hb8d3fe15__0[0xcU];
        __Vtemp_he3306bd1__0[0xdU] = __Vtemp_hb8d3fe15__0[0xdU];
        __Vtemp_he3306bd1__0[0xeU] = __Vtemp_hb8d3fe15__0[0xeU];
        __Vtemp_he3306bd1__0[0xfU] = __Vtemp_hb8d3fe15__0[0xfU];
        __Vtemp_he3306bd1__0[0x10U] = __Vtemp_hb8d3fe15__0[0x10U];
        __Vtemp_he3306bd1__0[0x11U] = __Vtemp_hb8d3fe15__0[0x11U];
        __Vtemp_he3306bd1__0[0x12U] = __Vtemp_hb8d3fe15__0[0x12U];
        __Vtemp_he3306bd1__0[0x13U] = __Vtemp_hb8d3fe15__0[0x13U];
        __Vtemp_he3306bd1__0[0x14U] = __Vtemp_hb8d3fe15__0[0x14U];
        __Vtemp_he3306bd1__0[0x15U] = __Vtemp_hb8d3fe15__0[0x15U];
        __Vtemp_he3306bd1__0[0x16U] = __Vtemp_hb8d3fe15__0[0x16U];
        __Vtemp_he3306bd1__0[0x17U] = __Vtemp_hb8d3fe15__0[0x17U];
        __Vtemp_he3306bd1__0[0x18U] = __Vtemp_hb8d3fe15__0[0x18U];
        __Vtemp_he3306bd1__0[0x19U] = __Vtemp_hb8d3fe15__0[0x19U];
        __Vtemp_he3306bd1__0[0x1aU] = __Vtemp_hb8d3fe15__0[0x1aU];
        __Vtemp_he3306bd1__0[0x1bU] = __Vtemp_hb8d3fe15__0[0x1bU];
        __Vtemp_he3306bd1__0[0x1cU] = __Vtemp_hb8d3fe15__0[0x1cU];
        __Vtemp_he3306bd1__0[0x1dU] = __Vtemp_hb8d3fe15__0[0x1dU];
        __Vtemp_he3306bd1__0[0x1eU] = __Vtemp_hb8d3fe15__0[0x1eU];
        __Vtemp_he3306bd1__0[0x1fU] = __Vtemp_hb8d3fe15__0[0x1fU];
    }
    __Vtemp_h161b7317__0[6U] = ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[6U]
                                 : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[6U]
                                     : ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[6U]
                                         : ((0x20U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[6U]
                                             : ((0x1eU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[6U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0[6U]
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                    << 0x10U) 
                                                   | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0[6U])
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0[0U] 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0[0U]
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0U] 
                                                       >> 0x10U) 
                                                      | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[1U] 
                                                         << 0x10U))
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[1U]
                                                       : 
                                                      __Vtemp_hb8d3fe15__0[6U])))))))))));
    __Vtemp_h556eceaa__0[5U] = ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[5U]
                                 : ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[5U]
                                     : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[5U]
                                         : ((0x22U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[5U]
                                             : ((0x20U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[5U]
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[5U]
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0[5U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0[5U]
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a09bf__0[5U]
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                       << 0x10U) 
                                                      | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae56b__0[5U])
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0[0U] 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0[0U]
                                                        : 
                                                       __Vtemp_hb8d3fe15__0[5U]))))))))))));
    __Vtemp_hf8ad0f86__0[4U] = ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[4U]
                                 : ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[4U]
                                     : ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[4U]
                                         : ((0x26U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[4U]
                                             : ((0x24U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[4U]
                                                 : 
                                                ((0x22U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[4U]
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[4U]
                                                   : 
                                                  ((0x1eU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[4U]
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0[4U]
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0[4U]
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a09bf__0[4U]
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae56b__0[4U]
                                                        : 
                                                       ((0x14U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae167__0[4U]
                                                         : 
                                                        ((0x12U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                           << 0x10U) 
                                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216afd53__0[4U])
                                                          : 
                                                         __Vtemp_hb8d3fe15__0[4U]))))))))))))));
    if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[3U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[3U];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[3U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[3U];
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[3U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[3U];
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[3U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[3U];
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[3U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0[3U];
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0[3U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a09bf__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a09bf__0[3U];
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae56b__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae56b__0[3U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae167__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae167__0[3U];
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216afd53__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216afd53__0[3U];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfac1660b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216af94f__0[1U];
        __Vtemp_hfac1660b__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216af94f__0[3U];
    } else {
        __Vtemp_hfac1660b__0[1U] = __Vtemp_h09e42635__0[1U];
        __Vtemp_hfac1660b__0[3U] = __Vtemp_h09e42635__0[3U];
    }
    if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[2U];
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[2U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[2U];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[2U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[2U];
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[2U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[2U];
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0[2U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0[2U];
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0[2U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0[2U];
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0[2U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a09bf__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a09bf__0[2U];
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae56b__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae56b__0[2U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae167__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae167__0[2U];
    } else if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8af64861__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216afd53__0[0U];
        __Vtemp_h8af64861__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216afd53__0[2U];
    } else {
        __Vtemp_h8af64861__0[0U] = __Vtemp_hb8d3fe15__0[0U];
        __Vtemp_h8af64861__0[2U] = __Vtemp_hb8d3fe15__0[2U];
    }
    if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[0xcU];
        __Vtemp_hb8a996e0__0[0xdU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[0xdU]);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[0xcU];
        __Vtemp_hb8a996e0__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[0xcU]);
        __Vtemp_hb8a996e0__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_hb8a996e0__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[1U] 
                                       << 0x10U));
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0U];
        __Vtemp_hb8a996e0__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[1U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[1U] 
                                       << 0x10U));
        __Vtemp_hb8a996e0__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[2U] 
                                       << 0x10U));
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[1U];
        __Vtemp_hb8a996e0__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[2U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[2U] 
                                       << 0x10U));
        __Vtemp_hb8a996e0__0[0xdU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[3U] 
                                       << 0x10U));
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb8a996e0__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[2U];
        __Vtemp_hb8a996e0__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[3U];
    } else {
        __Vtemp_hb8a996e0__0[0xcU] = __Vtemp_he3306bd1__0[0xcU];
        __Vtemp_hb8a996e0__0[0xdU] = __Vtemp_he3306bd1__0[0xdU];
    }
    if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h05a66de7__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[1U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[2U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[3U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[4U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[5U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[6U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[7U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[8U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[9U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0[0x11U] 
                                        << 0x10U));
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0U];
        __Vtemp_h05a66de7__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[1U];
        __Vtemp_h05a66de7__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[2U];
        __Vtemp_h05a66de7__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[3U];
        __Vtemp_h05a66de7__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[4U];
        __Vtemp_h05a66de7__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[5U];
        __Vtemp_h05a66de7__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[6U];
        __Vtemp_h05a66de7__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[7U];
        __Vtemp_h05a66de7__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[8U];
        __Vtemp_h05a66de7__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[9U];
        __Vtemp_h05a66de7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0xaU];
        __Vtemp_h05a66de7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0xbU];
        __Vtemp_h05a66de7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0xcU];
        __Vtemp_h05a66de7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0xdU];
        __Vtemp_h05a66de7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0xeU];
        __Vtemp_h05a66de7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0xfU];
        __Vtemp_h05a66de7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0x10U];
        __Vtemp_h05a66de7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0[0x11U];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[1U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[2U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[3U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[4U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[5U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[6U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[7U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[8U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[9U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0[0x12U] 
                                        << 0x10U));
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[1U];
        __Vtemp_h05a66de7__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[2U];
        __Vtemp_h05a66de7__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[3U];
        __Vtemp_h05a66de7__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[4U];
        __Vtemp_h05a66de7__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[5U];
        __Vtemp_h05a66de7__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[6U];
        __Vtemp_h05a66de7__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[7U];
        __Vtemp_h05a66de7__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[8U];
        __Vtemp_h05a66de7__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[9U];
        __Vtemp_h05a66de7__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0xaU];
        __Vtemp_h05a66de7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0xbU];
        __Vtemp_h05a66de7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0xcU];
        __Vtemp_h05a66de7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0xdU];
        __Vtemp_h05a66de7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0xeU];
        __Vtemp_h05a66de7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0xfU];
        __Vtemp_h05a66de7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0x10U];
        __Vtemp_h05a66de7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0x11U];
        __Vtemp_h05a66de7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0[0x12U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[1U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[2U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[3U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[4U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[5U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[6U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[7U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[8U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[9U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0x12U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0[0x13U] 
                                        << 0x10U));
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[2U];
        __Vtemp_h05a66de7__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[3U];
        __Vtemp_h05a66de7__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[4U];
        __Vtemp_h05a66de7__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[5U];
        __Vtemp_h05a66de7__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[6U];
        __Vtemp_h05a66de7__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[7U];
        __Vtemp_h05a66de7__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[8U];
        __Vtemp_h05a66de7__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[9U];
        __Vtemp_h05a66de7__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0xaU];
        __Vtemp_h05a66de7__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0xbU];
        __Vtemp_h05a66de7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0xcU];
        __Vtemp_h05a66de7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0xdU];
        __Vtemp_h05a66de7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0xeU];
        __Vtemp_h05a66de7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0xfU];
        __Vtemp_h05a66de7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0x10U];
        __Vtemp_h05a66de7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0x11U];
        __Vtemp_h05a66de7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0x12U];
        __Vtemp_h05a66de7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0[0x13U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[2U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[3U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[4U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[5U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[6U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[7U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[8U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[9U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x12U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x13U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0x14U] 
                                        << 0x10U));
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[3U];
        __Vtemp_h05a66de7__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[4U];
        __Vtemp_h05a66de7__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[5U];
        __Vtemp_h05a66de7__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[6U];
        __Vtemp_h05a66de7__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[7U];
        __Vtemp_h05a66de7__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[8U];
        __Vtemp_h05a66de7__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[9U];
        __Vtemp_h05a66de7__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0xaU];
        __Vtemp_h05a66de7__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0xbU];
        __Vtemp_h05a66de7__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0xcU];
        __Vtemp_h05a66de7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0xdU];
        __Vtemp_h05a66de7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0xeU];
        __Vtemp_h05a66de7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0xfU];
        __Vtemp_h05a66de7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0x10U];
        __Vtemp_h05a66de7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0x11U];
        __Vtemp_h05a66de7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0x12U];
        __Vtemp_h05a66de7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0x13U];
        __Vtemp_h05a66de7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0x14U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[3U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[4U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[4U] 
                                       >> 0x10U) | 
                                      (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[5U] 
                                       << 0x10U));
        __Vtemp_h05a66de7__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[6U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[7U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[8U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[9U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x10U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x10U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x11U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x11U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x12U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x12U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x13U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x13U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x14U] 
                                        << 0x10U));
        __Vtemp_h05a66de7__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x14U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0x15U] 
                                        << 0x10U));
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h05a66de7__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[4U];
        __Vtemp_h05a66de7__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[5U];
        __Vtemp_h05a66de7__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[6U];
        __Vtemp_h05a66de7__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[7U];
        __Vtemp_h05a66de7__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[8U];
        __Vtemp_h05a66de7__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[9U];
        __Vtemp_h05a66de7__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0xaU];
        __Vtemp_h05a66de7__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0xbU];
        __Vtemp_h05a66de7__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0xcU];
        __Vtemp_h05a66de7__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0xdU];
        __Vtemp_h05a66de7__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0xeU];
        __Vtemp_h05a66de7__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0xfU];
        __Vtemp_h05a66de7__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0x10U];
        __Vtemp_h05a66de7__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0x11U];
        __Vtemp_h05a66de7__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0x12U];
        __Vtemp_h05a66de7__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0x13U];
        __Vtemp_h05a66de7__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0x14U];
        __Vtemp_h05a66de7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0x15U];
    } else {
        __Vtemp_h05a66de7__0[0xeU] = __Vtemp_he3306bd1__0[0xeU];
        __Vtemp_h05a66de7__0[0xfU] = __Vtemp_he3306bd1__0[0xfU];
        __Vtemp_h05a66de7__0[0x10U] = __Vtemp_he3306bd1__0[0x10U];
        __Vtemp_h05a66de7__0[0x11U] = __Vtemp_he3306bd1__0[0x11U];
        __Vtemp_h05a66de7__0[0x12U] = __Vtemp_he3306bd1__0[0x12U];
        __Vtemp_h05a66de7__0[0x13U] = __Vtemp_he3306bd1__0[0x13U];
        __Vtemp_h05a66de7__0[0x14U] = __Vtemp_he3306bd1__0[0x14U];
        __Vtemp_h05a66de7__0[0x15U] = __Vtemp_he3306bd1__0[0x15U];
        __Vtemp_h05a66de7__0[0x16U] = __Vtemp_he3306bd1__0[0x16U];
        __Vtemp_h05a66de7__0[0x17U] = __Vtemp_he3306bd1__0[0x17U];
        __Vtemp_h05a66de7__0[0x18U] = __Vtemp_he3306bd1__0[0x18U];
        __Vtemp_h05a66de7__0[0x19U] = __Vtemp_he3306bd1__0[0x19U];
        __Vtemp_h05a66de7__0[0x1aU] = __Vtemp_he3306bd1__0[0x1aU];
        __Vtemp_h05a66de7__0[0x1bU] = __Vtemp_he3306bd1__0[0x1bU];
        __Vtemp_h05a66de7__0[0x1cU] = __Vtemp_he3306bd1__0[0x1cU];
        __Vtemp_h05a66de7__0[0x1dU] = __Vtemp_he3306bd1__0[0x1dU];
        __Vtemp_h05a66de7__0[0x1eU] = __Vtemp_he3306bd1__0[0x1eU];
        __Vtemp_h05a66de7__0[0x1fU] = __Vtemp_he3306bd1__0[0x1fU];
    }
    __Vtemp_hc0d12163__0[0xbU] = ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[0xbU]
                                   : ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[0xbU]
                                       : ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[0xbU]
                                           : ((0x34U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[0xbU]
                                               : ((0x32U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[0xbU]
                                                   : 
                                                  ((0x30U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[0xbU]
                                                    : 
                                                   ((0x2eU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                      << 0x10U) 
                                                     | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[0xbU])
                                                     : 
                                                    ((0x2cU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0[0U] 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                      : 
                                                     ((0x2aU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0[0U]
                                                       : 
                                                      ((0x28U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0U] 
                                                         >> 0x10U) 
                                                        | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[1U] 
                                                           << 0x10U))
                                                        : 
                                                       ((0x26U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[1U]
                                                         : 
                                                        __Vtemp_he3306bd1__0[0xbU])))))))))));
    __Vtemp_h6d0bd1e7__0[0xaU] = ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[0xaU]
                                   : ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[0xaU]
                                       : ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[0xaU]
                                           : ((0x36U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[0xaU]
                                               : ((0x34U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[0xaU]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[0xaU]
                                                    : 
                                                   ((0x30U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[0xaU]
                                                     : 
                                                    ((0x2eU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[0xaU]
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[0xaU]
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                         << 0x10U) 
                                                        | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[0xaU])
                                                        : 
                                                       ((0x28U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0[0U] 
                                                          << 0x10U) 
                                                         | (0xffffU 
                                                            & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                         : 
                                                        ((0x26U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0[0U]
                                                          : 
                                                         __Vtemp_he3306bd1__0[0xaU]))))))))))));
    __Vtemp_hc294dc40__0[9U] = ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[9U]
                                 : ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[9U]
                                     : ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[9U]
                                         : ((0x3aU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[9U]
                                             : ((0x38U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[9U]
                                                 : 
                                                ((0x36U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[9U]
                                                  : 
                                                 ((0x34U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[9U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[9U]
                                                    : 
                                                   ((0x30U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[9U]
                                                     : 
                                                    ((0x2eU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[9U]
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[9U]
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[9U]
                                                        : 
                                                       ((0x28U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[9U]
                                                         : 
                                                        ((0x26U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                           << 0x10U) 
                                                          | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[9U])
                                                          : 
                                                         __Vtemp_he3306bd1__0[9U]))))))))))))));
    if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[8U];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[8U];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[8U];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[8U];
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[8U];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[8U];
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[8U];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[8U];
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[8U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[8U];
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[8U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[8U];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[8U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[8U];
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0[8U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_haa5f8a6c__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0[8U];
    } else {
        __Vtemp_haa5f8a6c__0[7U] = __Vtemp_h20ba67d3__0[7U];
        __Vtemp_haa5f8a6c__0[8U] = __Vtemp_h20ba67d3__0[8U];
    }
    __Vtemp_h737c57fb__0[6U] = ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[6U]
                                 : ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[6U]
                                     : ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[6U]
                                         : ((0x40U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[6U]
                                             : ((0x3eU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[6U]
                                                 : 
                                                ((0x3cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[6U]
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[6U]
                                                   : 
                                                  ((0x38U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[6U]
                                                    : 
                                                   ((0x36U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[6U]
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[6U]
                                                      : 
                                                     ((0x32U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[6U]
                                                       : 
                                                      ((0x30U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[6U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[6U]
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[6U]
                                                          : 
                                                         ((0x2aU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[6U]
                                                           : 
                                                          ((0x28U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0[6U]
                                                            : 
                                                           __Vtemp_h161b7317__0[6U]))))))))))))))));
    __Vtemp_hf7abf738__0[5U] = ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[5U]
                                 : ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[5U]
                                     : ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[5U]
                                         : ((0x42U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[5U]
                                             : ((0x40U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[5U]
                                                 : 
                                                ((0x3eU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[5U]
                                                  : 
                                                 ((0x3cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[5U]
                                                   : 
                                                  ((0x3aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[5U]
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[5U]
                                                     : 
                                                    ((0x36U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[5U]
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[5U]
                                                       : 
                                                      ((0x32U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[5U]
                                                        : 
                                                       ((0x30U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[5U]
                                                         : 
                                                        ((0x2eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[5U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0[5U]
                                                           : 
                                                          ((0x2aU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0[5U]
                                                            : 
                                                           __Vtemp_h556eceaa__0[5U]))))))))))))))));
    if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0x11U];
        __Vtemp_hd02d6a0e__0[0x12U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0x12U]);
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0x11U];
        __Vtemp_hd02d6a0e__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0x11U]);
        __Vtemp_hd02d6a0e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[0U];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_hd02d6a0e__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[1U] 
                                        << 0x10U));
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[0U];
        __Vtemp_hd02d6a0e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[1U];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[1U] 
                                        << 0x10U));
        __Vtemp_hd02d6a0e__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[2U] 
                                        << 0x10U));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[1U];
        __Vtemp_hd02d6a0e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[2U];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[2U] 
                                        << 0x10U));
        __Vtemp_hd02d6a0e__0[0x12U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[3U] 
                                        << 0x10U));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd02d6a0e__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[2U];
        __Vtemp_hd02d6a0e__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[3U];
    } else {
        __Vtemp_hd02d6a0e__0[0x11U] = __Vtemp_h05a66de7__0[0x11U];
        __Vtemp_hd02d6a0e__0[0x12U] = __Vtemp_h05a66de7__0[0x12U];
    }
    if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h17cc39f1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[1U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[2U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[3U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[4U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[5U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[6U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[7U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[8U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[9U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0[0xcU] 
                                        << 0x10U));
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[0U];
        __Vtemp_h17cc39f1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[1U];
        __Vtemp_h17cc39f1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[2U];
        __Vtemp_h17cc39f1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[3U];
        __Vtemp_h17cc39f1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[4U];
        __Vtemp_h17cc39f1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[5U];
        __Vtemp_h17cc39f1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[6U];
        __Vtemp_h17cc39f1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[7U];
        __Vtemp_h17cc39f1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[8U];
        __Vtemp_h17cc39f1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[9U];
        __Vtemp_h17cc39f1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[0xaU];
        __Vtemp_h17cc39f1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[0xbU];
        __Vtemp_h17cc39f1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0[0xcU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[1U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[2U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[3U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[4U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[5U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[6U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[7U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[8U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[9U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0[0xdU] 
                                        << 0x10U));
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[1U];
        __Vtemp_h17cc39f1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[2U];
        __Vtemp_h17cc39f1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[3U];
        __Vtemp_h17cc39f1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[4U];
        __Vtemp_h17cc39f1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[5U];
        __Vtemp_h17cc39f1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[6U];
        __Vtemp_h17cc39f1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[7U];
        __Vtemp_h17cc39f1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[8U];
        __Vtemp_h17cc39f1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[9U];
        __Vtemp_h17cc39f1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[0xaU];
        __Vtemp_h17cc39f1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[0xbU];
        __Vtemp_h17cc39f1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[0xcU];
        __Vtemp_h17cc39f1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0[0xdU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[2U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[3U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[4U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[5U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[6U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[7U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[8U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[9U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0[0xeU] 
                                        << 0x10U));
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[2U];
        __Vtemp_h17cc39f1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[3U];
        __Vtemp_h17cc39f1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[4U];
        __Vtemp_h17cc39f1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[5U];
        __Vtemp_h17cc39f1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[6U];
        __Vtemp_h17cc39f1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[7U];
        __Vtemp_h17cc39f1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[8U];
        __Vtemp_h17cc39f1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[9U];
        __Vtemp_h17cc39f1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[0xaU];
        __Vtemp_h17cc39f1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[0xbU];
        __Vtemp_h17cc39f1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[0xcU];
        __Vtemp_h17cc39f1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[0xdU];
        __Vtemp_h17cc39f1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0[0xeU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[3U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[4U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[5U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[6U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[7U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[8U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[9U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0xfU] 
                                        << 0x10U));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[3U];
        __Vtemp_h17cc39f1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[4U];
        __Vtemp_h17cc39f1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[5U];
        __Vtemp_h17cc39f1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[6U];
        __Vtemp_h17cc39f1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[7U];
        __Vtemp_h17cc39f1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[8U];
        __Vtemp_h17cc39f1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[9U];
        __Vtemp_h17cc39f1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[0xaU];
        __Vtemp_h17cc39f1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[0xbU];
        __Vtemp_h17cc39f1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[0xcU];
        __Vtemp_h17cc39f1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[0xdU];
        __Vtemp_h17cc39f1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[0xeU];
        __Vtemp_h17cc39f1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[0xfU];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[4U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x14U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[5U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[6U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[7U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[8U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[9U] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xaU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xbU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xbU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xcU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xcU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xdU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xdU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xeU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xeU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xfU] 
                                        << 0x10U));
        __Vtemp_h17cc39f1__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0xfU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0x10U] 
                                        << 0x10U));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h17cc39f1__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[4U];
        __Vtemp_h17cc39f1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[4U];
        __Vtemp_h17cc39f1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[5U];
        __Vtemp_h17cc39f1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[6U];
        __Vtemp_h17cc39f1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[7U];
        __Vtemp_h17cc39f1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[8U];
        __Vtemp_h17cc39f1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[9U];
        __Vtemp_h17cc39f1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0xaU];
        __Vtemp_h17cc39f1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0xbU];
        __Vtemp_h17cc39f1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0xcU];
        __Vtemp_h17cc39f1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0xdU];
        __Vtemp_h17cc39f1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0xeU];
        __Vtemp_h17cc39f1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0xfU];
        __Vtemp_h17cc39f1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0x10U];
    } else {
        __Vtemp_h17cc39f1__0[4U] = ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[4U]
                                     : ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[4U]
                                         : ((0x34U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[4U]
                                             : ((0x32U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[4U]
                                                 : 
                                                ((0x30U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[4U]
                                                  : 
                                                 ((0x2eU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0[4U]
                                                   : 
                                                  __Vtemp_hf8ad0f86__0[4U]))))));
        __Vtemp_h17cc39f1__0[0x13U] = __Vtemp_h05a66de7__0[0x13U];
        __Vtemp_h17cc39f1__0[0x14U] = __Vtemp_h05a66de7__0[0x14U];
        __Vtemp_h17cc39f1__0[0x15U] = __Vtemp_h05a66de7__0[0x15U];
        __Vtemp_h17cc39f1__0[0x16U] = __Vtemp_h05a66de7__0[0x16U];
        __Vtemp_h17cc39f1__0[0x17U] = __Vtemp_h05a66de7__0[0x17U];
        __Vtemp_h17cc39f1__0[0x18U] = __Vtemp_h05a66de7__0[0x18U];
        __Vtemp_h17cc39f1__0[0x19U] = __Vtemp_h05a66de7__0[0x19U];
        __Vtemp_h17cc39f1__0[0x1aU] = __Vtemp_h05a66de7__0[0x1aU];
        __Vtemp_h17cc39f1__0[0x1bU] = __Vtemp_h05a66de7__0[0x1bU];
        __Vtemp_h17cc39f1__0[0x1cU] = __Vtemp_h05a66de7__0[0x1cU];
        __Vtemp_h17cc39f1__0[0x1dU] = __Vtemp_h05a66de7__0[0x1dU];
        __Vtemp_h17cc39f1__0[0x1eU] = __Vtemp_h05a66de7__0[0x1eU];
        __Vtemp_h17cc39f1__0[0x1fU] = __Vtemp_h05a66de7__0[0x1fU];
    }
    if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0x10U];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0x10U];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0x10U];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0x10U];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0x10U];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0x10U];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0x10U]);
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0[0U];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[1U] 
                                        << 0x10U));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[1U];
        __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[3U];
        __Vtemp_hbf87084d__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[1U];
    } else {
        if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[1U];
            __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[3U];
        } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[1U];
            __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[3U];
        } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[1U];
            __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[3U];
        } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[1U];
            __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[3U];
        } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hbf87084d__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[1U];
            __Vtemp_hbf87084d__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0[3U];
        } else {
            __Vtemp_hbf87084d__0[1U] = __Vtemp_hfac1660b__0[1U];
            __Vtemp_hbf87084d__0[3U] = __Vtemp_hfac1660b__0[3U];
        }
        __Vtemp_hbf87084d__0[0x10U] = __Vtemp_h05a66de7__0[0x10U];
    }
    if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0xfU];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0xfU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0xfU];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0xfU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0xfU];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0xfU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0xfU];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0xfU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[0xfU];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[0xfU]);
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0[0U] 
                                       << 0x10U) | 
                                      (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[0U];
        __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[2U];
        __Vtemp_h896c5c6f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0[0U];
    } else {
        if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[0U];
            __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[2U];
        } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[0U];
            __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0[2U];
        } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[0U];
            __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0[2U];
        } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h896c5c6f__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[0U];
            __Vtemp_h896c5c6f__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0[2U];
        } else {
            __Vtemp_h896c5c6f__0[0U] = __Vtemp_h8af64861__0[0U];
            __Vtemp_h896c5c6f__0[2U] = __Vtemp_h8af64861__0[2U];
        }
        __Vtemp_h896c5c6f__0[0xfU] = __Vtemp_h05a66de7__0[0xfU];
    }
    __Vtemp_hf2028f37__0[0xeU] = ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0xeU]
                                   : ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0xeU]
                                       : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0xeU]
                                           : ((0x4eU 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0xeU]
                                               : ((0x4cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0xeU]
                                                   : 
                                                  ((0x4aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0xeU]
                                                    : 
                                                   ((0x48U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0xeU]
                                                     : 
                                                    ((0x46U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0xeU]
                                                      : 
                                                     ((0x44U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0xeU]
                                                       : 
                                                      ((0x42U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0xeU]
                                                        : 
                                                       ((0x40U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[0xeU]
                                                         : 
                                                        ((0x3eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[0xeU]
                                                          : 
                                                         ((0x3cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[0xeU]
                                                           : 
                                                          ((0x3aU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                             << 0x10U) 
                                                            | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[0xeU])
                                                            : 
                                                           __Vtemp_h05a66de7__0[0xeU]))))))))))))));
    if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0xdU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0xdU];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0xdU];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0xdU];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0xdU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0xdU];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0xdU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0xdU];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0xdU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0xdU];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0xdU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[0xdU];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[0xdU];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[0xdU];
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0[0xdU];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h00c1ab01__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0[0xdU];
    } else {
        __Vtemp_h00c1ab01__0[0xcU] = __Vtemp_hb8a996e0__0[0xcU];
        __Vtemp_h00c1ab01__0[0xdU] = __Vtemp_hb8a996e0__0[0xdU];
    }
    __Vtemp_hcf882db5__0[0xbU] = ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0xbU]
                                   : ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0xbU]
                                       : ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0xbU]
                                           : ((0x54U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0xbU]
                                               : ((0x52U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0xbU]
                                                   : 
                                                  ((0x50U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0xbU]
                                                    : 
                                                   ((0x4eU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0xbU]
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0xbU]
                                                      : 
                                                     ((0x4aU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0xbU]
                                                       : 
                                                      ((0x48U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0xbU]
                                                        : 
                                                       ((0x46U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0xbU]
                                                         : 
                                                        ((0x44U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0xbU]
                                                          : 
                                                         ((0x42U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0xbU]
                                                           : 
                                                          ((0x40U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[0xbU]
                                                            : 
                                                           ((0x3eU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                             ? 
                                                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[0xbU]
                                                             : 
                                                            ((0x3cU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                              ? 
                                                             vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0[0xbU]
                                                              : 
                                                             __Vtemp_hc0d12163__0[0xbU]))))))))))))))));
    __Vtemp_h84f687bb__0[0xaU] = ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0xaU]
                                   : ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0xaU]
                                       : ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0xaU]
                                           : ((0x56U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0xaU]
                                               : ((0x54U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0xaU]
                                                   : 
                                                  ((0x52U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0xaU]
                                                    : 
                                                   ((0x50U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0xaU]
                                                     : 
                                                    ((0x4eU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0xaU]
                                                      : 
                                                     ((0x4cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0xaU]
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[0xaU]
                                                        : 
                                                       ((0x48U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[0xaU]
                                                         : 
                                                        ((0x46U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[0xaU]
                                                          : 
                                                         ((0x44U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[0xaU]
                                                           : 
                                                          ((0x42U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[0xaU]
                                                            : 
                                                           ((0x40U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                             ? 
                                                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0[0xaU]
                                                             : 
                                                            ((0x3eU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                              ? 
                                                             vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0[0xaU]
                                                              : 
                                                             __Vtemp_h6d0bd1e7__0[0xaU]))))))))))))))));
    if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x16U];
        __Vtemp_ha54815e9__0[0x17U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x17U]);
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0x16U];
        __Vtemp_ha54815e9__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0x16U]);
        __Vtemp_ha54815e9__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[0U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_ha54815e9__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[1U] 
                                        << 0x10U));
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[0U];
        __Vtemp_ha54815e9__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[1U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[1U] 
                                        << 0x10U));
        __Vtemp_ha54815e9__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[2U] 
                                        << 0x10U));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[1U];
        __Vtemp_ha54815e9__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[2U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[2U] 
                                        << 0x10U));
        __Vtemp_ha54815e9__0[0x17U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[3U] 
                                        << 0x10U));
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha54815e9__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[2U];
        __Vtemp_ha54815e9__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[3U];
    } else {
        __Vtemp_ha54815e9__0[0x16U] = __Vtemp_h17cc39f1__0[0x16U];
        __Vtemp_ha54815e9__0[0x17U] = __Vtemp_h17cc39f1__0[0x17U];
    }
    if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_hf6dd4a13__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[1U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[2U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[3U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[4U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[5U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[6U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0[7U] 
                                        << 0x10U));
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[0U];
        __Vtemp_hf6dd4a13__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[1U];
        __Vtemp_hf6dd4a13__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[2U];
        __Vtemp_hf6dd4a13__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[3U];
        __Vtemp_hf6dd4a13__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[4U];
        __Vtemp_hf6dd4a13__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[5U];
        __Vtemp_hf6dd4a13__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[6U];
        __Vtemp_hf6dd4a13__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0[7U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[1U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[2U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[3U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[4U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[5U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[6U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[7U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0[8U] 
                                        << 0x10U));
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[1U];
        __Vtemp_hf6dd4a13__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[2U];
        __Vtemp_hf6dd4a13__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[3U];
        __Vtemp_hf6dd4a13__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[4U];
        __Vtemp_hf6dd4a13__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[5U];
        __Vtemp_hf6dd4a13__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[6U];
        __Vtemp_hf6dd4a13__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[7U];
        __Vtemp_hf6dd4a13__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0[8U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[1U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[2U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[3U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[4U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[5U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[6U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[7U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[8U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0[9U] 
                                        << 0x10U));
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[2U];
        __Vtemp_hf6dd4a13__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[3U];
        __Vtemp_hf6dd4a13__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[4U];
        __Vtemp_hf6dd4a13__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[5U];
        __Vtemp_hf6dd4a13__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[6U];
        __Vtemp_hf6dd4a13__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[7U];
        __Vtemp_hf6dd4a13__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[8U];
        __Vtemp_hf6dd4a13__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0[9U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[2U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[3U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[4U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[5U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[6U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[7U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[8U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[9U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[0xaU] 
                                        << 0x10U));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[3U];
        __Vtemp_hf6dd4a13__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[4U];
        __Vtemp_hf6dd4a13__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[5U];
        __Vtemp_hf6dd4a13__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[6U];
        __Vtemp_hf6dd4a13__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[7U];
        __Vtemp_hf6dd4a13__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[8U];
        __Vtemp_hf6dd4a13__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[9U];
        __Vtemp_hf6dd4a13__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[0xaU];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[3U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[4U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x19U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[4U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[5U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1aU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[5U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[6U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1bU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[6U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[7U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[7U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[8U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[8U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[9U] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1eU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[9U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[0xaU] 
                                        << 0x10U));
        __Vtemp_hf6dd4a13__0[0x1fU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[0xaU] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[0xbU] 
                                        << 0x10U));
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf6dd4a13__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[9U];
        __Vtemp_hf6dd4a13__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[4U];
        __Vtemp_hf6dd4a13__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[5U];
        __Vtemp_hf6dd4a13__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[6U];
        __Vtemp_hf6dd4a13__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[7U];
        __Vtemp_hf6dd4a13__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[8U];
        __Vtemp_hf6dd4a13__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[9U];
        __Vtemp_hf6dd4a13__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[0xaU];
        __Vtemp_hf6dd4a13__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[0xbU];
    } else {
        __Vtemp_hf6dd4a13__0[9U] = ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[9U]
                                     : ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[9U]
                                         : ((0x48U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[9U]
                                             : ((0x46U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[9U]
                                                 : 
                                                ((0x44U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[9U]
                                                  : 
                                                 ((0x42U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0[9U]
                                                   : 
                                                  __Vtemp_hc294dc40__0[9U]))))));
        __Vtemp_hf6dd4a13__0[0x18U] = __Vtemp_h17cc39f1__0[0x18U];
        __Vtemp_hf6dd4a13__0[0x19U] = __Vtemp_h17cc39f1__0[0x19U];
        __Vtemp_hf6dd4a13__0[0x1aU] = __Vtemp_h17cc39f1__0[0x1aU];
        __Vtemp_hf6dd4a13__0[0x1bU] = __Vtemp_h17cc39f1__0[0x1bU];
        __Vtemp_hf6dd4a13__0[0x1cU] = __Vtemp_h17cc39f1__0[0x1cU];
        __Vtemp_hf6dd4a13__0[0x1dU] = __Vtemp_h17cc39f1__0[0x1dU];
        __Vtemp_hf6dd4a13__0[0x1eU] = __Vtemp_h17cc39f1__0[0x1eU];
        __Vtemp_hf6dd4a13__0[0x1fU] = __Vtemp_h17cc39f1__0[0x1fU];
    }
    if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x15U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x15U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x15U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0x15U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0x15U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0x15U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0x15U]);
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0[0U] 
                                        << 0x10U) | 
                                       (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0[0U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[0U] 
                                        >> 0x10U) | 
                                       (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[1U] 
                                        << 0x10U));
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[7U];
        __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[8U];
        __Vtemp_hc09eec67__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[1U];
    } else {
        if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[7U];
            __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[8U];
        } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[7U];
            __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[8U];
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[7U];
            __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[8U];
        } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[7U];
            __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0[8U];
        } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hc09eec67__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[7U];
            __Vtemp_hc09eec67__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0[8U];
        } else {
            __Vtemp_hc09eec67__0[7U] = __Vtemp_haa5f8a6c__0[7U];
            __Vtemp_hc09eec67__0[8U] = __Vtemp_haa5f8a6c__0[8U];
        }
        __Vtemp_hc09eec67__0[0x15U] = __Vtemp_h17cc39f1__0[0x15U];
    }
    __Vtemp_heb6d390d__0[0x14U] = ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                    ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x14U]
                                    : ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                        ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x14U]
                                        : ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                            ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x14U]
                                            : ((0x5eU 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x14U]
                                                : (
                                                   (0x5cU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0x14U]
                                                    : 
                                                   ((0x5aU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0x14U]
                                                     : 
                                                    ((0x58U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0x14U]
                                                      : 
                                                     ((0x56U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0x14U]
                                                       : 
                                                      ((0x54U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0x14U]
                                                        : 
                                                       ((0x52U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                          << 0x10U) 
                                                         | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0x14U])
                                                         : 
                                                        ((0x50U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0[0U] 
                                                           << 0x10U) 
                                                          | (0xffffU 
                                                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                          : 
                                                         ((0x4eU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0[0U]
                                                           : 
                                                          __Vtemp_h17cc39f1__0[0x14U]))))))))))));
    __Vtemp_h929e340d__0[6U] = ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[6U]
                                 : ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[6U]
                                     : ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[6U]
                                         : ((0x60U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[6U]
                                             : ((0x5eU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[6U]
                                                 : 
                                                ((0x5cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[6U]
                                                  : 
                                                 ((0x5aU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[6U]
                                                   : 
                                                  ((0x58U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[6U]
                                                    : 
                                                   ((0x56U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[6U]
                                                     : 
                                                    ((0x54U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[6U]
                                                      : 
                                                     ((0x52U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[6U]
                                                       : 
                                                      ((0x50U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[6U]
                                                        : 
                                                       ((0x4eU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[6U]
                                                         : 
                                                        ((0x4cU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[6U]
                                                          : 
                                                         ((0x4aU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[6U]
                                                           : 
                                                          ((0x48U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0[6U]
                                                            : 
                                                           __Vtemp_h737c57fb__0[6U]))))))))))))))));
    if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x13U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x13U];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x13U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x13U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x13U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x13U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0x13U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0x13U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0x13U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0x13U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0x13U];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0x13U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0x13U];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hc8ca0c48__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[5U];
        __Vtemp_hc8ca0c48__0[0x13U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0x13U]);
    } else {
        __Vtemp_hc8ca0c48__0[5U] = ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[5U]
                                     : ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0[5U]
                                         : __Vtemp_hf7abf738__0[5U]));
        __Vtemp_hc8ca0c48__0[0x13U] = __Vtemp_h17cc39f1__0[0x13U];
    }
    if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x12U];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x12U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x12U];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x12U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x12U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x12U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x12U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0x12U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0x12U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0x12U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0x12U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0x12U];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0x12U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0x12U];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[0x12U];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h62ad313c__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0[0x12U];
    } else {
        __Vtemp_h62ad313c__0[0x11U] = __Vtemp_hd02d6a0e__0[0x11U];
        __Vtemp_h62ad313c__0[0x12U] = __Vtemp_hd02d6a0e__0[0x12U];
    }
    __Vtemp_h2c49b55d__0[4U] = ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[4U]
                                 : ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[4U]
                                     : ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[4U]
                                         : ((0x66U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[4U]
                                             : ((0x64U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[4U]
                                                 : 
                                                ((0x62U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[4U]
                                                  : 
                                                 ((0x60U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[4U]
                                                   : 
                                                  ((0x5eU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[4U]
                                                    : 
                                                   ((0x5cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[4U]
                                                     : 
                                                    ((0x5aU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[4U]
                                                      : 
                                                     ((0x58U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[4U]
                                                       : 
                                                      ((0x56U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[4U]
                                                        : 
                                                       ((0x54U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[4U]
                                                         : 
                                                        ((0x52U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[4U]
                                                          : 
                                                         ((0x50U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[4U]
                                                           : 
                                                          ((0x4eU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0[4U]
                                                            : 
                                                           __Vtemp_h17cc39f1__0[4U]))))))))))))))));
    if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x10U];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x10U];
    } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x10U];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x10U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x10U];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x10U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x10U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x10U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0x10U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0x10U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0x10U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0x10U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0x10U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0x10U];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0x10U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7f58ce7e__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0[0x10U];
    } else {
        __Vtemp_h7f58ce7e__0[1U] = __Vtemp_hbf87084d__0[1U];
        __Vtemp_h7f58ce7e__0[3U] = __Vtemp_hbf87084d__0[3U];
        __Vtemp_h7f58ce7e__0[0x10U] = __Vtemp_hbf87084d__0[0x10U];
    }
    if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0xfU];
    } else if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0xfU];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0xfU];
    } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0xfU];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0xfU];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0xfU];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0xfU];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0xfU];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0xfU];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0xfU];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0xfU];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0xfU];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0xfU];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0xfU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0[0xfU];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5c60adf2__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0U];
        __Vtemp_h5c60adf2__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0[0xfU];
    } else {
        __Vtemp_h5c60adf2__0[0U] = __Vtemp_h896c5c6f__0[0U];
        __Vtemp_h5c60adf2__0[2U] = __Vtemp_h896c5c6f__0[2U];
        __Vtemp_h5c60adf2__0[0xfU] = __Vtemp_h896c5c6f__0[0xfU];
    }
    if ((0x72U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h410d1f8a__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x1bU];
        __Vtemp_h410d1f8a__0[0x1cU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x1cU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
            = __Vtemp_h410d1f8a__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
            = __Vtemp_h410d1f8a__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcc86d03f__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcc86d03f__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcc86d03f__0[2U];
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0U] 
            = __Vtemp_h5c60adf2__0[0U];
        if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h410d1f8a__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x1bU];
            __Vtemp_h410d1f8a__0[0x1cU] = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0[0U] 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[1U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[1U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[2U] 
                = __Vtemp_h5c60adf2__0[2U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[3U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[3U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[4U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[4U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[5U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[5U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[6U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[6U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[7U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[8U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[9U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0xaU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0xbU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0xcU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0xdU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0xeU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                = __Vtemp_h5c60adf2__0[0xfU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x10U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x11U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x12U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x13U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x14U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x15U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x16U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x17U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x18U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x19U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0[0x1aU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                = __Vtemp_h410d1f8a__0[0x1bU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                = __Vtemp_h410d1f8a__0[0x1cU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0[0U] 
                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0[1U] 
                                 << 0x10U));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0[1U] 
                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0[2U] 
                                 << 0x10U));
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0[2U] 
                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0[3U] 
                                 << 0x10U));
        } else {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[1U] 
                = __Vtemp_h7f58ce7e__0[1U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[2U] 
                = __Vtemp_h5c60adf2__0[2U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[3U] 
                = __Vtemp_h7f58ce7e__0[3U];
            if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_h410d1f8a__0[0x1bU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                << 0x10U) 
                                               | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x1bU]);
                __Vtemp_h410d1f8a__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd066bd1__0[0U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[4U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[4U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[5U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[5U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[6U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[6U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[7U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[8U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[9U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0xaU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0xbU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0xcU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0xdU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0xeU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                    = __Vtemp_h5c60adf2__0[0xfU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                    = __Vtemp_h7f58ce7e__0[0x10U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x11U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x12U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x13U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x14U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x15U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x16U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x17U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x18U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x19U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0[0x1aU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                    = __Vtemp_h410d1f8a__0[0x1bU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                    = __Vtemp_h410d1f8a__0[0x1cU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd066bd1__0[1U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd066bd1__0[2U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd066bd1__0[3U];
            } else {
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[4U] 
                    = __Vtemp_h2c49b55d__0[4U];
                if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                    __Vtemp_h410d1f8a__0[0x1bU] = (
                                                   (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[0U] 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
                    __Vtemp_h410d1f8a__0[0x1cU] = (
                                                   (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[0U] 
                                                    >> 0x10U) 
                                                   | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[1U] 
                                                      << 0x10U));
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[5U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[5U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[6U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[6U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[7U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[8U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[9U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0xaU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0xbU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0xcU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0xdU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0xeU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                        = __Vtemp_h5c60adf2__0[0xfU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                        = __Vtemp_h7f58ce7e__0[0x10U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x11U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x12U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x13U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x14U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x15U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x16U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x17U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x18U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x19U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0[0x1aU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                        = __Vtemp_h410d1f8a__0[0x1bU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                        = __Vtemp_h410d1f8a__0[0x1cU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                        = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[1U] 
                            >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[2U] 
                                         << 0x10U));
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                        = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[2U] 
                            >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[3U] 
                                         << 0x10U));
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                        = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[3U] 
                            >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0[4U] 
                                         << 0x10U));
                } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                    __Vtemp_h410d1f8a__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd8dd9a8__0[0U];
                    __Vtemp_h410d1f8a__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd8dd9a8__0[1U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[5U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[5U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[6U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[6U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[7U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[8U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[9U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0xaU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0xbU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0xcU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0xdU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0xeU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                        = __Vtemp_h5c60adf2__0[0xfU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                        = __Vtemp_h7f58ce7e__0[0x10U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                        = __Vtemp_h62ad313c__0[0x11U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                        = __Vtemp_h62ad313c__0[0x12U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x13U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x14U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x15U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x16U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x17U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x18U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x19U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                            << 0x10U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0[0x1aU]);
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                        = __Vtemp_h410d1f8a__0[0x1bU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                        = __Vtemp_h410d1f8a__0[0x1cU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd8dd9a8__0[2U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd8dd9a8__0[3U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd8dd9a8__0[4U];
                } else {
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[5U] 
                        = __Vtemp_hc8ca0c48__0[5U];
                    if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                        __Vtemp_h410d1f8a__0[0x1bU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[0U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[1U] 
                                             << 0x10U));
                        __Vtemp_h410d1f8a__0[0x1cU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[1U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[2U] 
                                             << 0x10U));
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[6U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[6U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[7U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[8U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[9U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0xaU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0xbU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0xcU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0xdU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0xeU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                            = __Vtemp_h5c60adf2__0[0xfU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                            = __Vtemp_h7f58ce7e__0[0x10U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                            = __Vtemp_h62ad313c__0[0x11U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                            = __Vtemp_h62ad313c__0[0x12U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                            = __Vtemp_hc8ca0c48__0[0x13U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x14U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x15U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x16U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x17U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x18U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0[0x19U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[0U] 
                                << 0x10U) | (0xffffU 
                                             & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                            = __Vtemp_h410d1f8a__0[0x1bU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                            = __Vtemp_h410d1f8a__0[0x1cU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[2U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[3U] 
                                             << 0x10U));
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[3U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[4U] 
                                             << 0x10U));
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                            = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[4U] 
                                >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0[5U] 
                                             << 0x10U));
                    } else {
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[6U] 
                            = __Vtemp_h929e340d__0[6U];
                        if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                            __Vtemp_h410d1f8a__0[0x1bU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce053d86__0[1U];
                            __Vtemp_h410d1f8a__0[0x1cU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce053d86__0[2U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[7U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[8U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[9U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0xaU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0xbU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0xcU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0xdU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0xeU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                                = __Vtemp_h5c60adf2__0[0xfU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                                = __Vtemp_h7f58ce7e__0[0x10U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                                = __Vtemp_h62ad313c__0[0x11U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                                = __Vtemp_h62ad313c__0[0x12U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                                = __Vtemp_hc8ca0c48__0[0x13U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x14U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x15U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x16U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x17U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x18U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                                = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                    << 0x10U) | vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0[0x19U]);
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce053d86__0[0U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                                = __Vtemp_h410d1f8a__0[0x1bU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                                = __Vtemp_h410d1f8a__0[0x1cU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce053d86__0[3U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce053d86__0[4U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce053d86__0[5U];
                        } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                            __Vtemp_h410d1f8a__0[0x1bU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[1U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[2U] 
                                                 << 0x10U));
                            __Vtemp_h410d1f8a__0[0x1cU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[2U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[3U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[7U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[8U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[9U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0xaU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0xbU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0xcU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0xdU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0xeU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                                = __Vtemp_h5c60adf2__0[0xfU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                                = __Vtemp_h7f58ce7e__0[0x10U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                                = __Vtemp_h62ad313c__0[0x11U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                                = __Vtemp_h62ad313c__0[0x12U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                                = __Vtemp_hc8ca0c48__0[0x13U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                                = __Vtemp_heb6d390d__0[0x14U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x15U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x16U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x17U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0[0x18U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[0U] 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[0U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[1U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                                = __Vtemp_h410d1f8a__0[0x1bU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                                = __Vtemp_h410d1f8a__0[0x1cU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[3U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[4U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[4U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[5U] 
                                                 << 0x10U));
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                                = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[5U] 
                                    >> 0x10U) | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0[6U] 
                                                 << 0x10U));
                        } else {
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[7U] 
                                = __Vtemp_hc09eec67__0[7U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[8U] 
                                = __Vtemp_hc09eec67__0[8U];
                            if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                                __Vtemp_h410d1f8a__0[0x1bU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0[2U];
                                __Vtemp_h410d1f8a__0[0x1cU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0[3U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[9U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0xaU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0xbU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0xcU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0xdU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0xeU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                                    = __Vtemp_h5c60adf2__0[0xfU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                                    = __Vtemp_h7f58ce7e__0[0x10U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                                    = __Vtemp_h62ad313c__0[0x11U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                                    = __Vtemp_h62ad313c__0[0x12U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                                    = __Vtemp_hc8ca0c48__0[0x13U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                                    = __Vtemp_heb6d390d__0[0x14U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                                    = __Vtemp_hc09eec67__0[0x15U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x16U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x17U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                                    = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0[0x18U]);
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0[0U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0[1U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                                    = __Vtemp_h410d1f8a__0[0x1bU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                                    = __Vtemp_h410d1f8a__0[0x1cU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0[4U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0[5U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                                    = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0[6U];
                            } else {
                                __Vtemp_h410d1f8a__0[0x1bU] 
                                    = __Vtemp_hf6dd4a13__0[0x1bU];
                                __Vtemp_h410d1f8a__0[0x1cU] 
                                    = __Vtemp_hf6dd4a13__0[0x1cU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[9U] 
                                    = __Vtemp_hf6dd4a13__0[9U];
                                if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0xaU];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0xbU];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0xcU];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0xdU];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0xeU];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                                        = __Vtemp_h5c60adf2__0[0xfU];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                                        = __Vtemp_h7f58ce7e__0[0x10U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                                        = __Vtemp_h62ad313c__0[0x11U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                                        = __Vtemp_h62ad313c__0[0x12U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                                        = __Vtemp_hc8ca0c48__0[0x13U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                                        = __Vtemp_heb6d390d__0[0x14U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                                        = __Vtemp_hc09eec67__0[0x15U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x16U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                                        = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0[0x17U];
                                } else {
                                    if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0xaU];
                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0xbU];
                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0xcU];
                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0xdU];
                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0[0xeU];
                                    } else {
                                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xaU] 
                                            = __Vtemp_h84f687bb__0[0xaU];
                                        if ((0x5cU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0xbU];
                                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0xcU];
                                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0xdU];
                                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                                = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0[0xeU];
                                        } else {
                                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xbU] 
                                                = __Vtemp_hcf882db5__0[0xbU];
                                            if ((0x5aU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0xcU];
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0xdU];
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0[0xeU];
                                            } else if (
                                                       (0x58U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0xcU];
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0xdU];
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                                    = 
                                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0[0xeU];
                                            } else {
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xcU] 
                                                    = 
                                                    __Vtemp_h00c1ab01__0[0xcU];
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xdU] 
                                                    = 
                                                    __Vtemp_h00c1ab01__0[0xdU];
                                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xeU] 
                                                    = 
                                                    ((0x56U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0[0xeU]
                                                      : 
                                                     __Vtemp_hf2028f37__0[0xeU]);
                                            }
                                        }
                                    }
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0xfU] 
                                        = __Vtemp_h5c60adf2__0[0xfU];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x10U] 
                                        = __Vtemp_h7f58ce7e__0[0x10U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x11U] 
                                        = __Vtemp_h62ad313c__0[0x11U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x12U] 
                                        = __Vtemp_h62ad313c__0[0x12U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x13U] 
                                        = __Vtemp_hc8ca0c48__0[0x13U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x14U] 
                                        = __Vtemp_heb6d390d__0[0x14U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x15U] 
                                        = __Vtemp_hc09eec67__0[0x15U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x16U] 
                                        = __Vtemp_ha54815e9__0[0x16U];
                                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x17U] 
                                        = __Vtemp_ha54815e9__0[0x17U];
                                }
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x18U] 
                                    = __Vtemp_hf6dd4a13__0[0x18U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x19U] 
                                    = __Vtemp_hf6dd4a13__0[0x19U];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1aU] 
                                    = __Vtemp_hf6dd4a13__0[0x1aU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1bU] 
                                    = __Vtemp_h410d1f8a__0[0x1bU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1cU] 
                                    = __Vtemp_h410d1f8a__0[0x1cU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1dU] 
                                    = __Vtemp_hf6dd4a13__0[0x1dU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1eU] 
                                    = __Vtemp_hf6dd4a13__0[0x1eU];
                                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164[0x1fU] 
                                    = __Vtemp_hf6dd4a13__0[0x1fU];
                            }
                        }
                    }
                }
            }
        }
    }
}
