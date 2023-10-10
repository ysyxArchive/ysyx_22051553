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
    CData/*0:0*/ __PVT___hit0_T_2;
    __PVT___hit0_T_2 = 0;
    SData/*15:0*/ __PVT___dirty0_T;
    __PVT___dirty0_T = 0;
    CData/*0:0*/ __VdfgTmp_hf0d69e76__0;
    __VdfgTmp_hf0d69e76__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1acee690__0;
    __VdfgTmp_h1acee690__0 = 0;
    SData/*15:0*/ __VdfgTmp_h082604b0__0;
    __VdfgTmp_h082604b0__0 = 0;
    SData/*15:0*/ __VdfgTmp_h6db892a9__0;
    __VdfgTmp_h6db892a9__0 = 0;
    SData/*15:0*/ __VdfgTmp_h28f607fa__0;
    __VdfgTmp_h28f607fa__0 = 0;
    SData/*15:0*/ __VdfgTmp_hb5f4fc5d__0;
    __VdfgTmp_hb5f4fc5d__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_hfe7561f7__0;
    VlWide<5>/*159:0*/ __Vtemp_h33bc51d6__0;
    VlWide<3>/*95:0*/ __Vtemp_h83c7e9ab__0;
    VlWide<3>/*95:0*/ __Vtemp_h26349e5a__0;
    // Body
    vlSelf->__PVT__is_read = (1U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT__is_write = (2U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_658 = (3U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_660 = (4U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_661 = (5U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___GEN_15 = (1U & ((4U != (IData)(vlSelf->__PVT__state)) 
                                    | ((IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                       >> 2U)));
    vlSelf->__PVT__ren = (((0U == (IData)(vlSelf->__PVT__state)) 
                           | ((1U == (IData)(vlSelf->__PVT__state)) 
                              | (2U == (IData)(vlSelf->__PVT__state)))) 
                          & (IData)(vlSymsp->TOP.Soc__DOT__core__DOT__fetch__DOT__started));
    __VdfgTmp_h082604b0__0 = (0xffffU & (~ ((~ (IData)(vlSelf->__PVT__replace)) 
                                            | ((IData)(1U) 
                                               << (0xeU 
                                                   & (vlSelf->__PVT__addr_reg 
                                                      >> 6U))))));
    __VdfgTmp_h6db892a9__0 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                         | ((IData)(1U) 
                                            << (0xeU 
                                                & (vlSelf->__PVT__addr_reg 
                                                   >> 6U)))));
    __VdfgTmp_h28f607fa__0 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                         | ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xeU 
                                                    & (vlSelf->__PVT__addr_reg 
                                                       >> 6U)))))));
    __VdfgTmp_hb5f4fc5d__0 = (0xffffU & (~ ((~ (IData)(vlSelf->__PVT__replace)) 
                                            | ((IData)(1U) 
                                               << (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xeU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 6U))))))));
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
    vlSelf->__VdfgTmp_hee7a4229__0[0U] = __Vtemp_h33bc51d6__0[0U];
    vlSelf->__VdfgTmp_hee7a4229__0[1U] = __Vtemp_h33bc51d6__0[1U];
    vlSelf->__VdfgTmp_hee7a4229__0[2U] = __Vtemp_h33bc51d6__0[2U];
    vlSelf->__VdfgTmp_hee7a4229__0[3U] = __Vtemp_h33bc51d6__0[3U];
    vlSelf->__VdfgTmp_hee7a4229__0[4U] = (0x7fU & __Vtemp_h33bc51d6__0[4U]);
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
    __PVT___dirty0_T = (0xffffU & ((IData)(vlSelf->__PVT__valid) 
                                   >> (0xeU & (vlSelf->__PVT__addr_reg 
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
    vlSelf->__PVT___T_486 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 1U)));
    vlSelf->__PVT___T_487 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 2U)));
    vlSelf->__PVT___T_488 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 3U)));
    vlSelf->__PVT___T_489 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 4U)));
    vlSelf->__PVT___T_490 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 5U)));
    vlSelf->__PVT___T_491 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 6U)));
    vlSelf->__PVT___T_492 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 7U)));
    vlSelf->__PVT___T_495 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 8U)));
    vlSelf->__PVT___T_496 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 9U)));
    vlSelf->__PVT___T_497 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_498 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_499 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_500 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_501 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_502 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_505 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_506 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_507 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_508 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_509 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_510 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_511 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_512 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_515 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_516 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_517 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_518 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_519 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_520 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_521 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_522 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_525 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | vlSelf->__VdfgTmp_hee7a4229__0[1U]));
    vlSelf->__PVT___T_526 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 1U)));
    vlSelf->__PVT___T_527 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 2U)));
    vlSelf->__PVT___T_528 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 3U)));
    vlSelf->__PVT___T_529 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 4U)));
    vlSelf->__PVT___T_530 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 5U)));
    vlSelf->__PVT___T_531 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 6U)));
    vlSelf->__PVT___T_532 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 7U)));
    vlSelf->__PVT___T_535 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 8U)));
    vlSelf->__PVT___T_536 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 9U)));
    vlSelf->__PVT___T_537 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_538 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_539 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_540 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_541 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_542 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_545 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_546 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_547 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_548 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_549 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_550 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_551 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_552 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_555 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_556 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_557 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_558 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_559 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_560 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_561 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_562 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_565 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | vlSelf->__VdfgTmp_hee7a4229__0[2U]));
    vlSelf->__PVT___T_566 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 1U)));
    vlSelf->__PVT___T_567 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 2U)));
    vlSelf->__PVT___T_568 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 3U)));
    vlSelf->__PVT___T_569 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 4U)));
    vlSelf->__PVT___T_570 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 5U)));
    vlSelf->__PVT___T_571 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 6U)));
    vlSelf->__PVT___T_572 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 7U)));
    vlSelf->__PVT___T_575 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 8U)));
    vlSelf->__PVT___T_576 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 9U)));
    vlSelf->__PVT___T_577 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_578 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_579 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_580 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_581 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_582 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_585 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_586 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_587 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_588 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_589 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_590 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_591 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_592 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_595 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_596 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_597 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_598 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_599 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_600 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_601 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_602 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_605 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | vlSelf->__VdfgTmp_hee7a4229__0[3U]));
    vlSelf->__PVT___T_606 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 1U)));
    vlSelf->__PVT___T_607 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 2U)));
    vlSelf->__PVT___T_608 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 3U)));
    vlSelf->__PVT___T_609 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 4U)));
    vlSelf->__PVT___T_610 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 5U)));
    vlSelf->__PVT___T_611 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 6U)));
    vlSelf->__PVT___T_612 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 7U)));
    vlSelf->__PVT___T_615 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 8U)));
    vlSelf->__PVT___T_616 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 9U)));
    vlSelf->__PVT___T_617 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_618 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_619 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_620 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_621 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_622 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_625 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_626 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_627 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_628 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_629 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_630 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_631 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_632 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_635 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_636 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_637 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_638 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_639 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_640 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_641 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_642 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_485 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
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
    vlSelf->__PVT__dirty0 = (1U & ((IData)(__PVT___dirty0_T) 
                                   & ((IData)(vlSelf->__PVT__dirty) 
                                      >> (0xeU & (vlSelf->__PVT__addr_reg 
                                                  >> 6U)))));
    __PVT___hit0_T_2 = (vlSelf->__PVT___TagArray_ext_R0_data 
                        == (vlSelf->__PVT__addr_reg 
                            >> 0xaU));
    vlSelf->__PVT___T_650 = (1U & (((~ (IData)(vlSelf->__PVT___replace_wire_T)) 
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
        if (__PVT___hit0_T_2) {
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
    } else if (__PVT___hit0_T_2) {
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
    vlSelf->__PVT__hit0 = ((IData)(__PVT___dirty0_T) 
                           & (IData)(__PVT___hit0_T_2));
    vlSelf->__PVT___GEN_13 = ((((IData)(vlSelf->__PVT___T_650)
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
    vlSelf->io_fccache_hit = ((IData)(vlSelf->__PVT__hit0) 
                              | ((IData)(vlSelf->__PVT___dirty1_T) 
                                 & (vlSelf->__PVT___TagArray_ext_R1_data 
                                    == (vlSelf->__PVT__addr_reg 
                                        >> 0xaU))));
    vlSelf->__PVT___T_653 = ((IData)(vlSelf->io_fccache_hit) 
                             | (IData)(vlSelf->__PVT__is_alloc_reg));
    vlSelf->__PVT__wen = (((2U == (IData)(vlSelf->__PVT__state)) 
                           & (IData)(vlSelf->io_fccache_hit)) 
                          | ((IData)(vlSelf->__PVT__is_alloc) 
                             | ((IData)(vlSelf->__PVT__is_alloc_reg) 
                                & (2U == (IData)(vlSelf->__PVT__state)))));
    vlSelf->io_cpu_resp_valid = ((IData)(vlSelf->io_fccache_hit) 
                                 | ((~ (IData)((0U 
                                                != (IData)(vlSelf->__PVT__cpu_mask)))) 
                                    & (IData)(vlSelf->__PVT__is_alloc_reg)));
    vlSelf->io_axi_req_bits_rw = ((0U != (IData)(vlSelf->__PVT__state)) 
                                  & ((1U == (IData)(vlSelf->__PVT__state))
                                      ? ((~ (IData)(vlSelf->io_fccache_hit)) 
                                         & (~ (IData)(vlSelf->__PVT___T_650)))
                                      : ((2U == (IData)(vlSelf->__PVT__state))
                                          ? ((~ (IData)(vlSelf->__PVT___T_653)) 
                                             & (~ (IData)(vlSelf->__PVT___T_650)))
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
    if (vlSelf->__PVT__wen) {
        if (vlSelf->io_fccache_hit) {
            if (vlSelf->__PVT__hit0) {
                vlSelf->__PVT___GEN_9 = __VdfgTmp_h082604b0__0;
                vlSelf->__PVT___GEN_10 = __VdfgTmp_h28f607fa__0;
            } else {
                vlSelf->__PVT___GEN_9 = __VdfgTmp_h6db892a9__0;
                vlSelf->__PVT___GEN_10 = __VdfgTmp_hb5f4fc5d__0;
            }
            __VdfgTmp_hf0d69e76__0 = 1U;
        } else {
            if ((1U & (IData)(vlSelf->__PVT___replace_wire_T))) {
                if (vlSelf->__PVT__is_alloc) {
                    vlSelf->__PVT___GEN_9 = __VdfgTmp_h6db892a9__0;
                    vlSelf->__PVT___GEN_10 = __VdfgTmp_hb5f4fc5d__0;
                } else {
                    vlSelf->__PVT___GEN_9 = 0U;
                    vlSelf->__PVT___GEN_10 = 0U;
                }
            } else if (vlSelf->__PVT__is_alloc) {
                vlSelf->__PVT___GEN_9 = __VdfgTmp_h082604b0__0;
                vlSelf->__PVT___GEN_10 = __VdfgTmp_h28f607fa__0;
            } else {
                vlSelf->__PVT___GEN_9 = 0U;
                vlSelf->__PVT___GEN_10 = 0U;
            }
            __VdfgTmp_hf0d69e76__0 = 0U;
        }
        __VdfgTmp_h1acee690__0 = (1U & (~ (IData)(vlSelf->io_fccache_hit)));
    } else {
        vlSelf->__PVT___GEN_9 = 0U;
        vlSelf->__PVT___GEN_10 = 0U;
        __VdfgTmp_hf0d69e76__0 = 0U;
        __VdfgTmp_h1acee690__0 = 0U;
    }
    vlSelf->__PVT___GEN_2 = ((IData)(__VdfgTmp_hf0d69e76__0) 
                             & (IData)(vlSelf->__PVT__hit0));
    vlSelf->__PVT___GEN_1 = ((~ (IData)(vlSelf->__PVT__hit0)) 
                             & (IData)(__VdfgTmp_hf0d69e76__0));
    vlSelf->__PVT___GEN_0 = ((~ (IData)(vlSelf->__PVT___replace_wire_T)) 
                             & (IData)(__VdfgTmp_h1acee690__0));
    vlSelf->__PVT___GEN = ((IData)(__VdfgTmp_h1acee690__0) 
                           & (IData)(vlSelf->__PVT___replace_wire_T));
}

VL_ATTR_COLD void VSoc_Cache___stl_sequent__TOP__Soc__DOT__core__DOT__Dcache__0(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___stl_sequent__TOP__Soc__DOT__core__DOT__Dcache__0\n"); );
    // Init
    CData/*0:0*/ __PVT___hit0_T_2;
    __PVT___hit0_T_2 = 0;
    SData/*15:0*/ __PVT___dirty0_T;
    __PVT___dirty0_T = 0;
    CData/*0:0*/ __VdfgTmp_hf0d69e76__0;
    __VdfgTmp_hf0d69e76__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1acee690__0;
    __VdfgTmp_h1acee690__0 = 0;
    SData/*15:0*/ __VdfgTmp_h082604b0__0;
    __VdfgTmp_h082604b0__0 = 0;
    SData/*15:0*/ __VdfgTmp_h6db892a9__0;
    __VdfgTmp_h6db892a9__0 = 0;
    SData/*15:0*/ __VdfgTmp_h28f607fa__0;
    __VdfgTmp_h28f607fa__0 = 0;
    SData/*15:0*/ __VdfgTmp_hb5f4fc5d__0;
    __VdfgTmp_hb5f4fc5d__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h83c7e9ab__0;
    VlWide<3>/*95:0*/ __Vtemp_h26349e5a__0;
    VlWide<5>/*159:0*/ __Vtemp_hfe7561f7__0;
    VlWide<5>/*159:0*/ __Vtemp_h33bc51d6__0;
    // Body
    vlSelf->__PVT__is_read = (1U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT__is_write = (2U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_658 = (3U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_660 = (4U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_661 = (5U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___GEN_15 = (1U & ((4U != (IData)(vlSelf->__PVT__state)) 
                                    | ((IData)(vlSymsp->TOP.Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                       >> 1U)));
    __VdfgTmp_h082604b0__0 = (0xffffU & (~ ((~ (IData)(vlSelf->__PVT__replace)) 
                                            | ((IData)(1U) 
                                               << (0xeU 
                                                   & (vlSelf->__PVT__addr_reg 
                                                      >> 6U))))));
    __VdfgTmp_h6db892a9__0 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                         | ((IData)(1U) 
                                            << (0xeU 
                                                & (vlSelf->__PVT__addr_reg 
                                                   >> 6U)))));
    __VdfgTmp_h28f607fa__0 = (0xffffU & ((IData)(vlSelf->__PVT__replace) 
                                         | ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xeU 
                                                    & (vlSelf->__PVT__addr_reg 
                                                       >> 6U)))))));
    __VdfgTmp_hb5f4fc5d__0 = (0xffffU & (~ ((~ (IData)(vlSelf->__PVT__replace)) 
                                            | ((IData)(1U) 
                                               << (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xeU 
                                                       & (vlSelf->__PVT__addr_reg 
                                                          >> 6U))))))));
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
    __PVT___dirty0_T = (0xffffU & ((IData)(vlSelf->__PVT__valid) 
                                   >> (0xeU & (vlSelf->__PVT__addr_reg 
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
    vlSelf->__VdfgTmp_hee7a4229__0[0U] = __Vtemp_h33bc51d6__0[0U];
    vlSelf->__VdfgTmp_hee7a4229__0[1U] = __Vtemp_h33bc51d6__0[1U];
    vlSelf->__VdfgTmp_hee7a4229__0[2U] = __Vtemp_h33bc51d6__0[2U];
    vlSelf->__VdfgTmp_hee7a4229__0[3U] = __Vtemp_h33bc51d6__0[3U];
    vlSelf->__VdfgTmp_hee7a4229__0[4U] = (0x7fU & __Vtemp_h33bc51d6__0[4U]);
    vlSelf->__PVT__is_alloc = ((5U == (IData)(vlSelf->__PVT__state)) 
                               & (0xfU == (IData)(vlSelf->__PVT__r_count)));
    vlSelf->__PVT__ren = (((0U == (IData)(vlSelf->__PVT__state)) 
                           | ((1U == (IData)(vlSelf->__PVT__state)) 
                              | (2U == (IData)(vlSelf->__PVT__state)))) 
                          & (IData)(vlSymsp->TOP.Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid));
    vlSelf->__PVT__dirty0 = (1U & ((IData)(__PVT___dirty0_T) 
                                   & ((IData)(vlSelf->__PVT__dirty) 
                                      >> (0xeU & (vlSelf->__PVT__addr_reg 
                                                  >> 6U)))));
    __PVT___hit0_T_2 = (vlSelf->__PVT___TagArray_ext_R0_data 
                        == (vlSelf->__PVT__addr_reg 
                            >> 0xaU));
    vlSelf->__PVT___T_486 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 1U)));
    vlSelf->__PVT___T_487 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 2U)));
    vlSelf->__PVT___T_488 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 3U)));
    vlSelf->__PVT___T_489 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 4U)));
    vlSelf->__PVT___T_490 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 5U)));
    vlSelf->__PVT___T_491 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 6U)));
    vlSelf->__PVT___T_492 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 7U)));
    vlSelf->__PVT___T_495 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 8U)));
    vlSelf->__PVT___T_496 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 9U)));
    vlSelf->__PVT___T_497 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_498 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_499 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_500 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_501 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_502 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_505 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_506 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_507 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_508 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_509 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_510 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_511 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_512 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_515 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_516 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_517 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_518 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_519 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_520 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_521 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_522 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[0U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_525 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | vlSelf->__VdfgTmp_hee7a4229__0[1U]));
    vlSelf->__PVT___T_526 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 1U)));
    vlSelf->__PVT___T_527 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 2U)));
    vlSelf->__PVT___T_528 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 3U)));
    vlSelf->__PVT___T_529 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 4U)));
    vlSelf->__PVT___T_530 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 5U)));
    vlSelf->__PVT___T_531 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 6U)));
    vlSelf->__PVT___T_532 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 7U)));
    vlSelf->__PVT___T_535 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 8U)));
    vlSelf->__PVT___T_536 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 9U)));
    vlSelf->__PVT___T_537 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_538 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_539 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_540 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_541 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_542 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_545 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_546 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_547 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_548 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_549 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_550 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_551 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_552 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_555 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_556 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_557 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_558 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_559 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_560 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_561 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_562 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[1U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_565 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | vlSelf->__VdfgTmp_hee7a4229__0[2U]));
    vlSelf->__PVT___T_566 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 1U)));
    vlSelf->__PVT___T_567 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 2U)));
    vlSelf->__PVT___T_568 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 3U)));
    vlSelf->__PVT___T_569 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 4U)));
    vlSelf->__PVT___T_570 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 5U)));
    vlSelf->__PVT___T_571 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 6U)));
    vlSelf->__PVT___T_572 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 7U)));
    vlSelf->__PVT___T_575 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 8U)));
    vlSelf->__PVT___T_576 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 9U)));
    vlSelf->__PVT___T_577 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_578 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_579 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_580 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_581 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_582 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_585 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_586 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_587 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_588 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_589 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_590 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_591 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_592 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_595 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_596 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_597 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_598 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_599 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_600 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_601 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_602 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[2U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_605 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | vlSelf->__VdfgTmp_hee7a4229__0[3U]));
    vlSelf->__PVT___T_606 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 1U)));
    vlSelf->__PVT___T_607 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 2U)));
    vlSelf->__PVT___T_608 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 3U)));
    vlSelf->__PVT___T_609 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 4U)));
    vlSelf->__PVT___T_610 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 5U)));
    vlSelf->__PVT___T_611 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 6U)));
    vlSelf->__PVT___T_612 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 7U)));
    vlSelf->__PVT___T_615 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 8U)));
    vlSelf->__PVT___T_616 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 9U)));
    vlSelf->__PVT___T_617 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xaU)));
    vlSelf->__PVT___T_618 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xbU)));
    vlSelf->__PVT___T_619 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xcU)));
    vlSelf->__PVT___T_620 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xdU)));
    vlSelf->__PVT___T_621 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xeU)));
    vlSelf->__PVT___T_622 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0xfU)));
    vlSelf->__PVT___T_625 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x10U)));
    vlSelf->__PVT___T_626 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x11U)));
    vlSelf->__PVT___T_627 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x12U)));
    vlSelf->__PVT___T_628 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x13U)));
    vlSelf->__PVT___T_629 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x14U)));
    vlSelf->__PVT___T_630 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x15U)));
    vlSelf->__PVT___T_631 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x16U)));
    vlSelf->__PVT___T_632 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x17U)));
    vlSelf->__PVT___T_635 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x18U)));
    vlSelf->__PVT___T_636 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x19U)));
    vlSelf->__PVT___T_637 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1aU)));
    vlSelf->__PVT___T_638 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1bU)));
    vlSelf->__PVT___T_639 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1cU)));
    vlSelf->__PVT___T_640 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1dU)));
    vlSelf->__PVT___T_641 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
                                   | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                      >> 0x1eU)));
    vlSelf->__PVT___T_642 = ((IData)(vlSelf->__PVT__is_alloc) 
                             | (vlSelf->__VdfgTmp_hee7a4229__0[3U] 
                                >> 0x1fU));
    vlSelf->__PVT___T_485 = (1U & ((IData)(vlSelf->__PVT__is_alloc) 
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
    vlSelf->__PVT___T_650 = (1U & (((~ (IData)(vlSelf->__PVT___replace_wire_T)) 
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
        if (__PVT___hit0_T_2) {
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
    } else if (__PVT___hit0_T_2) {
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
    vlSelf->__PVT__hit0 = ((IData)(__PVT___dirty0_T) 
                           & (IData)(__PVT___hit0_T_2));
    vlSelf->__PVT___GEN_13 = ((((IData)(vlSelf->__PVT___T_650)
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
    vlSelf->io_fccache_hit = ((IData)(vlSelf->__PVT__hit0) 
                              | ((IData)(vlSelf->__PVT___dirty1_T) 
                                 & (vlSelf->__PVT___TagArray_ext_R1_data 
                                    == (vlSelf->__PVT__addr_reg 
                                        >> 0xaU))));
    vlSelf->__PVT___T_653 = ((IData)(vlSelf->io_fccache_hit) 
                             | (IData)(vlSelf->__PVT__is_alloc_reg));
    vlSelf->__PVT__wen = (((2U == (IData)(vlSelf->__PVT__state)) 
                           & (IData)(vlSelf->io_fccache_hit)) 
                          | ((IData)(vlSelf->__PVT__is_alloc) 
                             | ((IData)(vlSelf->__PVT__is_alloc_reg) 
                                & (2U == (IData)(vlSelf->__PVT__state)))));
    vlSelf->io_cpu_resp_valid = ((IData)(vlSelf->io_fccache_hit) 
                                 | ((~ (IData)((0U 
                                                != (IData)(vlSelf->__PVT__cpu_mask)))) 
                                    & (IData)(vlSelf->__PVT__is_alloc_reg)));
    vlSelf->io_axi_req_bits_rw = ((0U != (IData)(vlSelf->__PVT__state)) 
                                  & ((1U == (IData)(vlSelf->__PVT__state))
                                      ? ((~ (IData)(vlSelf->io_fccache_hit)) 
                                         & (~ (IData)(vlSelf->__PVT___T_650)))
                                      : ((2U == (IData)(vlSelf->__PVT__state))
                                          ? ((~ (IData)(vlSelf->__PVT___T_653)) 
                                             & (~ (IData)(vlSelf->__PVT___T_650)))
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
        if (vlSelf->io_fccache_hit) {
            if (vlSelf->__PVT__hit0) {
                vlSelf->__PVT___GEN_9 = __VdfgTmp_h082604b0__0;
                vlSelf->__PVT___GEN_10 = __VdfgTmp_h28f607fa__0;
            } else {
                vlSelf->__PVT___GEN_9 = __VdfgTmp_h6db892a9__0;
                vlSelf->__PVT___GEN_10 = __VdfgTmp_hb5f4fc5d__0;
            }
            __VdfgTmp_hf0d69e76__0 = 1U;
        } else {
            if ((1U & (IData)(vlSelf->__PVT___replace_wire_T))) {
                if (vlSelf->__PVT__is_alloc) {
                    vlSelf->__PVT___GEN_9 = __VdfgTmp_h6db892a9__0;
                    vlSelf->__PVT___GEN_10 = __VdfgTmp_hb5f4fc5d__0;
                } else {
                    vlSelf->__PVT___GEN_9 = 0U;
                    vlSelf->__PVT___GEN_10 = 0U;
                }
            } else if (vlSelf->__PVT__is_alloc) {
                vlSelf->__PVT___GEN_9 = __VdfgTmp_h082604b0__0;
                vlSelf->__PVT___GEN_10 = __VdfgTmp_h28f607fa__0;
            } else {
                vlSelf->__PVT___GEN_9 = 0U;
                vlSelf->__PVT___GEN_10 = 0U;
            }
            __VdfgTmp_hf0d69e76__0 = 0U;
        }
        __VdfgTmp_h1acee690__0 = (1U & (~ (IData)(vlSelf->io_fccache_hit)));
    } else {
        vlSelf->__PVT___GEN_9 = 0U;
        vlSelf->__PVT___GEN_10 = 0U;
        __VdfgTmp_hf0d69e76__0 = 0U;
        __VdfgTmp_h1acee690__0 = 0U;
    }
    vlSelf->__PVT___GEN_2 = ((IData)(__VdfgTmp_hf0d69e76__0) 
                             & (IData)(vlSelf->__PVT__hit0));
    vlSelf->__PVT___GEN_1 = ((~ (IData)(vlSelf->__PVT__hit0)) 
                             & (IData)(__VdfgTmp_hf0d69e76__0));
    vlSelf->__PVT___GEN_0 = ((~ (IData)(vlSelf->__PVT___replace_wire_T)) 
                             & (IData)(__VdfgTmp_h1acee690__0));
    vlSelf->__PVT___GEN = ((IData)(__VdfgTmp_h1acee690__0) 
                           & (IData)(vlSelf->__PVT___replace_wire_T));
}
