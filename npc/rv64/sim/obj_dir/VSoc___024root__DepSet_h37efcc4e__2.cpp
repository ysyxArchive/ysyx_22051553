// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0;
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0 = 0;
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
    CData/*0:0*/ Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h554e871c__0;
    Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h554e871c__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd23ed92e__0;
    Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd23ed92e__0 = 0;
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
    Soc__DOT__core__DOT__arbitor__DOT___GEN_11 = (1U 
                                                  & ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0) 
                                                     | ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                        >> 1U)));
    Soc__DOT__core__DOT__arbitor__DOT___GEN_10 = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                       >> 1U)) 
                                                     | (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h8a5bb8da__0)));
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
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5))));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6))));
    vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_haaad1b39__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))));
    if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[1U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[2U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[3U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[4U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[5U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[6U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[7U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[8U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[9U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xaU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xbU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xcU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xdU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xeU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xfU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x10U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x11U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x12U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x13U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x14U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x15U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x16U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x17U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x18U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x19U] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1aU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1bU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
            = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__is_alloc) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25305f44__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data 
                       >> 0x20U));
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[1U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[2U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[3U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[4U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[5U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[6U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[7U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[8U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[9U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xaU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xbU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xcU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xdU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xeU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0xfU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x10U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x11U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x12U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x13U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x14U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x15U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x16U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x17U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x18U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x19U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1aU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1bU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1cU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1dU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1eU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__wdata[0x1fU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_data 
                       >> 0x20U));
    }
    if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wdata);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___excute_io_wdata 
                       >> 0x20U));
    } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__is_alloc) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25305f44__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                       >> 0x20U));
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[1U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[2U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[3U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[4U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[5U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[6U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[7U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[8U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[9U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xaU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xbU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xcU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xdU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xeU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0xfU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x10U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x11U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x12U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x13U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x14U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x15U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x16U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x17U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x18U] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x19U] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1aU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1bU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1cU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1dU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1eU] 
            = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__wdata[0x1fU] 
            = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_data 
                       >> 0x20U));
    }
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_17) 
                  >> (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim))
               : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))
                   ? ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                       ? (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid)
                       : (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__rw_buf))
                   : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h661b8699__0) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__rw_buf)))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_17) 
                  >> (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim))
               : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))
                   ? ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                       ? (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid)
                       : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__rw_buf))
                   : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h661b8699__0) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__rw_buf)))));
    Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd23ed92e__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
           & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
              & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid))));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_h9d034845__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
           | (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid));
    vlSelf->__VdfgTmp_hc42be29e__0 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid)) 
                                      & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                                         | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN 
        = ((IData)(Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd23ed92e__0) 
           & (0U != vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_7 
        = ((~ (IData)((0U != vlSelf->Soc__DOT__core__DOT__ioformem__DOT__jump_addr))) 
           & (IData)(Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd23ed92e__0));
    if (vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2) {
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb = 0U;
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = 0ULL;
    } else if ((1U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))) {
        if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) {
            if (vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_6) {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & 0U);
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = 0ULL;
            } else {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wmask));
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
                    = vlSelf->Soc__DOT__core__DOT___excute_io_wdata;
            }
        } else if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) {
            if (vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid) {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & 0U);
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = 0ULL;
            } else {
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                    = (0xffU & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_wmask));
                vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
                    = vlSelf->Soc__DOT__core__DOT___excute_io_wdata;
            }
        } else {
            vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
                = (0xffU & (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_h9d034845__0) 
                             | ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count) 
                                > (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__data_count)))
                             ? 0U : vlSelf->Soc__DOT__core__DOT__ioformem__DOT__maskbuffer_ext__DOT__Memory
                            [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count]));
            vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
                = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_h9d034845__0)
                    ? 0ULL : (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_7_ext__DOT__Memory
                                               [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_6_ext__DOT__Memory
                                                             [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count])) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_5_ext__DOT__Memory
                                                                [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count])) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_4_ext__DOT__Memory
                                                                   [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_3_ext__DOT__Memory
                                                                      [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count] 
                                                                      << 0x18U) 
                                                                     | ((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_2_ext__DOT__Memory
                                                                         [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count] 
                                                                         << 0x10U) 
                                                                        | ((vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_1_ext__DOT__Memory
                                                                            [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count] 
                                                                            << 8U) 
                                                                           | vlSelf->Soc__DOT__core__DOT__ioformem__DOT__VmemBuffer_0_ext__DOT__Memory
                                                                           [vlSelf->Soc__DOT__core__DOT__ioformem__DOT__r_count]))))))))));
        }
    } else if ((2U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))) {
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
            = (0xffU & 0xffU);
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
            = (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__read[
                                (((IData)(0x3fU) + 
                                  (0x3ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                             << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__read[
                                       (((IData)(0x1fU) 
                                         + (0x3ffU 
                                            & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                               << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__read[
                                     (0x1eU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                               << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__w_count) 
                                  << 6U)))));
    } else {
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb 
            = (0xffU & (- (IData)((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                         >> 2U)))));
        vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data 
            = ((4U & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer))
                ? (((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__read[
                                    (((IData)(0x3fU) 
                                      + (0x3ffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                                   << 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                                        << 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                                        << 6U))))) 
                   | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                        << 6U))) ? 0ULL
                        : ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__read[
                                           (((IData)(0x1fU) 
                                             + (0x3ffU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                                   << 6U))) 
                                            >> 5U)])) 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                                    << 6U))))) 
                      | ((QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__read[
                                         (0x1eU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                                   << 1U))])) 
                         >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__w_count) 
                                      << 6U))))) : 0ULL);
    }
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall 
        = ((IData)(vlSelf->__VdfgTmp_hc42be29e__0) 
           | ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
              & ((~ ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT____VdfgTmp_hd1afc83c__0))) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hc3ceced8__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall)) 
                 & (~ (IData)((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))))));
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall) 
           | ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
              | (0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hc3ceced8__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag))))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hc3ceced8__0) 
            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                        | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                           | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__MULDIV_stall)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag)))))))) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0) 
           | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                    & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7bd08a2f__0)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h23e7ec03__0) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7bd08a2f__0)))));
    vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_1 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_2)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)));
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_2 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_2));
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
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_1)
            ? 0U : (0xfffffff8U & vlSelf->Soc__DOT__core__DOT__ioformem__DOT__begin_waddr));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose 
        = (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))
             ? (((IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_9) 
                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_12)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_5))) 
                | (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_2))
             : (IData)(vlSelf->__VdfgTmp_hc42be29e__0))
            ? 9U : (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                     & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                        | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h661b8699__0))))
                     ? 0xaU : (((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                   | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h661b8699__0))))
                                ? 0xcU : 0U)));
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way0 
            = (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                       >> 5U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way1 
            = (0x1fU & ((IData)(1U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way2 
            = (0x1fU & ((IData)(2U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way3 
            = (0x1fU & ((IData)(3U) + (0xcU & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr_reg 
                                               >> 5U))));
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way0 
            = (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                       >> 5U));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way1 
            = (0x1fU & ((IData)(1U) + (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way2 
            = (0x1fU & ((IData)(2U) + (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 5U))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__choose_way3 
            = (0x1fU & ((IData)(3U) + (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 5U))));
    }
    vlSelf->__VdfgTmp_hcef23daa__0 = vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace_ext__DOT__Memory
        [(3U & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                >> 7U))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_14 
        = (0xffffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid) 
                      >> (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 5U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_17 
        = (0xffffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid) 
                      >> (0x1fU & ((IData)(1U) + (0xcU 
                                                  & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                     >> 5U))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_20 
        = (0xffffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid) 
                      >> (0x1fU & ((IData)(2U) + (0xcU 
                                                  & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                     >> 5U))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_23 
        = (0xffffU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid) 
                      >> (0x1fU & ((IData)(3U) + (0xcU 
                                                  & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                     >> 5U))))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                  >> 5U))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0xfU & ((IData)(1U) + (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 5U))))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0xfU & ((IData)(2U) + (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 5U))))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R3_data 
        = vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
        [(0xfU & ((IData)(3U) + (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                         >> 5U))))];
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___replace_ext_R8_data 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T)
            ? (IData)(vlSelf->__VdfgTmp_hcef23daa__0)
            : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_14) 
           & ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data 
               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                   >> 9U)) & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit1 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_17) 
           & ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data 
               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                   >> 9U)) & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit2 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_20) 
           & ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data 
               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                   >> 9U)) & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___victim_T_23) 
           & ((vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R3_data 
               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                   >> 9U)) & (0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit1) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit2) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit3))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_1 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__wen) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2));
    vlSelf->__VdfgTmp_he9ded5ef__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2) 
                                      & ((IData)(vlSelf->__VdfgTmp_hcef23daa__0) 
                                         >> 1U));
    vlSelf->__VdfgTmp_he9a20668__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2) 
                                      & (IData)(vlSelf->__VdfgTmp_hcef23daa__0));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__wen)) 
                 | ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2) 
                    | (5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__ren = 
        ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__wen)) 
         & (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
             & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2)) 
            | (1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h621a9231__0 
        = (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2)
                     ? ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)
                         ? (0xcU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                    >> 5U)) : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit1)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0xcU 
                                                    & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                       >> 5U)))
                                                : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit2)
                                                    ? 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xcU 
                                                     & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                        >> 5U)))
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit3)
                                                     ? 
                                                    ((IData)(3U) 
                                                     + 
                                                     (0xcU 
                                                      & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                         >> 5U)))
                                                     : 0U))))
                     : (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hee43b865__0)));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__wen) {
        Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h554e871c__0 
            = (1U & (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___hit_T_2)));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr 
            = (0xfU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h621a9231__0));
    } else {
        Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h554e871c__0 = 0U;
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_0_0_ext__W0_addr = 0U;
    }
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_0 
        = ((IData)(Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h554e871c__0) 
           & (5U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN 
        = ((5U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h554e871c__0));
    vlSelf->__VdfgTmp_h621e0c7f__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
                                      & (IData)(vlSelf->__VdfgTmp_hd014354f__0));
    vlSelf->__VdfgTmp_h6213b3c0__0 = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN) 
                                      & ((IData)(vlSelf->__VdfgTmp_hd014354f__0) 
                                         >> 1U));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__6(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__6\n"); );
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

void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__2(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__3(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__4(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__5(VSoc___024root* vlSelf);

void VSoc___024root___eval_nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSoc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSoc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSoc___024root___nba_sequent__TOP__2(vlSelf);
        VSoc___024root___nba_sequent__TOP__3(vlSelf);
        VSoc___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSoc___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VSoc___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSoc___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void VSoc___024root___eval_triggers__ico(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
void VSoc___024root___eval_ico(VSoc___024root* vlSelf);
void VSoc___024root___eval_triggers__act(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
void VSoc___024root___eval_act(VSoc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf);
#endif  // VL_DEBUG

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
                VL_FATAL_MT("vsrc/Soc.v", 10366, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("vsrc/Soc.v", 10366, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/Soc.v", 10366, "", "NBA region did not converge.");
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
