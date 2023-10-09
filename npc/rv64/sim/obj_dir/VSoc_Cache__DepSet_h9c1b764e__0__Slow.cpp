// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc_Cache.h"
#include "VSoc__Syms.h"

VL_ATTR_COLD void VSoc_Cache___stl_sequent__TOP__Soc__DOT__core__DOT__Icache__0(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___stl_sequent__TOP__Soc__DOT__core__DOT__Icache__0\n"); );
    // Init
    VlWide<5>/*134:0*/ __PVT___wmask_T_2;
    VL_ZERO_W(135, __PVT___wmask_T_2);
    VlWide<5>/*159:0*/ __Vtemp_hfe7561f7__0;
    VlWide<5>/*159:0*/ __Vtemp_h33bc51d6__0;
    VlWide<3>/*95:0*/ __Vtemp_h83c7e9ab__0;
    VlWide<3>/*95:0*/ __Vtemp_h26349e5a__0;
    // Body
    vlSelf->__PVT__is_read = (1U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT__is_write = (2U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_337 = (3U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_339 = (4U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_340 = (5U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___GEN_14 = (1U & ((4U != (IData)(vlSelf->__PVT__state)) 
                                    | ((IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                       >> 2U)));
    vlSelf->__PVT___replace_wire_T = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0xeU 
                                                      & (vlSelf->__PVT__addr_reg 
                                                         >> 6U))))));
    __Vtemp_hfe7561f7__0[0U] = vlSelf->__PVT__cpu_mask;
    __Vtemp_hfe7561f7__0[1U] = 0U;
    __Vtemp_hfe7561f7__0[2U] = 0U;
    __Vtemp_hfe7561f7__0[3U] = 0U;
    __Vtemp_hfe7561f7__0[4U] = 0U;
    VL_SHIFTL_WWI(135,135,7, __Vtemp_h33bc51d6__0, __Vtemp_hfe7561f7__0, 
                  (0x78U & vlSelf->__PVT__addr_reg));
    __PVT___wmask_T_2[0U] = __Vtemp_h33bc51d6__0[0U];
    __PVT___wmask_T_2[1U] = __Vtemp_h33bc51d6__0[1U];
    __PVT___wmask_T_2[2U] = __Vtemp_h33bc51d6__0[2U];
    __PVT___wmask_T_2[3U] = __Vtemp_h33bc51d6__0[3U];
    __PVT___wmask_T_2[4U] = (0x7fU & __Vtemp_h33bc51d6__0[4U]);
    vlSelf->__PVT__is_alloc = ((5U == (IData)(vlSelf->__PVT__state)) 
                               & (0xfU == (IData)(vlSelf->__PVT__r_count)));
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
    vlSelf->__PVT___TagArray_ext_R1_data = ((IData)(vlSelf->__PVT__TagArray_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__TagArray_ext__DOT__Memory
                                            [vlSelf->__PVT__TagArray_ext__DOT___GEN_2]
                                             : 0U);
    vlSelf->__PVT___dirty1_T = (0xffffU & ((IData)(vlSelf->__PVT__valid) 
                                           >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xeU 
                                                   & (vlSelf->__PVT__addr_reg 
                                                      >> 6U))))));
    vlSelf->__PVT___dirty0_T = (0xffffU & ((IData)(vlSelf->__PVT__valid) 
                                           >> (0xeU 
                                               & (vlSelf->__PVT__addr_reg 
                                                  >> 6U))));
    __Vtemp_h83c7e9ab__0[0U] = (IData)((((QData)((IData)(
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
    __Vtemp_h83c7e9ab__0[1U] = (IData)(((((QData)((IData)(
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
    vlSelf->__PVT__rdata0[0U] = __Vtemp_h83c7e9ab__0[0U];
    vlSelf->__PVT__rdata0[1U] = __Vtemp_h83c7e9ab__0[1U];
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
    __Vtemp_h26349e5a__0[0U] = (IData)((((QData)((IData)(
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
    __Vtemp_h26349e5a__0[1U] = (IData)(((((QData)((IData)(
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
    vlSelf->__PVT__rdata1[0U] = __Vtemp_h26349e5a__0[0U];
    vlSelf->__PVT__rdata1[1U] = __Vtemp_h26349e5a__0[1U];
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
    vlSelf->__PVT___TagArray_ext_R0_data = ((IData)(vlSelf->__PVT__TagArray_ext__DOT___GEN)
                                             ? vlSelf->__PVT__TagArray_ext__DOT__Memory
                                            [vlSelf->__PVT__TagArray_ext__DOT___GEN_0]
                                             : 0U);
    vlSelf->__PVT___T_165 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 1U)));
    vlSelf->__PVT___T_166 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 2U)));
    vlSelf->__PVT___T_167 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 3U)));
    vlSelf->__PVT___T_168 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 4U)));
    vlSelf->__PVT___T_169 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 5U)));
    vlSelf->__PVT___T_170 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 6U)));
    vlSelf->__PVT___T_171 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 7U)));
    vlSelf->__PVT___T_174 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 8U)));
    vlSelf->__PVT___T_175 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 9U)));
    vlSelf->__PVT___T_176 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_177 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_178 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_179 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_180 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_181 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_184 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_185 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_186 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_187 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_188 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_189 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_190 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_191 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_194 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_195 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_196 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_197 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_198 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_199 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_200 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_201 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[0U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_204 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | __PVT___wmask_T_2[1U]));
    vlSelf->__PVT___T_205 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 1U)));
    vlSelf->__PVT___T_206 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 2U)));
    vlSelf->__PVT___T_207 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 3U)));
    vlSelf->__PVT___T_208 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 4U)));
    vlSelf->__PVT___T_209 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 5U)));
    vlSelf->__PVT___T_210 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 6U)));
    vlSelf->__PVT___T_211 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 7U)));
    vlSelf->__PVT___T_214 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 8U)));
    vlSelf->__PVT___T_215 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 9U)));
    vlSelf->__PVT___T_216 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_217 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_218 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_219 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_220 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_221 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_224 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_225 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_226 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_227 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_228 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_229 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_230 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_231 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_234 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_235 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_236 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_237 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_238 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_239 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_240 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_241 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[1U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_244 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | __PVT___wmask_T_2[2U]));
    vlSelf->__PVT___T_245 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 1U)));
    vlSelf->__PVT___T_246 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 2U)));
    vlSelf->__PVT___T_247 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 3U)));
    vlSelf->__PVT___T_248 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 4U)));
    vlSelf->__PVT___T_249 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 5U)));
    vlSelf->__PVT___T_250 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 6U)));
    vlSelf->__PVT___T_251 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 7U)));
    vlSelf->__PVT___T_254 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 8U)));
    vlSelf->__PVT___T_255 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 9U)));
    vlSelf->__PVT___T_256 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_257 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_258 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_259 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_260 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_261 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_264 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_265 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_266 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_267 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_268 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_269 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_270 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_271 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_274 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_275 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_276 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_277 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_278 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_279 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_280 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_281 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[2U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_284 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | __PVT___wmask_T_2[3U]));
    vlSelf->__PVT___T_285 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 1U)));
    vlSelf->__PVT___T_286 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 2U)));
    vlSelf->__PVT___T_287 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 3U)));
    vlSelf->__PVT___T_288 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 4U)));
    vlSelf->__PVT___T_289 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 5U)));
    vlSelf->__PVT___T_290 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 6U)));
    vlSelf->__PVT___T_291 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 7U)));
    vlSelf->__PVT___T_294 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 8U)));
    vlSelf->__PVT___T_295 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 9U)));
    vlSelf->__PVT___T_296 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_297 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_298 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_299 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_300 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_301 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_304 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_305 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_306 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_307 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_308 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_309 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_310 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_311 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_314 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_315 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_316 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_317 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_318 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_319 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_320 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_321 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[3U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_164 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | ((0U >= (0x78U 
                                              & vlSelf->__PVT__addr_reg))
                                       ? ((IData)(vlSelf->__PVT__cpu_mask) 
                                          << (0x78U 
                                              & vlSelf->__PVT__addr_reg))
                                       : 0U)));
    if (vlSelf->__PVT__is_alloc) {
        vlSelf->__PVT__wdata[0U] = vlSelf->__VdfgTmp_h25305f44__0[0U];
        vlSelf->__PVT__wdata[1U] = vlSelf->__VdfgTmp_h25305f44__0[1U];
        vlSelf->__PVT__wdata[2U] = vlSelf->__VdfgTmp_h25305f44__0[2U];
        vlSelf->__PVT__wdata[3U] = vlSelf->__VdfgTmp_h25305f44__0[3U];
        vlSelf->__PVT__wdata[4U] = vlSelf->__VdfgTmp_h25305f44__0[4U];
        vlSelf->__PVT__wdata[5U] = vlSelf->__VdfgTmp_h25305f44__0[5U];
        vlSelf->__PVT__wdata[6U] = vlSelf->__VdfgTmp_h25305f44__0[6U];
        vlSelf->__PVT__wdata[7U] = vlSelf->__VdfgTmp_h25305f44__0[7U];
        vlSelf->__PVT__wdata[8U] = vlSelf->__VdfgTmp_h25305f44__0[8U];
        vlSelf->__PVT__wdata[9U] = vlSelf->__VdfgTmp_h25305f44__0[9U];
        vlSelf->__PVT__wdata[0xaU] = vlSelf->__VdfgTmp_h25305f44__0[0xaU];
        vlSelf->__PVT__wdata[0xbU] = vlSelf->__VdfgTmp_h25305f44__0[0xbU];
        vlSelf->__PVT__wdata[0xcU] = vlSelf->__VdfgTmp_h25305f44__0[0xcU];
        vlSelf->__PVT__wdata[0xdU] = vlSelf->__VdfgTmp_h25305f44__0[0xdU];
        vlSelf->__PVT__wdata[0xeU] = vlSelf->__VdfgTmp_h25305f44__0[0xeU];
        vlSelf->__PVT__wdata[0xfU] = vlSelf->__VdfgTmp_h25305f44__0[0xfU];
        vlSelf->__PVT__wdata[0x10U] = vlSelf->__VdfgTmp_h25305f44__0[0x10U];
        vlSelf->__PVT__wdata[0x11U] = vlSelf->__VdfgTmp_h25305f44__0[0x11U];
        vlSelf->__PVT__wdata[0x12U] = vlSelf->__VdfgTmp_h25305f44__0[0x12U];
        vlSelf->__PVT__wdata[0x13U] = vlSelf->__VdfgTmp_h25305f44__0[0x13U];
        vlSelf->__PVT__wdata[0x14U] = vlSelf->__VdfgTmp_h25305f44__0[0x14U];
        vlSelf->__PVT__wdata[0x15U] = vlSelf->__VdfgTmp_h25305f44__0[0x15U];
        vlSelf->__PVT__wdata[0x16U] = vlSelf->__VdfgTmp_h25305f44__0[0x16U];
        vlSelf->__PVT__wdata[0x17U] = vlSelf->__VdfgTmp_h25305f44__0[0x17U];
        vlSelf->__PVT__wdata[0x18U] = vlSelf->__VdfgTmp_h25305f44__0[0x18U];
        vlSelf->__PVT__wdata[0x19U] = vlSelf->__VdfgTmp_h25305f44__0[0x19U];
        vlSelf->__PVT__wdata[0x1aU] = vlSelf->__VdfgTmp_h25305f44__0[0x1aU];
        vlSelf->__PVT__wdata[0x1bU] = vlSelf->__VdfgTmp_h25305f44__0[0x1bU];
        vlSelf->__PVT__wdata[0x1cU] = vlSelf->__VdfgTmp_h25305f44__0[0x1cU];
        vlSelf->__PVT__wdata[0x1dU] = vlSelf->__VdfgTmp_h25305f44__0[0x1dU];
        vlSelf->__PVT__wdata[0x1eU] = (IData)(vlSymsp->TOP.Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data);
        vlSelf->__PVT__wdata[0x1fU] = (IData)((vlSymsp->TOP.Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                                               >> 0x20U));
    } else {
        vlSelf->__PVT__wdata[0U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[1U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[2U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[3U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[4U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[5U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[6U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[7U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[8U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[9U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[0xaU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0xbU] = (IData)((vlSelf->__PVT__cpu_data 
                                              >> 0x20U));
        vlSelf->__PVT__wdata[0xcU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0xdU] = (IData)((vlSelf->__PVT__cpu_data 
                                              >> 0x20U));
        vlSelf->__PVT__wdata[0xeU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0xfU] = (IData)((vlSelf->__PVT__cpu_data 
                                              >> 0x20U));
        vlSelf->__PVT__wdata[0x10U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x11U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x12U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x13U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x14U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x15U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x16U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x17U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x18U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x19U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x1aU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x1bU] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x1cU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x1dU] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x1eU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x1fU] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
    }
    vlSelf->__PVT__dirty0 = (1U & ((IData)(vlSelf->__PVT___dirty0_T) 
                                   & ((IData)(vlSelf->__PVT__dirty) 
                                      >> (0xeU & (vlSelf->__PVT__addr_reg 
                                                  >> 6U)))));
    vlSelf->__PVT___hit0_T_2 = (vlSelf->__PVT___TagArray_ext_R0_data 
                                == (vlSelf->__PVT__addr_reg 
                                    >> 0xaU));
    vlSelf->__PVT___T_329 = (1U & (((~ (IData)(vlSelf->__PVT___replace_wire_T)) 
                                    & (IData)(vlSelf->__PVT__dirty0)) 
                                   | (0xffffU & ((IData)(vlSelf->__PVT___replace_wire_T) 
                                                 & ((IData)(vlSelf->__PVT___dirty1_T) 
                                                    & ((IData)(vlSelf->__PVT__dirty) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0xeU 
                                                            & (vlSelf->__PVT__addr_reg 
                                                               >> 6U))))))))));
    if (vlSelf->__PVT__is_alloc_reg) {
        vlSelf->__PVT__read[0U] = vlSelf->__VdfgTmp_h25305f44__0[0U];
        vlSelf->__PVT__read[1U] = vlSelf->__VdfgTmp_h25305f44__0[1U];
        vlSelf->__PVT__read[2U] = vlSelf->__VdfgTmp_h25305f44__0[2U];
        vlSelf->__PVT__read[3U] = vlSelf->__VdfgTmp_h25305f44__0[3U];
        vlSelf->__PVT__read[4U] = vlSelf->__VdfgTmp_h25305f44__0[4U];
        vlSelf->__PVT__read[5U] = vlSelf->__VdfgTmp_h25305f44__0[5U];
        vlSelf->__PVT__read[6U] = vlSelf->__VdfgTmp_h25305f44__0[6U];
        vlSelf->__PVT__read[7U] = vlSelf->__VdfgTmp_h25305f44__0[7U];
        vlSelf->__PVT__read[8U] = vlSelf->__VdfgTmp_h25305f44__0[8U];
        vlSelf->__PVT__read[9U] = vlSelf->__VdfgTmp_h25305f44__0[9U];
        vlSelf->__PVT__read[0xaU] = vlSelf->__VdfgTmp_h25305f44__0[0xaU];
        vlSelf->__PVT__read[0xbU] = vlSelf->__VdfgTmp_h25305f44__0[0xbU];
        vlSelf->__PVT__read[0xcU] = vlSelf->__VdfgTmp_h25305f44__0[0xcU];
        vlSelf->__PVT__read[0xdU] = vlSelf->__VdfgTmp_h25305f44__0[0xdU];
        vlSelf->__PVT__read[0xeU] = vlSelf->__VdfgTmp_h25305f44__0[0xeU];
        vlSelf->__PVT__read[0xfU] = vlSelf->__VdfgTmp_h25305f44__0[0xfU];
        vlSelf->__PVT__read[0x10U] = vlSelf->__VdfgTmp_h25305f44__0[0x10U];
        vlSelf->__PVT__read[0x11U] = vlSelf->__VdfgTmp_h25305f44__0[0x11U];
        vlSelf->__PVT__read[0x12U] = vlSelf->__VdfgTmp_h25305f44__0[0x12U];
        vlSelf->__PVT__read[0x13U] = vlSelf->__VdfgTmp_h25305f44__0[0x13U];
        vlSelf->__PVT__read[0x14U] = vlSelf->__VdfgTmp_h25305f44__0[0x14U];
        vlSelf->__PVT__read[0x15U] = vlSelf->__VdfgTmp_h25305f44__0[0x15U];
        vlSelf->__PVT__read[0x16U] = vlSelf->__VdfgTmp_h25305f44__0[0x16U];
        vlSelf->__PVT__read[0x17U] = vlSelf->__VdfgTmp_h25305f44__0[0x17U];
        vlSelf->__PVT__read[0x18U] = vlSelf->__VdfgTmp_h25305f44__0[0x18U];
        vlSelf->__PVT__read[0x19U] = vlSelf->__VdfgTmp_h25305f44__0[0x19U];
        vlSelf->__PVT__read[0x1aU] = vlSelf->__VdfgTmp_h25305f44__0[0x1aU];
        vlSelf->__PVT__read[0x1bU] = vlSelf->__VdfgTmp_h25305f44__0[0x1bU];
        vlSelf->__PVT__read[0x1cU] = vlSelf->__VdfgTmp_h25305f44__0[0x1cU];
        vlSelf->__PVT__read[0x1dU] = vlSelf->__VdfgTmp_h25305f44__0[0x1dU];
        vlSelf->__PVT__read[0x1eU] = (IData)(vlSelf->__PVT__refill_buffer_15);
        vlSelf->__PVT__read[0x1fU] = (IData)((vlSelf->__PVT__refill_buffer_15 
                                              >> 0x20U));
    } else if (vlSelf->__PVT__ren_reg) {
        if (vlSelf->__PVT___hit0_T_2) {
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
        } else {
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
        }
    } else if (vlSelf->__PVT___hit0_T_2) {
        vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata0_buf[0U];
        vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata0_buf[1U];
        vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata0_buf[2U];
        vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata0_buf[3U];
        vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata0_buf[4U];
        vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata0_buf[5U];
        vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata0_buf[6U];
        vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata0_buf[7U];
        vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata0_buf[8U];
        vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata0_buf[9U];
        vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata0_buf[0xaU];
        vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata0_buf[0xbU];
        vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata0_buf[0xcU];
        vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata0_buf[0xdU];
        vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata0_buf[0xeU];
        vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata0_buf[0xfU];
        vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata0_buf[0x10U];
        vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata0_buf[0x11U];
        vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata0_buf[0x12U];
        vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata0_buf[0x13U];
        vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata0_buf[0x14U];
        vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata0_buf[0x15U];
        vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata0_buf[0x16U];
        vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata0_buf[0x17U];
        vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata0_buf[0x18U];
        vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata0_buf[0x19U];
        vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata0_buf[0x1aU];
        vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata0_buf[0x1bU];
        vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata0_buf[0x1cU];
        vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata0_buf[0x1dU];
        vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata0_buf[0x1eU];
        vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata0_buf[0x1fU];
    } else {
        vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata1_buf[0U];
        vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata1_buf[1U];
        vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata1_buf[2U];
        vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata1_buf[3U];
        vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata1_buf[4U];
        vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata1_buf[5U];
        vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata1_buf[6U];
        vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata1_buf[7U];
        vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata1_buf[8U];
        vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata1_buf[9U];
        vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata1_buf[0xaU];
        vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata1_buf[0xbU];
        vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata1_buf[0xcU];
        vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata1_buf[0xdU];
        vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata1_buf[0xeU];
        vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata1_buf[0xfU];
        vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata1_buf[0x10U];
        vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata1_buf[0x11U];
        vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata1_buf[0x12U];
        vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata1_buf[0x13U];
        vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata1_buf[0x14U];
        vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata1_buf[0x15U];
        vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata1_buf[0x16U];
        vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata1_buf[0x17U];
        vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata1_buf[0x18U];
        vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata1_buf[0x19U];
        vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata1_buf[0x1aU];
        vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata1_buf[0x1bU];
        vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata1_buf[0x1cU];
        vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata1_buf[0x1dU];
        vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata1_buf[0x1eU];
        vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata1_buf[0x1fU];
    }
    vlSelf->io_fccache_hit = (((IData)(vlSelf->__PVT___dirty0_T) 
                               & (IData)(vlSelf->__PVT___hit0_T_2)) 
                              | ((IData)(vlSelf->__PVT___dirty1_T) 
                                 & (vlSelf->__PVT___TagArray_ext_R1_data 
                                    == (vlSelf->__PVT__addr_reg 
                                        >> 0xaU))));
    vlSelf->__PVT___GEN_12 = ((((IData)(vlSelf->__PVT___T_329)
                                 ? ((IData)(vlSelf->__PVT__dirty0)
                                     ? vlSelf->__PVT___TagArray_ext_R0_data
                                     : vlSelf->__PVT___TagArray_ext_R1_data)
                                 : (vlSelf->__PVT__addr_reg 
                                    >> 0xaU)) << 0xaU) 
                              | (0x380U & vlSelf->__PVT__addr_reg));
    vlSelf->io_cpu_resp_bits_data = (((QData)((IData)(
                                                      vlSelf->__PVT__read[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0x3c0U 
                                                         & (vlSelf->__PVT__addr_reg 
                                                            << 3U))) 
                                                       >> 5U)])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->__PVT__read[
                                                                  (0x1eU 
                                                                   & (vlSelf->__PVT__addr_reg 
                                                                      >> 2U))])));
    vlSelf->__PVT___T_332 = ((IData)(vlSelf->io_fccache_hit) 
                             | (IData)(vlSelf->__PVT__is_alloc_reg));
    vlSelf->__PVT__wen = (((2U == (IData)(vlSelf->__PVT__state)) 
                           & (IData)(vlSelf->io_fccache_hit)) 
                          | (IData)(vlSelf->__PVT__is_alloc));
    vlSelf->io_cpu_resp_valid = ((IData)(vlSelf->io_fccache_hit) 
                                 | ((~ (IData)((0U 
                                                != (IData)(vlSelf->__PVT__cpu_mask)))) 
                                    & (IData)(vlSelf->__PVT__is_alloc_reg)));
    vlSelf->io_axi_req_bits_rw = ((0U != (IData)(vlSelf->__PVT__state)) 
                                  & ((1U == (IData)(vlSelf->__PVT__state))
                                      ? ((~ (IData)(vlSelf->io_fccache_hit)) 
                                         & (~ (IData)(vlSelf->__PVT___T_329)))
                                      : ((2U == (IData)(vlSelf->__PVT__state))
                                          ? ((~ (IData)(vlSelf->__PVT___T_332)) 
                                             & (~ (IData)(vlSelf->__PVT___T_329)))
                                          : ((3U == (IData)(vlSelf->__PVT__state))
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                  ? (IData)(vlSymsp->TOP.Soc__DOT__core__DOT___arbitor_io_master2_resp_valid)
                                                  : (IData)(vlSelf->__PVT__rw_buf))
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__state)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                      >> 2U)) 
                                                    & (IData)(vlSelf->__PVT__rw_buf)))))));
    vlSelf->__PVT___GEN_0 = ((~ (IData)(vlSelf->__PVT___replace_wire_T)) 
                             & (IData)(vlSelf->__PVT__wen));
    vlSelf->__PVT___GEN = ((IData)(vlSelf->__PVT__wen) 
                           & (IData)(vlSelf->__PVT___replace_wire_T));
    vlSelf->__PVT__ren = ((~ (IData)(vlSelf->__PVT__wen)) 
                          & (((0U == (IData)(vlSelf->__PVT__state)) 
                              | (1U == (IData)(vlSelf->__PVT__state))) 
                             & (IData)(vlSymsp->TOP.Soc__DOT__core__DOT__fetch__DOT__started)));
    if (vlSelf->__PVT__wen) {
        if ((1U & (IData)(vlSelf->__PVT___replace_wire_T))) {
            vlSelf->__PVT___GEN_8 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                                | ((IData)(1U) 
                                                   << 
                                                   (0xeU 
                                                    & (vlSelf->__PVT__addr_reg 
                                                       >> 6U)))));
            vlSelf->__PVT___GEN_9 = (0xffffU & (~ (
                                                   (~ (IData)(vlSelf->__PVT__replace)) 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (0xeU 
                                                           & (vlSelf->__PVT__addr_reg 
                                                              >> 6U))))))));
        } else {
            vlSelf->__PVT___GEN_8 = (0xffffU & (~ (
                                                   (~ (IData)(vlSelf->__PVT__replace)) 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0xeU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 6U))))));
            vlSelf->__PVT___GEN_9 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                                | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0xeU 
                                                        & (vlSelf->__PVT__addr_reg 
                                                           >> 6U)))))));
        }
    } else {
        vlSelf->__PVT___GEN_8 = 0U;
        vlSelf->__PVT___GEN_9 = 0U;
    }
}

