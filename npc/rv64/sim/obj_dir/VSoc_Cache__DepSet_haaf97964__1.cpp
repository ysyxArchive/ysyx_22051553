// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc_Cache.h"

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3818__PROF__Soc__l3346(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3818__PROF__Soc__l3346\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb3ceea99__0;
    // Body
    __Vtemp_hb3ceea99__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_3)
                                                           ? 
                                                          vlSelf->__PVT__DataArray_0_7_ext__DOT__Memory
                                                          [vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_4]
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_3)
                                                              ? 
                                                             vlSelf->__PVT__DataArray_0_6_ext__DOT__Memory
                                                             [vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_4]
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_3)
                                                                 ? 
                                                                vlSelf->__PVT__DataArray_0_5_ext__DOT__Memory
                                                                [vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_4]
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_3)
                                                                    ? 
                                                                   vlSelf->__PVT__DataArray_0_4_ext__DOT__Memory
                                                                   [vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_4]
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_3)
                                                                       ? 
                                                                      vlSelf->__PVT__DataArray_0_3_ext__DOT__Memory
                                                                      [vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_4]
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((IData)(vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_3)
                                                                          ? 
                                                                         vlSelf->__PVT__DataArray_0_2_ext__DOT__Memory
                                                                         [vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_4]
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((IData)(vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_3)
                                                                             ? 
                                                                            vlSelf->__PVT__DataArray_0_1_ext__DOT__Memory
                                                                            [vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_4]
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((IData)(vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_3)
                                                                              ? 
                                                                             vlSelf->__PVT__DataArray_0_0_ext__DOT__Memory
                                                                             [vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_4]
                                                                              : 0U)))))))))));
    __Vtemp_hb3ceea99__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_3)
                                                            ? 
                                                           vlSelf->__PVT__DataArray_0_7_ext__DOT__Memory
                                                           [vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_4]
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_3)
                                                               ? 
                                                              vlSelf->__PVT__DataArray_0_6_ext__DOT__Memory
                                                              [vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_4]
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_3)
                                                                  ? 
                                                                 vlSelf->__PVT__DataArray_0_5_ext__DOT__Memory
                                                                 [vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_4]
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_3)
                                                                     ? 
                                                                    vlSelf->__PVT__DataArray_0_4_ext__DOT__Memory
                                                                    [vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_4]
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_3)
                                                                        ? 
                                                                       vlSelf->__PVT__DataArray_0_3_ext__DOT__Memory
                                                                       [vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_4]
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_3)
                                                                           ? 
                                                                          vlSelf->__PVT__DataArray_0_2_ext__DOT__Memory
                                                                          [vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_4]
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_3)
                                                                              ? 
                                                                             vlSelf->__PVT__DataArray_0_1_ext__DOT__Memory
                                                                             [vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_4]
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_3)
                                                                               ? 
                                                                              vlSelf->__PVT__DataArray_0_0_ext__DOT__Memory
                                                                              [vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_4]
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__rdata2[0U] = __Vtemp_hb3ceea99__0[0U];
    vlSelf->__PVT__rdata2[1U] = __Vtemp_hb3ceea99__0[1U];
    vlSelf->__PVT__rdata2[2U] = ((((IData)(vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_1_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_1_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_1_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_1_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[3U] = ((((IData)(vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_1_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_1_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_1_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_1_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[4U] = ((((IData)(vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_2_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_2_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_2_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_2_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[5U] = ((((IData)(vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_2_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_2_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_2_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_2_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[6U] = ((((IData)(vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_3_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_3_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_3_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_3_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[7U] = ((((IData)(vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_3_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_3_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_3_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_3_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[8U] = ((((IData)(vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_4_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_4_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_4_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_4_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[9U] = ((((IData)(vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_3)
                                    ? vlSelf->__PVT__DataArray_4_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_4]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_4_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_4]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_4_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_4]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_3)
                                           ? vlSelf->__PVT__DataArray_4_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_4]
                                           : 0U))));
    vlSelf->__PVT__rdata2[0xaU] = ((((IData)(vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_3)
                                      ? vlSelf->__PVT__DataArray_5_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_4]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_3)
                                         ? vlSelf->__PVT__DataArray_5_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_4]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_5_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_4]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_5_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_4]
                                             : 0U))));
    vlSelf->__PVT__rdata2[0xbU] = ((((IData)(vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_3)
                                      ? vlSelf->__PVT__DataArray_5_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_4]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_3)
                                         ? vlSelf->__PVT__DataArray_5_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_4]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_5_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_4]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_5_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_4]
                                             : 0U))));
    vlSelf->__PVT__rdata2[0xcU] = ((((IData)(vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_3)
                                      ? vlSelf->__PVT__DataArray_6_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_4]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_3)
                                         ? vlSelf->__PVT__DataArray_6_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_4]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_6_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_4]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_6_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_4]
                                             : 0U))));
    vlSelf->__PVT__rdata2[0xdU] = ((((IData)(vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_3)
                                      ? vlSelf->__PVT__DataArray_6_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_4]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_3)
                                         ? vlSelf->__PVT__DataArray_6_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_4]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_6_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_4]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_6_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_4]
                                             : 0U))));
    vlSelf->__PVT__rdata2[0xeU] = ((((IData)(vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_3)
                                      ? vlSelf->__PVT__DataArray_7_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_4]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_3)
                                         ? vlSelf->__PVT__DataArray_7_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_4]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_7_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_4]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_7_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_4]
                                             : 0U))));
    vlSelf->__PVT__rdata2[0xfU] = ((((IData)(vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_3)
                                      ? vlSelf->__PVT__DataArray_7_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_4]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_3)
                                         ? vlSelf->__PVT__DataArray_7_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_4]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_7_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_4]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_7_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_4]
                                             : 0U))));
    vlSelf->__PVT__rdata2[0x10U] = ((((IData)(vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_8_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_8_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_8_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_8_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x11U] = ((((IData)(vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_8_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_8_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_8_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_8_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x12U] = ((((IData)(vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_9_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_9_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_9_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_9_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x13U] = ((((IData)(vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_9_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_9_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_9_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_9_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x14U] = ((((IData)(vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_10_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_10_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_10_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_10_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x15U] = ((((IData)(vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_10_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_10_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_10_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_10_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x16U] = ((((IData)(vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_11_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_11_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_11_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_11_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x17U] = ((((IData)(vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_11_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_11_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_11_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_11_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x18U] = ((((IData)(vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_12_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_12_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_12_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_12_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x19U] = ((((IData)(vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_12_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_12_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_12_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_12_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x1aU] = ((((IData)(vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_13_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_13_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_13_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_13_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x1bU] = ((((IData)(vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_13_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_13_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_13_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_13_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x1cU] = ((((IData)(vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_14_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_14_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_14_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_14_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x1dU] = ((((IData)(vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_14_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_14_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_14_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_14_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x1eU] = ((((IData)(vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_15_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_15_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_15_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_15_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_4]
                                            : 0U))));
    vlSelf->__PVT__rdata2[0x1fU] = ((((IData)(vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_3)
                                       ? vlSelf->__PVT__DataArray_15_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_4]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_3)
                                          ? vlSelf->__PVT__DataArray_15_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_4]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_3)
                                             ? vlSelf->__PVT__DataArray_15_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_4]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_3)
                                            ? vlSelf->__PVT__DataArray_15_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_4]
                                            : 0U))));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3819__PROF__Soc__l3345(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3819__PROF__Soc__l3345\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h07b7b5e0__0;
    // Body
    __Vtemp_h07b7b5e0__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_1)
                                                           ? 
                                                          vlSelf->__PVT__DataArray_0_7_ext__DOT__Memory
                                                          [vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_2]
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_1)
                                                              ? 
                                                             vlSelf->__PVT__DataArray_0_6_ext__DOT__Memory
                                                             [vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_2]
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_1)
                                                                 ? 
                                                                vlSelf->__PVT__DataArray_0_5_ext__DOT__Memory
                                                                [vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_2]
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_1)
                                                                    ? 
                                                                   vlSelf->__PVT__DataArray_0_4_ext__DOT__Memory
                                                                   [vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_2]
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_1)
                                                                       ? 
                                                                      vlSelf->__PVT__DataArray_0_3_ext__DOT__Memory
                                                                      [vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_2]
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((IData)(vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_1)
                                                                          ? 
                                                                         vlSelf->__PVT__DataArray_0_2_ext__DOT__Memory
                                                                         [vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_2]
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((IData)(vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_1)
                                                                             ? 
                                                                            vlSelf->__PVT__DataArray_0_1_ext__DOT__Memory
                                                                            [vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_2]
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((IData)(vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_1)
                                                                              ? 
                                                                             vlSelf->__PVT__DataArray_0_0_ext__DOT__Memory
                                                                             [vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_2]
                                                                              : 0U)))))))))));
    __Vtemp_h07b7b5e0__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_1)
                                                            ? 
                                                           vlSelf->__PVT__DataArray_0_7_ext__DOT__Memory
                                                           [vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_2]
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_1)
                                                               ? 
                                                              vlSelf->__PVT__DataArray_0_6_ext__DOT__Memory
                                                              [vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_2]
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_1)
                                                                  ? 
                                                                 vlSelf->__PVT__DataArray_0_5_ext__DOT__Memory
                                                                 [vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_2]
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_1)
                                                                     ? 
                                                                    vlSelf->__PVT__DataArray_0_4_ext__DOT__Memory
                                                                    [vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_2]
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_1)
                                                                        ? 
                                                                       vlSelf->__PVT__DataArray_0_3_ext__DOT__Memory
                                                                       [vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_2]
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_1)
                                                                           ? 
                                                                          vlSelf->__PVT__DataArray_0_2_ext__DOT__Memory
                                                                          [vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_2]
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_1)
                                                                              ? 
                                                                             vlSelf->__PVT__DataArray_0_1_ext__DOT__Memory
                                                                             [vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_2]
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_1)
                                                                               ? 
                                                                              vlSelf->__PVT__DataArray_0_0_ext__DOT__Memory
                                                                              [vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_2]
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__rdata1[0U] = __Vtemp_h07b7b5e0__0[0U];
    vlSelf->__PVT__rdata1[1U] = __Vtemp_h07b7b5e0__0[1U];
    vlSelf->__PVT__rdata1[2U] = ((((IData)(vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_1_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_1_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_1_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_1_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[3U] = ((((IData)(vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_1_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_1_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_1_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_1_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[4U] = ((((IData)(vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_2_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_2_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_2_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_2_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[5U] = ((((IData)(vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_2_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_2_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_2_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_2_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[6U] = ((((IData)(vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_3_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_3_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_3_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_3_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[7U] = ((((IData)(vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_3_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_3_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_3_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_3_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[8U] = ((((IData)(vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_4_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_4_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_4_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_4_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[9U] = ((((IData)(vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_1)
                                    ? vlSelf->__PVT__DataArray_4_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_2]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_4_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_2]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_4_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_2]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_1)
                                           ? vlSelf->__PVT__DataArray_4_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_2]
                                           : 0U))));
    vlSelf->__PVT__rdata1[0xaU] = ((((IData)(vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_1)
                                      ? vlSelf->__PVT__DataArray_5_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_2]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_1)
                                         ? vlSelf->__PVT__DataArray_5_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_2]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_5_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_2]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_5_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_2]
                                             : 0U))));
    vlSelf->__PVT__rdata1[0xbU] = ((((IData)(vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_1)
                                      ? vlSelf->__PVT__DataArray_5_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_2]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_1)
                                         ? vlSelf->__PVT__DataArray_5_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_2]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_5_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_2]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_5_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_2]
                                             : 0U))));
    vlSelf->__PVT__rdata1[0xcU] = ((((IData)(vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_1)
                                      ? vlSelf->__PVT__DataArray_6_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_2]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_1)
                                         ? vlSelf->__PVT__DataArray_6_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_2]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_6_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_2]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_6_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_2]
                                             : 0U))));
    vlSelf->__PVT__rdata1[0xdU] = ((((IData)(vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_1)
                                      ? vlSelf->__PVT__DataArray_6_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_2]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_1)
                                         ? vlSelf->__PVT__DataArray_6_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_2]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_6_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_2]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_6_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_2]
                                             : 0U))));
    vlSelf->__PVT__rdata1[0xeU] = ((((IData)(vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_1)
                                      ? vlSelf->__PVT__DataArray_7_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_2]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_1)
                                         ? vlSelf->__PVT__DataArray_7_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_2]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_7_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_2]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_7_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_2]
                                             : 0U))));
    vlSelf->__PVT__rdata1[0xfU] = ((((IData)(vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_1)
                                      ? vlSelf->__PVT__DataArray_7_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_2]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_1)
                                         ? vlSelf->__PVT__DataArray_7_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_2]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_7_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_2]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_7_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_2]
                                             : 0U))));
    vlSelf->__PVT__rdata1[0x10U] = ((((IData)(vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_8_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_8_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_8_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_8_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x11U] = ((((IData)(vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_8_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_8_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_8_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_8_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x12U] = ((((IData)(vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_9_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_9_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_9_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_9_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x13U] = ((((IData)(vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_9_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_9_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_9_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_9_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x14U] = ((((IData)(vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_10_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_10_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_10_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_10_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x15U] = ((((IData)(vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_10_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_10_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_10_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_10_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x16U] = ((((IData)(vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_11_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_11_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_11_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_11_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x17U] = ((((IData)(vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_11_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_11_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_11_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_11_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x18U] = ((((IData)(vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_12_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_12_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_12_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_12_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x19U] = ((((IData)(vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_12_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_12_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_12_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_12_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x1aU] = ((((IData)(vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_13_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_13_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_13_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_13_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x1bU] = ((((IData)(vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_13_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_13_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_13_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_13_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x1cU] = ((((IData)(vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_14_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_14_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_14_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_14_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x1dU] = ((((IData)(vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_14_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_14_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_14_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_14_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x1eU] = ((((IData)(vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_15_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_15_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_15_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_15_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_2]
                                            : 0U))));
    vlSelf->__PVT__rdata1[0x1fU] = ((((IData)(vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_1)
                                       ? vlSelf->__PVT__DataArray_15_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_2]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_1)
                                          ? vlSelf->__PVT__DataArray_15_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_2]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__DataArray_15_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_2]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_1)
                                            ? vlSelf->__PVT__DataArray_15_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_2]
                                            : 0U))));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3820__PROF__Soc__l3344(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3820__PROF__Soc__l3344\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h62b9ff92__0;
    // Body
    __Vtemp_h62b9ff92__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN)
                                                           ? 
                                                          vlSelf->__PVT__DataArray_0_7_ext__DOT__Memory
                                                          [vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_0]
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN)
                                                              ? 
                                                             vlSelf->__PVT__DataArray_0_6_ext__DOT__Memory
                                                             [vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_0]
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN)
                                                                 ? 
                                                                vlSelf->__PVT__DataArray_0_5_ext__DOT__Memory
                                                                [vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_0]
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN)
                                                                    ? 
                                                                   vlSelf->__PVT__DataArray_0_4_ext__DOT__Memory
                                                                   [vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_0]
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN)
                                                                       ? 
                                                                      vlSelf->__PVT__DataArray_0_3_ext__DOT__Memory
                                                                      [vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_0]
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((IData)(vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN)
                                                                          ? 
                                                                         vlSelf->__PVT__DataArray_0_2_ext__DOT__Memory
                                                                         [vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_0]
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((IData)(vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN)
                                                                             ? 
                                                                            vlSelf->__PVT__DataArray_0_1_ext__DOT__Memory
                                                                            [vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_0]
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((IData)(vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN)
                                                                              ? 
                                                                             vlSelf->__PVT__DataArray_0_0_ext__DOT__Memory
                                                                             [vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_0]
                                                                              : 0U)))))))))));
    __Vtemp_h62b9ff92__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN)
                                                            ? 
                                                           vlSelf->__PVT__DataArray_0_7_ext__DOT__Memory
                                                           [vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_0]
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN)
                                                               ? 
                                                              vlSelf->__PVT__DataArray_0_6_ext__DOT__Memory
                                                              [vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_0]
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN)
                                                                  ? 
                                                                 vlSelf->__PVT__DataArray_0_5_ext__DOT__Memory
                                                                 [vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_0]
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN)
                                                                     ? 
                                                                    vlSelf->__PVT__DataArray_0_4_ext__DOT__Memory
                                                                    [vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_0]
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN)
                                                                        ? 
                                                                       vlSelf->__PVT__DataArray_0_3_ext__DOT__Memory
                                                                       [vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_0]
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN)
                                                                           ? 
                                                                          vlSelf->__PVT__DataArray_0_2_ext__DOT__Memory
                                                                          [vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_0]
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN)
                                                                              ? 
                                                                             vlSelf->__PVT__DataArray_0_1_ext__DOT__Memory
                                                                             [vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_0]
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN)
                                                                               ? 
                                                                              vlSelf->__PVT__DataArray_0_0_ext__DOT__Memory
                                                                              [vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_0]
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->__PVT__rdata0[0U] = __Vtemp_h62b9ff92__0[0U];
    vlSelf->__PVT__rdata0[1U] = __Vtemp_h62b9ff92__0[1U];
    vlSelf->__PVT__rdata0[2U] = ((((IData)(vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_1_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_1_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_1_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_1_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[3U] = ((((IData)(vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_1_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_1_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_1_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_1_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[4U] = ((((IData)(vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_2_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_2_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_2_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_2_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[5U] = ((((IData)(vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_2_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_2_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_2_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_2_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[6U] = ((((IData)(vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_3_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_3_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_3_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_3_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[7U] = ((((IData)(vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_3_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_3_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_3_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_3_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[8U] = ((((IData)(vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_4_3_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_4_2_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_4_1_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_4_0_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[9U] = ((((IData)(vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN)
                                    ? vlSelf->__PVT__DataArray_4_7_ext__DOT__Memory
                                   [vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_0]
                                    : 0U) << 0x18U) 
                                 | ((((IData)(vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_4_6_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_0]
                                       : 0U) << 0x10U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_4_5_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_0]
                                          : 0U) << 8U) 
                                       | ((IData)(vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN)
                                           ? vlSelf->__PVT__DataArray_4_4_ext__DOT__Memory
                                          [vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_0]
                                           : 0U))));
    vlSelf->__PVT__rdata0[0xaU] = ((((IData)(vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN)
                                      ? vlSelf->__PVT__DataArray_5_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_0]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN)
                                         ? vlSelf->__PVT__DataArray_5_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_0]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_5_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_0]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_5_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_0]
                                             : 0U))));
    vlSelf->__PVT__rdata0[0xbU] = ((((IData)(vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN)
                                      ? vlSelf->__PVT__DataArray_5_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_0]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN)
                                         ? vlSelf->__PVT__DataArray_5_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_0]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_5_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_0]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_5_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_0]
                                             : 0U))));
    vlSelf->__PVT__rdata0[0xcU] = ((((IData)(vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN)
                                      ? vlSelf->__PVT__DataArray_6_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_0]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN)
                                         ? vlSelf->__PVT__DataArray_6_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_0]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_6_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_0]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_6_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_0]
                                             : 0U))));
    vlSelf->__PVT__rdata0[0xdU] = ((((IData)(vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN)
                                      ? vlSelf->__PVT__DataArray_6_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_0]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN)
                                         ? vlSelf->__PVT__DataArray_6_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_0]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_6_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_0]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_6_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_0]
                                             : 0U))));
    vlSelf->__PVT__rdata0[0xeU] = ((((IData)(vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN)
                                      ? vlSelf->__PVT__DataArray_7_3_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_0]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN)
                                         ? vlSelf->__PVT__DataArray_7_2_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_0]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_7_1_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_0]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_7_0_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_0]
                                             : 0U))));
    vlSelf->__PVT__rdata0[0xfU] = ((((IData)(vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN)
                                      ? vlSelf->__PVT__DataArray_7_7_ext__DOT__Memory
                                     [vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_0]
                                      : 0U) << 0x18U) 
                                   | ((((IData)(vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN)
                                         ? vlSelf->__PVT__DataArray_7_6_ext__DOT__Memory
                                        [vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_0]
                                         : 0U) << 0x10U) 
                                      | ((((IData)(vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_7_5_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_0]
                                            : 0U) << 8U) 
                                         | ((IData)(vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_7_4_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_0]
                                             : 0U))));
    vlSelf->__PVT__rdata0[0x10U] = ((((IData)(vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_8_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_8_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_8_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_8_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x11U] = ((((IData)(vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_8_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_8_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_8_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_8_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x12U] = ((((IData)(vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_9_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_9_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_9_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_9_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x13U] = ((((IData)(vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_9_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_9_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_9_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_9_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x14U] = ((((IData)(vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_10_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_10_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_10_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_10_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x15U] = ((((IData)(vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_10_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_10_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_10_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_10_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x16U] = ((((IData)(vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_11_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_11_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_11_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_11_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x17U] = ((((IData)(vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_11_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_11_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_11_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_11_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x18U] = ((((IData)(vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_12_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_12_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_12_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_12_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x19U] = ((((IData)(vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_12_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_12_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_12_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_12_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x1aU] = ((((IData)(vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_13_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_13_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_13_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_13_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x1bU] = ((((IData)(vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_13_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_13_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_13_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_13_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x1cU] = ((((IData)(vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_14_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_14_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_14_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_14_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x1dU] = ((((IData)(vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_14_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_14_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_14_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_14_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x1eU] = ((((IData)(vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_15_3_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_15_2_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_15_1_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_15_0_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_0]
                                            : 0U))));
    vlSelf->__PVT__rdata0[0x1fU] = ((((IData)(vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN)
                                       ? vlSelf->__PVT__DataArray_15_7_ext__DOT__Memory
                                      [vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_0]
                                       : 0U) << 0x18U) 
                                    | ((((IData)(vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN)
                                          ? vlSelf->__PVT__DataArray_15_6_ext__DOT__Memory
                                         [vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_0]
                                          : 0U) << 0x10U) 
                                       | ((((IData)(vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN)
                                             ? vlSelf->__PVT__DataArray_15_5_ext__DOT__Memory
                                            [vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_0]
                                             : 0U) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN)
                                            ? vlSelf->__PVT__DataArray_15_4_ext__DOT__Memory
                                           [vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_0]
                                            : 0U))));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3821__PROF__Soc__l4209(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3821__PROF__Soc__l4209\n"); );
    // Body
    vlSelf->__PVT__ren_reg = vlSelf->__PVT__ren;
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3822__PROF__Soc__l3588(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3822__PROF__Soc__l3588\n"); );
    // Body
    vlSelf->__VdfgTmp_h25305f44__0[0U] = (IData)(vlSelf->__PVT__refill_buffer_0);
    vlSelf->__VdfgTmp_h25305f44__0[1U] = (IData)((vlSelf->__PVT__refill_buffer_0 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[2U] = (IData)(vlSelf->__PVT__refill_buffer_1);
    vlSelf->__VdfgTmp_h25305f44__0[3U] = (IData)((vlSelf->__PVT__refill_buffer_1 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[4U] = (IData)(vlSelf->__PVT__refill_buffer_2);
    vlSelf->__VdfgTmp_h25305f44__0[5U] = (IData)((vlSelf->__PVT__refill_buffer_2 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[6U] = (IData)(vlSelf->__PVT__refill_buffer_3);
    vlSelf->__VdfgTmp_h25305f44__0[7U] = (IData)((vlSelf->__PVT__refill_buffer_3 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[8U] = (IData)(vlSelf->__PVT__refill_buffer_4);
    vlSelf->__VdfgTmp_h25305f44__0[9U] = (IData)((vlSelf->__PVT__refill_buffer_4 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0xaU] = (IData)(vlSelf->__PVT__refill_buffer_5);
    vlSelf->__VdfgTmp_h25305f44__0[0xbU] = (IData)(
                                                   (vlSelf->__PVT__refill_buffer_5 
                                                    >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0xcU] = (IData)(vlSelf->__PVT__refill_buffer_6);
    vlSelf->__VdfgTmp_h25305f44__0[0xdU] = (IData)(
                                                   (vlSelf->__PVT__refill_buffer_6 
                                                    >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0xeU] = (IData)(vlSelf->__PVT__refill_buffer_7);
    vlSelf->__VdfgTmp_h25305f44__0[0xfU] = (IData)(
                                                   (vlSelf->__PVT__refill_buffer_7 
                                                    >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0x10U] = (IData)(vlSelf->__PVT__refill_buffer_8);
    vlSelf->__VdfgTmp_h25305f44__0[0x11U] = (IData)(
                                                    (vlSelf->__PVT__refill_buffer_8 
                                                     >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0x12U] = (IData)(vlSelf->__PVT__refill_buffer_9);
    vlSelf->__VdfgTmp_h25305f44__0[0x13U] = (IData)(
                                                    (vlSelf->__PVT__refill_buffer_9 
                                                     >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0x14U] = (IData)(vlSelf->__PVT__refill_buffer_10);
    vlSelf->__VdfgTmp_h25305f44__0[0x15U] = (IData)(
                                                    (vlSelf->__PVT__refill_buffer_10 
                                                     >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0x16U] = (IData)(vlSelf->__PVT__refill_buffer_11);
    vlSelf->__VdfgTmp_h25305f44__0[0x17U] = (IData)(
                                                    (vlSelf->__PVT__refill_buffer_11 
                                                     >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0x18U] = (IData)(vlSelf->__PVT__refill_buffer_12);
    vlSelf->__VdfgTmp_h25305f44__0[0x19U] = (IData)(
                                                    (vlSelf->__PVT__refill_buffer_12 
                                                     >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0x1aU] = (IData)(vlSelf->__PVT__refill_buffer_13);
    vlSelf->__VdfgTmp_h25305f44__0[0x1bU] = (IData)(
                                                    (vlSelf->__PVT__refill_buffer_13 
                                                     >> 0x20U));
    vlSelf->__VdfgTmp_h25305f44__0[0x1cU] = (IData)(vlSelf->__PVT__refill_buffer_14);
    vlSelf->__VdfgTmp_h25305f44__0[0x1dU] = (IData)(
                                                    (vlSelf->__PVT__refill_buffer_14 
                                                     >> 0x20U));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3827__PROF__Soc__l3606(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3827__PROF__Soc__l3606\n"); );
    // Body
    vlSelf->__PVT___GEN_5[0U] = vlSelf->__VdfgTmp_h25305f44__0[0U];
    vlSelf->__PVT___GEN_5[1U] = vlSelf->__VdfgTmp_h25305f44__0[1U];
    vlSelf->__PVT___GEN_5[2U] = vlSelf->__VdfgTmp_h25305f44__0[2U];
    vlSelf->__PVT___GEN_5[3U] = vlSelf->__VdfgTmp_h25305f44__0[3U];
    vlSelf->__PVT___GEN_5[4U] = vlSelf->__VdfgTmp_h25305f44__0[4U];
    vlSelf->__PVT___GEN_5[5U] = vlSelf->__VdfgTmp_h25305f44__0[5U];
    vlSelf->__PVT___GEN_5[6U] = vlSelf->__VdfgTmp_h25305f44__0[6U];
    vlSelf->__PVT___GEN_5[7U] = vlSelf->__VdfgTmp_h25305f44__0[7U];
    vlSelf->__PVT___GEN_5[8U] = vlSelf->__VdfgTmp_h25305f44__0[8U];
    vlSelf->__PVT___GEN_5[9U] = vlSelf->__VdfgTmp_h25305f44__0[9U];
    vlSelf->__PVT___GEN_5[0xaU] = vlSelf->__VdfgTmp_h25305f44__0[0xaU];
    vlSelf->__PVT___GEN_5[0xbU] = vlSelf->__VdfgTmp_h25305f44__0[0xbU];
    vlSelf->__PVT___GEN_5[0xcU] = vlSelf->__VdfgTmp_h25305f44__0[0xcU];
    vlSelf->__PVT___GEN_5[0xdU] = vlSelf->__VdfgTmp_h25305f44__0[0xdU];
    vlSelf->__PVT___GEN_5[0xeU] = vlSelf->__VdfgTmp_h25305f44__0[0xeU];
    vlSelf->__PVT___GEN_5[0xfU] = vlSelf->__VdfgTmp_h25305f44__0[0xfU];
    vlSelf->__PVT___GEN_5[0x10U] = vlSelf->__VdfgTmp_h25305f44__0[0x10U];
    vlSelf->__PVT___GEN_5[0x11U] = vlSelf->__VdfgTmp_h25305f44__0[0x11U];
    vlSelf->__PVT___GEN_5[0x12U] = vlSelf->__VdfgTmp_h25305f44__0[0x12U];
    vlSelf->__PVT___GEN_5[0x13U] = vlSelf->__VdfgTmp_h25305f44__0[0x13U];
    vlSelf->__PVT___GEN_5[0x14U] = vlSelf->__VdfgTmp_h25305f44__0[0x14U];
    vlSelf->__PVT___GEN_5[0x15U] = vlSelf->__VdfgTmp_h25305f44__0[0x15U];
    vlSelf->__PVT___GEN_5[0x16U] = vlSelf->__VdfgTmp_h25305f44__0[0x16U];
    vlSelf->__PVT___GEN_5[0x17U] = vlSelf->__VdfgTmp_h25305f44__0[0x17U];
    vlSelf->__PVT___GEN_5[0x18U] = vlSelf->__VdfgTmp_h25305f44__0[0x18U];
    vlSelf->__PVT___GEN_5[0x19U] = vlSelf->__VdfgTmp_h25305f44__0[0x19U];
    vlSelf->__PVT___GEN_5[0x1aU] = vlSelf->__VdfgTmp_h25305f44__0[0x1aU];
    vlSelf->__PVT___GEN_5[0x1bU] = vlSelf->__VdfgTmp_h25305f44__0[0x1bU];
    vlSelf->__PVT___GEN_5[0x1cU] = vlSelf->__VdfgTmp_h25305f44__0[0x1cU];
    vlSelf->__PVT___GEN_5[0x1dU] = vlSelf->__VdfgTmp_h25305f44__0[0x1dU];
    vlSelf->__PVT___GEN_5[0x1eU] = (IData)(vlSelf->__PVT__refill_buffer_15);
    vlSelf->__PVT___GEN_5[0x1fU] = (IData)((vlSelf->__PVT__refill_buffer_15 
                                            >> 0x20U));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3829__PROF__Soc__l4073(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3829__PROF__Soc__l4073\n"); );
    // Body
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
}

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3830__PROF__Soc__l3606(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3830__PROF__Soc__l3606\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_hdcae5ce7__0;
    VlWide<96>/*3071:0*/ __Vtemp_hc12bc4d4__0;
    VlWide<128>/*4095:0*/ __Vtemp_hd5ff4b3b__0;
    VlWide<64>/*2047:0*/ __Vtemp_hb4c67e49__0;
    VlWide<96>/*3071:0*/ __Vtemp_hb84eee09__0;
    VlWide<128>/*4095:0*/ __Vtemp_h2b62cddf__0;
    VlWide<32>/*1023:0*/ __Vtemp_h643f1f89__0;
    // Body
    __Vtemp_hdcae5ce7__0[0U] = vlSelf->__PVT__rdata2[0U];
    __Vtemp_hdcae5ce7__0[1U] = vlSelf->__PVT__rdata2[1U];
    __Vtemp_hdcae5ce7__0[2U] = vlSelf->__PVT__rdata2[2U];
    __Vtemp_hdcae5ce7__0[3U] = vlSelf->__PVT__rdata2[3U];
    __Vtemp_hdcae5ce7__0[4U] = vlSelf->__PVT__rdata2[4U];
    __Vtemp_hdcae5ce7__0[5U] = vlSelf->__PVT__rdata2[5U];
    __Vtemp_hdcae5ce7__0[6U] = vlSelf->__PVT__rdata2[6U];
    __Vtemp_hdcae5ce7__0[7U] = vlSelf->__PVT__rdata2[7U];
    __Vtemp_hdcae5ce7__0[8U] = vlSelf->__PVT__rdata2[8U];
    __Vtemp_hdcae5ce7__0[9U] = vlSelf->__PVT__rdata2[9U];
    __Vtemp_hdcae5ce7__0[0xaU] = vlSelf->__PVT__rdata2[0xaU];
    __Vtemp_hdcae5ce7__0[0xbU] = vlSelf->__PVT__rdata2[0xbU];
    __Vtemp_hdcae5ce7__0[0xcU] = vlSelf->__PVT__rdata2[0xcU];
    __Vtemp_hdcae5ce7__0[0xdU] = vlSelf->__PVT__rdata2[0xdU];
    __Vtemp_hdcae5ce7__0[0xeU] = vlSelf->__PVT__rdata2[0xeU];
    __Vtemp_hdcae5ce7__0[0xfU] = vlSelf->__PVT__rdata2[0xfU];
    __Vtemp_hdcae5ce7__0[0x10U] = vlSelf->__PVT__rdata2[0x10U];
    __Vtemp_hdcae5ce7__0[0x11U] = vlSelf->__PVT__rdata2[0x11U];
    __Vtemp_hdcae5ce7__0[0x12U] = vlSelf->__PVT__rdata2[0x12U];
    __Vtemp_hdcae5ce7__0[0x13U] = vlSelf->__PVT__rdata2[0x13U];
    __Vtemp_hdcae5ce7__0[0x14U] = vlSelf->__PVT__rdata2[0x14U];
    __Vtemp_hdcae5ce7__0[0x15U] = vlSelf->__PVT__rdata2[0x15U];
    __Vtemp_hdcae5ce7__0[0x16U] = vlSelf->__PVT__rdata2[0x16U];
    __Vtemp_hdcae5ce7__0[0x17U] = vlSelf->__PVT__rdata2[0x17U];
    __Vtemp_hdcae5ce7__0[0x18U] = vlSelf->__PVT__rdata2[0x18U];
    __Vtemp_hdcae5ce7__0[0x19U] = vlSelf->__PVT__rdata2[0x19U];
    __Vtemp_hdcae5ce7__0[0x1aU] = vlSelf->__PVT__rdata2[0x1aU];
    __Vtemp_hdcae5ce7__0[0x1bU] = vlSelf->__PVT__rdata2[0x1bU];
    __Vtemp_hdcae5ce7__0[0x1cU] = vlSelf->__PVT__rdata2[0x1cU];
    __Vtemp_hdcae5ce7__0[0x1dU] = vlSelf->__PVT__rdata2[0x1dU];
    __Vtemp_hdcae5ce7__0[0x1eU] = vlSelf->__PVT__rdata2[0x1eU];
    __Vtemp_hdcae5ce7__0[0x1fU] = vlSelf->__PVT__rdata2[0x1fU];
    __Vtemp_hdcae5ce7__0[0x20U] = vlSelf->__PVT__rdata3[0U];
    __Vtemp_hdcae5ce7__0[0x21U] = vlSelf->__PVT__rdata3[1U];
    __Vtemp_hdcae5ce7__0[0x22U] = vlSelf->__PVT__rdata3[2U];
    __Vtemp_hdcae5ce7__0[0x23U] = vlSelf->__PVT__rdata3[3U];
    __Vtemp_hdcae5ce7__0[0x24U] = vlSelf->__PVT__rdata3[4U];
    __Vtemp_hdcae5ce7__0[0x25U] = vlSelf->__PVT__rdata3[5U];
    __Vtemp_hdcae5ce7__0[0x26U] = vlSelf->__PVT__rdata3[6U];
    __Vtemp_hdcae5ce7__0[0x27U] = vlSelf->__PVT__rdata3[7U];
    __Vtemp_hdcae5ce7__0[0x28U] = vlSelf->__PVT__rdata3[8U];
    __Vtemp_hdcae5ce7__0[0x29U] = vlSelf->__PVT__rdata3[9U];
    __Vtemp_hdcae5ce7__0[0x2aU] = vlSelf->__PVT__rdata3[0xaU];
    __Vtemp_hdcae5ce7__0[0x2bU] = vlSelf->__PVT__rdata3[0xbU];
    __Vtemp_hdcae5ce7__0[0x2cU] = vlSelf->__PVT__rdata3[0xcU];
    __Vtemp_hdcae5ce7__0[0x2dU] = vlSelf->__PVT__rdata3[0xdU];
    __Vtemp_hdcae5ce7__0[0x2eU] = vlSelf->__PVT__rdata3[0xeU];
    __Vtemp_hdcae5ce7__0[0x2fU] = vlSelf->__PVT__rdata3[0xfU];
    __Vtemp_hdcae5ce7__0[0x30U] = vlSelf->__PVT__rdata3[0x10U];
    __Vtemp_hdcae5ce7__0[0x31U] = vlSelf->__PVT__rdata3[0x11U];
    __Vtemp_hdcae5ce7__0[0x32U] = vlSelf->__PVT__rdata3[0x12U];
    __Vtemp_hdcae5ce7__0[0x33U] = vlSelf->__PVT__rdata3[0x13U];
    __Vtemp_hdcae5ce7__0[0x34U] = vlSelf->__PVT__rdata3[0x14U];
    __Vtemp_hdcae5ce7__0[0x35U] = vlSelf->__PVT__rdata3[0x15U];
    __Vtemp_hdcae5ce7__0[0x36U] = vlSelf->__PVT__rdata3[0x16U];
    __Vtemp_hdcae5ce7__0[0x37U] = vlSelf->__PVT__rdata3[0x17U];
    __Vtemp_hdcae5ce7__0[0x38U] = vlSelf->__PVT__rdata3[0x18U];
    __Vtemp_hdcae5ce7__0[0x39U] = vlSelf->__PVT__rdata3[0x19U];
    __Vtemp_hdcae5ce7__0[0x3aU] = vlSelf->__PVT__rdata3[0x1aU];
    __Vtemp_hdcae5ce7__0[0x3bU] = vlSelf->__PVT__rdata3[0x1bU];
    __Vtemp_hdcae5ce7__0[0x3cU] = vlSelf->__PVT__rdata3[0x1cU];
    __Vtemp_hdcae5ce7__0[0x3dU] = vlSelf->__PVT__rdata3[0x1dU];
    __Vtemp_hdcae5ce7__0[0x3eU] = vlSelf->__PVT__rdata3[0x1eU];
    __Vtemp_hdcae5ce7__0[0x3fU] = vlSelf->__PVT__rdata3[0x1fU];
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_hc12bc4d4__0, __Vtemp_hdcae5ce7__0, vlSelf->__PVT__rdata1);
    VL_CONCAT_WWW(4096,3072,1024, __Vtemp_hd5ff4b3b__0, __Vtemp_hc12bc4d4__0, vlSelf->__PVT__rdata0);
    __Vtemp_hb4c67e49__0[0U] = vlSelf->__PVT__rdata2_buf[0U];
    __Vtemp_hb4c67e49__0[1U] = vlSelf->__PVT__rdata2_buf[1U];
    __Vtemp_hb4c67e49__0[2U] = vlSelf->__PVT__rdata2_buf[2U];
    __Vtemp_hb4c67e49__0[3U] = vlSelf->__PVT__rdata2_buf[3U];
    __Vtemp_hb4c67e49__0[4U] = vlSelf->__PVT__rdata2_buf[4U];
    __Vtemp_hb4c67e49__0[5U] = vlSelf->__PVT__rdata2_buf[5U];
    __Vtemp_hb4c67e49__0[6U] = vlSelf->__PVT__rdata2_buf[6U];
    __Vtemp_hb4c67e49__0[7U] = vlSelf->__PVT__rdata2_buf[7U];
    __Vtemp_hb4c67e49__0[8U] = vlSelf->__PVT__rdata2_buf[8U];
    __Vtemp_hb4c67e49__0[9U] = vlSelf->__PVT__rdata2_buf[9U];
    __Vtemp_hb4c67e49__0[0xaU] = vlSelf->__PVT__rdata2_buf[0xaU];
    __Vtemp_hb4c67e49__0[0xbU] = vlSelf->__PVT__rdata2_buf[0xbU];
    __Vtemp_hb4c67e49__0[0xcU] = vlSelf->__PVT__rdata2_buf[0xcU];
    __Vtemp_hb4c67e49__0[0xdU] = vlSelf->__PVT__rdata2_buf[0xdU];
    __Vtemp_hb4c67e49__0[0xeU] = vlSelf->__PVT__rdata2_buf[0xeU];
    __Vtemp_hb4c67e49__0[0xfU] = vlSelf->__PVT__rdata2_buf[0xfU];
    __Vtemp_hb4c67e49__0[0x10U] = vlSelf->__PVT__rdata2_buf[0x10U];
    __Vtemp_hb4c67e49__0[0x11U] = vlSelf->__PVT__rdata2_buf[0x11U];
    __Vtemp_hb4c67e49__0[0x12U] = vlSelf->__PVT__rdata2_buf[0x12U];
    __Vtemp_hb4c67e49__0[0x13U] = vlSelf->__PVT__rdata2_buf[0x13U];
    __Vtemp_hb4c67e49__0[0x14U] = vlSelf->__PVT__rdata2_buf[0x14U];
    __Vtemp_hb4c67e49__0[0x15U] = vlSelf->__PVT__rdata2_buf[0x15U];
    __Vtemp_hb4c67e49__0[0x16U] = vlSelf->__PVT__rdata2_buf[0x16U];
    __Vtemp_hb4c67e49__0[0x17U] = vlSelf->__PVT__rdata2_buf[0x17U];
    __Vtemp_hb4c67e49__0[0x18U] = vlSelf->__PVT__rdata2_buf[0x18U];
    __Vtemp_hb4c67e49__0[0x19U] = vlSelf->__PVT__rdata2_buf[0x19U];
    __Vtemp_hb4c67e49__0[0x1aU] = vlSelf->__PVT__rdata2_buf[0x1aU];
    __Vtemp_hb4c67e49__0[0x1bU] = vlSelf->__PVT__rdata2_buf[0x1bU];
    __Vtemp_hb4c67e49__0[0x1cU] = vlSelf->__PVT__rdata2_buf[0x1cU];
    __Vtemp_hb4c67e49__0[0x1dU] = vlSelf->__PVT__rdata2_buf[0x1dU];
    __Vtemp_hb4c67e49__0[0x1eU] = vlSelf->__PVT__rdata2_buf[0x1eU];
    __Vtemp_hb4c67e49__0[0x1fU] = vlSelf->__PVT__rdata2_buf[0x1fU];
    __Vtemp_hb4c67e49__0[0x20U] = vlSelf->__PVT__rdata3_buf[0U];
    __Vtemp_hb4c67e49__0[0x21U] = vlSelf->__PVT__rdata3_buf[1U];
    __Vtemp_hb4c67e49__0[0x22U] = vlSelf->__PVT__rdata3_buf[2U];
    __Vtemp_hb4c67e49__0[0x23U] = vlSelf->__PVT__rdata3_buf[3U];
    __Vtemp_hb4c67e49__0[0x24U] = vlSelf->__PVT__rdata3_buf[4U];
    __Vtemp_hb4c67e49__0[0x25U] = vlSelf->__PVT__rdata3_buf[5U];
    __Vtemp_hb4c67e49__0[0x26U] = vlSelf->__PVT__rdata3_buf[6U];
    __Vtemp_hb4c67e49__0[0x27U] = vlSelf->__PVT__rdata3_buf[7U];
    __Vtemp_hb4c67e49__0[0x28U] = vlSelf->__PVT__rdata3_buf[8U];
    __Vtemp_hb4c67e49__0[0x29U] = vlSelf->__PVT__rdata3_buf[9U];
    __Vtemp_hb4c67e49__0[0x2aU] = vlSelf->__PVT__rdata3_buf[0xaU];
    __Vtemp_hb4c67e49__0[0x2bU] = vlSelf->__PVT__rdata3_buf[0xbU];
    __Vtemp_hb4c67e49__0[0x2cU] = vlSelf->__PVT__rdata3_buf[0xcU];
    __Vtemp_hb4c67e49__0[0x2dU] = vlSelf->__PVT__rdata3_buf[0xdU];
    __Vtemp_hb4c67e49__0[0x2eU] = vlSelf->__PVT__rdata3_buf[0xeU];
    __Vtemp_hb4c67e49__0[0x2fU] = vlSelf->__PVT__rdata3_buf[0xfU];
    __Vtemp_hb4c67e49__0[0x30U] = vlSelf->__PVT__rdata3_buf[0x10U];
    __Vtemp_hb4c67e49__0[0x31U] = vlSelf->__PVT__rdata3_buf[0x11U];
    __Vtemp_hb4c67e49__0[0x32U] = vlSelf->__PVT__rdata3_buf[0x12U];
    __Vtemp_hb4c67e49__0[0x33U] = vlSelf->__PVT__rdata3_buf[0x13U];
    __Vtemp_hb4c67e49__0[0x34U] = vlSelf->__PVT__rdata3_buf[0x14U];
    __Vtemp_hb4c67e49__0[0x35U] = vlSelf->__PVT__rdata3_buf[0x15U];
    __Vtemp_hb4c67e49__0[0x36U] = vlSelf->__PVT__rdata3_buf[0x16U];
    __Vtemp_hb4c67e49__0[0x37U] = vlSelf->__PVT__rdata3_buf[0x17U];
    __Vtemp_hb4c67e49__0[0x38U] = vlSelf->__PVT__rdata3_buf[0x18U];
    __Vtemp_hb4c67e49__0[0x39U] = vlSelf->__PVT__rdata3_buf[0x19U];
    __Vtemp_hb4c67e49__0[0x3aU] = vlSelf->__PVT__rdata3_buf[0x1aU];
    __Vtemp_hb4c67e49__0[0x3bU] = vlSelf->__PVT__rdata3_buf[0x1bU];
    __Vtemp_hb4c67e49__0[0x3cU] = vlSelf->__PVT__rdata3_buf[0x1cU];
    __Vtemp_hb4c67e49__0[0x3dU] = vlSelf->__PVT__rdata3_buf[0x1dU];
    __Vtemp_hb4c67e49__0[0x3eU] = vlSelf->__PVT__rdata3_buf[0x1eU];
    __Vtemp_hb4c67e49__0[0x3fU] = vlSelf->__PVT__rdata3_buf[0x1fU];
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_hb84eee09__0, __Vtemp_hb4c67e49__0, vlSelf->__PVT__rdata1_buf);
    VL_CONCAT_WWW(4096,3072,1024, __Vtemp_h2b62cddf__0, __Vtemp_hb84eee09__0, vlSelf->__PVT__rdata0_buf);
    if (vlSelf->__PVT__ren_reg) {
        __Vtemp_h643f1f89__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(1U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       (0x60U & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(2U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(1U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(3U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(2U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(4U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(3U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(5U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(4U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(6U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(5U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[6U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(7U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(6U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[7U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(8U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(7U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[8U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(9U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(8U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[9U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_hd5ff4b3b__0[
                                              ((IData)(0xaU) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_hd5ff4b3b__0[
                                       ((IData)(9U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[0xaU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                ((IData)(0xbU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hd5ff4b3b__0[
                                         ((IData)(0xaU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xbU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                ((IData)(0xcU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hd5ff4b3b__0[
                                         ((IData)(0xbU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xcU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                ((IData)(0xdU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hd5ff4b3b__0[
                                         ((IData)(0xcU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xdU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                ((IData)(0xeU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hd5ff4b3b__0[
                                         ((IData)(0xdU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xeU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                ((IData)(0xfU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hd5ff4b3b__0[
                                         ((IData)(0xeU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xfU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_hd5ff4b3b__0[
                                         ((IData)(0xfU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0x10U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x11U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x10U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x11U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x12U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x11U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x12U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x13U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x12U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x13U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x14U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x13U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x14U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x15U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x14U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x15U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x16U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x15U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x16U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x17U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x16U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x17U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x18U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x17U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x18U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x19U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x18U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x19U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x1aU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x19U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1aU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x1bU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x1aU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1bU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x1cU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x1bU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1cU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x1dU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x1cU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1dU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x1eU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x1dU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1eU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x1fU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x1eU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1fU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_hd5ff4b3b__0[
                                                 ((IData)(0x20U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_hd5ff4b3b__0[
                                          ((IData)(0x1fU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
    } else {
        __Vtemp_h643f1f89__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(1U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       (0x60U & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(2U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(1U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(3U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(2U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(4U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(3U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(5U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(4U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(6U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(5U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[6U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(7U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(6U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[7U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(8U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(7U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[8U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(9U) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(8U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[9U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU)))
                                      ? 0U : (__Vtemp_h2b62cddf__0[
                                              ((IData)(0xaU) 
                                               + (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                    | (__Vtemp_h2b62cddf__0[
                                       ((IData)(9U) 
                                        + (0x60U & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->__PVT__victim) 
                                            << 0xaU))));
        __Vtemp_h643f1f89__0[0xaU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_h2b62cddf__0[
                                                ((IData)(0xbU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_h2b62cddf__0[
                                         ((IData)(0xaU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xbU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_h2b62cddf__0[
                                                ((IData)(0xcU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_h2b62cddf__0[
                                         ((IData)(0xbU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xcU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_h2b62cddf__0[
                                                ((IData)(0xdU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_h2b62cddf__0[
                                         ((IData)(0xcU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xdU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_h2b62cddf__0[
                                                ((IData)(0xeU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_h2b62cddf__0[
                                         ((IData)(0xdU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xeU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_h2b62cddf__0[
                                                ((IData)(0xfU) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_h2b62cddf__0[
                                         ((IData)(0xeU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0xfU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->__PVT__victim) 
                                                  << 0xaU)))
                                        ? 0U : (__Vtemp_h2b62cddf__0[
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0x60U 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__victim) 
                                                     << 0xaU))))) 
                                      | (__Vtemp_h2b62cddf__0[
                                         ((IData)(0xfU) 
                                          + (0x60U 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__victim) 
                                                << 0xaU))));
        __Vtemp_h643f1f89__0[0x10U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x11U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x10U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x11U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x12U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x11U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x12U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x13U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x12U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x13U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x14U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x13U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x14U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x15U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x14U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x15U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x16U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x15U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x16U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x17U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x16U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x17U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x18U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x17U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x18U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x19U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x18U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x19U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x1aU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x19U) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1aU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x1bU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x1aU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1bU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x1cU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x1bU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1cU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x1dU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x1cU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1dU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x1eU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x1dU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1eU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x1fU) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x1eU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
        __Vtemp_h643f1f89__0[0x1fU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->__PVT__victim) 
                                                   << 0xaU)))
                                         ? 0U : (__Vtemp_h2b62cddf__0[
                                                 ((IData)(0x20U) 
                                                  + 
                                                  (0x60U 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__victim) 
                                                      << 0xaU))))) 
                                       | (__Vtemp_h2b62cddf__0[
                                          ((IData)(0x1fU) 
                                           + (0x60U 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->__PVT__victim) 
                                                 << 0xaU))));
    }
    if (vlSelf->__PVT__is_alloc_reg) {
        vlSelf->__PVT__read[0U] = vlSelf->__PVT___GEN_5[0U];
        vlSelf->__PVT__read[1U] = vlSelf->__PVT___GEN_5[1U];
        vlSelf->__PVT__read[2U] = vlSelf->__PVT___GEN_5[2U];
        vlSelf->__PVT__read[3U] = vlSelf->__PVT___GEN_5[3U];
        vlSelf->__PVT__read[4U] = vlSelf->__PVT___GEN_5[4U];
        vlSelf->__PVT__read[5U] = vlSelf->__PVT___GEN_5[5U];
        vlSelf->__PVT__read[6U] = vlSelf->__PVT___GEN_5[6U];
        vlSelf->__PVT__read[7U] = vlSelf->__PVT___GEN_5[7U];
        vlSelf->__PVT__read[8U] = vlSelf->__PVT___GEN_5[8U];
        vlSelf->__PVT__read[9U] = vlSelf->__PVT___GEN_5[9U];
        vlSelf->__PVT__read[0xaU] = vlSelf->__PVT___GEN_5[0xaU];
        vlSelf->__PVT__read[0xbU] = vlSelf->__PVT___GEN_5[0xbU];
        vlSelf->__PVT__read[0xcU] = vlSelf->__PVT___GEN_5[0xcU];
        vlSelf->__PVT__read[0xdU] = vlSelf->__PVT___GEN_5[0xdU];
        vlSelf->__PVT__read[0xeU] = vlSelf->__PVT___GEN_5[0xeU];
        vlSelf->__PVT__read[0xfU] = vlSelf->__PVT___GEN_5[0xfU];
        vlSelf->__PVT__read[0x10U] = vlSelf->__PVT___GEN_5[0x10U];
        vlSelf->__PVT__read[0x11U] = vlSelf->__PVT___GEN_5[0x11U];
        vlSelf->__PVT__read[0x12U] = vlSelf->__PVT___GEN_5[0x12U];
        vlSelf->__PVT__read[0x13U] = vlSelf->__PVT___GEN_5[0x13U];
        vlSelf->__PVT__read[0x14U] = vlSelf->__PVT___GEN_5[0x14U];
        vlSelf->__PVT__read[0x15U] = vlSelf->__PVT___GEN_5[0x15U];
        vlSelf->__PVT__read[0x16U] = vlSelf->__PVT___GEN_5[0x16U];
        vlSelf->__PVT__read[0x17U] = vlSelf->__PVT___GEN_5[0x17U];
        vlSelf->__PVT__read[0x18U] = vlSelf->__PVT___GEN_5[0x18U];
        vlSelf->__PVT__read[0x19U] = vlSelf->__PVT___GEN_5[0x19U];
        vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT___GEN_5[0x1aU];
        vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT___GEN_5[0x1bU];
        vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT___GEN_5[0x1cU];
        vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT___GEN_5[0x1dU];
        vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT___GEN_5[0x1eU];
        vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT___GEN_5[0x1fU];
    } else if (vlSelf->__PVT__hit_reg) {
        if (vlSelf->__PVT__hit0_reg) {
            vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata0[0U];
            vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata0[1U];
            vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata0[2U];
            vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata0[3U];
            vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata0[4U];
            vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata0[5U];
            vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata0[6U];
            vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata0[7U];
            vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata0[8U];
            vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata0[9U];
            vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata0[0xaU];
            vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata0[0xbU];
            vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata0[0xcU];
            vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata0[0xdU];
            vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata0[0xeU];
            vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata0[0xfU];
            vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata0[0x10U];
            vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata0[0x11U];
            vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata0[0x12U];
            vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata0[0x13U];
            vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata0[0x14U];
            vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata0[0x15U];
            vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata0[0x16U];
            vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata0[0x17U];
            vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata0[0x18U];
            vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata0[0x19U];
            vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata0[0x1aU];
            vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata0[0x1bU];
            vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata0[0x1cU];
            vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata0[0x1dU];
            vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata0[0x1eU];
            vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata0[0x1fU];
        } else if (vlSelf->__PVT__hit1_reg) {
            vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata1[0U];
            vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata1[1U];
            vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata1[2U];
            vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata1[3U];
            vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata1[4U];
            vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata1[5U];
            vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata1[6U];
            vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata1[7U];
            vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata1[8U];
            vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata1[9U];
            vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata1[0xaU];
            vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata1[0xbU];
            vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata1[0xcU];
            vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata1[0xdU];
            vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata1[0xeU];
            vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata1[0xfU];
            vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata1[0x10U];
            vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata1[0x11U];
            vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata1[0x12U];
            vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata1[0x13U];
            vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata1[0x14U];
            vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata1[0x15U];
            vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata1[0x16U];
            vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata1[0x17U];
            vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata1[0x18U];
            vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata1[0x19U];
            vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata1[0x1aU];
            vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata1[0x1bU];
            vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata1[0x1cU];
            vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata1[0x1dU];
            vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata1[0x1eU];
            vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata1[0x1fU];
        } else if (vlSelf->__PVT__hit2_reg) {
            vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata2[0U];
            vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata2[1U];
            vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata2[2U];
            vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata2[3U];
            vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata2[4U];
            vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata2[5U];
            vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata2[6U];
            vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata2[7U];
            vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata2[8U];
            vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata2[9U];
            vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata2[0xaU];
            vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata2[0xbU];
            vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata2[0xcU];
            vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata2[0xdU];
            vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata2[0xeU];
            vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata2[0xfU];
            vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata2[0x10U];
            vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata2[0x11U];
            vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata2[0x12U];
            vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata2[0x13U];
            vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata2[0x14U];
            vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata2[0x15U];
            vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata2[0x16U];
            vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata2[0x17U];
            vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata2[0x18U];
            vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata2[0x19U];
            vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata2[0x1aU];
            vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata2[0x1bU];
            vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata2[0x1cU];
            vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata2[0x1dU];
            vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata2[0x1eU];
            vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata2[0x1fU];
        } else if (vlSelf->__PVT__hit3_reg) {
            vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata3[0U];
            vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata3[1U];
            vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata3[2U];
            vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata3[3U];
            vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata3[4U];
            vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata3[5U];
            vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata3[6U];
            vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata3[7U];
            vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata3[8U];
            vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata3[9U];
            vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata3[0xaU];
            vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata3[0xbU];
            vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata3[0xcU];
            vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata3[0xdU];
            vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata3[0xeU];
            vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata3[0xfU];
            vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata3[0x10U];
            vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata3[0x11U];
            vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata3[0x12U];
            vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata3[0x13U];
            vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata3[0x14U];
            vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata3[0x15U];
            vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata3[0x16U];
            vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata3[0x17U];
            vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata3[0x18U];
            vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata3[0x19U];
            vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata3[0x1aU];
            vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata3[0x1bU];
            vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata3[0x1cU];
            vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata3[0x1dU];
            vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata3[0x1eU];
            vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata3[0x1fU];
        } else {
            vlSelf->__PVT__read[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->__PVT__read[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->__PVT__read[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->__PVT__read[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->__PVT__read[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->__PVT__read[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->__PVT__read[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->__PVT__read[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->__PVT__read[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->__PVT__read[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->__PVT__read[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->__PVT__read[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->__PVT__read[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->__PVT__read[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->__PVT__read[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->__PVT__read[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->__PVT__read[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->__PVT__read[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->__PVT__read[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->__PVT__read[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->__PVT__read[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->__PVT__read[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->__PVT__read[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->__PVT__read[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->__PVT__read[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->__PVT__read[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->__PVT__read[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->__PVT__read[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->__PVT__read[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->__PVT__read[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->__PVT__read[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->__PVT__read[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
    } else {
        vlSelf->__PVT__read[0U] = __Vtemp_h643f1f89__0[0U];
        vlSelf->__PVT__read[1U] = __Vtemp_h643f1f89__0[1U];
        vlSelf->__PVT__read[2U] = __Vtemp_h643f1f89__0[2U];
        vlSelf->__PVT__read[3U] = __Vtemp_h643f1f89__0[3U];
        vlSelf->__PVT__read[4U] = __Vtemp_h643f1f89__0[4U];
        vlSelf->__PVT__read[5U] = __Vtemp_h643f1f89__0[5U];
        vlSelf->__PVT__read[6U] = __Vtemp_h643f1f89__0[6U];
        vlSelf->__PVT__read[7U] = __Vtemp_h643f1f89__0[7U];
        vlSelf->__PVT__read[8U] = __Vtemp_h643f1f89__0[8U];
        vlSelf->__PVT__read[9U] = __Vtemp_h643f1f89__0[9U];
        vlSelf->__PVT__read[0xaU] = __Vtemp_h643f1f89__0[0xaU];
        vlSelf->__PVT__read[0xbU] = __Vtemp_h643f1f89__0[0xbU];
        vlSelf->__PVT__read[0xcU] = __Vtemp_h643f1f89__0[0xcU];
        vlSelf->__PVT__read[0xdU] = __Vtemp_h643f1f89__0[0xdU];
        vlSelf->__PVT__read[0xeU] = __Vtemp_h643f1f89__0[0xeU];
        vlSelf->__PVT__read[0xfU] = __Vtemp_h643f1f89__0[0xfU];
        vlSelf->__PVT__read[0x10U] = __Vtemp_h643f1f89__0[0x10U];
        vlSelf->__PVT__read[0x11U] = __Vtemp_h643f1f89__0[0x11U];
        vlSelf->__PVT__read[0x12U] = __Vtemp_h643f1f89__0[0x12U];
        vlSelf->__PVT__read[0x13U] = __Vtemp_h643f1f89__0[0x13U];
        vlSelf->__PVT__read[0x14U] = __Vtemp_h643f1f89__0[0x14U];
        vlSelf->__PVT__read[0x15U] = __Vtemp_h643f1f89__0[0x15U];
        vlSelf->__PVT__read[0x16U] = __Vtemp_h643f1f89__0[0x16U];
        vlSelf->__PVT__read[0x17U] = __Vtemp_h643f1f89__0[0x17U];
        vlSelf->__PVT__read[0x18U] = __Vtemp_h643f1f89__0[0x18U];
        vlSelf->__PVT__read[0x19U] = __Vtemp_h643f1f89__0[0x19U];
        vlSelf->__PVT__read[0x1aU] = __Vtemp_h643f1f89__0[0x1aU];
        vlSelf->__PVT__read[0x1bU] = __Vtemp_h643f1f89__0[0x1bU];
        vlSelf->__PVT__read[0x1cU] = __Vtemp_h643f1f89__0[0x1cU];
        vlSelf->__PVT__read[0x1dU] = __Vtemp_h643f1f89__0[0x1dU];
        vlSelf->__PVT__read[0x1eU] = __Vtemp_h643f1f89__0[0x1eU];
        vlSelf->__PVT__read[0x1fU] = __Vtemp_h643f1f89__0[0x1fU];
    }
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3831__PROF__Soc__l484(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3831__PROF__Soc__l484\n"); );
    // Body
    vlSelf->__VdfgTmp_h01e7ff2a__0 = vlSelf->__PVT__replace_ext__DOT__Memory
        [(7U & (vlSelf->__PVT__addr_reg >> 7U))];
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3832__PROF__Soc__l3925(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3832__PROF__Soc__l3925\n"); );
    // Body
    vlSelf->__VdfgTmp_h41c8fb80__0 = ((0x17U >= (0x1fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelf->__PVT__victim))))
                                       ? (0x1fU & (
                                                   ((0xfc0000U 
                                                     & (((IData)(3U) 
                                                         + 
                                                         (0x1cU 
                                                          & (vlSelf->__PVT__addr_reg 
                                                             >> 5U))) 
                                                        << 0x12U)) 
                                                    | ((0x3f000U 
                                                        & (((IData)(2U) 
                                                            + 
                                                            (0x1cU 
                                                             & (vlSelf->__PVT__addr_reg 
                                                                >> 5U))) 
                                                           << 0xcU)) 
                                                       | ((0xfc0U 
                                                           & (((IData)(1U) 
                                                               + 
                                                               (0x1cU 
                                                                & (vlSelf->__PVT__addr_reg 
                                                                   >> 5U))) 
                                                              << 6U)) 
                                                          | (0x1cU 
                                                             & (vlSelf->__PVT__addr_reg 
                                                                >> 5U))))) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * (IData)(vlSelf->__PVT__victim)))))
                                       : 0U);
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3833__PROF__Soc__l3639(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3833__PROF__Soc__l3639\n"); );
    // Body
    vlSelf->__PVT__dirty0 = (1U & ((vlSelf->__PVT__valid 
                                    >> (0x1cU & (vlSelf->__PVT__addr_reg 
                                                 >> 5U))) 
                                   & (vlSelf->__PVT__dirty 
                                      >> (0x1cU & (vlSelf->__PVT__addr_reg 
                                                   >> 5U)))));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3834__PROF__Soc__l3643(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3834__PROF__Soc__l3643\n"); );
    // Body
    vlSelf->__PVT__dirty1 = (1U & (((0x1fU >= (0x3fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x1cU 
                                                   & (vlSelf->__PVT__addr_reg 
                                                      >> 5U)))))
                                     ? (vlSelf->__PVT__valid 
                                        >> (0x3fU & 
                                            ((IData)(1U) 
                                             + (0x1cU 
                                                & (vlSelf->__PVT__addr_reg 
                                                   >> 5U)))))
                                     : 0U) & ((0x1fU 
                                               >= (0x3fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1cU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 5U)))))
                                               ? (vlSelf->__PVT__dirty 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1cU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 5U)))))
                                               : 0U)));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3835__PROF__Soc__l3647(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3835__PROF__Soc__l3647\n"); );
    // Body
    vlSelf->__PVT__dirty2 = (1U & (((0x1fU >= (0x3fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x1cU 
                                                   & (vlSelf->__PVT__addr_reg 
                                                      >> 5U)))))
                                     ? (vlSelf->__PVT__valid 
                                        >> (0x3fU & 
                                            ((IData)(2U) 
                                             + (0x1cU 
                                                & (vlSelf->__PVT__addr_reg 
                                                   >> 5U)))))
                                     : 0U) & ((0x1fU 
                                               >= (0x3fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x1cU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 5U)))))
                                               ? (vlSelf->__PVT__dirty 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x1cU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 5U)))))
                                               : 0U)));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3836__PROF__Soc__l3651(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3836__PROF__Soc__l3651\n"); );
    // Body
    vlSelf->__PVT__dirty3 = (1U & (((0x1fU >= (0x3fU 
                                               & ((IData)(3U) 
                                                  + 
                                                  (0x1cU 
                                                   & (vlSelf->__PVT__addr_reg 
                                                      >> 5U)))))
                                     ? (vlSelf->__PVT__valid 
                                        >> (0x3fU & 
                                            ((IData)(3U) 
                                             + (0x1cU 
                                                & (vlSelf->__PVT__addr_reg 
                                                   >> 5U)))))
                                     : 0U) & ((0x1fU 
                                               >= (0x3fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x1cU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 5U)))))
                                               ? (vlSelf->__PVT__dirty 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x1cU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 5U)))))
                                               : 0U)));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3837__PROF__Soc__l3369(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3837__PROF__Soc__l3369\n"); );
    // Body
    vlSelf->__PVT__is_war = (5U == (IData)(vlSelf->__PVT__state));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3838__PROF__Soc__l3367(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3838__PROF__Soc__l3367\n"); );
    // Body
    vlSelf->__PVT__is_alloc = ((4U == (IData)(vlSelf->__PVT__state)) 
                               & (0xfU == (IData)(vlSelf->__PVT__r_count)));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3839__PROF__Soc__l8623(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3839__PROF__Soc__l8623\n"); );
    // Body
    vlSelf->io_cpu_resp_valid = (((IData)(vlSelf->__PVT__hit_reg) 
                                  & (0U == (IData)(vlSelf->__PVT__state))) 
                                 | (((~ (IData)((0U 
                                                 != (IData)(vlSelf->__PVT__cpu_mask)))) 
                                     & (IData)(vlSelf->__PVT__is_alloc_reg)) 
                                    | ((0U == (IData)(vlSelf->__PVT__state)) 
                                       & (0U != (IData)(vlSelf->__PVT__cpu_mask)))));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3840__PROF__Soc__l4062(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3840__PROF__Soc__l4062\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf1bb6a44__0;
    // Body
    __Vtemp_hf1bb6a44__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fffffU 
                                                          & ((IData)(vlSelf->__PVT__dirty1)
                                                              ? vlSelf->__PVT__rtag1_buf
                                                              : 
                                                             (vlSelf->__PVT__addr_reg 
                                                              >> 0xaU))))) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          (0x3fffffU 
                                                           & ((IData)(vlSelf->__PVT__dirty0)
                                                               ? vlSelf->__PVT__rtag0_buf
                                                               : 
                                                              (vlSelf->__PVT__addr_reg 
                                                               >> 0xaU)))))));
    __Vtemp_hf1bb6a44__0[1U] = ((((IData)(vlSelf->__PVT__dirty2)
                                   ? vlSelf->__PVT__rtag2_buf
                                   : (vlSelf->__PVT__addr_reg 
                                      >> 0xaU)) << 0xcU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x3fffffU 
                                                              & ((IData)(vlSelf->__PVT__dirty1)
                                                                  ? vlSelf->__PVT__rtag1_buf
                                                                  : 
                                                                 (vlSelf->__PVT__addr_reg 
                                                                  >> 0xaU))))) 
                                             << 0x16U) 
                                            | (QData)((IData)(
                                                              (0x3fffffU 
                                                               & ((IData)(vlSelf->__PVT__dirty0)
                                                                   ? vlSelf->__PVT__rtag0_buf
                                                                   : 
                                                                  (vlSelf->__PVT__addr_reg 
                                                                   >> 0xaU)))))) 
                                           >> 0x20U)));
    __Vtemp_hf1bb6a44__0[2U] = ((0xfffffcU & (((IData)(vlSelf->__PVT__dirty3)
                                                ? vlSelf->__PVT__rtag3_buf
                                                : (vlSelf->__PVT__addr_reg 
                                                   >> 0xaU)) 
                                              << 2U)) 
                                | (3U & (((IData)(vlSelf->__PVT__dirty2)
                                           ? vlSelf->__PVT__rtag2_buf
                                           : (vlSelf->__PVT__addr_reg 
                                              >> 0xaU)) 
                                         >> 0x14U)));
    vlSelf->__PVT___io_axi_req_bits_addr_T_25 = (((
                                                   (0x57U 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(0x16U) 
                                                        * (IData)(vlSelf->__PVT__victim))))
                                                    ? 
                                                   (0x3fffffU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x16U) 
                                                             * (IData)(vlSelf->__PVT__victim))))
                                                         ? 0U
                                                         : 
                                                        (__Vtemp_hf1bb6a44__0[
                                                         (((IData)(0x15U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x16U) 
                                                               * (IData)(vlSelf->__PVT__victim)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x16U) 
                                                              * (IData)(vlSelf->__PVT__victim)))))) 
                                                       | (__Vtemp_hf1bb6a44__0[
                                                          (3U 
                                                           & (((IData)(0x16U) 
                                                               * (IData)(vlSelf->__PVT__victim)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x16U) 
                                                              * (IData)(vlSelf->__PVT__victim))))))
                                                    : 0U) 
                                                  << 0xaU) 
                                                 | (0x380U 
                                                    & vlSelf->__PVT__addr_reg));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3841__PROF__Soc__l4059(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3841__PROF__Soc__l4059\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = ((8U & ((~ (IData)(vlSelf->__PVT__dirty3)) 
                                     << 3U)) | (7U 
                                                & (~ 
                                                   (((IData)(vlSelf->__PVT__dirty2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__PVT__dirty1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT__dirty0))))));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3842__PROF__Soc__l3652(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3842__PROF__Soc__l3652\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hfe7561f7__0;
    VlWide<5>/*159:0*/ __Vtemp_h33bc51d6__0;
    // Body
    __Vtemp_hfe7561f7__0[0U] = vlSelf->__PVT__cpu_mask;
    __Vtemp_hfe7561f7__0[1U] = 0U;
    __Vtemp_hfe7561f7__0[2U] = 0U;
    __Vtemp_hfe7561f7__0[3U] = 0U;
    __Vtemp_hfe7561f7__0[4U] = 0U;
    VL_SHIFTL_WWI(135,135,7, __Vtemp_h33bc51d6__0, __Vtemp_hfe7561f7__0, 
                  (0x78U & vlSelf->__PVT__addr_reg));
    if ((0U == (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__wmask[0U] = 0U;
        vlSelf->__PVT__wmask[1U] = 0U;
        vlSelf->__PVT__wmask[2U] = 0U;
        vlSelf->__PVT__wmask[3U] = 0U;
        vlSelf->__PVT__wmask[4U] = 0U;
    } else if (vlSelf->__PVT__is_alloc) {
        vlSelf->__PVT__wmask[0U] = 0xffffffffU;
        vlSelf->__PVT__wmask[1U] = 0xffffffffU;
        vlSelf->__PVT__wmask[2U] = 0xffffffffU;
        vlSelf->__PVT__wmask[3U] = 0xffffffffU;
        vlSelf->__PVT__wmask[4U] = 0xffU;
    } else {
        vlSelf->__PVT__wmask[0U] = __Vtemp_h33bc51d6__0[0U];
        vlSelf->__PVT__wmask[1U] = __Vtemp_h33bc51d6__0[1U];
        vlSelf->__PVT__wmask[2U] = __Vtemp_h33bc51d6__0[2U];
        vlSelf->__PVT__wmask[3U] = __Vtemp_h33bc51d6__0[3U];
        vlSelf->__PVT__wmask[4U] = (0x7fU & __Vtemp_h33bc51d6__0[4U]);
    }
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3843__PROF__Soc__l3388(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3843__PROF__Soc__l3388\n"); );
    // Body
    vlSelf->__PVT__wen = ((IData)(vlSelf->__PVT__is_alloc) 
                          | ((IData)(vlSelf->__PVT__is_alloc_reg) 
                             & (0U != (IData)(vlSelf->__PVT__cpu_mask))));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__15__PROF__Soc__l489(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__15__PROF__Soc__l489\n"); );
    // Body
    vlSelf->__PVT___replace_ext_R8_data = ((IData)(vlSelf->__PVT___T)
                                            ? (IData)(vlSelf->__VdfgTmp_h21147b65__0)
                                            : 0U);
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__20__PROF__Soc__l8633(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__20__PROF__Soc__l8633\n"); );
    // Body
    vlSelf->io_fccache_hit = ((IData)(vlSelf->__PVT__hit0) 
                              | ((IData)(vlSelf->__PVT__hit1) 
                                 | ((IData)(vlSelf->__PVT__hit2) 
                                    | (IData)(vlSelf->__PVT__hit3))));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__21__PROF__Soc__l3670(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__21__PROF__Soc__l3670\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((IData)(vlSelf->__PVT__wen) 
                             & (IData)(vlSelf->io_fccache_hit));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__22__PROF__Soc__l481(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__22__PROF__Soc__l481\n"); );
    // Body
    vlSelf->__VdfgTmp_hd2781bae__0 = ((IData)(vlSelf->io_fccache_hit) 
                                      & ((IData)(vlSelf->__VdfgTmp_h21147b65__0) 
                                         >> 1U));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__23__PROF__Soc__l481(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__23__PROF__Soc__l481\n"); );
    // Body
    vlSelf->__VdfgTmp_hd27cec45__0 = ((IData)(vlSelf->io_fccache_hit) 
                                      & (IData)(vlSelf->__VdfgTmp_h21147b65__0));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__24__PROF__Soc__l3921(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__24__PROF__Soc__l3921\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = (1U & ((~ (IData)(vlSelf->__PVT__wen)) 
                                    | ((IData)(vlSelf->io_fccache_hit) 
                                       | (5U == (IData)(vlSelf->__PVT__state)))));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__25__PROF__Soc__l3387(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__25__PROF__Soc__l3387\n"); );
    // Body
    vlSelf->__PVT___ren_T_1 = ((0U == (IData)(vlSelf->__PVT__state)) 
                               & (IData)(vlSelf->io_fccache_hit));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__27__PROF__Soc__l3800(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__27__PROF__Soc__l3800\n"); );
    // Body
    vlSelf->__VdfgTmp_ha65677bd__0 = ((~ (IData)(vlSelf->io_fccache_hit)) 
                                      & (IData)(vlSelf->__PVT__wen));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__28__PROF__Soc__l3389(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__28__PROF__Soc__l3389\n"); );
    // Body
    vlSelf->__PVT__ren = ((~ (IData)(vlSelf->__PVT__wen)) 
                          & ((IData)(vlSelf->__PVT___ren_T_1) 
                             | (1U == (IData)(vlSelf->__PVT__state))));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__29__PROF__Soc__l3800(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__29__PROF__Soc__l3800\n"); );
    // Body
    vlSelf->__PVT___GEN_0 = ((IData)(vlSelf->__VdfgTmp_ha65677bd__0) 
                             & (5U == (IData)(vlSelf->__PVT__state)));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__30__PROF__Soc__l3922(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__30__PROF__Soc__l3922\n"); );
    // Body
    vlSelf->__PVT___GEN = ((5U != (IData)(vlSelf->__PVT__state)) 
                           & (IData)(vlSelf->__VdfgTmp_ha65677bd__0));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__31__PROF__Soc__l484(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__31__PROF__Soc__l484\n"); );
    // Body
    vlSelf->__VdfgTmp_h6b3aa9a8__0 = ((IData)(vlSelf->__PVT___GEN) 
                                      & (IData)(vlSelf->__VdfgTmp_h01e7ff2a__0));
}

VL_INLINE_OPT void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__32__PROF__Soc__l484(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__32__PROF__Soc__l484\n"); );
    // Body
    vlSelf->__VdfgTmp_h6b2df72b__0 = ((IData)(vlSelf->__PVT___GEN) 
                                      & ((IData)(vlSelf->__VdfgTmp_h01e7ff2a__0) 
                                         >> 1U));
}

VL_INLINE_OPT void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__3840__PROF__Soc__l8624(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__3840__PROF__Soc__l8624\n"); );
    // Body
    vlSelf->io_cpu_resp_bits_data = ((IData)(vlSelf->__PVT__is_alloc_reg)
                                      ? (((QData)((IData)(
                                                          vlSelf->__PVT___GEN_5[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x3c0U 
                                                             & (vlSelf->__PVT__addr_reg 
                                                                << 3U))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT___GEN_5[
                                                           (0x1eU 
                                                            & (vlSelf->__PVT__addr_reg 
                                                               >> 2U))])))
                                      : (((QData)((IData)(
                                                          vlSelf->__PVT__read[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x3c0U 
                                                             & (vlSelf->__PVT__addr_reg 
                                                                << 3U))) 
                                                           >> 5U)])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__read[
                                                           (0x1eU 
                                                            & (vlSelf->__PVT__addr_reg 
                                                               >> 2U))]))));
}
