// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___ico_sequent__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ico_sequent__TOP__0\n"); );
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
        VSoc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VSoc___024root___eval_act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_ha00b3ec5__0;
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_ha00b3ec5__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_10;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_10 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_11;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_11 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_15;
    Soc__DOT__core__DOT__arbitor__DOT___GEN_15 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0 = 0;
    VlWide<8>/*255:0*/ __Vtemp_hda373ffc__0;
    VlWide<8>/*255:0*/ __Vtemp_hc9b9f8b9__0;
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp) 
              & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                    & (IData)(vlSelf->Soc__DOT__sram__DOT__bvalid)))));
    vlSelf->Soc__DOT__sram__DOT__awaddr = (((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1) 
                                            & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4))
                                            ? vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr
                                            : vlSelf->Soc__DOT__sram__DOT__awaddr_buffer);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9 
        = ((IData)(vlSelf->Soc__DOT__sram__DOT__rvalid) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__sram__DOT__rvalid)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                 & ((IData)(vlSelf->Soc__DOT__sram__DOT__rlast) 
                    & (IData)(vlSelf->Soc__DOT__sram__DOT__rvalid)))));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_10 = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                       >> 1U)) 
                                                     | (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0)));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_11 = (1U 
                                                  & ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0) 
                                                     | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                        >> 1U)));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_15 = (1U 
                                                  & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)) 
                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer)));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)));
    __Vtemp_hda373ffc__0[0U] = 0U;
    __Vtemp_hda373ffc__0[1U] = 0U;
    __Vtemp_hda373ffc__0[2U] = 0U;
    __Vtemp_hda373ffc__0[3U] = 0U;
    __Vtemp_hda373ffc__0[4U] = 0U;
    __Vtemp_hda373ffc__0[5U] = 0U;
    __Vtemp_hda373ffc__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                                    ? 
                                                   ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11)
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata)
                                                    : 
                                                   ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                      >> 1U) 
                                                     & (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11))
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata))));
    __Vtemp_hda373ffc__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                           ? ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11)
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata)
                                           : ((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                >> 1U) 
                                               & (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_11))
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
        = (((QData)((IData)(__Vtemp_hda373ffc__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hda373ffc__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hda373ffc__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    __Vtemp_hc9b9f8b9__0[0U] = 0U;
    __Vtemp_hc9b9f8b9__0[1U] = 0U;
    __Vtemp_hc9b9f8b9__0[2U] = 0U;
    __Vtemp_hc9b9f8b9__0[3U] = 0U;
    __Vtemp_hc9b9f8b9__0[4U] = 0U;
    __Vtemp_hc9b9f8b9__0[5U] = 0U;
    __Vtemp_hc9b9f8b9__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                                    ? 
                                                   ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)
                                                     ? 0ULL
                                                     : vlSelf->Soc__DOT__sram__DOT__rdata)
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)) 
                                                        | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                           >> 1U)))
                                                     ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                     : 0ULL))));
    __Vtemp_hc9b9f8b9__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_15)
                                           ? ((IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)
                                               ? 0ULL
                                               : vlSelf->Soc__DOT__sram__DOT__rdata)
                                           : ((1U & 
                                               ((~ (IData)(Soc__DOT__core__DOT__arbitor__DOT___GEN_10)) 
                                                | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                   >> 1U)))
                                               ? vlSelf->Soc__DOT__sram__DOT__rdata
                                               : 0ULL))) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
        = (((QData)((IData)(__Vtemp_hc9b9f8b9__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_hc9b9f8b9__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_hc9b9f8b9__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))));
    vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall 
        = (((~ (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)) 
            & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hdaebf54e__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall)) 
                 & (~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h5fc28a32__0))));
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_ha00b3ec5__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h5fc28a32__0));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hdaebf54e__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag))))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hdaebf54e__0) 
            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                        | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag))))))) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_ha00b3ec5__0) 
           | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                    & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_ha00b3ec5__0) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0)))));
    vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0)
            ? vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc
            : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                ? vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc
                : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3)
                    ? ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2)
                        ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc)
                        : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)
                            ? ((IData)(4U) + vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)
                            : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc))
                    : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc)));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__5(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8) {
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr = 0U;
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len = 0U;
    } else {
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr 
            = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__addr;
        vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len 
            = vlSelf->Soc__DOT__core__DOT__arbitor__DOT__burst_len;
    }
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
}

void VSoc___024root___eval_triggers__ico(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
void VSoc___024root___eval_triggers__act(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
void VSoc___024root___eval_nba(VSoc___024root* vlSelf);

void VSoc___024root___eval(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VSoc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VSoc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Soc.v", 8529, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VSoc___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("vsrc/Soc.v", 8529, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/Soc.v", 8529, "", "NBA region did not converge.");
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