VL_ATTR_COLD void VSoc_Cache___stl_sequent__TOP__Soc__DOT__core__DOT__Dcache__0(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___stl_sequent__TOP__Soc__DOT__core__DOT__Dcache__0\n"); );
    // Init
    VlWide<5>/*134:0*/ __PVT___wmask_T_2;
    VL_ZERO_W(135, __PVT___wmask_T_2);
    VlWide<3>/*95:0*/ __Vtemp_h83c7e9ab__0;
    VlWide<3>/*95:0*/ __Vtemp_h26349e5a__0;
    VlWide<5>/*159:0*/ __Vtemp_hfe7561f7__0;
    VlWide<5>/*159:0*/ __Vtemp_h33bc51d6__0;
    // Body
    vlSelf->__PVT__is_read = (1U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT__is_write = (2U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_337 = (3U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_339 = (4U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_340 = (5U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___GEN_14 = (1U & ((4U != (IData)(vlSelf->__PVT__state)) 
                                    | ((IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                       >> 1U)));
    vlSelf->__PVT___replace_wire_T = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0xeU 
                                                      & (vlSelf->__PVT__addr_reg 
                                                         >> 6U))))));
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
    vlSelf->__PVT___TagArray_ext_R1_data = ((IData)(vlSelf->__PVT__TagArray_ext__DOT___GEN_1)
                                             ? vlSelf->__PVT__TagArray_ext__DOT__Memory
                                            [vlSelf->__PVT__TagArray_ext__DOT___GEN_2]
                                             : 0U);
    vlSelf->__PVT___dirty1_T = (0xffffU & ((IData)(vlSelf->__PVT__valid) 
                                           >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0xeU 
                                                   & (vlSelf->__PVT__addr_reg 
                                                      >> 6U))))));
    vlSelf->__PVT___dirty0_T = (0xffffU & ((IData)(vlSelf->__PVT__valid) 
                                           >> (0xeU 
                                               & (vlSelf->__PVT__addr_reg 
                                                  >> 6U))));
    vlSelf->__PVT___TagArray_ext_R0_data = ((IData)(vlSelf->__PVT__TagArray_ext__DOT___GEN)
                                             ? vlSelf->__PVT__TagArray_ext__DOT__Memory
                                            [vlSelf->__PVT__TagArray_ext__DOT___GEN_0]
                                             : 0U);
    __Vtemp_h83c7e9ab__0[0U] = (IData)((((QData)((IData)(
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
    __Vtemp_h83c7e9ab__0[1U] = (IData)(((((QData)((IData)(
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
    vlSelf->__PVT__rdata0[0U] = __Vtemp_h83c7e9ab__0[0U];
    vlSelf->__PVT__rdata0[1U] = __Vtemp_h83c7e9ab__0[1U];
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
    __Vtemp_h26349e5a__0[0U] = (IData)((((QData)((IData)(
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
    __Vtemp_h26349e5a__0[1U] = (IData)(((((QData)((IData)(
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
    vlSelf->__PVT__rdata1[0U] = __Vtemp_h26349e5a__0[0U];
    vlSelf->__PVT__rdata1[1U] = __Vtemp_h26349e5a__0[1U];
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
    __Vtemp_hfe7561f7__0[0U] = vlSelf->__PVT__cpu_mask;
    __Vtemp_hfe7561f7__0[1U] = 0U;
    __Vtemp_hfe7561f7__0[2U] = 0U;
    __Vtemp_hfe7561f7__0[3U] = 0U;
    __Vtemp_hfe7561f7__0[4U] = 0U;
    VL_SHIFTL_WWI(135,135,7, __Vtemp_h33bc51d6__0, __Vtemp_hfe7561f7__0, 
                  (0x78U & vlSelf->__PVT__addr_reg));
    __PVT___wmask_T_2[0U] = __Vtemp_h33bc51d6__0[0U];
    __PVT___wmask_T_2[1U] = __Vtemp_h33bc51d6__0[1U];
    __PVT___wmask_T_2[2U] = __Vtemp_h33bc51d6__0[2U];
    __PVT___wmask_T_2[3U] = __Vtemp_h33bc51d6__0[3U];
    __PVT___wmask_T_2[4U] = (0x7fU & __Vtemp_h33bc51d6__0[4U]);
    vlSelf->__PVT__is_alloc = ((5U == (IData)(vlSelf->__PVT__state)) 
                               & (0xfU == (IData)(vlSelf->__PVT__r_count)));
    vlSelf->__PVT__dirty0 = (1U & ((IData)(vlSelf->__PVT___dirty0_T) 
                                   & ((IData)(vlSelf->__PVT__dirty) 
                                      >> (0xeU & (vlSelf->__PVT__addr_reg 
                                                  >> 6U)))));
    vlSelf->__PVT___hit0_T_2 = (vlSelf->__PVT___TagArray_ext_R0_data 
                                == (vlSelf->__PVT__addr_reg 
                                    >> 0xaU));
    vlSelf->__PVT___T_165 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 1U)));
    vlSelf->__PVT___T_166 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 2U)));
    vlSelf->__PVT___T_167 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 3U)));
    vlSelf->__PVT___T_168 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 4U)));
    vlSelf->__PVT___T_169 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 5U)));
    vlSelf->__PVT___T_170 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 6U)));
    vlSelf->__PVT___T_171 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 7U)));
    vlSelf->__PVT___T_174 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 8U)));
    vlSelf->__PVT___T_175 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 9U)));
    vlSelf->__PVT___T_176 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_177 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_178 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_179 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_180 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_181 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_184 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_185 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_186 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_187 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_188 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_189 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_190 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_191 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_194 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_195 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_196 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_197 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_198 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_199 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_200 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[0U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_201 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[0U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_204 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | __PVT___wmask_T_2[1U]));
    vlSelf->__PVT___T_205 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 1U)));
    vlSelf->__PVT___T_206 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 2U)));
    vlSelf->__PVT___T_207 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 3U)));
    vlSelf->__PVT___T_208 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 4U)));
    vlSelf->__PVT___T_209 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 5U)));
    vlSelf->__PVT___T_210 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 6U)));
    vlSelf->__PVT___T_211 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 7U)));
    vlSelf->__PVT___T_214 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 8U)));
    vlSelf->__PVT___T_215 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 9U)));
    vlSelf->__PVT___T_216 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_217 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_218 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_219 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_220 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_221 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_224 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_225 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_226 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_227 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_228 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_229 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_230 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_231 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_234 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_235 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_236 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_237 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_238 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_239 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_240 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[1U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_241 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[1U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_244 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | __PVT___wmask_T_2[2U]));
    vlSelf->__PVT___T_245 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 1U)));
    vlSelf->__PVT___T_246 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 2U)));
    vlSelf->__PVT___T_247 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 3U)));
    vlSelf->__PVT___T_248 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 4U)));
    vlSelf->__PVT___T_249 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 5U)));
    vlSelf->__PVT___T_250 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 6U)));
    vlSelf->__PVT___T_251 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 7U)));
    vlSelf->__PVT___T_254 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 8U)));
    vlSelf->__PVT___T_255 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 9U)));
    vlSelf->__PVT___T_256 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_257 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_258 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_259 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_260 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_261 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_264 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_265 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_266 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_267 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_268 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_269 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_270 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_271 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_274 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_275 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_276 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_277 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_278 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_279 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_280 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[2U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_281 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[2U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_284 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | __PVT___wmask_T_2[3U]));
    vlSelf->__PVT___T_285 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 1U)));
    vlSelf->__PVT___T_286 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 2U)));
    vlSelf->__PVT___T_287 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 3U)));
    vlSelf->__PVT___T_288 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 4U)));
    vlSelf->__PVT___T_289 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 5U)));
    vlSelf->__PVT___T_290 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 6U)));
    vlSelf->__PVT___T_291 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 7U)));
    vlSelf->__PVT___T_294 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 8U)));
    vlSelf->__PVT___T_295 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 9U)));
    vlSelf->__PVT___T_296 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_297 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_298 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_299 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_300 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_301 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_304 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_305 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_306 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_307 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_308 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_309 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_310 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_311 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_314 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_315 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_316 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_317 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_318 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_319 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_320 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (__PVT___wmask_T_2[3U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_321 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (__PVT___wmask_T_2[3U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_164 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | ((0U >= (0x78U 
                                              & vlSelf->__PVT__addr_reg))
                                       ? ((IData)(vlSelf->__PVT__cpu_mask) 
                                          << (0x78U 
                                              & vlSelf->__PVT__addr_reg))
                                       : 0U)));
    if (vlSelf->__PVT__is_alloc) {
        vlSelf->__PVT__wdata[0U] = vlSelf->__VdfgTmp_h25305f44__0[0U];
        vlSelf->__PVT__wdata[1U] = vlSelf->__VdfgTmp_h25305f44__0[1U];
        vlSelf->__PVT__wdata[2U] = vlSelf->__VdfgTmp_h25305f44__0[2U];
        vlSelf->__PVT__wdata[3U] = vlSelf->__VdfgTmp_h25305f44__0[3U];
        vlSelf->__PVT__wdata[4U] = vlSelf->__VdfgTmp_h25305f44__0[4U];
        vlSelf->__PVT__wdata[5U] = vlSelf->__VdfgTmp_h25305f44__0[5U];
        vlSelf->__PVT__wdata[6U] = vlSelf->__VdfgTmp_h25305f44__0[6U];
        vlSelf->__PVT__wdata[7U] = vlSelf->__VdfgTmp_h25305f44__0[7U];
        vlSelf->__PVT__wdata[8U] = vlSelf->__VdfgTmp_h25305f44__0[8U];
        vlSelf->__PVT__wdata[9U] = vlSelf->__VdfgTmp_h25305f44__0[9U];
        vlSelf->__PVT__wdata[0xaU] = vlSelf->__VdfgTmp_h25305f44__0[0xaU];
        vlSelf->__PVT__wdata[0xbU] = vlSelf->__VdfgTmp_h25305f44__0[0xbU];
        vlSelf->__PVT__wdata[0xcU] = vlSelf->__VdfgTmp_h25305f44__0[0xcU];
        vlSelf->__PVT__wdata[0xdU] = vlSelf->__VdfgTmp_h25305f44__0[0xdU];
        vlSelf->__PVT__wdata[0xeU] = vlSelf->__VdfgTmp_h25305f44__0[0xeU];
        vlSelf->__PVT__wdata[0xfU] = vlSelf->__VdfgTmp_h25305f44__0[0xfU];
        vlSelf->__PVT__wdata[0x10U] = vlSelf->__VdfgTmp_h25305f44__0[0x10U];
        vlSelf->__PVT__wdata[0x11U] = vlSelf->__VdfgTmp_h25305f44__0[0x11U];
        vlSelf->__PVT__wdata[0x12U] = vlSelf->__VdfgTmp_h25305f44__0[0x12U];
        vlSelf->__PVT__wdata[0x13U] = vlSelf->__VdfgTmp_h25305f44__0[0x13U];
        vlSelf->__PVT__wdata[0x14U] = vlSelf->__VdfgTmp_h25305f44__0[0x14U];
        vlSelf->__PVT__wdata[0x15U] = vlSelf->__VdfgTmp_h25305f44__0[0x15U];
        vlSelf->__PVT__wdata[0x16U] = vlSelf->__VdfgTmp_h25305f44__0[0x16U];
        vlSelf->__PVT__wdata[0x17U] = vlSelf->__VdfgTmp_h25305f44__0[0x17U];
        vlSelf->__PVT__wdata[0x18U] = vlSelf->__VdfgTmp_h25305f44__0[0x18U];
        vlSelf->__PVT__wdata[0x19U] = vlSelf->__VdfgTmp_h25305f44__0[0x19U];
        vlSelf->__PVT__wdata[0x1aU] = vlSelf->__VdfgTmp_h25305f44__0[0x1aU];
        vlSelf->__PVT__wdata[0x1bU] = vlSelf->__VdfgTmp_h25305f44__0[0x1bU];
        vlSelf->__PVT__wdata[0x1cU] = vlSelf->__VdfgTmp_h25305f44__0[0x1cU];
        vlSelf->__PVT__wdata[0x1dU] = vlSelf->__VdfgTmp_h25305f44__0[0x1dU];
        vlSelf->__PVT__wdata[0x1eU] = (IData)(vlSymsp->TOP.Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data);
        vlSelf->__PVT__wdata[0x1fU] = (IData)((vlSymsp->TOP.Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                               >> 0x20U));
    } else {
        vlSelf->__PVT__wdata[0U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[1U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[2U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[3U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[4U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[5U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[6U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[7U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[8U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[9U] = (IData)((vlSelf->__PVT__cpu_data 
                                            >> 0x20U));
        vlSelf->__PVT__wdata[0xaU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0xbU] = (IData)((vlSelf->__PVT__cpu_data 
                                              >> 0x20U));
        vlSelf->__PVT__wdata[0xcU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0xdU] = (IData)((vlSelf->__PVT__cpu_data 
                                              >> 0x20U));
        vlSelf->__PVT__wdata[0xeU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0xfU] = (IData)((vlSelf->__PVT__cpu_data 
                                              >> 0x20U));
        vlSelf->__PVT__wdata[0x10U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x11U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x12U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x13U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x14U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x15U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x16U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x17U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x18U] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x19U] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x1aU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x1bU] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x1cU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x1dU] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
        vlSelf->__PVT__wdata[0x1eU] = (IData)(vlSelf->__PVT__cpu_data);
        vlSelf->__PVT__wdata[0x1fU] = (IData)((vlSelf->__PVT__cpu_data 
                                               >> 0x20U));
    }
    vlSelf->__PVT___T_329 = (1U & (((~ (IData)(vlSelf->__PVT___replace_wire_T)) 
                                    & (IData)(vlSelf->__PVT__dirty0)) 
                                   | (0xffffU & ((IData)(vlSelf->__PVT___replace_wire_T) 
                                                 & ((IData)(vlSelf->__PVT___dirty1_T) 
                                                    & ((IData)(vlSelf->__PVT__dirty) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0xeU 
                                                            & (vlSelf->__PVT__addr_reg 
                                                               >> 6U))))))))));
    if (vlSelf->__PVT__is_alloc_reg) {
        vlSelf->__PVT__read[0U] = vlSelf->__VdfgTmp_h25305f44__0[0U];
        vlSelf->__PVT__read[1U] = vlSelf->__VdfgTmp_h25305f44__0[1U];
        vlSelf->__PVT__read[2U] = vlSelf->__VdfgTmp_h25305f44__0[2U];
        vlSelf->__PVT__read[3U] = vlSelf->__VdfgTmp_h25305f44__0[3U];
        vlSelf->__PVT__read[4U] = vlSelf->__VdfgTmp_h25305f44__0[4U];
        vlSelf->__PVT__read[5U] = vlSelf->__VdfgTmp_h25305f44__0[5U];
        vlSelf->__PVT__read[6U] = vlSelf->__VdfgTmp_h25305f44__0[6U];
        vlSelf->__PVT__read[7U] = vlSelf->__VdfgTmp_h25305f44__0[7U];
        vlSelf->__PVT__read[8U] = vlSelf->__VdfgTmp_h25305f44__0[8U];
        vlSelf->__PVT__read[9U] = vlSelf->__VdfgTmp_h25305f44__0[9U];
        vlSelf->__PVT__read[0xaU] = vlSelf->__VdfgTmp_h25305f44__0[0xaU];
        vlSelf->__PVT__read[0xbU] = vlSelf->__VdfgTmp_h25305f44__0[0xbU];
        vlSelf->__PVT__read[0xcU] = vlSelf->__VdfgTmp_h25305f44__0[0xcU];
        vlSelf->__PVT__read[0xdU] = vlSelf->__VdfgTmp_h25305f44__0[0xdU];
        vlSelf->__PVT__read[0xeU] = vlSelf->__VdfgTmp_h25305f44__0[0xeU];
        vlSelf->__PVT__read[0xfU] = vlSelf->__VdfgTmp_h25305f44__0[0xfU];
        vlSelf->__PVT__read[0x10U] = vlSelf->__VdfgTmp_h25305f44__0[0x10U];
        vlSelf->__PVT__read[0x11U] = vlSelf->__VdfgTmp_h25305f44__0[0x11U];
        vlSelf->__PVT__read[0x12U] = vlSelf->__VdfgTmp_h25305f44__0[0x12U];
        vlSelf->__PVT__read[0x13U] = vlSelf->__VdfgTmp_h25305f44__0[0x13U];
        vlSelf->__PVT__read[0x14U] = vlSelf->__VdfgTmp_h25305f44__0[0x14U];
        vlSelf->__PVT__read[0x15U] = vlSelf->__VdfgTmp_h25305f44__0[0x15U];
        vlSelf->__PVT__read[0x16U] = vlSelf->__VdfgTmp_h25305f44__0[0x16U];
        vlSelf->__PVT__read[0x17U] = vlSelf->__VdfgTmp_h25305f44__0[0x17U];
        vlSelf->__PVT__read[0x18U] = vlSelf->__VdfgTmp_h25305f44__0[0x18U];
        vlSelf->__PVT__read[0x19U] = vlSelf->__VdfgTmp_h25305f44__0[0x19U];
        vlSelf->__PVT__read[0x1aU] = vlSelf->__VdfgTmp_h25305f44__0[0x1aU];
        vlSelf->__PVT__read[0x1bU] = vlSelf->__VdfgTmp_h25305f44__0[0x1bU];
        vlSelf->__PVT__read[0x1cU] = vlSelf->__VdfgTmp_h25305f44__0[0x1cU];
        vlSelf->__PVT__read[0x1dU] = vlSelf->__VdfgTmp_h25305f44__0[0x1dU];
        vlSelf->__PVT__read[0x1eU] = (IData)(vlSelf->__PVT__refill_buffer_15);
        vlSelf->__PVT__read[0x1fU] = (IData)((vlSelf->__PVT__refill_buffer_15 
                                              >> 0x20U));
    } else if (vlSelf->__PVT__ren_reg) {
        if (vlSelf->__PVT___hit0_T_2) {
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
        } else {
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
        }
    } else if (vlSelf->__PVT___hit0_T_2) {
        vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata0_buf[0U];
        vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata0_buf[1U];
        vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata0_buf[2U];
        vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata0_buf[3U];
        vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata0_buf[4U];
        vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata0_buf[5U];
        vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata0_buf[6U];
        vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata0_buf[7U];
        vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata0_buf[8U];
        vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata0_buf[9U];
        vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata0_buf[0xaU];
        vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata0_buf[0xbU];
        vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata0_buf[0xcU];
        vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata0_buf[0xdU];
        vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata0_buf[0xeU];
        vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata0_buf[0xfU];
        vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata0_buf[0x10U];
        vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata0_buf[0x11U];
        vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata0_buf[0x12U];
        vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata0_buf[0x13U];
        vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata0_buf[0x14U];
        vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata0_buf[0x15U];
        vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata0_buf[0x16U];
        vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata0_buf[0x17U];
        vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata0_buf[0x18U];
        vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata0_buf[0x19U];
        vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata0_buf[0x1aU];
        vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata0_buf[0x1bU];
        vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata0_buf[0x1cU];
        vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata0_buf[0x1dU];
        vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata0_buf[0x1eU];
        vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata0_buf[0x1fU];
    } else {
        vlSelf->__PVT__read[0U] = vlSelf->__PVT__rdata1_buf[0U];
        vlSelf->__PVT__read[1U] = vlSelf->__PVT__rdata1_buf[1U];
        vlSelf->__PVT__read[2U] = vlSelf->__PVT__rdata1_buf[2U];
        vlSelf->__PVT__read[3U] = vlSelf->__PVT__rdata1_buf[3U];
        vlSelf->__PVT__read[4U] = vlSelf->__PVT__rdata1_buf[4U];
        vlSelf->__PVT__read[5U] = vlSelf->__PVT__rdata1_buf[5U];
        vlSelf->__PVT__read[6U] = vlSelf->__PVT__rdata1_buf[6U];
        vlSelf->__PVT__read[7U] = vlSelf->__PVT__rdata1_buf[7U];
        vlSelf->__PVT__read[8U] = vlSelf->__PVT__rdata1_buf[8U];
        vlSelf->__PVT__read[9U] = vlSelf->__PVT__rdata1_buf[9U];
        vlSelf->__PVT__read[0xaU] = vlSelf->__PVT__rdata1_buf[0xaU];
        vlSelf->__PVT__read[0xbU] = vlSelf->__PVT__rdata1_buf[0xbU];
        vlSelf->__PVT__read[0xcU] = vlSelf->__PVT__rdata1_buf[0xcU];
        vlSelf->__PVT__read[0xdU] = vlSelf->__PVT__rdata1_buf[0xdU];
        vlSelf->__PVT__read[0xeU] = vlSelf->__PVT__rdata1_buf[0xeU];
        vlSelf->__PVT__read[0xfU] = vlSelf->__PVT__rdata1_buf[0xfU];
        vlSelf->__PVT__read[0x10U] = vlSelf->__PVT__rdata1_buf[0x10U];
        vlSelf->__PVT__read[0x11U] = vlSelf->__PVT__rdata1_buf[0x11U];
        vlSelf->__PVT__read[0x12U] = vlSelf->__PVT__rdata1_buf[0x12U];
        vlSelf->__PVT__read[0x13U] = vlSelf->__PVT__rdata1_buf[0x13U];
        vlSelf->__PVT__read[0x14U] = vlSelf->__PVT__rdata1_buf[0x14U];
        vlSelf->__PVT__read[0x15U] = vlSelf->__PVT__rdata1_buf[0x15U];
        vlSelf->__PVT__read[0x16U] = vlSelf->__PVT__rdata1_buf[0x16U];
        vlSelf->__PVT__read[0x17U] = vlSelf->__PVT__rdata1_buf[0x17U];
        vlSelf->__PVT__read[0x18U] = vlSelf->__PVT__rdata1_buf[0x18U];
        vlSelf->__PVT__read[0x19U] = vlSelf->__PVT__rdata1_buf[0x19U];
        vlSelf->__PVT__read[0x1aU] = vlSelf->__PVT__rdata1_buf[0x1aU];
        vlSelf->__PVT__read[0x1bU] = vlSelf->__PVT__rdata1_buf[0x1bU];
        vlSelf->__PVT__read[0x1cU] = vlSelf->__PVT__rdata1_buf[0x1cU];
        vlSelf->__PVT__read[0x1dU] = vlSelf->__PVT__rdata1_buf[0x1dU];
        vlSelf->__PVT__read[0x1eU] = vlSelf->__PVT__rdata1_buf[0x1eU];
        vlSelf->__PVT__read[0x1fU] = vlSelf->__PVT__rdata1_buf[0x1fU];
    }
    vlSelf->io_fccache_hit = (((IData)(vlSelf->__PVT___dirty0_T) 
                               & (IData)(vlSelf->__PVT___hit0_T_2)) 
                              | ((IData)(vlSelf->__PVT___dirty1_T) 
                                 & (vlSelf->__PVT___TagArray_ext_R1_data 
                                    == (vlSelf->__PVT__addr_reg 
                                        >> 0xaU))));
    vlSelf->__PVT___GEN_12 = ((((IData)(vlSelf->__PVT___T_329)
                                 ? ((IData)(vlSelf->__PVT__dirty0)
                                     ? vlSelf->__PVT___TagArray_ext_R0_data
                                     : vlSelf->__PVT___TagArray_ext_R1_data)
                                 : (vlSelf->__PVT__addr_reg 
                                    >> 0xaU)) << 0xaU) 
                              | (0x380U & vlSelf->__PVT__addr_reg));
    vlSelf->io_cpu_resp_bits_data = (((QData)((IData)(
                                                      vlSelf->__PVT__read[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0x3c0U 
                                                         & (vlSelf->__PVT__addr_reg 
                                                            << 3U))) 
                                                       >> 5U)])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->__PVT__read[
                                                                  (0x1eU 
                                                                   & (vlSelf->__PVT__addr_reg 
                                                                      >> 2U))])));
    vlSelf->__PVT___T_332 = ((IData)(vlSelf->io_fccache_hit) 
                             | (IData)(vlSelf->__PVT__is_alloc_reg));
    vlSelf->__PVT__wen = (((2U == (IData)(vlSelf->__PVT__state)) 
                           & (IData)(vlSelf->io_fccache_hit)) 
                          | (IData)(vlSelf->__PVT__is_alloc));
    vlSelf->io_cpu_resp_valid = ((IData)(vlSelf->io_fccache_hit) 
                                 | ((~ (IData)((0U 
                                                != (IData)(vlSelf->__PVT__cpu_mask)))) 
                                    & (IData)(vlSelf->__PVT__is_alloc_reg)));
    vlSelf->io_axi_req_bits_rw = ((0U != (IData)(vlSelf->__PVT__state)) 
                                  & ((1U == (IData)(vlSelf->__PVT__state))
                                      ? ((~ (IData)(vlSelf->io_fccache_hit)) 
                                         & (~ (IData)(vlSelf->__PVT___T_329)))
                                      : ((2U == (IData)(vlSelf->__PVT__state))
                                          ? ((~ (IData)(vlSelf->__PVT___T_332)) 
                                             & (~ (IData)(vlSelf->__PVT___T_329)))
                                          : ((3U == (IData)(vlSelf->__PVT__state))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                                                  ? (IData)(vlSymsp->TOP.Soc__DOT__core__DOT___arbitor_io_master1_resp_valid)
                                                  : (IData)(vlSelf->__PVT__rw_buf))
                                              : ((4U 
                                                  == (IData)(vlSelf->__PVT__state)) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->__PVT__rw_buf)))))));
    if (vlSelf->__PVT__wen) {
        vlSelf->__PVT___GEN_0 = (1U & (~ (IData)(vlSelf->__PVT___replace_wire_T)));
        vlSelf->__PVT___GEN = (1U & (IData)(vlSelf->__PVT___replace_wire_T));
        if ((1U & (IData)(vlSelf->__PVT___replace_wire_T))) {
            vlSelf->__PVT___GEN_8 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                                | ((IData)(1U) 
                                                   << 
                                                   (0xeU 
                                                    & (vlSelf->__PVT__addr_reg 
                                                       >> 6U)))));
            vlSelf->__PVT___GEN_9 = (0xffffU & (~ (
                                                   (~ (IData)(vlSelf->__PVT__replace)) 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (0xeU 
                                                           & (vlSelf->__PVT__addr_reg 
                                                              >> 6U))))))));
        } else {
            vlSelf->__PVT___GEN_8 = (0xffffU & (~ (
                                                   (~ (IData)(vlSelf->__PVT__replace)) 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0xeU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 6U))))));
            vlSelf->__PVT___GEN_9 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                                | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0xeU 
                                                        & (vlSelf->__PVT__addr_reg 
                                                           >> 6U)))))));
        }
    } else {
        vlSelf->__PVT___GEN_0 = 0U;
        vlSelf->__PVT___GEN = 0U;
        vlSelf->__PVT___GEN_8 = 0U;
        vlSelf->__PVT___GEN_9 = 0U;
    }
    vlSelf->__PVT__ren = ((~ (IData)(vlSelf->__PVT__wen)) 
                          & (((0U == (IData)(vlSelf->__PVT__state)) 
                              | (1U == (IData)(vlSelf->__PVT__state))) 
                             & (IData)(vlSymsp->TOP.Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)));
}
