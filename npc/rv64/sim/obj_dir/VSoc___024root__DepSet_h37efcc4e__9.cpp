// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__760__PROF__Soc__l3603(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__760__PROF__Soc__l3603\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray)
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type)
                ? (QData)((IData)(((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                    ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3383bb42__0
                                    : ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                        ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                            ? vlSelf->__VdfgTmp_hc4d32ff7__0[0x1eU]
                                            : 0U) : 
                                       ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                             ? vlSelf->__VdfgTmp_hc4d32ff7__0[0x1dU]
                                             : 0U) : 
                                        ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                          ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                              ? vlSelf->__VdfgTmp_hc4d32ff7__0[0x1cU]
                                              : 0U)
                                          : ((0x6cU 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                              ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                  ? 
                                                 vlSelf->__VdfgTmp_hc4d32ff7__0[0x1bU]
                                                  : 0U)
                                              : ((0x68U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                   ? 
                                                  vlSelf->__VdfgTmp_hc4d32ff7__0[0x1aU]
                                                   : 0U)
                                                  : 
                                                 ((0x64U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                    ? 
                                                   vlSelf->__VdfgTmp_hc4d32ff7__0[0x19U]
                                                    : 0U)
                                                   : 
                                                  ((0x60U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                     ? 
                                                    vlSelf->__VdfgTmp_hc4d32ff7__0[0x18U]
                                                     : 0U)
                                                    : 
                                                   ((0x5cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                      ? 
                                                     vlSelf->__VdfgTmp_hc4d32ff7__0[0x17U]
                                                      : 0U)
                                                     : 
                                                    ((0x58U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                       ? 
                                                      vlSelf->__VdfgTmp_hc4d32ff7__0[0x16U]
                                                       : 0U)
                                                      : 
                                                     ((0x54U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                        ? 
                                                       vlSelf->__VdfgTmp_hc4d32ff7__0[0x15U]
                                                        : 0U)
                                                       : 
                                                      ((0x50U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                         ? 
                                                        vlSelf->__VdfgTmp_hc4d32ff7__0[0x14U]
                                                         : 0U)
                                                        : 
                                                       ((0x4cU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                          ? 
                                                         vlSelf->__VdfgTmp_hc4d32ff7__0[0x13U]
                                                          : 0U)
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                           ? 
                                                          vlSelf->__VdfgTmp_hc4d32ff7__0[0x12U]
                                                           : 0U)
                                                          : 
                                                         ((0x44U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                            ? 
                                                           vlSelf->__VdfgTmp_hc4d32ff7__0[0x11U]
                                                            : 0U)
                                                           : 
                                                          ((0x40U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                             ? 
                                                            vlSelf->__VdfgTmp_hc4d32ff7__0[0x10U]
                                                             : 0U)
                                                            : 
                                                           ((0x3cU 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                             ? 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                              ? 
                                                             vlSelf->__VdfgTmp_hc4d32ff7__0[0xfU]
                                                              : 0U)
                                                             : 
                                                            ((0x38U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                              ? 
                                                             ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                               ? 
                                                              vlSelf->__VdfgTmp_hc4d32ff7__0[0xeU]
                                                               : 0U)
                                                              : 
                                                             ((0x34U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                               ? 
                                                              ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                ? 
                                                               vlSelf->__VdfgTmp_hc4d32ff7__0[0xdU]
                                                                : 0U)
                                                               : 
                                                              ((0x30U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                ? 
                                                               ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                 ? 
                                                                vlSelf->__VdfgTmp_hc4d32ff7__0[0xcU]
                                                                 : 0U)
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                 ? 
                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                  ? 
                                                                 vlSelf->__VdfgTmp_hc4d32ff7__0[0xbU]
                                                                  : 0U)
                                                                 : 
                                                                ((0x28U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                  ? 
                                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                   ? 
                                                                  vlSelf->__VdfgTmp_hc4d32ff7__0[0xaU]
                                                                   : 0U)
                                                                  : 
                                                                 ((0x24U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                   ? 
                                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                    ? 
                                                                   vlSelf->__VdfgTmp_hc4d32ff7__0[9U]
                                                                    : 0U)
                                                                   : 
                                                                  ((0x20U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                    ? 
                                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                     ? 
                                                                    vlSelf->__VdfgTmp_hc4d32ff7__0[8U]
                                                                     : 0U)
                                                                    : 
                                                                   ((0x1cU 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                     ? 
                                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                      ? 
                                                                     vlSelf->__VdfgTmp_hc4d32ff7__0[7U]
                                                                      : 0U)
                                                                     : 
                                                                    ((0x18U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                      ? 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                       ? 
                                                                      vlSelf->__VdfgTmp_hc4d32ff7__0[6U]
                                                                       : 0U)
                                                                      : 
                                                                     ((0x14U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                       ? 
                                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                        ? 
                                                                       vlSelf->__VdfgTmp_hc4d32ff7__0[5U]
                                                                        : 0U)
                                                                       : 
                                                                      ((0x10U 
                                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                        ? 
                                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                         ? 
                                                                        vlSelf->__VdfgTmp_hc4d32ff7__0[4U]
                                                                         : 0U)
                                                                        : 
                                                                       ((0xcU 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                         ? 
                                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                          ? 
                                                                         vlSelf->__VdfgTmp_hc4d32ff7__0[3U]
                                                                          : 0U)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                          ? 
                                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                           ? 
                                                                          vlSelf->__VdfgTmp_hc4d32ff7__0[2U]
                                                                           : 0U)
                                                                          : 
                                                                         ((4U 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                           ? 
                                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN)
                                                                            ? 
                                                                           vlSelf->__VdfgTmp_hc4d32ff7__0[1U]
                                                                            : 0U)
                                                                           : 
                                                                          ((0U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                                            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0
                                                                            : 0U))))))))))))))))))))))))))))))))))
                : (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[
                                    (((IData)(0x3fU) 
                                      + (0x3c0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 3U))) 
                                     >> 5U)])) << 0x20U) 
                   | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray[
                                     (0x1eU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               >> 2U))]))))
            : vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__761__PROF__Soc__l2253(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__761__PROF__Soc__l2253\n"); );
    // Body
    vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1)
            ? 0ULL : (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3[
                                       (((IData)(0x3fU) 
                                         + (0x3ffU 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                         << 6U))) ? 0x20U
                         : ((IData)(0x40U) - (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                                 << 6U))))) 
                      | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                           << 6U)))
                           ? 0ULL : ((QData)((IData)(
                                                     vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                                           << 6U))) 
                                                      >> 5U)])) 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                             << 6U))))) 
                         | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3[
                                            (0x1eU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                                << 1U))])) 
                            >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count) 
                                         << 6U))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__762__PROF__Soc__l4919(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__762__PROF__Soc__l4919\n"); );
    // Body
    vlSelf->Soc__DOT__sram__DOT__need_resp = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5) 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__763__PROF__Soc__l1325(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__763__PROF__Soc__l1325\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_h3c1ab257__0;
    VlWide<16>/*511:0*/ __Vtemp_h94f171c3__0;
    VlWide<14>/*447:0*/ __Vtemp_h9b08c88b__0;
    // Body
    __Vtemp_h3c1ab257__0[0U] = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                            >> 0x3fU)))))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x30U))))))
                                         : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x20U))))))
                                             : ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x10U))))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))))
                                                  : 0ULL)))));
    __Vtemp_h3c1ab257__0[1U] = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                           >> 0x30U))))))
                                          : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x20U))))))
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))))
                                                   : 0ULL)))) 
                                        >> 0x20U));
    __Vtemp_h94f171c3__0[0U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 7U))))))))) 
                                 << 8U) | (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)));
    __Vtemp_h94f171c3__0[1U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 8U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 7U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 8U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 7U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[2U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 8U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 7U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[3U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x10U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0xfU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x10U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0xfU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[4U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x10U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0xfU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x18U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x17U))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[5U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x18U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x17U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x18U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x17U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[6U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x18U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x17U)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x20U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[7U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x20U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x1fU))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x20U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x1fU)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[8U] = (((IData)(((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x20U))))) 
                                            << 0x38U) 
                                           | (0xffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                               >> 0x1fU)))))))) 
                                          >> 0x20U)) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x28U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U))))))))) 
                                              << 8U));
    __Vtemp_h94f171c3__0[9U] = (((IData)((((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x28U))))) 
                                           << 0x38U) 
                                          | (0xffffffffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                              >> 0x27U))))))))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x28U))))) 
                                                         << 0x38U) 
                                                        | (0xffffffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U)))))))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h94f171c3__0[0xaU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x28U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x27U)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x30U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU))))))))) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xbU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                         >> 0x30U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x30U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xcU] = (((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                          >> 0x30U))))) 
                                              << 0x38U) 
                                             | (0xffffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x2fU)))))))) 
                                            >> 0x20U)) 
                                   >> 0x18U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                          << 0x38U) 
                                                         | (0xffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U))))))))) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xdU] = (((IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                         >> 0x38U))))) 
                                             << 0x38U) 
                                            | (0xffffffffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                           << 0x38U) 
                                                          | (0xffffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U)))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h94f171c3__0[0xeU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))))) 
                                   << 8U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x38U))))) 
                                                        << 0x38U) 
                                                       | (0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x37U)))))))) 
                                                      >> 0x20U)) 
                                             >> 0x18U));
    __Vtemp_h94f171c3__0[0xfU] = (((IData)((0xffffffffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                             >> 0x3fU)))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0xffffffffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                                >> 0x3fU))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
    __Vtemp_h9b08c88b__0[0U] = (IData)((((QData)((IData)(
                                                         __Vtemp_h94f171c3__0[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                               << 6U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                  << 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                 << 6U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                __Vtemp_h94f171c3__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))) 
                                           | ((QData)((IData)(
                                                              __Vtemp_h94f171c3__0[
                                                              (0xeU 
                                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                     << 6U))))));
    __Vtemp_h9b08c88b__0[1U] = (IData)(((((QData)((IData)(
                                                          __Vtemp_h94f171c3__0[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 __Vtemp_h94f171c3__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               __Vtemp_h94f171c3__0[
                                                               (0xeU 
                                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                      << 6U))))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0U] = 0U;
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[1U] = 0U;
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[2U] 
        = __Vtemp_h9b08c88b__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[3U] 
        = __Vtemp_h9b08c88b__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[4U] 
        = __Vtemp_h3c1ab257__0[0U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[5U] 
        = __Vtemp_h3c1ab257__0[1U];
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[6U] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                               >> 0x3fU))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                     >> 0x20U))))
                    : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))
                        : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[7U] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                >> 0x3fU))))))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                      >> 0x20U))))
                     : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))
                         : 0ULL)) >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[8U] 
        = (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value);
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[9U] 
        = (IData)((vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xaU] 
        = (IData)((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (IData)(
                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                        >> 0x38U))
                                             : ((6U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                 ? (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           ((((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                                 << 0x30U) 
                                                                | (0xffffffffffffULL 
                                                                   & vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))) 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                << 3U))))))))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xbU] 
        = (IData)(((QData)((IData)((0xffU & ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (IData)(
                                                        (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                         >> 0x38U))
                                              : ((6U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                                  ? (IData)(
                                                            (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value)))) 
                                                                  << 0x30U) 
                                                                 | (0xffffffffffffULL 
                                                                    & vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))) 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit) 
                                                                 << 3U))))))))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xcU] 
        = (IData)(((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                       >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                   >> 0x20U)))))
                                     : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                       >> 0x10U)))))
                                         : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))))
                                             : 0ULL)))));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xdU] 
        = (IData)((((6U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                        >> 0x30U) : ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                    >> 0x20U)))))
                                      : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                          ? (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                                                                        >> 0x10U)))))
                                          : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))))
                                              : 0ULL)))) 
                   >> 0x20U));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xeU] 
        = (IData)(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                    ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                       >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                     ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))
                                     : 0ULL)));
    vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[0xfU] 
        = (IData)((((4U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                     ? (vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value 
                        >> 0x20U) : ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit))
                                      ? (QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value))
                                      : 0ULL)) >> 0x20U));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__764__PROF__Soc__l2374(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__764__PROF__Soc__l2374\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8 
        = ((0x1fU >= (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h9c8f247f__0))
            ? (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty 
               >> (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h9c8f247f__0))
            : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__765__PROF__Soc__l2384(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__765__PROF__Soc__l2384\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0) 
           & (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__766__PROF__Soc__l2716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__766__PROF__Soc__l2716\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0 
        = ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__767__PROF__Soc__l1246(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__767__PROF__Soc__l1246\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
            ? vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))
                ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                : 0ULL));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__768__PROF__Soc__l1169(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__768__PROF__Soc__l1169\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__769__PROF__Soc__l1240(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__769__PROF__Soc__l1240\n"); );
    // Body
    vlSelf->__VdfgTmp_h9d5684c6__0 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
                                      & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__770__PROF__Soc__l2911(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__770__PROF__Soc__l2911\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha3d0dbfe__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)
            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4385e347__0
            : vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hd6c4a0b5__0);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__771__PROF__Soc__l2918(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__771__PROF__Soc__l2918\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha4058e9a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)
            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha6af1649__0
            : vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h93208993__0);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__772__PROF__Soc__l235(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__772__PROF__Soc__l235\n"); );
    // Body
    vlSelf->__VdfgTmp_h2a73f274__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0x1fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                    << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)))];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__773__PROF__Soc__l2374(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__773__PROF__Soc__l2374\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h9c8f247f__0 
        = (0x3fU & (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__index) 
                     << 1U) + (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__774__PROF__Soc__l236(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__774__PROF__Soc__l236\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0) 
            & (6U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))
            ? vlSelf->__VdfgTmp_ha81e39ce__0 : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__775__PROF__Soc__l2384(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__775__PROF__Soc__l2384\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0 
        = ((6U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0));
}

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__777__PROF__Soc__l3385(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__777__PROF__Soc__l3385\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hd5d205d9__0;
    VlWide<32>/*1023:0*/ __Vtemp_h02bd0f40__0;
    VlWide<32>/*1023:0*/ __Vtemp_h261eb76a__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3f2a0c33__0;
    VlWide<32>/*1023:0*/ __Vtemp_hffe0b03b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h23fe3d4b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h096f1656__0;
    VlWide<32>/*1023:0*/ __Vtemp_hdd105b12__0;
    VlWide<32>/*1023:0*/ __Vtemp_h93fd6344__0;
    VlWide<32>/*1023:0*/ __Vtemp_hae2ea0e8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h33efcfa1__0;
    // Body
    __Vtemp_hd5d205d9__0[0x1fU] = ((0x7eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                    ? (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                        << 0x10U) | 
                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x1fU])
                                    : ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                        ? (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3340605c__0) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                                        : ((0x7aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3383bb42__0
                                            : ((0x78U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                ? (IData)(
                                                          (((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h33cb9e17__0 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                                                           >> 0x20U))
                                                : (
                                                   (0x76U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? (IData)(
                                                              (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc3b3ad4__0 
                                                               >> 0x20U))
                                                    : 
                                                   ((0x74U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc431be3__0[1U] 
                                                      >> 0x10U) 
                                                     | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc431be3__0[2U] 
                                                        << 0x10U))
                                                     : 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1fU]))))));
    __Vtemp_h02bd0f40__0[1U] = ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[1U]
                                 : ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[1U]
                                     : ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[1U]
                                         : ((0x28U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[1U]
                                             : ((0x24U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[1U]
                                                 : 
                                                ((0x20U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[1U]
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[1U]
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[1U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[1U]
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[1U]
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1137__0[1U]
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae91f__0 
                                                                   >> 0x20U))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0U]
                                                          : 
                                                         VSoc__ConstPool__CONST_hd6b7ba52_0[1U]))))))))))))));
    if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[6U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[7U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[8U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[9U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xaU];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xbU];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xcU];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xdU];
        __Vtemp_h261eb76a__0[0xeU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[6U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[7U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[8U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[9U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0xaU];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0xbU];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0[0xcU];
        __Vtemp_h261eb76a__0[0xdU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[6U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[7U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[8U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[9U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0xaU];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0xbU];
        __Vtemp_h261eb76a__0[0xcU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[1U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[6U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[7U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[8U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[9U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0[0xaU];
        __Vtemp_h261eb76a__0[0xbU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[1U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[2U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[6U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[7U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[8U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[9U];
        __Vtemp_h261eb76a__0[0xaU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[1U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[2U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[3U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[6U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[7U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0[8U];
        __Vtemp_h261eb76a__0[9U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[1U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[2U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[3U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[4U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[6U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[7U];
        __Vtemp_h261eb76a__0[8U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[1U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[2U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[3U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[4U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[5U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[5U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0[6U];
        __Vtemp_h261eb76a__0[7U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[1U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[2U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[3U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[4U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[5U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[6U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[4U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[5U];
        __Vtemp_h261eb76a__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[1U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[2U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[3U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[4U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[5U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[6U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[7U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[3U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0[4U];
        __Vtemp_h261eb76a__0[5U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[1U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[2U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[3U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[4U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[5U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[6U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[7U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[8U];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[2U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[3U];
        __Vtemp_h261eb76a__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[1U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[2U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[3U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[4U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[5U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[6U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[7U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[8U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[9U];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1137__0[0U];
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1137__0[2U];
        __Vtemp_h261eb76a__0[3U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[1U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[2U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[3U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[4U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[5U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[6U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[7U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[8U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[9U];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xaU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae91f__0);
        __Vtemp_h261eb76a__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[1U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[2U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[3U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[4U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[5U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[6U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[7U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[8U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[9U];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xaU];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xbU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0;
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[1U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[2U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[3U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[4U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[5U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[6U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[7U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[8U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[9U];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xaU];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xbU];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xcU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h261eb76a__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h261eb76a__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[1U];
        __Vtemp_h261eb76a__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[2U];
        __Vtemp_h261eb76a__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[3U];
        __Vtemp_h261eb76a__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[4U];
        __Vtemp_h261eb76a__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[5U];
        __Vtemp_h261eb76a__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[6U];
        __Vtemp_h261eb76a__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[7U];
        __Vtemp_h261eb76a__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[8U];
        __Vtemp_h261eb76a__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[9U];
        __Vtemp_h261eb76a__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xaU];
        __Vtemp_h261eb76a__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xbU];
        __Vtemp_h261eb76a__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xcU];
        __Vtemp_h261eb76a__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xdU];
    } else {
        __Vtemp_h261eb76a__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_h261eb76a__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h261eb76a__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h261eb76a__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h261eb76a__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h261eb76a__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h261eb76a__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h261eb76a__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h261eb76a__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h261eb76a__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h261eb76a__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h261eb76a__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h261eb76a__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h261eb76a__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    }
    if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[1U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[2U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[3U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[4U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[5U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[6U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[7U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[8U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[9U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xfU];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[1U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[2U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[3U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[4U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[5U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[6U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[7U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[8U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[9U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0[0x10U];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[1U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[2U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[3U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[4U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[5U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[6U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[7U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[8U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[9U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0x11U];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[2U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[3U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[4U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[5U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[6U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[7U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[8U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[9U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0[0x12U];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[3U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[4U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[5U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[6U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[7U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[8U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[9U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x13U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[4U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[5U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[6U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[7U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[8U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[9U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0[0x14U];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[5U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[6U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[7U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[8U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[9U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x15U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[6U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[7U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[8U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[9U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0[0x16U];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[7U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[8U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[9U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x17U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[8U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[9U];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x17U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0[0x18U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[9U];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x17U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x18U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x19U];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xaU];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x17U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x18U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x19U];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0[0x1aU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xbU];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x17U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x18U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x19U];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x1aU];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x1bU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xcU];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x17U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x18U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x19U];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x1aU];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x1bU];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0[0x1cU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xdU];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x17U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x18U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x19U];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1aU];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1bU];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1cU];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1dU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h3f2a0c33__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xeU];
        __Vtemp_h3f2a0c33__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0xfU];
        __Vtemp_h3f2a0c33__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x10U];
        __Vtemp_h3f2a0c33__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x11U];
        __Vtemp_h3f2a0c33__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x12U];
        __Vtemp_h3f2a0c33__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x13U];
        __Vtemp_h3f2a0c33__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x14U];
        __Vtemp_h3f2a0c33__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x15U];
        __Vtemp_h3f2a0c33__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x16U];
        __Vtemp_h3f2a0c33__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x17U];
        __Vtemp_h3f2a0c33__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x18U];
        __Vtemp_h3f2a0c33__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x19U];
        __Vtemp_h3f2a0c33__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1aU];
        __Vtemp_h3f2a0c33__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1bU];
        __Vtemp_h3f2a0c33__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1cU];
        __Vtemp_h3f2a0c33__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1dU];
        __Vtemp_h3f2a0c33__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0[0x1eU];
    } else {
        __Vtemp_h3f2a0c33__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h3f2a0c33__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h3f2a0c33__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h3f2a0c33__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h3f2a0c33__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h3f2a0c33__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h3f2a0c33__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h3f2a0c33__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h3f2a0c33__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h3f2a0c33__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h3f2a0c33__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h3f2a0c33__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h3f2a0c33__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h3f2a0c33__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h3f2a0c33__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h3f2a0c33__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h3f2a0c33__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    __Vtemp_hffe0b03b__0[1U] = ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[1U]
                                 : ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[1U]
                                     : ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[1U]
                                         : ((0x68U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[1U]
                                             : ((0x64U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[1U]
                                                 : 
                                                ((0x60U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[1U]
                                                  : 
                                                 ((0x5cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[1U]
                                                   : 
                                                  ((0x58U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[1U]
                                                    : 
                                                   ((0x54U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[1U]
                                                     : 
                                                    ((0x50U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[1U]
                                                      : 
                                                     ((0x4cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[1U]
                                                       : 
                                                      ((0x48U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[1U]
                                                        : 
                                                       ((0x44U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[1U]
                                                         : 
                                                        ((0x40U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[1U]
                                                          : 
                                                         ((0x3cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[1U]
                                                           : 
                                                          ((0x38U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[1U]
                                                            : 
                                                           __Vtemp_h02bd0f40__0[1U]))))))))))))))));
    if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x18U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x19U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1aU];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1bU];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1cU];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1dU];
        __Vtemp_h23fe3d4b__0[0x1eU] = (IData)((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3383bb42__0)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))));
        __Vtemp_h23fe3d4b__0[0x1fU] = (IData)(((((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3383bb42__0)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))) 
                                               >> 0x20U));
    } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x18U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x19U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x1aU];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x1bU];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x1cU];
        __Vtemp_h23fe3d4b__0[0x1dU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x1eU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc3b3ad4__0);
        __Vtemp_h23fe3d4b__0[0x1fU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc3b3ad4__0 
                                               >> 0x20U));
    } else if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x18U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x19U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x1aU];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x1bU];
        __Vtemp_h23fe3d4b__0[0x1cU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc86d03f__0[0U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc86d03f__0[1U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc86d03f__0[2U];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x18U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x19U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0x1aU];
        __Vtemp_h23fe3d4b__0[0x1bU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[0U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[1U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[2U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[3U];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x18U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x19U];
        __Vtemp_h23fe3d4b__0[0x1aU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[0U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[1U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[2U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[3U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0[4U];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0x18U];
        __Vtemp_h23fe3d4b__0[0x19U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[0U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[1U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[2U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[3U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[4U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[5U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[0U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[1U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[2U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[3U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[4U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[5U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0[6U];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[0U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[1U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[2U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[3U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[4U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[5U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[6U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[7U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[0U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[1U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[2U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[3U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[4U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[5U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[6U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[7U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0[8U];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[0U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[1U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[2U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[3U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[4U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[5U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[6U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[7U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[8U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[9U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[0U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[1U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[2U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[3U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[4U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[5U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[6U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[7U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[8U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[9U];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0[0xaU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[1U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[2U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[3U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[4U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[5U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[6U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[7U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[8U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[9U];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0xaU];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0xbU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[1U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[2U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[3U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[4U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[5U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[6U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[7U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[8U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[9U];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0xaU];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0xbU];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0[0xcU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[1U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[2U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[3U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[4U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[5U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[6U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[7U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[8U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[9U];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xaU];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xbU];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xcU];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xdU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0U];
        __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[2U];
        __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[3U];
        __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[4U];
        __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[5U];
        __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[6U];
        __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[7U];
        __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[8U];
        __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[9U];
        __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xaU];
        __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xbU];
        __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xcU];
        __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xdU];
        __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xeU];
        __Vtemp_h23fe3d4b__0[0x10U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h23fe3d4b__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0U];
        __Vtemp_h23fe3d4b__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[1U];
        __Vtemp_h23fe3d4b__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[2U];
        __Vtemp_h23fe3d4b__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[3U];
        __Vtemp_h23fe3d4b__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[4U];
        __Vtemp_h23fe3d4b__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[5U];
        __Vtemp_h23fe3d4b__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[6U];
        __Vtemp_h23fe3d4b__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[7U];
        __Vtemp_h23fe3d4b__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[8U];
        __Vtemp_h23fe3d4b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[9U];
        __Vtemp_h23fe3d4b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xaU];
        __Vtemp_h23fe3d4b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xbU];
        __Vtemp_h23fe3d4b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xcU];
        __Vtemp_h23fe3d4b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xdU];
        __Vtemp_h23fe3d4b__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0[0xeU];
    } else {
        if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h23fe3d4b__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0U];
            __Vtemp_h23fe3d4b__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[2U];
            __Vtemp_h23fe3d4b__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[3U];
            __Vtemp_h23fe3d4b__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[4U];
            __Vtemp_h23fe3d4b__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[5U];
            __Vtemp_h23fe3d4b__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[6U];
            __Vtemp_h23fe3d4b__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[7U];
            __Vtemp_h23fe3d4b__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[8U];
            __Vtemp_h23fe3d4b__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[9U];
            __Vtemp_h23fe3d4b__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xaU];
            __Vtemp_h23fe3d4b__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xbU];
            __Vtemp_h23fe3d4b__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xcU];
            __Vtemp_h23fe3d4b__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xdU];
            __Vtemp_h23fe3d4b__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0[0xeU];
        } else {
            __Vtemp_h23fe3d4b__0[0U] = __Vtemp_h261eb76a__0[0U];
            __Vtemp_h23fe3d4b__0[2U] = __Vtemp_h261eb76a__0[2U];
            __Vtemp_h23fe3d4b__0[3U] = __Vtemp_h261eb76a__0[3U];
            __Vtemp_h23fe3d4b__0[4U] = __Vtemp_h261eb76a__0[4U];
            __Vtemp_h23fe3d4b__0[5U] = __Vtemp_h261eb76a__0[5U];
            __Vtemp_h23fe3d4b__0[6U] = __Vtemp_h261eb76a__0[6U];
            __Vtemp_h23fe3d4b__0[7U] = __Vtemp_h261eb76a__0[7U];
            __Vtemp_h23fe3d4b__0[8U] = __Vtemp_h261eb76a__0[8U];
            __Vtemp_h23fe3d4b__0[9U] = __Vtemp_h261eb76a__0[9U];
            __Vtemp_h23fe3d4b__0[0xaU] = __Vtemp_h261eb76a__0[0xaU];
            __Vtemp_h23fe3d4b__0[0xbU] = __Vtemp_h261eb76a__0[0xbU];
            __Vtemp_h23fe3d4b__0[0xcU] = __Vtemp_h261eb76a__0[0xcU];
            __Vtemp_h23fe3d4b__0[0xdU] = __Vtemp_h261eb76a__0[0xdU];
            __Vtemp_h23fe3d4b__0[0xeU] = __Vtemp_h261eb76a__0[0xeU];
        }
        __Vtemp_h23fe3d4b__0[0x10U] = __Vtemp_h3f2a0c33__0[0x10U];
        __Vtemp_h23fe3d4b__0[0x11U] = __Vtemp_h3f2a0c33__0[0x11U];
        __Vtemp_h23fe3d4b__0[0x12U] = __Vtemp_h3f2a0c33__0[0x12U];
        __Vtemp_h23fe3d4b__0[0x13U] = __Vtemp_h3f2a0c33__0[0x13U];
        __Vtemp_h23fe3d4b__0[0x14U] = __Vtemp_h3f2a0c33__0[0x14U];
        __Vtemp_h23fe3d4b__0[0x15U] = __Vtemp_h3f2a0c33__0[0x15U];
        __Vtemp_h23fe3d4b__0[0x16U] = __Vtemp_h3f2a0c33__0[0x16U];
        __Vtemp_h23fe3d4b__0[0x17U] = __Vtemp_h3f2a0c33__0[0x17U];
        __Vtemp_h23fe3d4b__0[0x18U] = __Vtemp_h3f2a0c33__0[0x18U];
        __Vtemp_h23fe3d4b__0[0x19U] = __Vtemp_h3f2a0c33__0[0x19U];
        __Vtemp_h23fe3d4b__0[0x1aU] = __Vtemp_h3f2a0c33__0[0x1aU];
        __Vtemp_h23fe3d4b__0[0x1bU] = __Vtemp_h3f2a0c33__0[0x1bU];
        __Vtemp_h23fe3d4b__0[0x1cU] = __Vtemp_h3f2a0c33__0[0x1cU];
        __Vtemp_h23fe3d4b__0[0x1dU] = __Vtemp_h3f2a0c33__0[0x1dU];
        __Vtemp_h23fe3d4b__0[0x1eU] = __Vtemp_h3f2a0c33__0[0x1eU];
        __Vtemp_h23fe3d4b__0[0x1fU] = __Vtemp_h3f2a0c33__0[0x1fU];
    }
    __Vtemp_h096f1656__0[0xfU] = ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xfU]
                                   : ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xfU]
                                       : ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xfU]
                                           : ((0x70U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xfU]
                                               : ((0x6cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0[0xfU]
                                                   : 
                                                  ((0x68U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xfU]
                                                    : 
                                                   ((0x64U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0[0xfU]
                                                     : 
                                                    ((0x60U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xfU]
                                                      : 
                                                     ((0x5cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0[0xfU]
                                                       : 
                                                      ((0x58U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xfU]
                                                        : 
                                                       ((0x54U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0[0xfU]
                                                         : 
                                                        ((0x50U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xfU]
                                                          : 
                                                         ((0x4cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0[0xfU]
                                                           : 
                                                          ((0x48U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xfU]
                                                            : 
                                                           ((0x44U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                             ? 
                                                            vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0[0xfU]
                                                             : 
                                                            ((0x40U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                              ? 
                                                             vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xfU]
                                                              : 
                                                             __Vtemp_h3f2a0c33__0[0xfU]))))))))))))))));
    __Vtemp_hdd105b12__0[1U] = ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[1U]
                                 : ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[1U]
                                     : ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[1U]
                                         : ((0x50U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[1U]
                                             : ((0x48U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[1U]
                                                 : 
                                                ((0x40U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[1U]
                                                  : 
                                                 ((0x38U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[1U]
                                                   : 
                                                  ((0x30U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[1U]
                                                     : 
                                                    ((0x20U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[1U]
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[1U]
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[1U]
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? (IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae91f__0 
                                                                    >> 0x20U))
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? (IData)(
                                                                    (vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                                     >> 0x20U))
                                                          : 
                                                         VSoc__ConstPool__CONST_hd6b7ba52_0[1U]))))))))))))));
    if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x10U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x11U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x12U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x13U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x14U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x15U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x16U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x17U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x18U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x19U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x1aU];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[0x1bU];
        __Vtemp_h93fd6344__0[0x1cU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0x1dU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h93fd6344__0[0x1eU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc3b3ad4__0);
        __Vtemp_h93fd6344__0[0x1fU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc3b3ad4__0 
                                               >> 0x20U));
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x10U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x11U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x12U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x13U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x14U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x15U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x16U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x17U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x18U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0[0x19U];
        __Vtemp_h93fd6344__0[0x1aU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0x1bU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[0U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[1U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[2U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0[3U];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x10U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x11U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x12U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x13U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x14U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x15U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x16U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0[0x17U];
        __Vtemp_h93fd6344__0[0x18U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0x19U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[0U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[1U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[2U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[3U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[4U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0[5U];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x10U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x11U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x12U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x13U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x14U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0[0x15U];
        __Vtemp_h93fd6344__0[0x16U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0x17U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[0U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[1U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[2U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[3U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[4U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[5U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[6U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0[7U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x10U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x11U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x12U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0[0x13U];
        __Vtemp_h93fd6344__0[0x14U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0x15U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[0U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[1U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[2U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[3U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[4U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[5U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[6U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[7U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[8U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0[9U];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0x10U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0[0x11U];
        __Vtemp_h93fd6344__0[0x12U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0x13U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[1U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[2U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[3U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[4U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[5U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[6U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[7U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[8U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[9U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0xaU];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0[0xbU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0x11U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[1U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[2U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[3U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[4U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[5U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[6U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[7U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[8U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[9U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xaU];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xbU];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xcU];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0[0xdU];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0xfU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                              >> 0x20U));
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[1U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[2U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[3U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[4U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[5U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[6U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[7U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[8U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[9U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xaU];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xbU];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xcU];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xdU];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xeU];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0[0xfU];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0xdU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                              >> 0x20U));
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0U];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[1U];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[2U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[3U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[4U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[5U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[6U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[7U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[8U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[9U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xaU];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xbU];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xcU];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xdU];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xeU];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0xfU];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0x10U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0[0x11U];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[7U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[8U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0[9U];
        __Vtemp_h93fd6344__0[0xaU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[0xbU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                              >> 0x20U));
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0U];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[1U];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[2U];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[3U];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[4U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[5U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[6U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[7U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[8U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[9U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xaU];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xbU];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xcU];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xdU];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xeU];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0xfU];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x10U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x11U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x12U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0[0x13U];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[5U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[6U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0[7U];
        __Vtemp_h93fd6344__0[8U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[9U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                            >> 0x20U));
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0U];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[1U];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[2U];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[3U];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[4U];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[5U];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[6U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[7U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[8U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[9U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xaU];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xbU];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xcU];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xdU];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xeU];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0xfU];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x10U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x11U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x12U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x13U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x14U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0[0x15U];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[3U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[4U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0[5U];
        __Vtemp_h93fd6344__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[7U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                            >> 0x20U));
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[1U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[2U];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[3U];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[4U];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[5U];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[6U];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[7U];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[8U];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[9U];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xaU];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xbU];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xcU];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xdU];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xeU];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0xfU];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x10U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x11U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x12U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x13U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x14U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x15U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x16U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0[0x17U];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[0U];
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[2U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0[3U];
        __Vtemp_h93fd6344__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[5U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                            >> 0x20U));
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[1U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[2U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[3U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[4U];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[5U];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[6U];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[7U];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[8U];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[9U];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xaU];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xbU];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xcU];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xdU];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xeU];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0xfU];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x10U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x11U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x12U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x13U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x14U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x15U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x16U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x17U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x18U];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0[0x19U];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae91f__0);
        __Vtemp_h93fd6344__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                            >> 0x20U));
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[1U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[2U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[3U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[4U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[5U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[6U];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[7U];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[8U];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[9U];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xaU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xbU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xcU];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xdU];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xeU];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0xfU];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x10U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x11U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x12U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x13U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x14U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x15U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x16U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x17U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x18U];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x19U];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x1aU];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0[0x1bU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h93fd6344__0[0U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h93fd6344__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0U];
        __Vtemp_h93fd6344__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[1U];
        __Vtemp_h93fd6344__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[2U];
        __Vtemp_h93fd6344__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[3U];
        __Vtemp_h93fd6344__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[4U];
        __Vtemp_h93fd6344__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[5U];
        __Vtemp_h93fd6344__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[6U];
        __Vtemp_h93fd6344__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[7U];
        __Vtemp_h93fd6344__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[8U];
        __Vtemp_h93fd6344__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[9U];
        __Vtemp_h93fd6344__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xaU];
        __Vtemp_h93fd6344__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xbU];
        __Vtemp_h93fd6344__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xcU];
        __Vtemp_h93fd6344__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xdU];
        __Vtemp_h93fd6344__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xeU];
        __Vtemp_h93fd6344__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0xfU];
        __Vtemp_h93fd6344__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x10U];
        __Vtemp_h93fd6344__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x11U];
        __Vtemp_h93fd6344__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x12U];
        __Vtemp_h93fd6344__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x13U];
        __Vtemp_h93fd6344__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x14U];
        __Vtemp_h93fd6344__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x15U];
        __Vtemp_h93fd6344__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x16U];
        __Vtemp_h93fd6344__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x17U];
        __Vtemp_h93fd6344__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x18U];
        __Vtemp_h93fd6344__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x19U];
        __Vtemp_h93fd6344__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1aU];
        __Vtemp_h93fd6344__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1bU];
        __Vtemp_h93fd6344__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1cU];
        __Vtemp_h93fd6344__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0[0x1dU];
    } else {
        __Vtemp_h93fd6344__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_h93fd6344__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h93fd6344__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h93fd6344__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h93fd6344__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h93fd6344__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h93fd6344__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h93fd6344__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h93fd6344__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h93fd6344__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h93fd6344__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h93fd6344__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h93fd6344__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h93fd6344__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h93fd6344__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h93fd6344__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h93fd6344__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h93fd6344__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h93fd6344__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h93fd6344__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h93fd6344__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h93fd6344__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h93fd6344__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h93fd6344__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h93fd6344__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h93fd6344__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h93fd6344__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h93fd6344__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h93fd6344__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h93fd6344__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h93fd6344__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    __Vtemp_hae2ea0e8__0[0x1eU] = ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                                    ? ((0x7eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                        ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x1eU]
                                        : ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1eU]
                                            : ((0x7aU 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                ? (
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                    << 0x10U) 
                                                   | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x1eU])
                                                : (
                                                   (0x78U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? (IData)(
                                                              ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h33cb9e17__0 
                                                                << 0x10U) 
                                                               | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))))
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc3b3ad4__0)
                                                     : 
                                                    ((0x74U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc431be3__0[0U] 
                                                       >> 0x10U) 
                                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc431be3__0[1U] 
                                                         << 0x10U))
                                                      : 
                                                     vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1eU]))))))
                                    : ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                                        ? ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1eU]
                                            : __Vtemp_h23fe3d4b__0[0x1eU])
                                        : ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                                            ? ((0x78U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)
                                                : __Vtemp_h93fd6344__0[0x1eU])
                                            : VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        __Vtemp_h33efcfa1__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(1U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(2U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(1U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(3U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(2U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(4U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(3U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(5U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(4U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(6U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(5U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[6U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(7U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(6U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[7U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(8U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(7U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[8U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(9U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(8U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[9U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                              ((IData)(0xaU) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                       ((IData)(9U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h33efcfa1__0[0xaU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                ((IData)(0xbU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                         ((IData)(0xaU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h33efcfa1__0[0xbU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                ((IData)(0xcU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                         ((IData)(0xbU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h33efcfa1__0[0xcU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                ((IData)(0xdU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                         ((IData)(0xcU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h33efcfa1__0[0xdU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                ((IData)(0xeU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                         ((IData)(0xdU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h33efcfa1__0[0xeU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                ((IData)(0xfU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                         ((IData)(0xeU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h33efcfa1__0[0xfU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                         ((IData)(0xfU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h33efcfa1__0[0x10U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x11U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x10U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x11U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x12U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x11U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x12U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x13U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x12U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x13U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x14U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x13U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x14U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x15U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x14U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x15U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x16U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x15U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x16U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x17U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x16U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x17U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x18U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x17U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x18U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x19U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x18U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x19U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x1aU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x19U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x1aU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x1bU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x1aU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x1bU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x1cU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x1bU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x1cU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x1dU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x1cU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x1dU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x1eU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x1dU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h33efcfa1__0[0x1fU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                                 ((IData)(0x20U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                                          ((IData)(0x1fU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0U] 
            = __Vtemp_h33efcfa1__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[1U] 
            = __Vtemp_h33efcfa1__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[2U] 
            = __Vtemp_h33efcfa1__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[3U] 
            = __Vtemp_h33efcfa1__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[4U] 
            = __Vtemp_h33efcfa1__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[5U] 
            = __Vtemp_h33efcfa1__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[6U] 
            = __Vtemp_h33efcfa1__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[7U] 
            = __Vtemp_h33efcfa1__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[8U] 
            = __Vtemp_h33efcfa1__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[9U] 
            = __Vtemp_h33efcfa1__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xaU] 
            = __Vtemp_h33efcfa1__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xbU] 
            = __Vtemp_h33efcfa1__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xcU] 
            = __Vtemp_h33efcfa1__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xdU] 
            = __Vtemp_h33efcfa1__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xeU] 
            = __Vtemp_h33efcfa1__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xfU] 
            = __Vtemp_h33efcfa1__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x10U] 
            = __Vtemp_h33efcfa1__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x11U] 
            = __Vtemp_h33efcfa1__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x12U] 
            = __Vtemp_h33efcfa1__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x13U] 
            = __Vtemp_h33efcfa1__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x14U] 
            = __Vtemp_h33efcfa1__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x15U] 
            = __Vtemp_h33efcfa1__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x16U] 
            = __Vtemp_h33efcfa1__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x17U] 
            = __Vtemp_h33efcfa1__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x18U] 
            = __Vtemp_h33efcfa1__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x19U] 
            = __Vtemp_h33efcfa1__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1aU] 
            = __Vtemp_h33efcfa1__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1bU] 
            = __Vtemp_h33efcfa1__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1cU] 
            = __Vtemp_h33efcfa1__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1dU] 
            = __Vtemp_h33efcfa1__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1eU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                 ((IData)(0x1fU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16[
                  ((IData)(0x1eU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
    } else {
        if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
            if ((0x7eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0[0x1dU];
            } else if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1dU];
            } else if ((0x7aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0[0x1dU];
            } else if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1dU];
            } else if ((0x76U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                << 0x10U) 
                                               | vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0[0x1dU]);
            } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc431be3__0[0U] 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
            } else {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164[0x1dU];
            }
            __Vtemp_h33efcfa1__0[0x1fU] = __Vtemp_hd5d205d9__0[0x1fU];
        } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
            if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = __Vtemp_h096f1656__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0[0x1dU];
                __Vtemp_h33efcfa1__0[0x1fU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            } else {
                __Vtemp_h33efcfa1__0[0U] = __Vtemp_h23fe3d4b__0[0U];
                __Vtemp_h33efcfa1__0[1U] = ((0x78U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[1U]
                                             : __Vtemp_hffe0b03b__0[1U]);
                __Vtemp_h33efcfa1__0[2U] = __Vtemp_h23fe3d4b__0[2U];
                __Vtemp_h33efcfa1__0[3U] = __Vtemp_h23fe3d4b__0[3U];
                __Vtemp_h33efcfa1__0[4U] = __Vtemp_h23fe3d4b__0[4U];
                __Vtemp_h33efcfa1__0[5U] = __Vtemp_h23fe3d4b__0[5U];
                __Vtemp_h33efcfa1__0[6U] = __Vtemp_h23fe3d4b__0[6U];
                __Vtemp_h33efcfa1__0[7U] = __Vtemp_h23fe3d4b__0[7U];
                __Vtemp_h33efcfa1__0[8U] = __Vtemp_h23fe3d4b__0[8U];
                __Vtemp_h33efcfa1__0[9U] = __Vtemp_h23fe3d4b__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = __Vtemp_h23fe3d4b__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = __Vtemp_h23fe3d4b__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = __Vtemp_h23fe3d4b__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = __Vtemp_h23fe3d4b__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = __Vtemp_h23fe3d4b__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = __Vtemp_h096f1656__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = __Vtemp_h23fe3d4b__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = __Vtemp_h23fe3d4b__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = __Vtemp_h23fe3d4b__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = __Vtemp_h23fe3d4b__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = __Vtemp_h23fe3d4b__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = __Vtemp_h23fe3d4b__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = __Vtemp_h23fe3d4b__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = __Vtemp_h23fe3d4b__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = __Vtemp_h23fe3d4b__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = __Vtemp_h23fe3d4b__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = __Vtemp_h23fe3d4b__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = __Vtemp_h23fe3d4b__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = __Vtemp_h23fe3d4b__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = __Vtemp_h23fe3d4b__0[0x1dU];
                __Vtemp_h33efcfa1__0[0x1fU] = __Vtemp_h23fe3d4b__0[0x1fU];
            }
        } else if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
            if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h33efcfa1__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0U];
                __Vtemp_h33efcfa1__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[1U];
                __Vtemp_h33efcfa1__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[2U];
                __Vtemp_h33efcfa1__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[3U];
                __Vtemp_h33efcfa1__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[4U];
                __Vtemp_h33efcfa1__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[5U];
                __Vtemp_h33efcfa1__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[6U];
                __Vtemp_h33efcfa1__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[7U];
                __Vtemp_h33efcfa1__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[8U];
                __Vtemp_h33efcfa1__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0[0x1dU];
                __Vtemp_h33efcfa1__0[0x1fU] = (IData)(
                                                      (vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                       >> 0x20U));
            } else {
                __Vtemp_h33efcfa1__0[0U] = __Vtemp_h93fd6344__0[0U];
                __Vtemp_h33efcfa1__0[1U] = ((0x70U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0[1U]
                                             : __Vtemp_hdd105b12__0[1U]);
                __Vtemp_h33efcfa1__0[2U] = __Vtemp_h93fd6344__0[2U];
                __Vtemp_h33efcfa1__0[3U] = __Vtemp_h93fd6344__0[3U];
                __Vtemp_h33efcfa1__0[4U] = __Vtemp_h93fd6344__0[4U];
                __Vtemp_h33efcfa1__0[5U] = __Vtemp_h93fd6344__0[5U];
                __Vtemp_h33efcfa1__0[6U] = __Vtemp_h93fd6344__0[6U];
                __Vtemp_h33efcfa1__0[7U] = __Vtemp_h93fd6344__0[7U];
                __Vtemp_h33efcfa1__0[8U] = __Vtemp_h93fd6344__0[8U];
                __Vtemp_h33efcfa1__0[9U] = __Vtemp_h93fd6344__0[9U];
                __Vtemp_h33efcfa1__0[0xaU] = __Vtemp_h93fd6344__0[0xaU];
                __Vtemp_h33efcfa1__0[0xbU] = __Vtemp_h93fd6344__0[0xbU];
                __Vtemp_h33efcfa1__0[0xcU] = __Vtemp_h93fd6344__0[0xcU];
                __Vtemp_h33efcfa1__0[0xdU] = __Vtemp_h93fd6344__0[0xdU];
                __Vtemp_h33efcfa1__0[0xeU] = __Vtemp_h93fd6344__0[0xeU];
                __Vtemp_h33efcfa1__0[0xfU] = __Vtemp_h93fd6344__0[0xfU];
                __Vtemp_h33efcfa1__0[0x10U] = __Vtemp_h93fd6344__0[0x10U];
                __Vtemp_h33efcfa1__0[0x11U] = __Vtemp_h93fd6344__0[0x11U];
                __Vtemp_h33efcfa1__0[0x12U] = __Vtemp_h93fd6344__0[0x12U];
                __Vtemp_h33efcfa1__0[0x13U] = __Vtemp_h93fd6344__0[0x13U];
                __Vtemp_h33efcfa1__0[0x14U] = __Vtemp_h93fd6344__0[0x14U];
                __Vtemp_h33efcfa1__0[0x15U] = __Vtemp_h93fd6344__0[0x15U];
                __Vtemp_h33efcfa1__0[0x16U] = __Vtemp_h93fd6344__0[0x16U];
                __Vtemp_h33efcfa1__0[0x17U] = __Vtemp_h93fd6344__0[0x17U];
                __Vtemp_h33efcfa1__0[0x18U] = __Vtemp_h93fd6344__0[0x18U];
                __Vtemp_h33efcfa1__0[0x19U] = __Vtemp_h93fd6344__0[0x19U];
                __Vtemp_h33efcfa1__0[0x1aU] = __Vtemp_h93fd6344__0[0x1aU];
                __Vtemp_h33efcfa1__0[0x1bU] = __Vtemp_h93fd6344__0[0x1bU];
                __Vtemp_h33efcfa1__0[0x1cU] = __Vtemp_h93fd6344__0[0x1cU];
                __Vtemp_h33efcfa1__0[0x1dU] = __Vtemp_h93fd6344__0[0x1dU];
                __Vtemp_h33efcfa1__0[0x1fU] = __Vtemp_h93fd6344__0[0x1fU];
            }
        } else {
            __Vtemp_h33efcfa1__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            __Vtemp_h33efcfa1__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            __Vtemp_h33efcfa1__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_h33efcfa1__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_h33efcfa1__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_h33efcfa1__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_h33efcfa1__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_h33efcfa1__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_h33efcfa1__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_h33efcfa1__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_h33efcfa1__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_h33efcfa1__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_h33efcfa1__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_h33efcfa1__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_h33efcfa1__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_h33efcfa1__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_h33efcfa1__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_h33efcfa1__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_h33efcfa1__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_h33efcfa1__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_h33efcfa1__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_h33efcfa1__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_h33efcfa1__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_h33efcfa1__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_h33efcfa1__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_h33efcfa1__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_h33efcfa1__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_h33efcfa1__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_h33efcfa1__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_h33efcfa1__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_h33efcfa1__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0U] 
            = __Vtemp_h33efcfa1__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[1U] 
            = __Vtemp_h33efcfa1__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[2U] 
            = __Vtemp_h33efcfa1__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[3U] 
            = __Vtemp_h33efcfa1__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[4U] 
            = __Vtemp_h33efcfa1__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[5U] 
            = __Vtemp_h33efcfa1__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[6U] 
            = __Vtemp_h33efcfa1__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[7U] 
            = __Vtemp_h33efcfa1__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[8U] 
            = __Vtemp_h33efcfa1__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[9U] 
            = __Vtemp_h33efcfa1__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xaU] 
            = __Vtemp_h33efcfa1__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xbU] 
            = __Vtemp_h33efcfa1__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xcU] 
            = __Vtemp_h33efcfa1__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xdU] 
            = __Vtemp_h33efcfa1__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xeU] 
            = __Vtemp_h33efcfa1__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0xfU] 
            = __Vtemp_h33efcfa1__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x10U] 
            = __Vtemp_h33efcfa1__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x11U] 
            = __Vtemp_h33efcfa1__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x12U] 
            = __Vtemp_h33efcfa1__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x13U] 
            = __Vtemp_h33efcfa1__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x14U] 
            = __Vtemp_h33efcfa1__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x15U] 
            = __Vtemp_h33efcfa1__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x16U] 
            = __Vtemp_h33efcfa1__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x17U] 
            = __Vtemp_h33efcfa1__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x18U] 
            = __Vtemp_h33efcfa1__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x19U] 
            = __Vtemp_h33efcfa1__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1aU] 
            = __Vtemp_h33efcfa1__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1bU] 
            = __Vtemp_h33efcfa1__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1cU] 
            = __Vtemp_h33efcfa1__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1dU] 
            = __Vtemp_h33efcfa1__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1eU] 
            = __Vtemp_hae2ea0e8__0[0x1eU];
    }
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data[0x1fU] 
        = __Vtemp_h33efcfa1__0[0x1fU];
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__778__PROF__Soc__l1597(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__778__PROF__Soc__l1597\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) 
           & (0U != (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                      >> 0x14U)))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__779__PROF__Soc__l674(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__779__PROF__Soc__l674\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
            ? (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                >> 7U))) : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__780__PROF__Soc__l546(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__780__PROF__Soc__l546\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) 
           & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                      >> 0x1fU)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__781__PROF__Soc__l605(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__781__PROF__Soc__l605\n"); );
    // Body
    vlSelf->__VdfgTmp_h8f698259__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) 
                                      & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                 >> 7U)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__782__PROF__Soc__l605(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__782__PROF__Soc__l605\n"); );
    // Body
    vlSelf->__VdfgTmp_h4013b3a0__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                       ? (0x3fU & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                           >> 0x19U)))
                                       : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__783__PROF__Soc__l605(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__783__PROF__Soc__l605\n"); );
    // Body
    vlSelf->__VdfgTmp_h47a28028__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                       ? (0xfU & (IData)(
                                                         (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                          >> 8U)))
                                       : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__784__PROF__Soc__l690(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__784__PROF__Soc__l690\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
            ? (0xfffU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                 >> 0x14U))) : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__785__PROF__Soc__l668(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__785__PROF__Soc__l668\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
            ? (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                >> 0x14U))) : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__786__PROF__Soc__l1596(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__786__PROF__Soc__l1596\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) 
           & (0U != (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                      >> 0xfU)))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__787__PROF__Soc__l667(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__787__PROF__Soc__l667\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
            ? (0x1fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                >> 0xfU))) : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__788__PROF__Soc__l3971(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__788__PROF__Soc__l3971\n"); );
    // Body
    vlSelf->__VdfgTmp_h404168af__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                       ? (0x7fU & (IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                           >> 0x19U)))
                                       : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__789__PROF__Soc__l605(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__789__PROF__Soc__l605\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
            ? (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data)
            : 0x13U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__790__PROF__Soc__l337(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__790__PROF__Soc__l337\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
            ? (0x7fU & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data))
            : 0x13U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__791__PROF__Soc__l1391(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__791__PROF__Soc__l1391\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata 
        = (((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
            | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)))
            ? vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata
            : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                ? (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                    (((IData)(0x3fU) 
                                      + (0x1ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                   << 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                        << 6U))))) 
                   | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                        << 6U))) ? 0ULL
                        : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                           (((IData)(0x1fU) 
                                             + (0x1ffU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                   << 6U))) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                    << 6U))))) 
                      | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                         (0xeU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                  << 1U))])) 
                         >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                      << 6U))))) : 0ULL));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__792__PROF__Soc__l2706(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__792__PROF__Soc__l2706\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0 
        = ((1U & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8)
            ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h9c8f247f__0)
            : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__793__PROF__Soc__l235(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__793__PROF__Soc__l235\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R0_data 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
            & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))
            ? vlSelf->__VdfgTmp_h10ac77a7__0 : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__794__PROF__Soc__l3434(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__794__PROF__Soc__l3434\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__795__PROF__Soc__l2716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__795__PROF__Soc__l2716\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__796__PROF__Soc__l3661(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__796__PROF__Soc__l3661\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
             : 0U) | ((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                       ? (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)
                       : 0U));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__797__PROF__Soc__l3972(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__797__PROF__Soc__l3972\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0)
             ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
             : 0ULL) | ((IData)(vlSelf->__VdfgTmp_h9d5684c6__0)
                         ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                         : 0ULL));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__798__PROF__Soc__l2374(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__798__PROF__Soc__l2374\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8 
        = ((0x1fU >= (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h9c8f247f__0))
            ? (vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty 
               >> (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h9c8f247f__0))
            : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__799__PROF__Soc__l2384(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__799__PROF__Soc__l2384\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0) 
           & (7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__800__PROF__Soc__l2716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__800__PROF__Soc__l2716\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0 
        = ((~ (IData)((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__801__PROF__Soc__l1602(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__801__PROF__Soc__l1602\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__802__PROF__Soc__l1603(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__802__PROF__Soc__l1603\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__803__PROF__Soc__l1604(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__803__PROF__Soc__l1604\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr) 
              == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__804__PROF__Soc__l1597(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__804__PROF__Soc__l1597\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__805__PROF__Soc__l1599(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__805__PROF__Soc__l1599\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__806__PROF__Soc__l1601(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__806__PROF__Soc__l1601\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__807__PROF__Soc__l610(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__807__PROF__Soc__l610\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr) 
           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__808__PROF__Soc__l1596(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__808__PROF__Soc__l1596\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__809__PROF__Soc__l1598(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__809__PROF__Soc__l1598\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__810__PROF__Soc__l1600(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__810__PROF__Soc__l1600\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0) 
           & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
              & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
                 == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__811__PROF__Soc__l608(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__811__PROF__Soc__l608\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr) 
           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__812__PROF__Soc__l1931(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__812__PROF__Soc__l1931\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = 
        ((0x73U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
         & (IData)((vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS 
                    >> 3U)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__813__PROF__Soc__l428(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__813__PROF__Soc__l428\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 
        = ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__814__PROF__Soc__l337(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__814__PROF__Soc__l337\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN 
        = ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
              ? (7U & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                               >> 0xcU))) : 0U) << 7U) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__815__PROF__Soc__l237(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__815__PROF__Soc__l237\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R2_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0) 
            & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8))
            ? vlSelf->__VdfgTmp_h10ac77a7__0 : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__816__PROF__Soc__l2716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__816__PROF__Soc__l2716\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__817__PROF__Soc__l1704(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__817__PROF__Soc__l1704\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall 
        = ((((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1) 
             & (0x9fffffffU < vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T)) 
            & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
           | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__818__PROF__Soc__l4527(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__818__PROF__Soc__l4527\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid 
        = ((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                   | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6)) 
              & (0xa0000000ULL > vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__819__PROF__Soc__l2304(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__819__PROF__Soc__l2304\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0 
        = ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
            [(0x1eU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                >> 7U)) << 1U))] == 
            (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                  >> 0xbU)))) & (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid 
                                                 >> 
                                                 (0x1eU 
                                                  & ((IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                              >> 7U)) 
                                                     << 1U))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__820__PROF__Soc__l2706(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__820__PROF__Soc__l2706\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0 
        = ((1U & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8)
            ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h9c8f247f__0)
            : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__821__PROF__Soc__l235(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__821__PROF__Soc__l235\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data 
        = (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
            & ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))
            ? vlSelf->__VdfgTmp_h2a73f274__0 : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__822__PROF__Soc__l3434(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__822__PROF__Soc__l3434\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__823__PROF__Soc__l2716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__823__PROF__Soc__l2716\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0 
        = ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__824__PROF__Soc__l616(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__824__PROF__Soc__l616\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                    ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                        : 0ULL))) : ((0x340U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                      ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                      : ((0x300U == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                          ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                          : (((0x344U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)) 
                                              | (0x304U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr)))
                                              ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                              : ((0x341U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                                  : 
                                                 ((0x342U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr))
                                                    ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                    : 0ULL)))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__825__PROF__Soc__l615(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__825__PROF__Soc__l615\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                        : 0ULL))) : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0)
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr]
                                      : 0ULL));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__826__PROF__Soc__l614(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__826__PROF__Soc__l614\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
            | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
               | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))
            ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                    ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                    : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                        ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                        : 0ULL))) : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0)
                                      ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                     [vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr]
                                      : 0ULL));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__827__PROF__Soc__l1707(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__827__PROF__Soc__l1707\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
            & ((IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2) 
               | ((0x30200073U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7)))) 
           | ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
              | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                 | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                    | ((5U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                       | (6U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__828__PROF__Soc__l455(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__828__PROF__Soc__l455\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 
        = ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__829__PROF__Soc__l442(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__829__PROF__Soc__l442\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9 
        = ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__830__PROF__Soc__l440(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__830__PROF__Soc__l440\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0 
        = ((0x2f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x373U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__831__PROF__Soc__l425(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__831__PROF__Soc__l425\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 
        = ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
           | (0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__832__PROF__Soc__l424(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__832__PROF__Soc__l424\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 
        = ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | (0x1f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__833__PROF__Soc__l457(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__833__PROF__Soc__l457\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0 
        = ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x83U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x103U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x203U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x283U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x303U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | (0x183U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__834__PROF__Soc__l426(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__834__PROF__Soc__l426\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5 
        = ((0x63U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0xe3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x263U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x2e3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x363U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x3e3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__835__PROF__Soc__l340(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__835__PROF__Soc__l340\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1 
        = (((IData)(vlSelf->__VdfgTmp_h404168af__0) 
            << 0xaU) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__836__PROF__Soc__l340(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__836__PROF__Soc__l340\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 
        = ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
              ? (0x3fU & (IData)((vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                  >> 0x1aU))) : 0U) 
            << 0xaU) | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__837__PROF__Soc__l238(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__837__PROF__Soc__l238\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R3_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
            & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))
            ? vlSelf->__VdfgTmp_h4fb76d38__0 : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__838__PROF__Soc__l2716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__838__PROF__Soc__l2716\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0) 
           & ((3U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
              & (4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__839__PROF__Soc__l2318(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__839__PROF__Soc__l2318\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) 
           | ((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory
               [(0x1fU & ((IData)(1U) + (0x1eU & ((IData)(
                                                          (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                           >> 7U)) 
                                                  << 1U))))] 
               == (0x1fffffU & (IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                        >> 0xbU)))) 
              & ((0x1fU >= (0x3fU & ((IData)(1U) + 
                                     (0x1eU & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 7U)) 
                                               << 1U)))))
                  ? (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid 
                     >> (0x3fU & ((IData)(1U) + (0x1eU 
                                                 & ((IData)(
                                                            (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                             >> 7U)) 
                                                    << 1U)))))
                  : 0U)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__840__PROF__Soc__l237(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__840__PROF__Soc__l237\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0) 
            & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8))
            ? vlSelf->__VdfgTmp_h2a73f274__0 : 0U);
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__841__PROF__Soc__l2716(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__841__PROF__Soc__l2716\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__842__PROF__Soc__l471(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__842__PROF__Soc__l471\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0)
            ? 0U : ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__843__PROF__Soc__l443(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__843__PROF__Soc__l443\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__844__PROF__Soc__l480(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__844__PROF__Soc__l480\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0) 
           | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__845__PROF__Soc__l455(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__845__PROF__Soc__l455\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0) 
           | ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
              | ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__846__PROF__Soc__l451(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__846__PROF__Soc__l451\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 
        = ((0x3bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x803bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0xbbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                 | ((0x2bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x82bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x43bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x63bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x6bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x73bU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | (0x7bbU == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__847__PROF__Soc__l444(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__847__PROF__Soc__l444\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11 
        = ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x113U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x193U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x213U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x313U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x393U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | ((0x93U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                             | ((0x293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                | ((0x4293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                   | ((0x33U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x8033U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                         | ((0xb3U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                            | ((0x133U 
                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                               | ((0x1b3U 
                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                  | ((0x233U 
                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                     | ((0x2b3U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                        | ((0x82b3U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                           | ((0x333U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                              | ((0x3b3U 
                                                                  == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                 | (0x433U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))))));
}
