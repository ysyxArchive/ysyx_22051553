// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_ATTR_COLD void VSoc___024root___stl_sequent__TOP__1(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hf29a89aa__0;
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hf29a89aa__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0;
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0 = 0;
    VlWide<16>/*511:0*/ __Vtemp_h909e651c__0;
    VlWide<8>/*255:0*/ __Vtemp_h8b80d47b__0;
    VlWide<8>/*255:0*/ __Vtemp_h04cb280f__0;
    VlWide<8>/*255:0*/ __Vtemp_h8be0a2d3__0;
    VlWide<8>/*255:0*/ __Vtemp_h466d17dc__0;
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
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0)
            ? 0U : ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                     ? 1U : ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                             << 1U)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0) 
           | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | (0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0) 
           | ((0x6fU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0)) 
              | ((0x67U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))));
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
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 
        = ((0x1b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x233U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0x2b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                 | ((0x82b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x333U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x3b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x433U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x4b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x533U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | ((0x5b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x633U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                         | ((0x6b3U 
                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                            | ((0x733U 
                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                               | ((0x7b3U 
                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                  | ((0x1bU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x9bU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                        | ((0x29bU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                           | ((0x429bU 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                              | ((0x3bU 
                                                                  == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                 | ((0x803bU 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                    | ((0xbbU 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                       | ((0x2bbU 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                          | ((0x82bbU 
                                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                             | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0))))))))))))))))))))))))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0 
        = ((0x113U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x193U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x213U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x313U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x393U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x93U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                          | ((0x293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                             | (0x4293U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0 
        = ((0x33U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
           | ((0x8033U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
              | ((0xb3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                 | ((0x133U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                    | ((0x1b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                       | ((0x233U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                          | ((0x2b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                             | ((0x82b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                | ((0x333U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                   | ((0x3b3U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                      | ((0x433U == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
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
                                                           | (0x7b3U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))));
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
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                             << 5U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(2U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(3U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(2U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(4U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(3U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(5U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(4U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(6U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(5U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(7U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(6U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(8U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(7U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(9U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(8U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0xaU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(9U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0xbU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0xaU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0xcU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0xbU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0xdU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0xcU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0xeU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0xdU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0xfU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0xeU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x10U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0xfU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x11U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x10U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x12U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x11U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x13U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x12U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x14U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x13U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x15U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x14U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x16U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x15U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x17U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x16U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x18U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x17U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x19U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x18U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x1aU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x19U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x1bU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x1aU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x1cU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x1bU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x1dU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x1cU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x1eU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x1dU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x1fU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x1eU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                 ((IData)(0x20U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20[
                  ((IData)(0x1fU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359[0x1fU];
    }
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                             << 5U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(2U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(3U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(2U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(4U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(3U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(5U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(4U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(6U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(5U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(7U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(6U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(8U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(7U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(9U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(8U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0xaU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(9U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0xbU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0xaU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0xcU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0xbU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0xdU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0xcU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0xeU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0xdU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0xfU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                             << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0xeU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x10U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0xfU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x11U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x10U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x12U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x11U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x13U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x12U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x14U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x13U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x15U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x14U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x16U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x15U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x17U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x16U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x18U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x17U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x19U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x18U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x1aU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x19U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x1bU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x1aU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x1cU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x1bU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x1dU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x1cU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x1eU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x1dU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x1fU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x1eU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                 ((IData)(0x20U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20[
                  ((IData)(0x1fU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
    } else {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359[0x1fU];
    }
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0)
            ? 0U : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                     ? 1U : ((0x83U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                              ? 2U : ((0x103U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                       ? 3U : ((0x203U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                ? 5U
                                                : (
                                                   (0x283U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 6U
                                                    : 
                                                   ((0x303U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 7U
                                                     : 
                                                    ((0x183U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     << 2U))))))));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 
        = ((0x1bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
           | ((0x9bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
              | ((0x29bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                 | ((0x429bU == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)))));
    __Vtemp_h909e651c__0[0U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr));
    __Vtemp_h909e651c__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h909e651c__0[2U] = ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                   ? (0xfffffU & (IData)(
                                                         (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                          >> 0xcU)))
                                   : 0U) << 0xcU) | 
                                ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    __Vtemp_h909e651c__0[3U] = (- (IData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)));
    __Vtemp_h909e651c__0[4U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0x14U) | ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                                 ? 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                            >> 0xcU)))
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid) 
                                                   & (IData)(
                                                             (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                              >> 0x14U))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)
                                                      ? 
                                                     (0x3ffU 
                                                      & (IData)(
                                                                (vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data 
                                                                 >> 0x15U)))
                                                      : 0U) 
                                                    << 1U))));
    __Vtemp_h909e651c__0[5U] = (((IData)((0xfffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0xcU) | ((IData)(
                                                     ((0xfffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h909e651c__0[6U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h0bfbf776__0) 
                                              << 5U) 
                                             | (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr)));
    __Vtemp_h909e651c__0[7U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h909e651c__0[8U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h51515078__0) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->__VdfgTmp_h0bbd64f5__0) 
                                                 << 5U) 
                                                | ((IData)(vlSelf->__VdfgTmp_h0564c6e1__0) 
                                                   << 1U))));
    __Vtemp_h909e651c__0[9U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h909e651c__0[0xaU] = vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr;
    __Vtemp_h909e651c__0[0xbU] = 0U;
    __Vtemp_h909e651c__0[0xcU] = 0U;
    __Vtemp_h909e651c__0[0xdU] = 0U;
    __Vtemp_h909e651c__0[0xeU] = 0U;
    __Vtemp_h909e651c__0[0xfU] = 0U;
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
        = (((QData)((IData)(__Vtemp_h909e651c__0[(((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & (((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                           ? 2U
                                                           : 
                                                          (((0x67U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                            | ((0x63U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                               | ((0xe3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                  | ((0x263U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                     | ((0x2e3U 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x363U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                           | ((0x3e3U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                              | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                            ? 0U
                                                            : 
                                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                             ? 3U
                                                             : 
                                                            ((1U 
                                                              & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                                  | ((0x4b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                     | (0x533U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                                | ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                              ? 0U
                                                              : 5U)))))) 
                                                       << 6U))) 
                                                  >> 5U)])) 
            << ((0U == (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                            ? 1U : 
                                           ((0x6fU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                             ? 2U : 
                                            (((0x67U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                              | ((0x63U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                 | ((0xe3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | ((0x263U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0x2e3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | ((0x363U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x3e3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                               ? 3U
                                               : ((1U 
                                                   & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                       | ((0x4b3U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                          | (0x533U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                     | ((0x1bU 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x9bU 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                           | ((0x29bU 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                              | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                   ? 0U
                                                   : 5U)))))) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & (((0x13U 
                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                               ? 1U
                                               : ((0x6fU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                   ? 2U
                                                   : 
                                                  (((0x67U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | ((0x63U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0xe3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | ((0x263U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x2e3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | ((0x363U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                   | ((0x3e3U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                      | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                          | ((0x4b3U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                             | (0x533U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                        | ((0x1bU 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                           | ((0x9bU 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                              | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                      ? 0U
                                                      : 5U)))))) 
                                            << 6U))))) 
           | (((0U == (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                           ? 1U : (
                                                   (0x6fU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                    ? 2U
                                                    : 
                                                   (((0x67U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x63U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                        | ((0xe3U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                           | ((0x263U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                              | ((0x2e3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                 | ((0x363U 
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                    | ((0x3e3U 
                                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                       | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                      ? 3U
                                                      : 
                                                     ((1U 
                                                       & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                           | ((0x4b3U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                              | (0x533U 
                                                                 == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                         | ((0x1bU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                            | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                               | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                       ? 0U
                                                       : 5U)))))) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_h909e651c__0[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((0x13U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x6fU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                                             ? 2U
                                                                             : 
                                                                            (((0x67U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                              | ((0x63U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0xe3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x263U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x2e3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x363U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x3e3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                                              ? 0U
                                                                              : 
                                                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                                               ? 3U
                                                                               : 
                                                                              ((1U 
                                                                                & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                                                | ((0x4b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | (0x533U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                                | ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                                                ? 0U
                                                                                : 5U)))))) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((0x13U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                            ? 2U
                                                            : 
                                                           (((0x67U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x63U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | ((0xe3U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                   | ((0x263U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                      | ((0x2e3U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                         | ((0x363U 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                            | ((0x3e3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                              ? 3U
                                                              : 
                                                             ((1U 
                                                               & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                                   | ((0x4b3U 
                                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                      | (0x533U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                                | ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                               ? 0U
                                                               : 5U)))))) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp_h909e651c__0[
                                 (0xeU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                            ? 0U : 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                             ? 1U : 
                                            ((0x6fU 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                              ? 2U : 
                                             (((0x67U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                               | ((0x63U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                  | ((0xe3U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x263U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                        | ((0x2e3U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                           | ((0x363U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                              | ((0x3e3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                               ? 0U
                                               : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                        | ((0x4b3U 
                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                           | (0x533U 
                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                      | ((0x1bU 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                         | ((0x9bU 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                            | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                               | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                    ? 0U
                                                    : 5U)))))) 
                                          << 1U))])) 
                 >> (0x1fU & (((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                         ? 1U : ((0x6fU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                                                  ? 2U
                                                  : 
                                                 (((0x67U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   | ((0x63U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                      | ((0xe3U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                         | ((0x263U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                            | ((0x2e3U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                               | ((0x363U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                  | ((0x3e3U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                         | ((0x4b3U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                            | (0x533U 
                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                       | ((0x1bU 
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                          | ((0x9bU 
                                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                             | ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                     ? 0U
                                                     : 5U)))))) 
                              << 6U)))));
    vlSelf->__VdfgTmp_h4fff9582__0 = (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5) 
                                       | ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                          | ((0x83U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                             | ((0x103U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                | ((0x203U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   | ((0x283U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                      | ((0x303U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                         | ((0x183U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                            | ((0x23U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                               | ((0xa3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                  | ((0x123U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                     | ((0x1a3U 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x13U 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                           | ((0x113U 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                              | ((0x193U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x213U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x313U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x393U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x93U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x293U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x4293U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x33U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xb3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | (0x133U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))))))))))))))))))))))))) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3));
    if ((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) {
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = 0x3fU;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = 0U;
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = 0U;
    } else {
        vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                ? 0U : ((0x63U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                         ? 2U : ((0xe3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                  ? 3U : ((0x263U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                           ? 4U : (
                                                   (0x2e3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 5U
                                                    : 
                                                   ((0x363U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 6U
                                                     : 
                                                    ((0x3e3U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0)
                                                       ? 0U
                                                       : 
                                                      ((0x113U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                        ? 4U
                                                        : 
                                                       ((0x193U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                         ? 6U
                                                         : 
                                                        ((0x213U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                          ? 8U
                                                          : 
                                                         ((0x313U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                           ? 9U
                                                           : 
                                                          ((0x393U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                            ? 0x10U
                                                            : 
                                                           ((0x93U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                             ? 0xdU
                                                             : 
                                                            ((0x293U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                              ? 0xeU
                                                              : 
                                                             ((0x4293U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                               ? 0xfU
                                                               : 
                                                              ((0x33U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                ? 0U
                                                                : 
                                                               ((0x8033U 
                                                                 == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                 ? 1U
                                                                 : 
                                                                ((0xb3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                  ? 0xaU
                                                                  : 
                                                                 ((0x133U 
                                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                   ? 4U
                                                                   : 
                                                                  ((0x1b3U 
                                                                    == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                    ? 6U
                                                                    : 
                                                                   ((0x233U 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                     ? 8U
                                                                     : 
                                                                    ((0x2b3U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                      ? 0xbU
                                                                      : 
                                                                     ((0x82b3U 
                                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                       ? 0xcU
                                                                       : 
                                                                      ((0x333U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                        ? 9U
                                                                        : 
                                                                       ((0x3b3U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                         ? 0x10U
                                                                         : 
                                                                        ((0x433U 
                                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                          ? 0x12U
                                                                          : 
                                                                         ((0x4b3U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                           ? 0x13U
                                                                           : 
                                                                          ((0x533U 
                                                                            == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                            ? 0x14U
                                                                            : 
                                                                           ((0x5b3U 
                                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                             ? 0x15U
                                                                             : 
                                                                            ((0x633U 
                                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                              ? 0x16U
                                                                              : 
                                                                             ((0x6b3U 
                                                                               == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                               ? 0x17U
                                                                               : 
                                                                              ((0x733U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                ? 0x18U
                                                                                : 
                                                                               ((0x7b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((0x9bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((0x29bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x2f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x373U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                                                 ? 0x28U
                                                                                 : 0x3fU))))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type 
            = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                         ? 3U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                  ? 2U : (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0) 
                                           | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))
                                           ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0)
                                                    ? 2U
                                                    : 
                                                   (((0x1bU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     | ((0x9bU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                        | ((0x29bU 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                           | (0x429bU 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)))))
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0)
                                                      ? 2U
                                                      : 
                                                     ((0xf3U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0)
                                                        ? 4U
                                                        : 
                                                       ((0x2f3U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                         ? 0U
                                                         : 
                                                        ((0x373U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                          ? 4U
                                                          : 
                                                         ((0x3f3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          << 2U))))))))))));
        vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type 
            = ((0x17U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                ? 1U : ((0x37U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0))
                         ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                                  ? 1U : ((IData)(vlSelf->__VdfgTmp_h4fff9582__0)
                                           ? 2U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0)
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x3f3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))));
    }
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0))));
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0 
        = (((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
            & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
               & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18)) 
                  & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                     | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                        & ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                           & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started))))))) 
           | ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18)) 
                 & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                        & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                    & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                       | (((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                           & (IData)(vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid)) 
                          & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                             | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)))))))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag)) 
                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid)) 
                    & (IData)(vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16)))));
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen 
        = ((~ (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
                | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                   | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                      | ((0x123U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                         | ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                            | ((0x13U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))))))) 
               | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0) 
                  | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))) 
           & ((0xf3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
              | ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                 | ((0x1f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                    | ((0x2f3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                       | ((0x373U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                          | (0U != (3U & (- (IData)(
                                                    (0x3f3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)
            ? ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC)
                : ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                    ? (IData)(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC)
                    : 0U)) : ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag)
                               ? (IData)(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr)
                               : ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag)
                                   ? ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                       ? (vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                          + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                       : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                           ? (0xfffffffeU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4) 
                                                 + (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm)))
                                           : 0x80000000U))
                                   : 0x80000000U)));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3) {
        __Vtemp_h8b80d47b__0[0U] = 0U;
        __Vtemp_h04cb280f__0[0U] = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) {
        __Vtemp_h8b80d47b__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace) 
                                       | ((IData)(1U) 
                                          << (0x1eU 
                                              & ((IData)(
                                                         (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                          >> 7U)) 
                                                 << 1U)))));
        __Vtemp_h04cb280f__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace 
                                    | ((0x1fU >= (0x3fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1eU 
                                                      & ((IData)(
                                                                 (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                  >> 7U)) 
                                                         << 1U)))))
                                        ? ((IData)(1U) 
                                           << (0x3fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x1eU 
                                                   & ((IData)(
                                                              (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                               >> 7U)) 
                                                      << 1U)))))
                                        : 0U));
    } else {
        __Vtemp_h8b80d47b__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace 
                                    | ((IData)(1U) 
                                       << (0x1eU & 
                                           ((IData)(
                                                    (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                     >> 7U)) 
                                            << 1U))));
        __Vtemp_h04cb280f__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace) 
                                       | ((0x1fU >= 
                                           (0x3fU & 
                                            ((IData)(1U) 
                                             + (0x1eU 
                                                & ((IData)(
                                                           (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                            >> 7U)) 
                                                   << 1U)))))
                                           ? ((IData)(1U) 
                                              << (0x3fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1eU 
                                                      & ((IData)(
                                                                 (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                                  >> 7U)) 
                                                         << 1U)))))
                                           : 0U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum) {
        __Vtemp_h8b80d47b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4385e347__0;
        __Vtemp_h04cb280f__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha6af1649__0;
    } else {
        __Vtemp_h8b80d47b__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hd6c4a0b5__0;
        __Vtemp_h04cb280f__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h93208993__0;
    }
    __Vtemp_h8b80d47b__0[2U] = 0U;
    __Vtemp_h8b80d47b__0[3U] = 0U;
    __Vtemp_h8b80d47b__0[4U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21)
                                 ? 0U : vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha3d0dbfe__0);
    __Vtemp_h8b80d47b__0[5U] = 0U;
    __Vtemp_h8b80d47b__0[6U] = 0U;
    __Vtemp_h8b80d47b__0[7U] = ((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha3d0dbfe__0
                                 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 5U))) ? 0U : (__Vtemp_h8b80d47b__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))))) 
           | (__Vtemp_h8b80d47b__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 5U))));
    __Vtemp_h04cb280f__0[2U] = 0U;
    __Vtemp_h04cb280f__0[3U] = 0U;
    __Vtemp_h04cb280f__0[4U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21)
                                 ? 0U : vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha4058e9a__0);
    __Vtemp_h04cb280f__0[5U] = 0U;
    __Vtemp_h04cb280f__0[6U] = 0U;
    __Vtemp_h04cb280f__0[7U] = ((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid)
                                 ? vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha4058e9a__0
                                 : 0U);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 5U))) ? 0U : (__Vtemp_h04cb280f__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 5U))))) 
           | (__Vtemp_h04cb280f__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 5U))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall)) 
                 & (~ (IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0))));
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hf29a89aa__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall) 
           | (IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h7fc958d4__0));
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 
        = ((((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type)) 
             & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12)) 
            | (((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type)) 
                & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8)) 
               | (((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)) 
                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9) 
                      & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8))) 
                  | ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type)) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12))))) 
           & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd)));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                 | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                       & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag))))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hf29a89aa__0) 
           | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                    & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hf29a89aa__0) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
              | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                 & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14) 
                    | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0)))));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 
        = (((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0) 
            & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
               & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14)) 
                     & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                        | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                           | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag))))))) 
           & ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag) 
                 | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3))));
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
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0 
        = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
            [(0x1eU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                       >> 6U))] == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                    >> 0xbU)) & (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid 
                                                 >> 
                                                 (0x1eU 
                                                  & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                     >> 6U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) 
           | ((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
               [(0x1fU & ((IData)(1U) + (0x1eU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                  >> 6U))))] 
               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                   >> 0xbU)) & ((0x1fU >= (0x3fU & 
                                           ((IData)(1U) 
                                            + (0x1eU 
                                               & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                  >> 6U)))))
                                 ? (vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid 
                                    >> (0x3fU & ((IData)(1U) 
                                                 + 
                                                 (0x1eU 
                                                  & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                     >> 6U)))))
                                 : 0U)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)) 
                 | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3) {
        __Vtemp_h8be0a2d3__0[0U] = 0U;
        __Vtemp_h466d17dc__0[0U] = 0U;
    } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) {
        __Vtemp_h8be0a2d3__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace) 
                                       | ((IData)(1U) 
                                          << (0x1eU 
                                              & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 6U)))));
        __Vtemp_h466d17dc__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace 
                                    | ((0x1fU >= (0x3fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1eU 
                                                      & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                         >> 6U)))))
                                        ? ((IData)(1U) 
                                           << (0x3fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x1eU 
                                                   & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                      >> 6U)))))
                                        : 0U));
    } else {
        __Vtemp_h8be0a2d3__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace 
                                    | ((IData)(1U) 
                                       << (0x1eU & 
                                           (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                            >> 6U))));
        __Vtemp_h466d17dc__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace) 
                                       | ((0x1fU >= 
                                           (0x3fU & 
                                            ((IData)(1U) 
                                             + (0x1eU 
                                                & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                   >> 6U)))))
                                           ? ((IData)(1U) 
                                              << (0x3fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1eU 
                                                      & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                         >> 6U)))))
                                           : 0U)));
    }
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum) {
        __Vtemp_h8be0a2d3__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4385e347__0;
        __Vtemp_h466d17dc__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha6af1649__0;
    } else {
        __Vtemp_h8be0a2d3__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hd6c4a0b5__0;
        __Vtemp_h466d17dc__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h93208993__0;
    }
    __Vtemp_h8be0a2d3__0[2U] = 0U;
    __Vtemp_h8be0a2d3__0[3U] = 0U;
    __Vtemp_h8be0a2d3__0[4U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21)
                                 ? 0U : vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha3d0dbfe__0);
    __Vtemp_h8be0a2d3__0[5U] = 0U;
    __Vtemp_h8be0a2d3__0[6U] = 0U;
    __Vtemp_h8be0a2d3__0[7U] = ((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha3d0dbfe__0
                                 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 5U))) ? 0U : (__Vtemp_h8be0a2d3__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))))) 
           | (__Vtemp_h8be0a2d3__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 5U))));
    __Vtemp_h466d17dc__0[2U] = 0U;
    __Vtemp_h466d17dc__0[3U] = 0U;
    __Vtemp_h466d17dc__0[4U] = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21)
                                 ? 0U : vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha4058e9a__0);
    __Vtemp_h466d17dc__0[5U] = 0U;
    __Vtemp_h466d17dc__0[6U] = 0U;
    __Vtemp_h466d17dc__0[7U] = ((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid)
                                 ? vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha4058e9a__0
                                 : 0U);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 5U))) ? 0U : (__Vtemp_h466d17dc__0[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 5U))))) 
           | (__Vtemp_h466d17dc__0[(7U & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 5U))));
}

VL_ATTR_COLD void VSoc___024root___stl_sequent__TOP__0(VSoc___024root* vlSelf);

VL_ATTR_COLD void VSoc___024root___eval_stl(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSoc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VSoc___024root___stl_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge Soc.__Vcellinp__sram__ARESETn or posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge Soc.__Vcellinp__sram__ARESETn or posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSoc___024root___ctor_var_reset(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT____Vcellinp__sram__ARESETn = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fdreg_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__dereg_op_a = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_op_b = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__dereg_branch_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__dereg_branch_addr = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_alu_op = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__dereg_shamt = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__dereg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__dereg_sd_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_t = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__dereg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__emreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__emreg_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__emreg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__mwreg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 = VL_RAND_RESET_I(16);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1 = VL_RAND_RESET_I(17);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(67, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg);
    VL_RAND_RESET_W(132, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg);
    VL_RAND_RESET_W(132, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(133, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1);
    VL_RAND_RESET_W(133, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2);
    VL_RAND_RESET_W(1064, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(536, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4);
    VL_RAND_RESET_W(1056, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder);
    VL_RAND_RESET_W(65, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33 = VL_RAND_RESET_Q(33);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = VL_RAND_RESET_I(7);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(66, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0 = 0;
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 = 0;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0 = 0;
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0 = 0;
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(24);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_count = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_count = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_buffer);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_14 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_15 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(16384, vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_16);
    VL_RAND_RESET_W(4096, vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_17);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 = 0;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 = 0;
    VL_ZERO_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h3afa7b4b__0);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0 = 0;
    VL_ZERO_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h14978eae__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R3_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset = VL_RAND_RESET_I(7);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_24 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1164);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_1465);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_2907 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_2913 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_2914 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4359);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 = VL_RAND_RESET_I(24);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h9c8f247f__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h499d2e06__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h0cf0809b__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha3d0dbfe__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4385e347__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hd6c4a0b5__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha4058e9a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha6af1649__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h93208993__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3383bb42__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc3b3ad4__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae91f__0 = 0;
    VL_ZERO_RESET_W(1008, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf1bb__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3340605c__0 = 0;
    VL_ZERO_RESET_W(992, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bf5d7__0);
    VL_ZERO_RESET_W(976, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bc9e3__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h33cb9e17__0 = 0;
    VL_ZERO_RESET_W(960, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bcdff__0);
    VL_ZERO_RESET_W(944, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba12b__0);
    VL_ZERO_RESET_W(80, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc431be3__0);
    VL_ZERO_RESET_W(928, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba527__0);
    VL_ZERO_RESET_W(96, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcc86d03f__0);
    VL_ZERO_RESET_W(912, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bb913__0);
    VL_ZERO_RESET_W(112, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hccc2b13a__0);
    VL_ZERO_RESET_W(896, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bbd0f__0);
    VL_ZERO_RESET_W(128, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd066bd1__0);
    VL_ZERO_RESET_W(880, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd15b__0);
    VL_ZERO_RESET_W(144, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd4e1a6e__0);
    VL_ZERO_RESET_W(864, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bd577__0);
    VL_ZERO_RESET_W(160, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcd8dd9a8__0);
    VL_ZERO_RESET_W(848, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ba943__0);
    VL_ZERO_RESET_W(176, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcdc1b4cd__0);
    VL_ZERO_RESET_W(832, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216bad5f__0);
    VL_ZERO_RESET_W(192, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce053d86__0);
    VL_ZERO_RESET_W(816, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a844b__0);
    VL_ZERO_RESET_W(208, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce46db2d__0);
    VL_ZERO_RESET_W(800, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8047__0);
    VL_ZERO_RESET_W(224, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hce88ef4d__0);
    VL_ZERO_RESET_W(784, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a9c73__0);
    VL_ZERO_RESET_W(240, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcef0cea8__0);
    VL_ZERO_RESET_W(768, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a986f__0);
    VL_ZERO_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf300ceb__0);
    VL_ZERO_RESET_W(752, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab7fb__0);
    VL_ZERO_RESET_W(272, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcf75bc50__0);
    VL_ZERO_RESET_W(736, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ab017__0);
    VL_ZERO_RESET_W(288, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfb7fe16__0);
    VL_ZERO_RESET_W(720, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a8c23__0);
    VL_ZERO_RESET_W(304, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hcfff23c3__0);
    VL_ZERO_RESET_W(704, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a883f__0);
    VL_ZERO_RESET_W(320, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8176758__0);
    VL_ZERO_RESET_W(688, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216964eb__0);
    VL_ZERO_RESET_W(336, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8548dbf__0);
    VL_ZERO_RESET_W(672, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216960e7__0);
    VL_ZERO_RESET_W(352, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8aadd9b__0);
    VL_ZERO_RESET_W(656, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697cd3__0);
    VL_ZERO_RESET_W(368, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8e60c1e__0);
    VL_ZERO_RESET_W(640, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216978cf__0);
    VL_ZERO_RESET_W(384, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9224e5d__0);
    VL_ZERO_RESET_W(624, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a949b__0);
    VL_ZERO_RESET_W(400, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc953b642__0);
    VL_ZERO_RESET_W(608, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a90b7__0);
    VL_ZERO_RESET_W(416, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9911f0c__0);
    VL_ZERO_RESET_W(592, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21696c83__0);
    VL_ZERO_RESET_W(432, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9eb7c69__0);
    VL_ZERO_RESET_W(576, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169689f__0);
    VL_ZERO_RESET_W(448, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca20bbaa__0);
    VL_ZERO_RESET_W(560, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169450b__0);
    VL_ZERO_RESET_W(464, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca5ce6d9__0);
    VL_ZERO_RESET_W(544, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694107__0);
    VL_ZERO_RESET_W(480, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hca9c2809__0);
    VL_ZERO_RESET_W(528, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21695d33__0);
    VL_ZERO_RESET_W(496, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc9373b6c__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169592f__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8f21087__0);
    VL_ZERO_RESET_W(496, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169753b__0);
    VL_ZERO_RESET_W(528, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc8d4ff84__0);
    VL_ZERO_RESET_W(480, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21697157__0);
    VL_ZERO_RESET_W(544, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc894b36a__0);
    VL_ZERO_RESET_W(464, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21694d63__0);
    VL_ZERO_RESET_W(560, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc857056f__0);
    VL_ZERO_RESET_W(448, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169497f__0);
    VL_ZERO_RESET_W(576, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc817c2ac__0);
    VL_ZERO_RESET_W(432, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216925ab__0);
    VL_ZERO_RESET_W(592, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2785969b__0);
    VL_ZERO_RESET_W(416, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216921a7__0);
    VL_ZERO_RESET_W(608, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27c5d847__0);
    VL_ZERO_RESET_W(400, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21693d93__0);
    VL_ZERO_RESET_W(624, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27f42412__0);
    VL_ZERO_RESET_W(384, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2169398f__0);
    VL_ZERO_RESET_W(640, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27444309__0);
    VL_ZERO_RESET_W(368, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216955db__0);
    VL_ZERO_RESET_W(656, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h268a81e6__0);
    VL_ZERO_RESET_W(352, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216951f7__0);
    VL_ZERO_RESET_W(672, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26cb4120__0);
    VL_ZERO_RESET_W(336, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21692dc3__0);
    VL_ZERO_RESET_W(688, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h260d1b55__0);
    VL_ZERO_RESET_W(320, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216929df__0);
    VL_ZERO_RESET_W(704, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h264dd4ae__0);
    VL_ZERO_RESET_W(304, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a05cb__0);
    VL_ZERO_RESET_W(720, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2a7ba095__0);
    VL_ZERO_RESET_W(288, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a01c7__0);
    VL_ZERO_RESET_W(736, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h25ba4845__0);
    VL_ZERO_RESET_W(272, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1df3__0);
    VL_ZERO_RESET_W(752, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h251249b0__0);
    VL_ZERO_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a19ef__0);
    VL_ZERO_RESET_W(768, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h255090f3__0);
    VL_ZERO_RESET_W(240, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a357b__0);
    VL_ZERO_RESET_W(784, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24803178__0);
    VL_ZERO_RESET_W(224, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a3197__0);
    VL_ZERO_RESET_W(800, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h24c0f63e__0);
    VL_ZERO_RESET_W(208, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a0da3__0);
    VL_ZERO_RESET_W(816, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2403e25b__0);
    VL_ZERO_RESET_W(192, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a09bf__0);
    VL_ZERO_RESET_W(832, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2441a6b0__0);
    VL_ZERO_RESET_W(176, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae56b__0);
    VL_ZERO_RESET_W(848, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h239060f7__0);
    VL_ZERO_RESET_W(160, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ae167__0);
    VL_ZERO_RESET_W(864, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23d02b23__0);
    VL_ZERO_RESET_W(144, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216afd53__0);
    VL_ZERO_RESET_W(880, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h2310e976__0);
    VL_ZERO_RESET_W(128, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216af94f__0);
    VL_ZERO_RESET_W(896, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h23268fb5__0);
    VL_ZERO_RESET_W(112, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a151b__0);
    VL_ZERO_RESET_W(912, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22a4871a__0);
    VL_ZERO_RESET_W(96, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216a1137__0);
    VL_ZERO_RESET_W(928, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h22ead0c4__0);
    VL_ZERO_RESET_W(80, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216aed03__0);
    VL_ZERO_RESET_W(944, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h222814b1__0);
    VL_ZERO_RESET_W(960, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h26645472__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 = 0;
    VL_ZERO_RESET_W(976, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a66ea1__0);
    VL_ZERO_RESET_W(992, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e5ad61__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0 = 0;
    VL_ZERO_RESET_W(1008, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212f1314__0);
    VL_ZERO_RESET_W(912, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4cb22775__0);
    VL_ZERO_RESET_W(880, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4cb45f3f__0);
    VL_ZERO_RESET_W(848, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4cb61f61__0);
    VL_ZERO_RESET_W(816, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4caad82b__0);
    VL_ZERO_RESET_W(784, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d4db6ed__0);
    VL_ZERO_RESET_W(752, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d6bc617__0);
    VL_ZERO_RESET_W(720, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d41fe79__0);
    VL_ZERO_RESET_W(688, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d4cf903__0);
    VL_ZERO_RESET_W(656, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d7ac125__0);
    VL_ZERO_RESET_W(624, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d43c6ef__0);
    VL_ZERO_RESET_W(592, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d7ece91__0);
    VL_ZERO_RESET_W(560, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d44391b__0);
    VL_ZERO_RESET_W(528, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4c9110dd__0);
    VL_ZERO_RESET_W(496, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d7820c7__0);
    VL_ZERO_RESET_W(464, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4c953869__0);
    VL_ZERO_RESET_W(432, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4c9f3833__0);
    VL_ZERO_RESET_W(400, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4c89e0d5__0);
    VL_ZERO_RESET_W(368, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4c93215f__0);
    VL_ZERO_RESET_W(336, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4c8dc8c1__0);
    VL_ZERO_RESET_W(304, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4c94b8cb__0);
    VL_ZERO_RESET_W(272, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4cad334d__0);
    VL_ZERO_RESET_W(240, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d4b43b7__0);
    VL_ZERO_RESET_W(208, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca17bd9__0);
    VL_ZERO_RESET_W(176, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4cae7ba3__0);
    VL_ZERO_RESET_W(144, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca40285__0);
    VL_ZERO_RESET_W(112, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca3028f__0);
    VL_ZERO_RESET_W(80, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4d580af1__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca67bbb__0 = 0;
    VL_ZERO_RESET_W(976, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4cbe0e09__0);
    VL_ZERO_RESET_W(944, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4cb02713__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vi0]);
    }
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0 = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R1_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R2_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R3_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset = VL_RAND_RESET_I(7);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_24 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1164);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_1465);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_2907 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_2913 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_2914 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4359);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 = VL_RAND_RESET_I(24);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h9c8f247f__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h499d2e06__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h0cf0809b__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha3d0dbfe__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4385e347__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hd6c4a0b5__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha4058e9a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha6af1649__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h93208993__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3383bb42__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcc3b3ad4__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae91f__0 = 0;
    VL_ZERO_RESET_W(1008, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bf1bb__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3340605c__0 = 0;
    VL_ZERO_RESET_W(992, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bf5d7__0);
    VL_ZERO_RESET_W(976, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bc9e3__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h33cb9e17__0 = 0;
    VL_ZERO_RESET_W(960, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bcdff__0);
    VL_ZERO_RESET_W(944, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba12b__0);
    VL_ZERO_RESET_W(80, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcc431be3__0);
    VL_ZERO_RESET_W(928, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba527__0);
    VL_ZERO_RESET_W(96, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcc86d03f__0);
    VL_ZERO_RESET_W(912, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bb913__0);
    VL_ZERO_RESET_W(112, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hccc2b13a__0);
    VL_ZERO_RESET_W(896, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bbd0f__0);
    VL_ZERO_RESET_W(128, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd066bd1__0);
    VL_ZERO_RESET_W(880, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd15b__0);
    VL_ZERO_RESET_W(144, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd4e1a6e__0);
    VL_ZERO_RESET_W(864, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bd577__0);
    VL_ZERO_RESET_W(160, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcd8dd9a8__0);
    VL_ZERO_RESET_W(848, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ba943__0);
    VL_ZERO_RESET_W(176, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcdc1b4cd__0);
    VL_ZERO_RESET_W(832, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216bad5f__0);
    VL_ZERO_RESET_W(192, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce053d86__0);
    VL_ZERO_RESET_W(816, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a844b__0);
    VL_ZERO_RESET_W(208, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce46db2d__0);
    VL_ZERO_RESET_W(800, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8047__0);
    VL_ZERO_RESET_W(224, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hce88ef4d__0);
    VL_ZERO_RESET_W(784, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a9c73__0);
    VL_ZERO_RESET_W(240, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcef0cea8__0);
    VL_ZERO_RESET_W(768, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a986f__0);
    VL_ZERO_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf300ceb__0);
    VL_ZERO_RESET_W(752, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab7fb__0);
    VL_ZERO_RESET_W(272, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcf75bc50__0);
    VL_ZERO_RESET_W(736, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ab017__0);
    VL_ZERO_RESET_W(288, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfb7fe16__0);
    VL_ZERO_RESET_W(720, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a8c23__0);
    VL_ZERO_RESET_W(304, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hcfff23c3__0);
    VL_ZERO_RESET_W(704, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a883f__0);
    VL_ZERO_RESET_W(320, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8176758__0);
    VL_ZERO_RESET_W(688, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216964eb__0);
    VL_ZERO_RESET_W(336, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8548dbf__0);
    VL_ZERO_RESET_W(672, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216960e7__0);
    VL_ZERO_RESET_W(352, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8aadd9b__0);
    VL_ZERO_RESET_W(656, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697cd3__0);
    VL_ZERO_RESET_W(368, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8e60c1e__0);
    VL_ZERO_RESET_W(640, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216978cf__0);
    VL_ZERO_RESET_W(384, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9224e5d__0);
    VL_ZERO_RESET_W(624, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a949b__0);
    VL_ZERO_RESET_W(400, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc953b642__0);
    VL_ZERO_RESET_W(608, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a90b7__0);
    VL_ZERO_RESET_W(416, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9911f0c__0);
    VL_ZERO_RESET_W(592, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21696c83__0);
    VL_ZERO_RESET_W(432, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9eb7c69__0);
    VL_ZERO_RESET_W(576, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169689f__0);
    VL_ZERO_RESET_W(448, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca20bbaa__0);
    VL_ZERO_RESET_W(560, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169450b__0);
    VL_ZERO_RESET_W(464, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca5ce6d9__0);
    VL_ZERO_RESET_W(544, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694107__0);
    VL_ZERO_RESET_W(480, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hca9c2809__0);
    VL_ZERO_RESET_W(528, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21695d33__0);
    VL_ZERO_RESET_W(496, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc9373b6c__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169592f__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8f21087__0);
    VL_ZERO_RESET_W(496, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169753b__0);
    VL_ZERO_RESET_W(528, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc8d4ff84__0);
    VL_ZERO_RESET_W(480, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21697157__0);
    VL_ZERO_RESET_W(544, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc894b36a__0);
    VL_ZERO_RESET_W(464, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21694d63__0);
    VL_ZERO_RESET_W(560, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc857056f__0);
    VL_ZERO_RESET_W(448, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169497f__0);
    VL_ZERO_RESET_W(576, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc817c2ac__0);
    VL_ZERO_RESET_W(432, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216925ab__0);
    VL_ZERO_RESET_W(592, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2785969b__0);
    VL_ZERO_RESET_W(416, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216921a7__0);
    VL_ZERO_RESET_W(608, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27c5d847__0);
    VL_ZERO_RESET_W(400, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21693d93__0);
    VL_ZERO_RESET_W(624, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27f42412__0);
    VL_ZERO_RESET_W(384, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2169398f__0);
    VL_ZERO_RESET_W(640, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27444309__0);
    VL_ZERO_RESET_W(368, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216955db__0);
    VL_ZERO_RESET_W(656, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h268a81e6__0);
    VL_ZERO_RESET_W(352, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216951f7__0);
    VL_ZERO_RESET_W(672, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26cb4120__0);
    VL_ZERO_RESET_W(336, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21692dc3__0);
    VL_ZERO_RESET_W(688, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h260d1b55__0);
    VL_ZERO_RESET_W(320, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216929df__0);
    VL_ZERO_RESET_W(704, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h264dd4ae__0);
    VL_ZERO_RESET_W(304, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a05cb__0);
    VL_ZERO_RESET_W(720, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2a7ba095__0);
    VL_ZERO_RESET_W(288, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a01c7__0);
    VL_ZERO_RESET_W(736, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h25ba4845__0);
    VL_ZERO_RESET_W(272, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1df3__0);
    VL_ZERO_RESET_W(752, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h251249b0__0);
    VL_ZERO_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a19ef__0);
    VL_ZERO_RESET_W(768, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h255090f3__0);
    VL_ZERO_RESET_W(240, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a357b__0);
    VL_ZERO_RESET_W(784, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24803178__0);
    VL_ZERO_RESET_W(224, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a3197__0);
    VL_ZERO_RESET_W(800, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h24c0f63e__0);
    VL_ZERO_RESET_W(208, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a0da3__0);
    VL_ZERO_RESET_W(816, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2403e25b__0);
    VL_ZERO_RESET_W(192, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a09bf__0);
    VL_ZERO_RESET_W(832, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2441a6b0__0);
    VL_ZERO_RESET_W(176, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae56b__0);
    VL_ZERO_RESET_W(848, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h239060f7__0);
    VL_ZERO_RESET_W(160, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ae167__0);
    VL_ZERO_RESET_W(864, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23d02b23__0);
    VL_ZERO_RESET_W(144, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216afd53__0);
    VL_ZERO_RESET_W(880, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h2310e976__0);
    VL_ZERO_RESET_W(128, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216af94f__0);
    VL_ZERO_RESET_W(896, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h23268fb5__0);
    VL_ZERO_RESET_W(112, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a151b__0);
    VL_ZERO_RESET_W(912, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22a4871a__0);
    VL_ZERO_RESET_W(96, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216a1137__0);
    VL_ZERO_RESET_W(928, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h22ead0c4__0);
    VL_ZERO_RESET_W(80, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216aed03__0);
    VL_ZERO_RESET_W(944, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h222814b1__0);
    VL_ZERO_RESET_W(960, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h26645472__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 = 0;
    VL_ZERO_RESET_W(976, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a66ea1__0);
    VL_ZERO_RESET_W(992, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e5ad61__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0 = 0;
    VL_ZERO_RESET_W(1008, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212f1314__0);
    VL_ZERO_RESET_W(912, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4cb22775__0);
    VL_ZERO_RESET_W(880, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4cb45f3f__0);
    VL_ZERO_RESET_W(848, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4cb61f61__0);
    VL_ZERO_RESET_W(816, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4caad82b__0);
    VL_ZERO_RESET_W(784, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d4db6ed__0);
    VL_ZERO_RESET_W(752, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d6bc617__0);
    VL_ZERO_RESET_W(720, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d41fe79__0);
    VL_ZERO_RESET_W(688, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d4cf903__0);
    VL_ZERO_RESET_W(656, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d7ac125__0);
    VL_ZERO_RESET_W(624, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d43c6ef__0);
    VL_ZERO_RESET_W(592, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d7ece91__0);
    VL_ZERO_RESET_W(560, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d44391b__0);
    VL_ZERO_RESET_W(528, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4c9110dd__0);
    VL_ZERO_RESET_W(496, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d7820c7__0);
    VL_ZERO_RESET_W(464, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4c953869__0);
    VL_ZERO_RESET_W(432, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4c9f3833__0);
    VL_ZERO_RESET_W(400, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4c89e0d5__0);
    VL_ZERO_RESET_W(368, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4c93215f__0);
    VL_ZERO_RESET_W(336, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4c8dc8c1__0);
    VL_ZERO_RESET_W(304, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4c94b8cb__0);
    VL_ZERO_RESET_W(272, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4cad334d__0);
    VL_ZERO_RESET_W(240, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d4b43b7__0);
    VL_ZERO_RESET_W(208, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca17bd9__0);
    VL_ZERO_RESET_W(176, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4cae7ba3__0);
    VL_ZERO_RESET_W(144, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca40285__0);
    VL_ZERO_RESET_W(112, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca3028f__0);
    VL_ZERO_RESET_W(80, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4d580af1__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca67bbb__0 = 0;
    VL_ZERO_RESET_W(976, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4cbe0e09__0);
    VL_ZERO_RESET_W(944, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4cb02713__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vi0]);
    }
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0 = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__sram__DOT__w_count = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__sram__DOT__r_count = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__sram__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__sram__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__sram__DOT__rlast = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__sram__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__awaddr_buffer = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__need_resp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__need_read = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h4fff9582__0 = 0;
    vlSelf->__VdfgTmp_h51515078__0 = 0;
    vlSelf->__VdfgTmp_h0bbd64f5__0 = 0;
    vlSelf->__VdfgTmp_h0564c6e1__0 = 0;
    vlSelf->__VdfgTmp_h9d5684c6__0 = 0;
    VL_ZERO_RESET_W(1024, vlSelf->__VdfgTmp_hc4d32ff7__0);
    vlSelf->__VdfgTmp_h0bfbf776__0 = 0;
    VL_ZERO_RESET_W(1024, vlSelf->__VdfgTmp_h0981aadf__0);
    vlSelf->__VdfgTmp_ha81e39ce__0 = 0;
    vlSelf->__VdfgTmp_h2a73f274__0 = 0;
    vlSelf->__VdfgTmp_h4fb76d38__0 = 0;
    vlSelf->__VdfgTmp_h10ac77a7__0 = 0;
    vlSelf->__Vdly__Soc__DOT__sram__DOT__r_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__Soc__DOT__sram__DOT__rlast = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__Soc__DOT____Vcellinp__sram__ARESETn = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
