// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___act_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___act_sequent__TOP__0\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h6b4903ca__0;
    // Body
    vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT___tm_inst 
                            >> 0xfU))) ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
           [(0x1fU & (vlSelf->Soc__DOT___tm_inst >> 0xfU))]
            : 0ULL);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0 
        = ((0x17U == (0x7fU & vlSelf->Soc__DOT___tm_inst)) 
           | (0x37U == (0x7fU & vlSelf->Soc__DOT___tm_inst)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((0x380U & (vlSelf->Soc__DOT___tm_inst >> 5U)) 
           | (0x7fU & vlSelf->Soc__DOT___tm_inst));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0) 
           | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0 
        = ((0x13U == vlSelf->Soc__DOT___tm_inst) | 
           (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
    __Vtemp_h6b4903ca__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT___tm_inst 
                                                                >> 0x1fU)))))) 
                                 << 0xcU) | (vlSelf->Soc__DOT___tm_inst 
                                             >> 0x14U));
    __Vtemp_h6b4903ca__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT___tm_inst 
                                                                >> 0x1fU)))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (vlSelf->Soc__DOT___tm_inst 
                                                                              >> 0x1fU))))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h6b4903ca__0[2U] = ((0xfffff000U & vlSelf->Soc__DOT___tm_inst) 
                                | ((IData)(((0xfffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (vlSelf->Soc__DOT___tm_inst 
                                                                   >> 0x1fU))))) 
                                            >> 0x20U)) 
                                   >> 0x14U));
    __Vtemp_h6b4903ca__0[3U] = (- (IData)((vlSelf->Soc__DOT___tm_inst 
                                           >> 0x1fU)));
    __Vtemp_h6b4903ca__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT___tm_inst 
                                                                >> 0x1fU)))))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->Soc__DOT___tm_inst) 
                                              | ((0x800U 
                                                  & (vlSelf->Soc__DOT___tm_inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->Soc__DOT___tm_inst 
                                                       >> 0x14U)))));
    __Vtemp_h6b4903ca__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSelf->Soc__DOT___tm_inst 
                                                                >> 0x1fU)))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSelf->Soc__DOT___tm_inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h6b4903ca__0[6U] = 0U;
    __Vtemp_h6b4903ca__0[7U] = 0U;
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)(__Vtemp_h6b4903ca__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Soc__DOT___tm_inst))
                                                           ? 2U
                                                           : 
                                                          ((0x67U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                            ? 0U
                                                            : 
                                                           (3U 
                                                            & (- (IData)(
                                                                         (0x1a3U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                            ? 1U : 
                                           ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->Soc__DOT___tm_inst))
                                             ? 2U : 
                                            ((0x67U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                              ? 0U : 
                                             (3U & 
                                              (- (IData)(
                                                         (0x1a3U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                               ? 1U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Soc__DOT___tm_inst))
                                                   ? 2U
                                                   : 
                                                  ((0x67U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 0U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x1a3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                            << 6U))))) 
           | (((0U == (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                           ? 1U : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Soc__DOT___tm_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & (- (IData)(
                                                                  (0x1a3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_h6b4903ca__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x6fU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->Soc__DOT___tm_inst))
                                                                             ? 2U
                                                                             : 
                                                                            ((0x67U 
                                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                              ? 0U
                                                                              : 
                                                                             (3U 
                                                                              & (- (IData)(
                                                                                (0x1a3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->Soc__DOT___tm_inst))
                                                            ? 2U
                                                            : 
                                                           ((0x67U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                             ? 0U
                                                             : 
                                                            (3U 
                                                             & (- (IData)(
                                                                          (0x1a3U 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_h6b4903ca__0[
                                 (6U & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                          ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Soc__DOT___tm_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & (- (IData)(
                                                                  (0x1a3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                                        << 1U))])) 
                 >> (0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                         ? 1U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Soc__DOT___tm_inst))
                                                  ? 2U
                                                  : 
                                                 ((0x67U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (0x1a3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0)
            ? 0U : ((0x6fU == (0x7fU & vlSelf->Soc__DOT___tm_inst))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)));
    if (vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
            = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                    ? (0xfffffffffffffffeULL & (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                                + vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata))
                    : 0x80000000ULL));
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
    } else {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = 0x80000000ULL;
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    }
    vlSelf->Soc__DOT___tm_inst = ((1U & (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc))
                                   ? (IData)((vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                              >> 0x20U))
                                   : (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst));
    vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT___tm_inst 
                            >> 0x14U))) ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
           [(0x1fU & (vlSelf->Soc__DOT___tm_inst >> 0x14U))]
            : 0ULL);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x6fU == (0x7fU & vlSelf->Soc__DOT___tm_inst)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type 
        = ((0x13U == vlSelf->Soc__DOT___tm_inst) ? 0U
            : ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                ? 2U : ((0x17U == (0x7fU & vlSelf->Soc__DOT___tm_inst))
                         ? 1U : ((0x37U == (0x7fU & vlSelf->Soc__DOT___tm_inst))
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                           ? 1U : (
                                                   (0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   << 1U))))));
}

void VSoc___024root___eval_act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VSoc___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT___tm_inst 
                            >> 0xfU))) ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
           [(0x1fU & (vlSelf->Soc__DOT___tm_inst >> 0xfU))]
            : 0ULL);
    if (vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
            = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                   + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                    ? (0xfffffffffffffffeULL & (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                                + vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata))
                    : 0x80000000ULL));
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
    } else {
        vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = 0x80000000ULL;
        vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
            = vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc;
    }
    vlSelf->Soc__DOT___tm_inst = ((1U & (IData)(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc))
                                   ? (IData)((vlSelf->Soc__DOT__tm__DOT__temp_inst 
                                              >> 0x20U))
                                   : (IData)(vlSelf->Soc__DOT__tm__DOT__temp_inst));
    vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata 
        = ((0U != (0x1fU & (vlSelf->Soc__DOT___tm_inst 
                            >> 0x14U))) ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
           [(0x1fU & (vlSelf->Soc__DOT___tm_inst >> 0x14U))]
            : 0ULL);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x6fU == (0x7fU & vlSelf->Soc__DOT___tm_inst)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type 
        = ((0x13U == vlSelf->Soc__DOT___tm_inst) ? 0U
            : ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                ? 2U : ((0x17U == (0x7fU & vlSelf->Soc__DOT___tm_inst))
                         ? 1U : ((0x37U == (0x7fU & vlSelf->Soc__DOT___tm_inst))
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                           ? 1U : (
                                                   (0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   << 1U))))));
}

void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf);

void VSoc___024root___eval_nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSoc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VSoc___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
    VlTriggerVec<2> __VpreTriggered;
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
                    VL_FATAL_MT("vsrc/Soc.v", 603, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/Soc.v", 603, "", "NBA region did not converge.");
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
