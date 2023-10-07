// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__15__PROF__Soc__l2047(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__15__PROF__Soc__l2047\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose 
        = ((((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state)) 
                 & (IData)(vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid))) 
             | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state))) 
            & (IData)(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid))
            ? 9U : ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid)
                     ? 0xaU : ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid)
                                ? 0xcU : 0U)));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__16__PROF__Soc__l2383(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__16__PROF__Soc__l2383\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__17__PROF__Soc__l2387(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__17__PROF__Soc__l2387\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__18__PROF__Soc__l2713(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__18__PROF__Soc__l2713\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__19__PROF__Soc__l2383(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__19__PROF__Soc__l2383\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_12 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__20__PROF__Soc__l2387(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__20__PROF__Soc__l2387\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__21__PROF__Soc__l2713(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__21__PROF__Soc__l2713\n"); );
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
}

extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_ha6228237_0;
extern const VlWide<31>/*991:0*/ VSoc__ConstPool__CONST_h6a1ad899_0;
extern const VlWide<30>/*959:0*/ VSoc__ConstPool__CONST_he1416729_0;

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__22__PROF__Soc__l3487(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__22__PROF__Soc__l3487\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h7fc18f31__0;
    VlWide<32>/*1023:0*/ __Vtemp_h178b0e3c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h36f0f535__0;
    VlWide<32>/*1023:0*/ __Vtemp_h8243755e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5ea3f3da__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6a883e40__0;
    VlWide<32>/*1023:0*/ __Vtemp_h59fceb7e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h982ca0fa__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5e904c42__0;
    VlWide<32>/*1023:0*/ __Vtemp_h514099be__0;
    VlWide<32>/*1023:0*/ __Vtemp_h25715456__0;
    VlWide<32>/*1023:0*/ __Vtemp_h8581ecff__0;
    VlWide<32>/*1023:0*/ __Vtemp_h319b6e75__0;
    VlWide<32>/*1023:0*/ __Vtemp_he2f97852__0;
    VlWide<32>/*1023:0*/ __Vtemp_hea0f9b78__0;
    // Body
    __Vtemp_h178b0e3c__0[1U] = ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                 : ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                     : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                         : ((0x20U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                             : ((0x1cU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                  : 
                                                 ((0x14U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? (IData)(
                                                                ((((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]))) 
                                                                 >> 0x20U))
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                        : 
                                                       VSoc__ConstPool__CONST_hd6b7ba52_0[1U]))))))))))));
    __Vtemp_h36f0f535__0[0U] = ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                 : ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                     : ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                         : ((0x24U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                             : ((0x20U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                  : 
                                                 ((0x18U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? (IData)(
                                                                 (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]))))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)
                                                         : 
                                                        VSoc__ConstPool__CONST_hd6b7ba52_0[0U])))))))))))));
    if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8243755e__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h8243755e__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h8243755e__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h8243755e__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h8243755e__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h8243755e__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h8243755e__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h8243755e__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8243755e__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8243755e__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8243755e__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8243755e__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8243755e__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
    } else {
        __Vtemp_h8243755e__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h8243755e__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h8243755e__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h8243755e__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h8243755e__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h8243755e__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h8243755e__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h8243755e__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h8243755e__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h8243755e__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h8243755e__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h8243755e__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h8243755e__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    }
    if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5ea3f3da__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else {
        __Vtemp_h5ea3f3da__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h5ea3f3da__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h5ea3f3da__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h5ea3f3da__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h5ea3f3da__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h5ea3f3da__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h5ea3f3da__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h5ea3f3da__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h5ea3f3da__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h5ea3f3da__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h5ea3f3da__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h5ea3f3da__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h5ea3f3da__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h5ea3f3da__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h5ea3f3da__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h5ea3f3da__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h5ea3f3da__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h7fc18f31__0[0x1eU] = (IData)(((0xffffffffffff0000ULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                    << 0x20U) 
                                                   | (0xffffffffffff0000ULL 
                                                      & (QData)((IData)(
                                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))))) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))));
        __Vtemp_h7fc18f31__0[0x1fU] = (IData)((((0xffffffffffff0000ULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                     << 0x20U) 
                                                    | (0xffffffffffff0000ULL 
                                                       & (QData)((IData)(
                                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))))) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))) 
                                               >> 0x20U));
        __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
    } else {
        if ((0x76U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h7fc18f31__0[0x1eU] = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))));
            __Vtemp_h7fc18f31__0[0x1fU] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))) 
                                                   >> 0x20U));
        } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h7fc18f31__0[0x1eU] = ((0xffffU 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]) 
                                           | (0xffff0000U 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]));
            __Vtemp_h7fc18f31__0[0x1fU] = ((0xffffU 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]) 
                                           | (0xffff0000U 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]));
        } else {
            __Vtemp_h7fc18f31__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1eU];
            __Vtemp_h7fc18f31__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1fU];
        }
        if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        } else if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h5e904c42__0[0x10U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h5e904c42__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        } else {
            if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_h5e904c42__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
                __Vtemp_h5e904c42__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
                __Vtemp_h5e904c42__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                __Vtemp_h5e904c42__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
                __Vtemp_h5e904c42__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
                __Vtemp_h5e904c42__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
                __Vtemp_h5e904c42__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                __Vtemp_h5e904c42__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                __Vtemp_h5e904c42__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
                __Vtemp_h5e904c42__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                __Vtemp_h5e904c42__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                __Vtemp_h5e904c42__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                __Vtemp_h5e904c42__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            } else {
                __Vtemp_h5e904c42__0[2U] = __Vtemp_h8243755e__0[2U];
                __Vtemp_h5e904c42__0[3U] = __Vtemp_h8243755e__0[3U];
                __Vtemp_h5e904c42__0[4U] = __Vtemp_h8243755e__0[4U];
                __Vtemp_h5e904c42__0[5U] = __Vtemp_h8243755e__0[5U];
                __Vtemp_h5e904c42__0[6U] = __Vtemp_h8243755e__0[6U];
                __Vtemp_h5e904c42__0[7U] = __Vtemp_h8243755e__0[7U];
                __Vtemp_h5e904c42__0[8U] = __Vtemp_h8243755e__0[8U];
                __Vtemp_h5e904c42__0[9U] = __Vtemp_h8243755e__0[9U];
                __Vtemp_h5e904c42__0[0xaU] = __Vtemp_h8243755e__0[0xaU];
                __Vtemp_h5e904c42__0[0xbU] = __Vtemp_h8243755e__0[0xbU];
                __Vtemp_h5e904c42__0[0xcU] = __Vtemp_h8243755e__0[0xcU];
                __Vtemp_h5e904c42__0[0xdU] = __Vtemp_h8243755e__0[0xdU];
                __Vtemp_h5e904c42__0[0xeU] = __Vtemp_h8243755e__0[0xeU];
            }
            __Vtemp_h5e904c42__0[0x10U] = __Vtemp_h5ea3f3da__0[0x10U];
            __Vtemp_h5e904c42__0[0x11U] = __Vtemp_h5ea3f3da__0[0x11U];
            __Vtemp_h5e904c42__0[0x12U] = __Vtemp_h5ea3f3da__0[0x12U];
            __Vtemp_h5e904c42__0[0x13U] = __Vtemp_h5ea3f3da__0[0x13U];
            __Vtemp_h5e904c42__0[0x14U] = __Vtemp_h5ea3f3da__0[0x14U];
            __Vtemp_h5e904c42__0[0x15U] = __Vtemp_h5ea3f3da__0[0x15U];
            __Vtemp_h5e904c42__0[0x16U] = __Vtemp_h5ea3f3da__0[0x16U];
            __Vtemp_h5e904c42__0[0x17U] = __Vtemp_h5ea3f3da__0[0x17U];
            __Vtemp_h5e904c42__0[0x18U] = __Vtemp_h5ea3f3da__0[0x18U];
            __Vtemp_h5e904c42__0[0x19U] = __Vtemp_h5ea3f3da__0[0x19U];
            __Vtemp_h5e904c42__0[0x1aU] = __Vtemp_h5ea3f3da__0[0x1aU];
            __Vtemp_h5e904c42__0[0x1bU] = __Vtemp_h5ea3f3da__0[0x1bU];
            __Vtemp_h5e904c42__0[0x1cU] = __Vtemp_h5ea3f3da__0[0x1cU];
            __Vtemp_h5e904c42__0[0x1dU] = __Vtemp_h5ea3f3da__0[0x1dU];
        }
    }
    __Vtemp_h6a883e40__0[1U] = ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                 : ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                     : ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                         : ((0x60U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                             : ((0x5cU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                 : 
                                                ((0x58U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                  : 
                                                 ((0x54U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                   : 
                                                  ((0x50U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                    : 
                                                   ((0x4cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                     : 
                                                    ((0x48U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                      : 
                                                     ((0x44U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                       : 
                                                      ((0x40U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                        : 
                                                       ((0x3cU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                         : 
                                                        ((0x38U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                          : 
                                                         ((0x34U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                           : 
                                                          ((0x30U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                            : 
                                                           __Vtemp_h178b0e3c__0[1U]))))))))))))))));
    if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h59fceb7e__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h319b6e75__0[0x1cU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        __Vtemp_h319b6e75__0[0x1dU] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                               >> 0x20U));
        __Vtemp_h319b6e75__0[0x1eU] = (IData)((((QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))));
        __Vtemp_h319b6e75__0[0x1fU] = (IData)(((((QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))) 
                                               >> 0x20U));
    } else {
        __Vtemp_h59fceb7e__0[0U] = ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                     : ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                         : ((0x64U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                             : ((0x60U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                 : 
                                                ((0x5cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                  : 
                                                 ((0x58U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                   : 
                                                  ((0x54U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                    : 
                                                   ((0x50U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                      : 
                                                     ((0x48U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                       : 
                                                      ((0x44U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                        : 
                                                       ((0x40U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                         : 
                                                        ((0x3cU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                          : 
                                                         ((0x38U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                           : 
                                                          ((0x34U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                            : 
                                                           __Vtemp_h36f0f535__0[0U])))))))))))))));
        if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0x1bU] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0x19U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0x17U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0x15U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0x13U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0x11U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0xfU] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                  >> 0x20U));
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0xdU] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                  >> 0x20U));
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[0xbU] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                  >> 0x20U));
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[9U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                >> 0x20U));
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[7U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                >> 0x20U));
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[5U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                >> 0x20U));
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            __Vtemp_h319b6e75__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                >> 0x20U));
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h319b6e75__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
            __Vtemp_h319b6e75__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h319b6e75__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
            __Vtemp_h319b6e75__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h319b6e75__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_h319b6e75__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
            __Vtemp_h319b6e75__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h319b6e75__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
            __Vtemp_h319b6e75__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else {
            __Vtemp_h319b6e75__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_h319b6e75__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_h319b6e75__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_h319b6e75__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_h319b6e75__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_h319b6e75__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_h319b6e75__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_h319b6e75__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_h319b6e75__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_h319b6e75__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_h319b6e75__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_h319b6e75__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_h319b6e75__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_h319b6e75__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_h319b6e75__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_h319b6e75__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_h319b6e75__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_h319b6e75__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_h319b6e75__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_h319b6e75__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_h319b6e75__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_h319b6e75__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_h319b6e75__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_h319b6e75__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_h319b6e75__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_h319b6e75__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_h319b6e75__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_h319b6e75__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_h319b6e75__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            __Vtemp_h319b6e75__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
    }
    if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = (IData)((((QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))));
        __Vtemp_h982ca0fa__0[0x1fU] = (IData)(((((QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]))) 
                                               >> 0x20U));
    } else if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h982ca0fa__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else {
        __Vtemp_h982ca0fa__0[0x1eU] = __Vtemp_h5ea3f3da__0[0x1eU];
        __Vtemp_h982ca0fa__0[0x1fU] = __Vtemp_h5ea3f3da__0[0x1fU];
    }
    __Vtemp_h514099be__0[0xfU] = ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                   : ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                       : ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                           : ((0x70U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                               : ((0x6cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                   : 
                                                  ((0x68U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                    : 
                                                   ((0x64U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                     : 
                                                    ((0x60U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                      : 
                                                     ((0x5cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                       : 
                                                      ((0x58U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                        : 
                                                       ((0x54U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                         : 
                                                        ((0x50U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                          : 
                                                         ((0x4cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                           : 
                                                          ((0x48U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                            : 
                                                           ((0x44U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                             ? 
                                                            vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                             : 
                                                            ((0x40U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                              ? 
                                                             vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                              : 
                                                             __Vtemp_h5ea3f3da__0[0xfU]))))))))))))))));
    __Vtemp_h25715456__0[1U] = ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                 : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                     : ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                         : ((0x40U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                             : ((0x38U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                 : 
                                                ((0x30U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                  : 
                                                 ((0x28U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                   : 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? (IData)(
                                                                 ((((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]))) 
                                                                  >> 0x20U))
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                                   >> 0x20U))
                                                        : 
                                                       VSoc__ConstPool__CONST_hd6b7ba52_0[1U]))))))))))));
    __Vtemp_h8581ecff__0[0U] = ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                 : ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                     : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                         : ((0x48U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                             : ((0x40U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                 : 
                                                ((0x38U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                  : 
                                                 ((0x30U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                   : 
                                                  ((0x28U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? (IData)(
                                                                  (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]))))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)
                                                         : 
                                                        VSoc__ConstPool__CONST_hd6b7ba52_0[0U])))))))))))));
    if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        if ((0x7eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_he2f97852__0[0U] = (VSoc__ConstPool__CONST_ha6228237_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_he2f97852__0[1U] = (VSoc__ConstPool__CONST_ha6228237_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_he2f97852__0[0x1dU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1dU] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]);
            __Vtemp_he2f97852__0[0x1fU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                            << 0x10U) 
                                           | (VSoc__ConstPool__CONST_ha6228237_0[0x1fU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]));
        } else if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_he2f97852__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_he2f97852__0[0x1fU] = ((0xffff0000U 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]) 
                                           | (0xffffU 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        } else if ((0x7aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_he2f97852__0[0U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_he2f97852__0[1U] = (VSoc__ConstPool__CONST_h6a1ad899_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_he2f97852__0[0x1dU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1dU] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]);
            __Vtemp_he2f97852__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else {
            if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
                __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
                __Vtemp_he2f97852__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            } else if ((0x76U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_he2f97852__0[0U] = (VSoc__ConstPool__CONST_he1416729_0[0U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
                __Vtemp_he2f97852__0[1U] = (VSoc__ConstPool__CONST_he1416729_0[1U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
                __Vtemp_he2f97852__0[0x1dU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                << 0x10U) 
                                               | (VSoc__ConstPool__CONST_he1416729_0[0x1dU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]));
            } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
                __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
                __Vtemp_he2f97852__0[0x1dU] = ((0xffff0000U 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]) 
                                               | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
            } else {
                __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0U];
                __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[1U];
                __Vtemp_he2f97852__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1dU];
            }
            __Vtemp_he2f97852__0[0x1fU] = __Vtemp_h7fc18f31__0[0x1fU];
        }
    } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_he2f97852__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_he2f97852__0[0x1fU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
        } else if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_he2f97852__0[0x1dU] = __Vtemp_h5e904c42__0[0x1dU];
            __Vtemp_he2f97852__0[0x1fU] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))) 
                                                   >> 0x20U));
        } else {
            if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
                __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            } else {
                __Vtemp_he2f97852__0[0U] = __Vtemp_h59fceb7e__0[0U];
                __Vtemp_he2f97852__0[1U] = ((0x70U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                             : __Vtemp_h6a883e40__0[1U]);
            }
            __Vtemp_he2f97852__0[0x1dU] = __Vtemp_h5e904c42__0[0x1dU];
            __Vtemp_he2f97852__0[0x1fU] = __Vtemp_h982ca0fa__0[0x1fU];
        }
    } else if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_he2f97852__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
            __Vtemp_he2f97852__0[0x1fU] = (IData)((vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data 
                                                   >> 0x20U));
        } else {
            if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
                __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_he2f97852__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
                __Vtemp_he2f97852__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            } else {
                __Vtemp_he2f97852__0[0U] = __Vtemp_h8581ecff__0[0U];
                __Vtemp_he2f97852__0[1U] = ((0x60U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]
                                             : __Vtemp_h25715456__0[1U]);
            }
            __Vtemp_he2f97852__0[0x1dU] = __Vtemp_h319b6e75__0[0x1dU];
            __Vtemp_he2f97852__0[0x1fU] = __Vtemp_h319b6e75__0[0x1fU];
        }
    } else {
        __Vtemp_he2f97852__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_he2f97852__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_he2f97852__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_he2f97852__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
        __Vtemp_hea0f9b78__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(3U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(2U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(4U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(3U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(5U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(4U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(6U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(5U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[6U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(7U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(6U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[7U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(8U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(7U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[8U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(9U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(8U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[9U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                              ((IData)(0xaU) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                       ((IData)(9U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_hea0f9b78__0[0xaU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                ((IData)(0xbU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                         ((IData)(0xaU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_hea0f9b78__0[0xbU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                ((IData)(0xcU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                         ((IData)(0xbU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_hea0f9b78__0[0xcU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                ((IData)(0xdU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                         ((IData)(0xcU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_hea0f9b78__0[0xdU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                ((IData)(0xeU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                         ((IData)(0xdU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_hea0f9b78__0[0xeU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                ((IData)(0xfU) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                         ((IData)(0xeU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_hea0f9b78__0[0xfU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                     << 0xaU))))) 
                                      | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                         ((IData)(0xfU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_hea0f9b78__0[0x10U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x11U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x10U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x11U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x12U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x11U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x12U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x13U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x12U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x13U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x14U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x13U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x14U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x15U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x14U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x15U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x16U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x15U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x16U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x17U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x16U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x17U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x18U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x17U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x18U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x19U) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x18U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x19U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x1aU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x19U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x1aU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x1bU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x1aU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x1bU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x1cU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x1bU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x1cU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x1dU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x1cU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_hea0f9b78__0[0x1eU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                                 ((IData)(0x1fU) 
                                                  + 
                                                  (0xfe0U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                      << 0xaU))))) 
                                       | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                                          ((IData)(0x1eU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                 << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                 ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                  (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                             << 5U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                   << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                 ((IData)(2U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                  ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = __Vtemp_hea0f9b78__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = __Vtemp_hea0f9b78__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = __Vtemp_hea0f9b78__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = __Vtemp_hea0f9b78__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = __Vtemp_hea0f9b78__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = __Vtemp_hea0f9b78__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = __Vtemp_hea0f9b78__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = __Vtemp_hea0f9b78__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = __Vtemp_hea0f9b78__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = __Vtemp_hea0f9b78__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = __Vtemp_hea0f9b78__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = __Vtemp_hea0f9b78__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = __Vtemp_hea0f9b78__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = __Vtemp_hea0f9b78__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = __Vtemp_hea0f9b78__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = __Vtemp_hea0f9b78__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = __Vtemp_hea0f9b78__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = __Vtemp_hea0f9b78__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = __Vtemp_hea0f9b78__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = __Vtemp_hea0f9b78__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = __Vtemp_hea0f9b78__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = __Vtemp_hea0f9b78__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = __Vtemp_hea0f9b78__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = __Vtemp_hea0f9b78__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = __Vtemp_hea0f9b78__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = __Vtemp_hea0f9b78__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = __Vtemp_hea0f9b78__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                 ((IData)(0x1eU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                  ((IData)(0x1dU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = __Vtemp_hea0f9b78__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                 ((IData)(0x20U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21[
                  ((IData)(0x1fU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset) 
                               << 0xaU))));
    } else {
        if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
            if ((0x7eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea0f9b78__0[2U] = (VSoc__ConstPool__CONST_ha6228237_0[2U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
                __Vtemp_hea0f9b78__0[3U] = (VSoc__ConstPool__CONST_ha6228237_0[3U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
                __Vtemp_hea0f9b78__0[4U] = (VSoc__ConstPool__CONST_ha6228237_0[4U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
                __Vtemp_hea0f9b78__0[5U] = (VSoc__ConstPool__CONST_ha6228237_0[5U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
                __Vtemp_hea0f9b78__0[6U] = (VSoc__ConstPool__CONST_ha6228237_0[6U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
                __Vtemp_hea0f9b78__0[7U] = (VSoc__ConstPool__CONST_ha6228237_0[7U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]);
                __Vtemp_hea0f9b78__0[8U] = (VSoc__ConstPool__CONST_ha6228237_0[8U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
                __Vtemp_hea0f9b78__0[9U] = (VSoc__ConstPool__CONST_ha6228237_0[9U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
                __Vtemp_hea0f9b78__0[0xaU] = (VSoc__ConstPool__CONST_ha6228237_0[0xaU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
                __Vtemp_hea0f9b78__0[0xbU] = (VSoc__ConstPool__CONST_ha6228237_0[0xbU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
                __Vtemp_hea0f9b78__0[0xcU] = (VSoc__ConstPool__CONST_ha6228237_0[0xcU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
                __Vtemp_hea0f9b78__0[0xdU] = (VSoc__ConstPool__CONST_ha6228237_0[0xdU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
                __Vtemp_hea0f9b78__0[0xeU] = (VSoc__ConstPool__CONST_ha6228237_0[0xeU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
                __Vtemp_hea0f9b78__0[0xfU] = (VSoc__ConstPool__CONST_ha6228237_0[0xfU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]);
                __Vtemp_hea0f9b78__0[0x10U] = (VSoc__ConstPool__CONST_ha6228237_0[0x10U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
                __Vtemp_hea0f9b78__0[0x11U] = (VSoc__ConstPool__CONST_ha6228237_0[0x11U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
                __Vtemp_hea0f9b78__0[0x12U] = (VSoc__ConstPool__CONST_ha6228237_0[0x12U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
                __Vtemp_hea0f9b78__0[0x13U] = (VSoc__ConstPool__CONST_ha6228237_0[0x13U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
                __Vtemp_hea0f9b78__0[0x14U] = (VSoc__ConstPool__CONST_ha6228237_0[0x14U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
                __Vtemp_hea0f9b78__0[0x15U] = (VSoc__ConstPool__CONST_ha6228237_0[0x15U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
                __Vtemp_hea0f9b78__0[0x16U] = (VSoc__ConstPool__CONST_ha6228237_0[0x16U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
                __Vtemp_hea0f9b78__0[0x17U] = (VSoc__ConstPool__CONST_ha6228237_0[0x17U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
                __Vtemp_hea0f9b78__0[0x18U] = (VSoc__ConstPool__CONST_ha6228237_0[0x18U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]);
                __Vtemp_hea0f9b78__0[0x19U] = (VSoc__ConstPool__CONST_ha6228237_0[0x19U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]);
                __Vtemp_hea0f9b78__0[0x1aU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1aU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]);
                __Vtemp_hea0f9b78__0[0x1bU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1bU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]);
                __Vtemp_hea0f9b78__0[0x1cU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1cU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]);
                __Vtemp_hea0f9b78__0[0x1eU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1eU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]);
            } else if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea0f9b78__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
                __Vtemp_hea0f9b78__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
                __Vtemp_hea0f9b78__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                __Vtemp_hea0f9b78__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
                __Vtemp_hea0f9b78__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
                __Vtemp_hea0f9b78__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
                __Vtemp_hea0f9b78__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                __Vtemp_hea0f9b78__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                __Vtemp_hea0f9b78__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
                __Vtemp_hea0f9b78__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                __Vtemp_hea0f9b78__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                __Vtemp_hea0f9b78__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                __Vtemp_hea0f9b78__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
                __Vtemp_hea0f9b78__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
                __Vtemp_hea0f9b78__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                __Vtemp_hea0f9b78__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                __Vtemp_hea0f9b78__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
                __Vtemp_hea0f9b78__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
                __Vtemp_hea0f9b78__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                __Vtemp_hea0f9b78__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
                __Vtemp_hea0f9b78__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
                __Vtemp_hea0f9b78__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
                __Vtemp_hea0f9b78__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
                __Vtemp_hea0f9b78__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
                __Vtemp_hea0f9b78__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
                __Vtemp_hea0f9b78__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
                __Vtemp_hea0f9b78__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
                __Vtemp_hea0f9b78__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            } else if ((0x7aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea0f9b78__0[2U] = (VSoc__ConstPool__CONST_h6a1ad899_0[2U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
                __Vtemp_hea0f9b78__0[3U] = (VSoc__ConstPool__CONST_h6a1ad899_0[3U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
                __Vtemp_hea0f9b78__0[4U] = (VSoc__ConstPool__CONST_h6a1ad899_0[4U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
                __Vtemp_hea0f9b78__0[5U] = (VSoc__ConstPool__CONST_h6a1ad899_0[5U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
                __Vtemp_hea0f9b78__0[6U] = (VSoc__ConstPool__CONST_h6a1ad899_0[6U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
                __Vtemp_hea0f9b78__0[7U] = (VSoc__ConstPool__CONST_h6a1ad899_0[7U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]);
                __Vtemp_hea0f9b78__0[8U] = (VSoc__ConstPool__CONST_h6a1ad899_0[8U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
                __Vtemp_hea0f9b78__0[9U] = (VSoc__ConstPool__CONST_h6a1ad899_0[9U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
                __Vtemp_hea0f9b78__0[0xaU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xaU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
                __Vtemp_hea0f9b78__0[0xbU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xbU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
                __Vtemp_hea0f9b78__0[0xcU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xcU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
                __Vtemp_hea0f9b78__0[0xdU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xdU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
                __Vtemp_hea0f9b78__0[0xeU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xeU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
                __Vtemp_hea0f9b78__0[0xfU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xfU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]);
                __Vtemp_hea0f9b78__0[0x10U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x10U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
                __Vtemp_hea0f9b78__0[0x11U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x11U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
                __Vtemp_hea0f9b78__0[0x12U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x12U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
                __Vtemp_hea0f9b78__0[0x13U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x13U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
                __Vtemp_hea0f9b78__0[0x14U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x14U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
                __Vtemp_hea0f9b78__0[0x15U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x15U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
                __Vtemp_hea0f9b78__0[0x16U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x16U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
                __Vtemp_hea0f9b78__0[0x17U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x17U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
                __Vtemp_hea0f9b78__0[0x18U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x18U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]);
                __Vtemp_hea0f9b78__0[0x19U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x19U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]);
                __Vtemp_hea0f9b78__0[0x1aU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1aU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]);
                __Vtemp_hea0f9b78__0[0x1bU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1bU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]);
                __Vtemp_hea0f9b78__0[0x1cU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1cU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]);
                __Vtemp_hea0f9b78__0[0x1eU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                << 0x10U) 
                                               | (VSoc__ConstPool__CONST_h6a1ad899_0[0x1eU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]));
            } else {
                if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                    __Vtemp_hea0f9b78__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
                    __Vtemp_hea0f9b78__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
                    __Vtemp_hea0f9b78__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                    __Vtemp_hea0f9b78__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
                    __Vtemp_hea0f9b78__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
                    __Vtemp_hea0f9b78__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
                    __Vtemp_hea0f9b78__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                    __Vtemp_hea0f9b78__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                    __Vtemp_hea0f9b78__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
                    __Vtemp_hea0f9b78__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                    __Vtemp_hea0f9b78__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                    __Vtemp_hea0f9b78__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                    __Vtemp_hea0f9b78__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
                    __Vtemp_hea0f9b78__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
                    __Vtemp_hea0f9b78__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                    __Vtemp_hea0f9b78__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                    __Vtemp_hea0f9b78__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
                    __Vtemp_hea0f9b78__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
                    __Vtemp_hea0f9b78__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                    __Vtemp_hea0f9b78__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
                    __Vtemp_hea0f9b78__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
                    __Vtemp_hea0f9b78__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
                    __Vtemp_hea0f9b78__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
                    __Vtemp_hea0f9b78__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
                    __Vtemp_hea0f9b78__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
                    __Vtemp_hea0f9b78__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
                    __Vtemp_hea0f9b78__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
                } else if ((0x76U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                    __Vtemp_hea0f9b78__0[2U] = (VSoc__ConstPool__CONST_he1416729_0[2U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
                    __Vtemp_hea0f9b78__0[3U] = (VSoc__ConstPool__CONST_he1416729_0[3U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
                    __Vtemp_hea0f9b78__0[4U] = (VSoc__ConstPool__CONST_he1416729_0[4U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
                    __Vtemp_hea0f9b78__0[5U] = (VSoc__ConstPool__CONST_he1416729_0[5U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
                    __Vtemp_hea0f9b78__0[6U] = (VSoc__ConstPool__CONST_he1416729_0[6U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
                    __Vtemp_hea0f9b78__0[7U] = (VSoc__ConstPool__CONST_he1416729_0[7U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]);
                    __Vtemp_hea0f9b78__0[8U] = (VSoc__ConstPool__CONST_he1416729_0[8U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
                    __Vtemp_hea0f9b78__0[9U] = (VSoc__ConstPool__CONST_he1416729_0[9U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
                    __Vtemp_hea0f9b78__0[0xaU] = (VSoc__ConstPool__CONST_he1416729_0[0xaU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
                    __Vtemp_hea0f9b78__0[0xbU] = (VSoc__ConstPool__CONST_he1416729_0[0xbU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
                    __Vtemp_hea0f9b78__0[0xcU] = (VSoc__ConstPool__CONST_he1416729_0[0xcU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
                    __Vtemp_hea0f9b78__0[0xdU] = (VSoc__ConstPool__CONST_he1416729_0[0xdU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
                    __Vtemp_hea0f9b78__0[0xeU] = (VSoc__ConstPool__CONST_he1416729_0[0xeU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
                    __Vtemp_hea0f9b78__0[0xfU] = (VSoc__ConstPool__CONST_he1416729_0[0xfU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]);
                    __Vtemp_hea0f9b78__0[0x10U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x10U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
                    __Vtemp_hea0f9b78__0[0x11U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x11U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
                    __Vtemp_hea0f9b78__0[0x12U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x12U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
                    __Vtemp_hea0f9b78__0[0x13U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x13U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
                    __Vtemp_hea0f9b78__0[0x14U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x14U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
                    __Vtemp_hea0f9b78__0[0x15U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x15U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
                    __Vtemp_hea0f9b78__0[0x16U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x16U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
                    __Vtemp_hea0f9b78__0[0x17U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x17U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
                    __Vtemp_hea0f9b78__0[0x18U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x18U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]);
                    __Vtemp_hea0f9b78__0[0x19U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x19U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]);
                    __Vtemp_hea0f9b78__0[0x1aU] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x1aU] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]);
                    __Vtemp_hea0f9b78__0[0x1bU] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x1bU] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]);
                    __Vtemp_hea0f9b78__0[0x1cU] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x1cU] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]);
                } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                    __Vtemp_hea0f9b78__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
                    __Vtemp_hea0f9b78__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
                    __Vtemp_hea0f9b78__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                    __Vtemp_hea0f9b78__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
                    __Vtemp_hea0f9b78__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
                    __Vtemp_hea0f9b78__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
                    __Vtemp_hea0f9b78__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                    __Vtemp_hea0f9b78__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                    __Vtemp_hea0f9b78__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
                    __Vtemp_hea0f9b78__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                    __Vtemp_hea0f9b78__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                    __Vtemp_hea0f9b78__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                    __Vtemp_hea0f9b78__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
                    __Vtemp_hea0f9b78__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
                    __Vtemp_hea0f9b78__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                    __Vtemp_hea0f9b78__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                    __Vtemp_hea0f9b78__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
                    __Vtemp_hea0f9b78__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
                    __Vtemp_hea0f9b78__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                    __Vtemp_hea0f9b78__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
                    __Vtemp_hea0f9b78__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
                    __Vtemp_hea0f9b78__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
                    __Vtemp_hea0f9b78__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
                    __Vtemp_hea0f9b78__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
                    __Vtemp_hea0f9b78__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
                    __Vtemp_hea0f9b78__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
                    __Vtemp_hea0f9b78__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
                } else {
                    __Vtemp_hea0f9b78__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[2U];
                    __Vtemp_hea0f9b78__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[3U];
                    __Vtemp_hea0f9b78__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U];
                    __Vtemp_hea0f9b78__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U];
                    __Vtemp_hea0f9b78__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U];
                    __Vtemp_hea0f9b78__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U];
                    __Vtemp_hea0f9b78__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U];
                    __Vtemp_hea0f9b78__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U];
                    __Vtemp_hea0f9b78__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU];
                    __Vtemp_hea0f9b78__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU];
                    __Vtemp_hea0f9b78__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU];
                    __Vtemp_hea0f9b78__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU];
                    __Vtemp_hea0f9b78__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU];
                    __Vtemp_hea0f9b78__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU];
                    __Vtemp_hea0f9b78__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U];
                    __Vtemp_hea0f9b78__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U];
                    __Vtemp_hea0f9b78__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U];
                    __Vtemp_hea0f9b78__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U];
                    __Vtemp_hea0f9b78__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U];
                    __Vtemp_hea0f9b78__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U];
                    __Vtemp_hea0f9b78__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U];
                    __Vtemp_hea0f9b78__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U];
                    __Vtemp_hea0f9b78__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U];
                    __Vtemp_hea0f9b78__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x19U];
                    __Vtemp_hea0f9b78__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1aU];
                    __Vtemp_hea0f9b78__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1bU];
                    __Vtemp_hea0f9b78__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1cU];
                }
                __Vtemp_hea0f9b78__0[0x1eU] = __Vtemp_h7fc18f31__0[0x1eU];
            }
        } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
            if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea0f9b78__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
                __Vtemp_hea0f9b78__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
                __Vtemp_hea0f9b78__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                __Vtemp_hea0f9b78__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
                __Vtemp_hea0f9b78__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
                __Vtemp_hea0f9b78__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
                __Vtemp_hea0f9b78__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                __Vtemp_hea0f9b78__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                __Vtemp_hea0f9b78__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
                __Vtemp_hea0f9b78__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                __Vtemp_hea0f9b78__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                __Vtemp_hea0f9b78__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                __Vtemp_hea0f9b78__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
                __Vtemp_hea0f9b78__0[0xfU] = __Vtemp_h514099be__0[0xfU];
                __Vtemp_hea0f9b78__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                __Vtemp_hea0f9b78__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                __Vtemp_hea0f9b78__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
                __Vtemp_hea0f9b78__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
                __Vtemp_hea0f9b78__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                __Vtemp_hea0f9b78__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
                __Vtemp_hea0f9b78__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
                __Vtemp_hea0f9b78__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
                __Vtemp_hea0f9b78__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
                __Vtemp_hea0f9b78__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
                __Vtemp_hea0f9b78__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
                __Vtemp_hea0f9b78__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
                __Vtemp_hea0f9b78__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
                __Vtemp_hea0f9b78__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
            } else {
                __Vtemp_hea0f9b78__0[2U] = __Vtemp_h5e904c42__0[2U];
                __Vtemp_hea0f9b78__0[3U] = __Vtemp_h5e904c42__0[3U];
                __Vtemp_hea0f9b78__0[4U] = __Vtemp_h5e904c42__0[4U];
                __Vtemp_hea0f9b78__0[5U] = __Vtemp_h5e904c42__0[5U];
                __Vtemp_hea0f9b78__0[6U] = __Vtemp_h5e904c42__0[6U];
                __Vtemp_hea0f9b78__0[7U] = __Vtemp_h5e904c42__0[7U];
                __Vtemp_hea0f9b78__0[8U] = __Vtemp_h5e904c42__0[8U];
                __Vtemp_hea0f9b78__0[9U] = __Vtemp_h5e904c42__0[9U];
                __Vtemp_hea0f9b78__0[0xaU] = __Vtemp_h5e904c42__0[0xaU];
                __Vtemp_hea0f9b78__0[0xbU] = __Vtemp_h5e904c42__0[0xbU];
                __Vtemp_hea0f9b78__0[0xcU] = __Vtemp_h5e904c42__0[0xcU];
                __Vtemp_hea0f9b78__0[0xdU] = __Vtemp_h5e904c42__0[0xdU];
                __Vtemp_hea0f9b78__0[0xeU] = __Vtemp_h5e904c42__0[0xeU];
                __Vtemp_hea0f9b78__0[0xfU] = __Vtemp_h514099be__0[0xfU];
                __Vtemp_hea0f9b78__0[0x10U] = __Vtemp_h5e904c42__0[0x10U];
                __Vtemp_hea0f9b78__0[0x11U] = __Vtemp_h5e904c42__0[0x11U];
                __Vtemp_hea0f9b78__0[0x12U] = __Vtemp_h5e904c42__0[0x12U];
                __Vtemp_hea0f9b78__0[0x13U] = __Vtemp_h5e904c42__0[0x13U];
                __Vtemp_hea0f9b78__0[0x14U] = __Vtemp_h5e904c42__0[0x14U];
                __Vtemp_hea0f9b78__0[0x15U] = __Vtemp_h5e904c42__0[0x15U];
                __Vtemp_hea0f9b78__0[0x16U] = __Vtemp_h5e904c42__0[0x16U];
                __Vtemp_hea0f9b78__0[0x17U] = __Vtemp_h5e904c42__0[0x17U];
                __Vtemp_hea0f9b78__0[0x18U] = __Vtemp_h5e904c42__0[0x18U];
                __Vtemp_hea0f9b78__0[0x19U] = __Vtemp_h5e904c42__0[0x19U];
                __Vtemp_hea0f9b78__0[0x1aU] = __Vtemp_h5e904c42__0[0x1aU];
                __Vtemp_hea0f9b78__0[0x1bU] = __Vtemp_h5e904c42__0[0x1bU];
                __Vtemp_hea0f9b78__0[0x1cU] = __Vtemp_h5e904c42__0[0x1cU];
                __Vtemp_hea0f9b78__0[0x1eU] = ((0x78U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                ? (IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data))))
                                                : __Vtemp_h982ca0fa__0[0x1eU]);
            }
        } else if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))) {
            if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea0f9b78__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
                __Vtemp_hea0f9b78__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
                __Vtemp_hea0f9b78__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                __Vtemp_hea0f9b78__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
                __Vtemp_hea0f9b78__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
                __Vtemp_hea0f9b78__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
                __Vtemp_hea0f9b78__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                __Vtemp_hea0f9b78__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                __Vtemp_hea0f9b78__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
                __Vtemp_hea0f9b78__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                __Vtemp_hea0f9b78__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                __Vtemp_hea0f9b78__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                __Vtemp_hea0f9b78__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
                __Vtemp_hea0f9b78__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
                __Vtemp_hea0f9b78__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                __Vtemp_hea0f9b78__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                __Vtemp_hea0f9b78__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
                __Vtemp_hea0f9b78__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
                __Vtemp_hea0f9b78__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                __Vtemp_hea0f9b78__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
                __Vtemp_hea0f9b78__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
                __Vtemp_hea0f9b78__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
                __Vtemp_hea0f9b78__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
                __Vtemp_hea0f9b78__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
                __Vtemp_hea0f9b78__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
                __Vtemp_hea0f9b78__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
                __Vtemp_hea0f9b78__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
                __Vtemp_hea0f9b78__0[0x1eU] = (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data);
            } else {
                __Vtemp_hea0f9b78__0[2U] = __Vtemp_h319b6e75__0[2U];
                __Vtemp_hea0f9b78__0[3U] = __Vtemp_h319b6e75__0[3U];
                __Vtemp_hea0f9b78__0[4U] = __Vtemp_h319b6e75__0[4U];
                __Vtemp_hea0f9b78__0[5U] = __Vtemp_h319b6e75__0[5U];
                __Vtemp_hea0f9b78__0[6U] = __Vtemp_h319b6e75__0[6U];
                __Vtemp_hea0f9b78__0[7U] = __Vtemp_h319b6e75__0[7U];
                __Vtemp_hea0f9b78__0[8U] = __Vtemp_h319b6e75__0[8U];
                __Vtemp_hea0f9b78__0[9U] = __Vtemp_h319b6e75__0[9U];
                __Vtemp_hea0f9b78__0[0xaU] = __Vtemp_h319b6e75__0[0xaU];
                __Vtemp_hea0f9b78__0[0xbU] = __Vtemp_h319b6e75__0[0xbU];
                __Vtemp_hea0f9b78__0[0xcU] = __Vtemp_h319b6e75__0[0xcU];
                __Vtemp_hea0f9b78__0[0xdU] = __Vtemp_h319b6e75__0[0xdU];
                __Vtemp_hea0f9b78__0[0xeU] = __Vtemp_h319b6e75__0[0xeU];
                __Vtemp_hea0f9b78__0[0xfU] = __Vtemp_h319b6e75__0[0xfU];
                __Vtemp_hea0f9b78__0[0x10U] = __Vtemp_h319b6e75__0[0x10U];
                __Vtemp_hea0f9b78__0[0x11U] = __Vtemp_h319b6e75__0[0x11U];
                __Vtemp_hea0f9b78__0[0x12U] = __Vtemp_h319b6e75__0[0x12U];
                __Vtemp_hea0f9b78__0[0x13U] = __Vtemp_h319b6e75__0[0x13U];
                __Vtemp_hea0f9b78__0[0x14U] = __Vtemp_h319b6e75__0[0x14U];
                __Vtemp_hea0f9b78__0[0x15U] = __Vtemp_h319b6e75__0[0x15U];
                __Vtemp_hea0f9b78__0[0x16U] = __Vtemp_h319b6e75__0[0x16U];
                __Vtemp_hea0f9b78__0[0x17U] = __Vtemp_h319b6e75__0[0x17U];
                __Vtemp_hea0f9b78__0[0x18U] = __Vtemp_h319b6e75__0[0x18U];
                __Vtemp_hea0f9b78__0[0x19U] = __Vtemp_h319b6e75__0[0x19U];
                __Vtemp_hea0f9b78__0[0x1aU] = __Vtemp_h319b6e75__0[0x1aU];
                __Vtemp_hea0f9b78__0[0x1bU] = __Vtemp_h319b6e75__0[0x1bU];
                __Vtemp_hea0f9b78__0[0x1cU] = __Vtemp_h319b6e75__0[0x1cU];
                __Vtemp_hea0f9b78__0[0x1eU] = __Vtemp_h319b6e75__0[0x1eU];
            }
        } else {
            __Vtemp_hea0f9b78__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_hea0f9b78__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_hea0f9b78__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_hea0f9b78__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_hea0f9b78__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_hea0f9b78__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_hea0f9b78__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_hea0f9b78__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_hea0f9b78__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_hea0f9b78__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_hea0f9b78__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_hea0f9b78__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_hea0f9b78__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_hea0f9b78__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_hea0f9b78__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_hea0f9b78__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_hea0f9b78__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_hea0f9b78__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_hea0f9b78__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_hea0f9b78__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_hea0f9b78__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_hea0f9b78__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_hea0f9b78__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_hea0f9b78__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_hea0f9b78__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_hea0f9b78__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_hea0f9b78__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_hea0f9b78__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        }
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = __Vtemp_he2f97852__0[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = __Vtemp_he2f97852__0[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = __Vtemp_hea0f9b78__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = __Vtemp_hea0f9b78__0[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = __Vtemp_hea0f9b78__0[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = __Vtemp_hea0f9b78__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = __Vtemp_hea0f9b78__0[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = __Vtemp_hea0f9b78__0[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = __Vtemp_hea0f9b78__0[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = __Vtemp_hea0f9b78__0[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = __Vtemp_hea0f9b78__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = __Vtemp_hea0f9b78__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = __Vtemp_hea0f9b78__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = __Vtemp_hea0f9b78__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = __Vtemp_hea0f9b78__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = __Vtemp_hea0f9b78__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = __Vtemp_hea0f9b78__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = __Vtemp_hea0f9b78__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = __Vtemp_hea0f9b78__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = __Vtemp_hea0f9b78__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = __Vtemp_hea0f9b78__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = __Vtemp_hea0f9b78__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = __Vtemp_hea0f9b78__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = __Vtemp_hea0f9b78__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = __Vtemp_hea0f9b78__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = __Vtemp_hea0f9b78__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = __Vtemp_hea0f9b78__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = __Vtemp_hea0f9b78__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = __Vtemp_hea0f9b78__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = __Vtemp_he2f97852__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = __Vtemp_hea0f9b78__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = __Vtemp_he2f97852__0[0x1fU];
    }
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__23__PROF__Soc__l3487(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__23__PROF__Soc__l3487\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h16cf4287__0;
    VlWide<32>/*1023:0*/ __Vtemp_h31539606__0;
    VlWide<32>/*1023:0*/ __Vtemp_h613aec8c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2db33aa6__0;
    VlWide<32>/*1023:0*/ __Vtemp_h81a7c7ad__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd8377140__0;
    VlWide<32>/*1023:0*/ __Vtemp_h0036587c__0;
    VlWide<32>/*1023:0*/ __Vtemp_he9197a59__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4dad2708__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc0347116__0;
    VlWide<32>/*1023:0*/ __Vtemp_h29282c70__0;
    VlWide<32>/*1023:0*/ __Vtemp_haff2ae56__0;
    VlWide<32>/*1023:0*/ __Vtemp_hcb127799__0;
    VlWide<32>/*1023:0*/ __Vtemp_h371e7235__0;
    VlWide<32>/*1023:0*/ __Vtemp_h349b0658__0;
    // Body
    __Vtemp_h31539606__0[1U] = ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                 : ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                     : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                         : ((0x20U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                             : ((0x1cU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                  : 
                                                 ((0x14U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? (IData)(
                                                                ((((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]))) 
                                                                 >> 0x20U))
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                        : 
                                                       VSoc__ConstPool__CONST_hd6b7ba52_0[1U]))))))))))));
    __Vtemp_h613aec8c__0[0U] = ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                 : ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                     : ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                         : ((0x24U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                             : ((0x20U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                  : 
                                                 ((0x18U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? (IData)(
                                                                 (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]))))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)
                                                         : 
                                                        VSoc__ConstPool__CONST_hd6b7ba52_0[0U])))))))))))));
    if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h2db33aa6__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h2db33aa6__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h2db33aa6__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h2db33aa6__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h2db33aa6__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h2db33aa6__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h2db33aa6__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h2db33aa6__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h2db33aa6__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
    } else {
        __Vtemp_h2db33aa6__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h2db33aa6__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h2db33aa6__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h2db33aa6__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h2db33aa6__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h2db33aa6__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h2db33aa6__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h2db33aa6__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h2db33aa6__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h2db33aa6__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h2db33aa6__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h2db33aa6__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h2db33aa6__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    }
    if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h81a7c7ad__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else {
        __Vtemp_h81a7c7ad__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h81a7c7ad__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h81a7c7ad__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h81a7c7ad__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h81a7c7ad__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h81a7c7ad__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h81a7c7ad__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h81a7c7ad__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h81a7c7ad__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h81a7c7ad__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h81a7c7ad__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h81a7c7ad__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h81a7c7ad__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h81a7c7ad__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h81a7c7ad__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h81a7c7ad__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h81a7c7ad__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h16cf4287__0[0x1eU] = (IData)(((0xffffffffffff0000ULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                    << 0x20U) 
                                                   | (0xffffffffffff0000ULL 
                                                      & (QData)((IData)(
                                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))))) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))));
        __Vtemp_h16cf4287__0[0x1fU] = (IData)((((0xffffffffffff0000ULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                     << 0x20U) 
                                                    | (0xffffffffffff0000ULL 
                                                       & (QData)((IData)(
                                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))))) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))) 
                                               >> 0x20U));
        __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
        __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
        __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
    } else {
        if ((0x76U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h16cf4287__0[0x1eU] = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))));
            __Vtemp_h16cf4287__0[0x1fU] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))) 
                                                   >> 0x20U));
        } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h16cf4287__0[0x1eU] = ((0xffffU 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]) 
                                           | (0xffff0000U 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]));
            __Vtemp_h16cf4287__0[0x1fU] = ((0xffffU 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU]) 
                                           | (0xffff0000U 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU]));
        } else {
            __Vtemp_h16cf4287__0[0x1eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x1eU];
            __Vtemp_h16cf4287__0[0x1fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x1fU];
        }
        if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        } else if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_h4dad2708__0[0x10U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_h4dad2708__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
        } else {
            if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h4dad2708__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
                __Vtemp_h4dad2708__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
                __Vtemp_h4dad2708__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
                __Vtemp_h4dad2708__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
                __Vtemp_h4dad2708__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
                __Vtemp_h4dad2708__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
                __Vtemp_h4dad2708__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
                __Vtemp_h4dad2708__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
                __Vtemp_h4dad2708__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
                __Vtemp_h4dad2708__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
                __Vtemp_h4dad2708__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
                __Vtemp_h4dad2708__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
                __Vtemp_h4dad2708__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            } else {
                __Vtemp_h4dad2708__0[2U] = __Vtemp_h2db33aa6__0[2U];
                __Vtemp_h4dad2708__0[3U] = __Vtemp_h2db33aa6__0[3U];
                __Vtemp_h4dad2708__0[4U] = __Vtemp_h2db33aa6__0[4U];
                __Vtemp_h4dad2708__0[5U] = __Vtemp_h2db33aa6__0[5U];
                __Vtemp_h4dad2708__0[6U] = __Vtemp_h2db33aa6__0[6U];
                __Vtemp_h4dad2708__0[7U] = __Vtemp_h2db33aa6__0[7U];
                __Vtemp_h4dad2708__0[8U] = __Vtemp_h2db33aa6__0[8U];
                __Vtemp_h4dad2708__0[9U] = __Vtemp_h2db33aa6__0[9U];
                __Vtemp_h4dad2708__0[0xaU] = __Vtemp_h2db33aa6__0[0xaU];
                __Vtemp_h4dad2708__0[0xbU] = __Vtemp_h2db33aa6__0[0xbU];
                __Vtemp_h4dad2708__0[0xcU] = __Vtemp_h2db33aa6__0[0xcU];
                __Vtemp_h4dad2708__0[0xdU] = __Vtemp_h2db33aa6__0[0xdU];
                __Vtemp_h4dad2708__0[0xeU] = __Vtemp_h2db33aa6__0[0xeU];
            }
            __Vtemp_h4dad2708__0[0x10U] = __Vtemp_h81a7c7ad__0[0x10U];
            __Vtemp_h4dad2708__0[0x11U] = __Vtemp_h81a7c7ad__0[0x11U];
            __Vtemp_h4dad2708__0[0x12U] = __Vtemp_h81a7c7ad__0[0x12U];
            __Vtemp_h4dad2708__0[0x13U] = __Vtemp_h81a7c7ad__0[0x13U];
            __Vtemp_h4dad2708__0[0x14U] = __Vtemp_h81a7c7ad__0[0x14U];
            __Vtemp_h4dad2708__0[0x15U] = __Vtemp_h81a7c7ad__0[0x15U];
            __Vtemp_h4dad2708__0[0x16U] = __Vtemp_h81a7c7ad__0[0x16U];
            __Vtemp_h4dad2708__0[0x17U] = __Vtemp_h81a7c7ad__0[0x17U];
            __Vtemp_h4dad2708__0[0x18U] = __Vtemp_h81a7c7ad__0[0x18U];
            __Vtemp_h4dad2708__0[0x19U] = __Vtemp_h81a7c7ad__0[0x19U];
            __Vtemp_h4dad2708__0[0x1aU] = __Vtemp_h81a7c7ad__0[0x1aU];
            __Vtemp_h4dad2708__0[0x1bU] = __Vtemp_h81a7c7ad__0[0x1bU];
            __Vtemp_h4dad2708__0[0x1cU] = __Vtemp_h81a7c7ad__0[0x1cU];
            __Vtemp_h4dad2708__0[0x1dU] = __Vtemp_h81a7c7ad__0[0x1dU];
        }
    }
    __Vtemp_hd8377140__0[1U] = ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                 : ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                     : ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                         : ((0x60U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                             : ((0x5cU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                 : 
                                                ((0x58U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                  : 
                                                 ((0x54U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                   : 
                                                  ((0x50U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                    : 
                                                   ((0x4cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                     : 
                                                    ((0x48U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                      : 
                                                     ((0x44U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                       : 
                                                      ((0x40U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                        : 
                                                       ((0x3cU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                         : 
                                                        ((0x38U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                          : 
                                                         ((0x34U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                           : 
                                                          ((0x30U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                            : 
                                                           __Vtemp_h31539606__0[1U]))))))))))))))));
    if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_h0036587c__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
        __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
        __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
        __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
        __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
        __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
        __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
        __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
        __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
        __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
        __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
        __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
        __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
        __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
        __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
        __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
        __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
        __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
        __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
        __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
        __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
        __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
        __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
        __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
        __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
        __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
        __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
        __Vtemp_hcb127799__0[0x1cU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        __Vtemp_hcb127799__0[0x1dU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                               >> 0x20U));
        __Vtemp_hcb127799__0[0x1eU] = (IData)((((QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))));
        __Vtemp_hcb127799__0[0x1fU] = (IData)(((((QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))) 
                                               >> 0x20U));
    } else {
        __Vtemp_h0036587c__0[0U] = ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                     : ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                         : ((0x64U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                             : ((0x60U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                 : 
                                                ((0x5cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                  : 
                                                 ((0x58U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                   : 
                                                  ((0x54U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                    : 
                                                   ((0x50U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                      : 
                                                     ((0x48U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                       : 
                                                      ((0x44U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                        : 
                                                       ((0x40U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                         : 
                                                        ((0x3cU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                          : 
                                                         ((0x38U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                           : 
                                                          ((0x34U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                            : 
                                                           __Vtemp_h613aec8c__0[0U])))))))))))))));
        if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0x1bU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0x19U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0x17U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0x15U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0x13U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0x11U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                   >> 0x20U));
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0xfU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                  >> 0x20U));
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0xdU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                  >> 0x20U));
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[0xbU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                  >> 0x20U));
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[9U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                >> 0x20U));
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[7U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                >> 0x20U));
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[5U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                >> 0x20U));
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            __Vtemp_hcb127799__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                >> 0x20U));
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_hcb127799__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
            __Vtemp_hcb127799__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
            __Vtemp_hcb127799__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
            __Vtemp_hcb127799__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
            __Vtemp_hcb127799__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
            __Vtemp_hcb127799__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
            __Vtemp_hcb127799__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
            __Vtemp_hcb127799__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
            __Vtemp_hcb127799__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
            __Vtemp_hcb127799__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
            __Vtemp_hcb127799__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
            __Vtemp_hcb127799__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
            __Vtemp_hcb127799__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
            __Vtemp_hcb127799__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
            __Vtemp_hcb127799__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
            __Vtemp_hcb127799__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
            __Vtemp_hcb127799__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
            __Vtemp_hcb127799__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
            __Vtemp_hcb127799__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
            __Vtemp_hcb127799__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
            __Vtemp_hcb127799__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
            __Vtemp_hcb127799__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
            __Vtemp_hcb127799__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
            __Vtemp_hcb127799__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else {
            __Vtemp_hcb127799__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_hcb127799__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_hcb127799__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_hcb127799__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_hcb127799__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_hcb127799__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_hcb127799__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_hcb127799__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_hcb127799__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_hcb127799__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_hcb127799__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_hcb127799__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_hcb127799__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_hcb127799__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_hcb127799__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_hcb127799__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_hcb127799__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_hcb127799__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_hcb127799__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_hcb127799__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_hcb127799__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_hcb127799__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_hcb127799__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_hcb127799__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_hcb127799__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_hcb127799__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_hcb127799__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_hcb127799__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            __Vtemp_hcb127799__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            __Vtemp_hcb127799__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        }
    }
    if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = (IData)((((QData)((IData)(
                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))));
        __Vtemp_he9197a59__0[0x1fU] = (IData)(((((QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]))) 
                                               >> 0x20U));
    } else if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
        __Vtemp_he9197a59__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
    } else {
        __Vtemp_he9197a59__0[0x1eU] = __Vtemp_h81a7c7ad__0[0x1eU];
        __Vtemp_he9197a59__0[0x1fU] = __Vtemp_h81a7c7ad__0[0x1fU];
    }
    __Vtemp_hc0347116__0[0xfU] = ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                   : ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                       : ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                           : ((0x70U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                               : ((0x6cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                   : 
                                                  ((0x68U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                    : 
                                                   ((0x64U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                     : 
                                                    ((0x60U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                      : 
                                                     ((0x5cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                       : 
                                                      ((0x58U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                        : 
                                                       ((0x54U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                         : 
                                                        ((0x50U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                          ? 
                                                         vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                          : 
                                                         ((0x4cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                           : 
                                                          ((0x48U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                            ? 
                                                           vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                            : 
                                                           ((0x44U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                             ? 
                                                            vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                             : 
                                                            ((0x40U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                              ? 
                                                             vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]
                                                              : 
                                                             __Vtemp_h81a7c7ad__0[0xfU]))))))))))))))));
    __Vtemp_h29282c70__0[1U] = ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                 : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                     : ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                         : ((0x40U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                             : ((0x38U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                 : 
                                                ((0x30U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                  : 
                                                 ((0x28U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                   : 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? (IData)(
                                                                 ((((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]))) 
                                                                  >> 0x20U))
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? (IData)(
                                                                  (vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                                   >> 0x20U))
                                                        : 
                                                       VSoc__ConstPool__CONST_hd6b7ba52_0[1U]))))))))))));
    __Vtemp_haff2ae56__0[0U] = ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                 : ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                     : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                         : ((0x48U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                             : ((0x40U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                 : 
                                                ((0x38U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                  : 
                                                 ((0x30U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                   : 
                                                  ((0x28U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                        ? (IData)(
                                                                  (((QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]))))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                         ? (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)
                                                         : 
                                                        VSoc__ConstPool__CONST_hd6b7ba52_0[0U])))))))))))));
    if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        if ((0x7eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h371e7235__0[0U] = (VSoc__ConstPool__CONST_ha6228237_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]);
            __Vtemp_h371e7235__0[1U] = (VSoc__ConstPool__CONST_ha6228237_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]);
            __Vtemp_h371e7235__0[0x1dU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1dU] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU]);
            __Vtemp_h371e7235__0[0x1fU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                            << 0x10U) 
                                           | (VSoc__ConstPool__CONST_ha6228237_0[0x1fU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU]));
        } else if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
            __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
            __Vtemp_h371e7235__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_h371e7235__0[0x1fU] = ((0xffff0000U 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU]) 
                                           | (0xffffU 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
        } else if ((0x7aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h371e7235__0[0U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]);
            __Vtemp_h371e7235__0[1U] = (VSoc__ConstPool__CONST_h6a1ad899_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]);
            __Vtemp_h371e7235__0[0x1dU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1dU] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU]);
            __Vtemp_h371e7235__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU];
        } else {
            if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
                __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
                __Vtemp_h371e7235__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            } else if ((0x76U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h371e7235__0[0U] = (VSoc__ConstPool__CONST_he1416729_0[0U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U]);
                __Vtemp_h371e7235__0[1U] = (VSoc__ConstPool__CONST_he1416729_0[1U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]);
                __Vtemp_h371e7235__0[0x1dU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                << 0x10U) 
                                               | (VSoc__ConstPool__CONST_he1416729_0[0x1dU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU]));
            } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
                __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
                __Vtemp_h371e7235__0[0x1dU] = ((0xffff0000U 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU]) 
                                               | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)));
            } else {
                __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0U];
                __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[1U];
                __Vtemp_h371e7235__0[0x1dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x1dU];
            }
            __Vtemp_h371e7235__0[0x1fU] = __Vtemp_h16cf4287__0[0x1fU];
        }
    } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
            __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
            __Vtemp_h371e7235__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_h371e7235__0[0x1fU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
        } else if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
            __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
            __Vtemp_h371e7235__0[0x1dU] = __Vtemp_h4dad2708__0[0x1dU];
            __Vtemp_h371e7235__0[0x1fU] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))) 
                                                   >> 0x20U));
        } else {
            if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
                __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
            } else {
                __Vtemp_h371e7235__0[0U] = __Vtemp_h0036587c__0[0U];
                __Vtemp_h371e7235__0[1U] = ((0x70U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                             : __Vtemp_hd8377140__0[1U]);
            }
            __Vtemp_h371e7235__0[0x1dU] = __Vtemp_h4dad2708__0[0x1dU];
            __Vtemp_h371e7235__0[0x1fU] = __Vtemp_he9197a59__0[0x1fU];
        }
    } else if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
            __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
            __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
            __Vtemp_h371e7235__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1dU];
            __Vtemp_h371e7235__0[0x1fU] = (IData)((vlSelf->Soc__DOT__core__DOT__Icache__DOT__data 
                                                   >> 0x20U));
        } else {
            if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
                __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
            } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h371e7235__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0U];
                __Vtemp_h371e7235__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U];
            } else {
                __Vtemp_h371e7235__0[0U] = __Vtemp_haff2ae56__0[0U];
                __Vtemp_h371e7235__0[1U] = ((0x60U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[1U]
                                             : __Vtemp_h29282c70__0[1U]);
            }
            __Vtemp_h371e7235__0[0x1dU] = __Vtemp_hcb127799__0[0x1dU];
            __Vtemp_h371e7235__0[0x1fU] = __Vtemp_hcb127799__0[0x1fU];
        }
    } else {
        __Vtemp_h371e7235__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_h371e7235__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_h371e7235__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h371e7235__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    if ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
        __Vtemp_h349b0658__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(3U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(2U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(4U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(3U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(5U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(4U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(6U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(5U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[6U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(7U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(6U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[7U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(8U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(7U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[8U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(9U) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(8U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[9U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU)))
                                      ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                              ((IData)(0xaU) 
                                               + (0xfe0U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                     << 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                      << 0xaU))))) 
                                    | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                       ((IData)(9U) 
                                        + (0xfe0U & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 0xaU))));
        __Vtemp_h349b0658__0[0xaU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                         ((IData)(0xaU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h349b0658__0[0xbU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                         ((IData)(0xbU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h349b0658__0[0xcU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                         ((IData)(0xcU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h349b0658__0[0xdU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                         ((IData)(0xdU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h349b0658__0[0xeU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                         ((IData)(0xeU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h349b0658__0[0xfU] = (((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                  << 0xaU)))
                                        ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                      | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                         ((IData)(0xfU) 
                                          + (0xfe0U 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))));
        __Vtemp_h349b0658__0[0x10U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x10U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x11U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x11U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x12U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x12U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x13U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x13U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x14U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x14U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x15U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x15U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x16U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x16U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x17U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x17U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x18U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x18U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x19U] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x19U) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x1aU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x1aU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x1bU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x1bU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x1cU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x1cU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        __Vtemp_h349b0658__0[0x1eU] = (((0U == (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU)))
                                         ? 0U : (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                                 ((IData)(0x1fU) 
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
                                       | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                                          ((IData)(0x1eU) 
                                           + (0xfe0U 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                 << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                 ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                  (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                             << 5U))] >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                   << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                 ((IData)(2U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                           << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                  ((IData)(1U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                            << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = __Vtemp_h349b0658__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = __Vtemp_h349b0658__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = __Vtemp_h349b0658__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = __Vtemp_h349b0658__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = __Vtemp_h349b0658__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = __Vtemp_h349b0658__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = __Vtemp_h349b0658__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = __Vtemp_h349b0658__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = __Vtemp_h349b0658__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = __Vtemp_h349b0658__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = __Vtemp_h349b0658__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = __Vtemp_h349b0658__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = __Vtemp_h349b0658__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = __Vtemp_h349b0658__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = __Vtemp_h349b0658__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = __Vtemp_h349b0658__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = __Vtemp_h349b0658__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = __Vtemp_h349b0658__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = __Vtemp_h349b0658__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = __Vtemp_h349b0658__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = __Vtemp_h349b0658__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = __Vtemp_h349b0658__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = __Vtemp_h349b0658__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = __Vtemp_h349b0658__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = __Vtemp_h349b0658__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = __Vtemp_h349b0658__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = __Vtemp_h349b0658__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                 ((IData)(0x1eU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                  ((IData)(0x1dU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = __Vtemp_h349b0658__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                 << 0xaU))) ? 0U : 
                (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                 ((IData)(0x20U) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                              << 5U)))] 
                 << ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                                << 0xaU))))) 
               | (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21[
                  ((IData)(0x1fU) + (0xfe0U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                                               << 5U)))] 
                  >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset) 
                               << 0xaU))));
    } else {
        if ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
            if ((0x7eU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h349b0658__0[2U] = (VSoc__ConstPool__CONST_ha6228237_0[2U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U]);
                __Vtemp_h349b0658__0[3U] = (VSoc__ConstPool__CONST_ha6228237_0[3U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U]);
                __Vtemp_h349b0658__0[4U] = (VSoc__ConstPool__CONST_ha6228237_0[4U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U]);
                __Vtemp_h349b0658__0[5U] = (VSoc__ConstPool__CONST_ha6228237_0[5U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U]);
                __Vtemp_h349b0658__0[6U] = (VSoc__ConstPool__CONST_ha6228237_0[6U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U]);
                __Vtemp_h349b0658__0[7U] = (VSoc__ConstPool__CONST_ha6228237_0[7U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U]);
                __Vtemp_h349b0658__0[8U] = (VSoc__ConstPool__CONST_ha6228237_0[8U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U]);
                __Vtemp_h349b0658__0[9U] = (VSoc__ConstPool__CONST_ha6228237_0[9U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U]);
                __Vtemp_h349b0658__0[0xaU] = (VSoc__ConstPool__CONST_ha6228237_0[0xaU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU]);
                __Vtemp_h349b0658__0[0xbU] = (VSoc__ConstPool__CONST_ha6228237_0[0xbU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU]);
                __Vtemp_h349b0658__0[0xcU] = (VSoc__ConstPool__CONST_ha6228237_0[0xcU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU]);
                __Vtemp_h349b0658__0[0xdU] = (VSoc__ConstPool__CONST_ha6228237_0[0xdU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU]);
                __Vtemp_h349b0658__0[0xeU] = (VSoc__ConstPool__CONST_ha6228237_0[0xeU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU]);
                __Vtemp_h349b0658__0[0xfU] = (VSoc__ConstPool__CONST_ha6228237_0[0xfU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]);
                __Vtemp_h349b0658__0[0x10U] = (VSoc__ConstPool__CONST_ha6228237_0[0x10U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U]);
                __Vtemp_h349b0658__0[0x11U] = (VSoc__ConstPool__CONST_ha6228237_0[0x11U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U]);
                __Vtemp_h349b0658__0[0x12U] = (VSoc__ConstPool__CONST_ha6228237_0[0x12U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U]);
                __Vtemp_h349b0658__0[0x13U] = (VSoc__ConstPool__CONST_ha6228237_0[0x13U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U]);
                __Vtemp_h349b0658__0[0x14U] = (VSoc__ConstPool__CONST_ha6228237_0[0x14U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U]);
                __Vtemp_h349b0658__0[0x15U] = (VSoc__ConstPool__CONST_ha6228237_0[0x15U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U]);
                __Vtemp_h349b0658__0[0x16U] = (VSoc__ConstPool__CONST_ha6228237_0[0x16U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U]);
                __Vtemp_h349b0658__0[0x17U] = (VSoc__ConstPool__CONST_ha6228237_0[0x17U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U]);
                __Vtemp_h349b0658__0[0x18U] = (VSoc__ConstPool__CONST_ha6228237_0[0x18U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U]);
                __Vtemp_h349b0658__0[0x19U] = (VSoc__ConstPool__CONST_ha6228237_0[0x19U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U]);
                __Vtemp_h349b0658__0[0x1aU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1aU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU]);
                __Vtemp_h349b0658__0[0x1bU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1bU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU]);
                __Vtemp_h349b0658__0[0x1cU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1cU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU]);
                __Vtemp_h349b0658__0[0x1eU] = (VSoc__ConstPool__CONST_ha6228237_0[0x1eU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]);
            } else if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h349b0658__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
                __Vtemp_h349b0658__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
                __Vtemp_h349b0658__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
                __Vtemp_h349b0658__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
                __Vtemp_h349b0658__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
                __Vtemp_h349b0658__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
                __Vtemp_h349b0658__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
                __Vtemp_h349b0658__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
                __Vtemp_h349b0658__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
                __Vtemp_h349b0658__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
                __Vtemp_h349b0658__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
                __Vtemp_h349b0658__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
                __Vtemp_h349b0658__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
                __Vtemp_h349b0658__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
                __Vtemp_h349b0658__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
                __Vtemp_h349b0658__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
                __Vtemp_h349b0658__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
                __Vtemp_h349b0658__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
                __Vtemp_h349b0658__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
                __Vtemp_h349b0658__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
                __Vtemp_h349b0658__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
                __Vtemp_h349b0658__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
                __Vtemp_h349b0658__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
                __Vtemp_h349b0658__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
                __Vtemp_h349b0658__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
                __Vtemp_h349b0658__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
                __Vtemp_h349b0658__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
                __Vtemp_h349b0658__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            } else if ((0x7aU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h349b0658__0[2U] = (VSoc__ConstPool__CONST_h6a1ad899_0[2U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U]);
                __Vtemp_h349b0658__0[3U] = (VSoc__ConstPool__CONST_h6a1ad899_0[3U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U]);
                __Vtemp_h349b0658__0[4U] = (VSoc__ConstPool__CONST_h6a1ad899_0[4U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U]);
                __Vtemp_h349b0658__0[5U] = (VSoc__ConstPool__CONST_h6a1ad899_0[5U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U]);
                __Vtemp_h349b0658__0[6U] = (VSoc__ConstPool__CONST_h6a1ad899_0[6U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U]);
                __Vtemp_h349b0658__0[7U] = (VSoc__ConstPool__CONST_h6a1ad899_0[7U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U]);
                __Vtemp_h349b0658__0[8U] = (VSoc__ConstPool__CONST_h6a1ad899_0[8U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U]);
                __Vtemp_h349b0658__0[9U] = (VSoc__ConstPool__CONST_h6a1ad899_0[9U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U]);
                __Vtemp_h349b0658__0[0xaU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xaU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU]);
                __Vtemp_h349b0658__0[0xbU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xbU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU]);
                __Vtemp_h349b0658__0[0xcU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xcU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU]);
                __Vtemp_h349b0658__0[0xdU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xdU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU]);
                __Vtemp_h349b0658__0[0xeU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xeU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU]);
                __Vtemp_h349b0658__0[0xfU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0xfU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]);
                __Vtemp_h349b0658__0[0x10U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x10U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U]);
                __Vtemp_h349b0658__0[0x11U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x11U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U]);
                __Vtemp_h349b0658__0[0x12U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x12U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U]);
                __Vtemp_h349b0658__0[0x13U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x13U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U]);
                __Vtemp_h349b0658__0[0x14U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x14U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U]);
                __Vtemp_h349b0658__0[0x15U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x15U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U]);
                __Vtemp_h349b0658__0[0x16U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x16U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U]);
                __Vtemp_h349b0658__0[0x17U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x17U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U]);
                __Vtemp_h349b0658__0[0x18U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x18U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U]);
                __Vtemp_h349b0658__0[0x19U] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x19U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U]);
                __Vtemp_h349b0658__0[0x1aU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1aU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU]);
                __Vtemp_h349b0658__0[0x1bU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1bU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU]);
                __Vtemp_h349b0658__0[0x1cU] = (VSoc__ConstPool__CONST_h6a1ad899_0[0x1cU] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU]);
                __Vtemp_h349b0658__0[0x1eU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data) 
                                                << 0x10U) 
                                               | (VSoc__ConstPool__CONST_h6a1ad899_0[0x1eU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU]));
            } else {
                if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                    __Vtemp_h349b0658__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
                    __Vtemp_h349b0658__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
                    __Vtemp_h349b0658__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
                    __Vtemp_h349b0658__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
                    __Vtemp_h349b0658__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
                    __Vtemp_h349b0658__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
                    __Vtemp_h349b0658__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
                    __Vtemp_h349b0658__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
                    __Vtemp_h349b0658__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
                    __Vtemp_h349b0658__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
                    __Vtemp_h349b0658__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
                    __Vtemp_h349b0658__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
                    __Vtemp_h349b0658__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
                    __Vtemp_h349b0658__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
                    __Vtemp_h349b0658__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
                    __Vtemp_h349b0658__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
                    __Vtemp_h349b0658__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
                    __Vtemp_h349b0658__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
                    __Vtemp_h349b0658__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
                    __Vtemp_h349b0658__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
                    __Vtemp_h349b0658__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
                    __Vtemp_h349b0658__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
                    __Vtemp_h349b0658__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
                    __Vtemp_h349b0658__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
                    __Vtemp_h349b0658__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
                    __Vtemp_h349b0658__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
                    __Vtemp_h349b0658__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
                } else if ((0x76U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                    __Vtemp_h349b0658__0[2U] = (VSoc__ConstPool__CONST_he1416729_0[2U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U]);
                    __Vtemp_h349b0658__0[3U] = (VSoc__ConstPool__CONST_he1416729_0[3U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U]);
                    __Vtemp_h349b0658__0[4U] = (VSoc__ConstPool__CONST_he1416729_0[4U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U]);
                    __Vtemp_h349b0658__0[5U] = (VSoc__ConstPool__CONST_he1416729_0[5U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U]);
                    __Vtemp_h349b0658__0[6U] = (VSoc__ConstPool__CONST_he1416729_0[6U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U]);
                    __Vtemp_h349b0658__0[7U] = (VSoc__ConstPool__CONST_he1416729_0[7U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U]);
                    __Vtemp_h349b0658__0[8U] = (VSoc__ConstPool__CONST_he1416729_0[8U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U]);
                    __Vtemp_h349b0658__0[9U] = (VSoc__ConstPool__CONST_he1416729_0[9U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U]);
                    __Vtemp_h349b0658__0[0xaU] = (VSoc__ConstPool__CONST_he1416729_0[0xaU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU]);
                    __Vtemp_h349b0658__0[0xbU] = (VSoc__ConstPool__CONST_he1416729_0[0xbU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU]);
                    __Vtemp_h349b0658__0[0xcU] = (VSoc__ConstPool__CONST_he1416729_0[0xcU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU]);
                    __Vtemp_h349b0658__0[0xdU] = (VSoc__ConstPool__CONST_he1416729_0[0xdU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU]);
                    __Vtemp_h349b0658__0[0xeU] = (VSoc__ConstPool__CONST_he1416729_0[0xeU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU]);
                    __Vtemp_h349b0658__0[0xfU] = (VSoc__ConstPool__CONST_he1416729_0[0xfU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU]);
                    __Vtemp_h349b0658__0[0x10U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x10U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U]);
                    __Vtemp_h349b0658__0[0x11U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x11U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U]);
                    __Vtemp_h349b0658__0[0x12U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x12U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U]);
                    __Vtemp_h349b0658__0[0x13U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x13U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U]);
                    __Vtemp_h349b0658__0[0x14U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x14U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U]);
                    __Vtemp_h349b0658__0[0x15U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x15U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U]);
                    __Vtemp_h349b0658__0[0x16U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x16U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U]);
                    __Vtemp_h349b0658__0[0x17U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x17U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U]);
                    __Vtemp_h349b0658__0[0x18U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x18U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U]);
                    __Vtemp_h349b0658__0[0x19U] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x19U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U]);
                    __Vtemp_h349b0658__0[0x1aU] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x1aU] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU]);
                    __Vtemp_h349b0658__0[0x1bU] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x1bU] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU]);
                    __Vtemp_h349b0658__0[0x1cU] = (
                                                   VSoc__ConstPool__CONST_he1416729_0[0x1cU] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU]);
                } else if ((0x74U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                    __Vtemp_h349b0658__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
                    __Vtemp_h349b0658__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
                    __Vtemp_h349b0658__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
                    __Vtemp_h349b0658__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
                    __Vtemp_h349b0658__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
                    __Vtemp_h349b0658__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
                    __Vtemp_h349b0658__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
                    __Vtemp_h349b0658__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
                    __Vtemp_h349b0658__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
                    __Vtemp_h349b0658__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
                    __Vtemp_h349b0658__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
                    __Vtemp_h349b0658__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
                    __Vtemp_h349b0658__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
                    __Vtemp_h349b0658__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
                    __Vtemp_h349b0658__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
                    __Vtemp_h349b0658__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
                    __Vtemp_h349b0658__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
                    __Vtemp_h349b0658__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
                    __Vtemp_h349b0658__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
                    __Vtemp_h349b0658__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
                    __Vtemp_h349b0658__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
                    __Vtemp_h349b0658__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
                    __Vtemp_h349b0658__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
                    __Vtemp_h349b0658__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
                    __Vtemp_h349b0658__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
                    __Vtemp_h349b0658__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
                    __Vtemp_h349b0658__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
                } else {
                    __Vtemp_h349b0658__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[2U];
                    __Vtemp_h349b0658__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[3U];
                    __Vtemp_h349b0658__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[4U];
                    __Vtemp_h349b0658__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[5U];
                    __Vtemp_h349b0658__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[6U];
                    __Vtemp_h349b0658__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[7U];
                    __Vtemp_h349b0658__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[8U];
                    __Vtemp_h349b0658__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[9U];
                    __Vtemp_h349b0658__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0xaU];
                    __Vtemp_h349b0658__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0xbU];
                    __Vtemp_h349b0658__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0xcU];
                    __Vtemp_h349b0658__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0xdU];
                    __Vtemp_h349b0658__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0xeU];
                    __Vtemp_h349b0658__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0xfU];
                    __Vtemp_h349b0658__0[0x10U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x10U];
                    __Vtemp_h349b0658__0[0x11U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x11U];
                    __Vtemp_h349b0658__0[0x12U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x12U];
                    __Vtemp_h349b0658__0[0x13U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x13U];
                    __Vtemp_h349b0658__0[0x14U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x14U];
                    __Vtemp_h349b0658__0[0x15U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x15U];
                    __Vtemp_h349b0658__0[0x16U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x16U];
                    __Vtemp_h349b0658__0[0x17U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x17U];
                    __Vtemp_h349b0658__0[0x18U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x18U];
                    __Vtemp_h349b0658__0[0x19U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x19U];
                    __Vtemp_h349b0658__0[0x1aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x1aU];
                    __Vtemp_h349b0658__0[0x1bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x1bU];
                    __Vtemp_h349b0658__0[0x1cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4058[0x1cU];
                }
                __Vtemp_h349b0658__0[0x1eU] = __Vtemp_h16cf4287__0[0x1eU];
            }
        } else if ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
            if ((0x7cU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h349b0658__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
                __Vtemp_h349b0658__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
                __Vtemp_h349b0658__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
                __Vtemp_h349b0658__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
                __Vtemp_h349b0658__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
                __Vtemp_h349b0658__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
                __Vtemp_h349b0658__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
                __Vtemp_h349b0658__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
                __Vtemp_h349b0658__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
                __Vtemp_h349b0658__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
                __Vtemp_h349b0658__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
                __Vtemp_h349b0658__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
                __Vtemp_h349b0658__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
                __Vtemp_h349b0658__0[0xfU] = __Vtemp_hc0347116__0[0xfU];
                __Vtemp_h349b0658__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
                __Vtemp_h349b0658__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
                __Vtemp_h349b0658__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
                __Vtemp_h349b0658__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
                __Vtemp_h349b0658__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
                __Vtemp_h349b0658__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
                __Vtemp_h349b0658__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
                __Vtemp_h349b0658__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
                __Vtemp_h349b0658__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
                __Vtemp_h349b0658__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
                __Vtemp_h349b0658__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
                __Vtemp_h349b0658__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
                __Vtemp_h349b0658__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
                __Vtemp_h349b0658__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1eU];
            } else {
                __Vtemp_h349b0658__0[2U] = __Vtemp_h4dad2708__0[2U];
                __Vtemp_h349b0658__0[3U] = __Vtemp_h4dad2708__0[3U];
                __Vtemp_h349b0658__0[4U] = __Vtemp_h4dad2708__0[4U];
                __Vtemp_h349b0658__0[5U] = __Vtemp_h4dad2708__0[5U];
                __Vtemp_h349b0658__0[6U] = __Vtemp_h4dad2708__0[6U];
                __Vtemp_h349b0658__0[7U] = __Vtemp_h4dad2708__0[7U];
                __Vtemp_h349b0658__0[8U] = __Vtemp_h4dad2708__0[8U];
                __Vtemp_h349b0658__0[9U] = __Vtemp_h4dad2708__0[9U];
                __Vtemp_h349b0658__0[0xaU] = __Vtemp_h4dad2708__0[0xaU];
                __Vtemp_h349b0658__0[0xbU] = __Vtemp_h4dad2708__0[0xbU];
                __Vtemp_h349b0658__0[0xcU] = __Vtemp_h4dad2708__0[0xcU];
                __Vtemp_h349b0658__0[0xdU] = __Vtemp_h4dad2708__0[0xdU];
                __Vtemp_h349b0658__0[0xeU] = __Vtemp_h4dad2708__0[0xeU];
                __Vtemp_h349b0658__0[0xfU] = __Vtemp_hc0347116__0[0xfU];
                __Vtemp_h349b0658__0[0x10U] = __Vtemp_h4dad2708__0[0x10U];
                __Vtemp_h349b0658__0[0x11U] = __Vtemp_h4dad2708__0[0x11U];
                __Vtemp_h349b0658__0[0x12U] = __Vtemp_h4dad2708__0[0x12U];
                __Vtemp_h349b0658__0[0x13U] = __Vtemp_h4dad2708__0[0x13U];
                __Vtemp_h349b0658__0[0x14U] = __Vtemp_h4dad2708__0[0x14U];
                __Vtemp_h349b0658__0[0x15U] = __Vtemp_h4dad2708__0[0x15U];
                __Vtemp_h349b0658__0[0x16U] = __Vtemp_h4dad2708__0[0x16U];
                __Vtemp_h349b0658__0[0x17U] = __Vtemp_h4dad2708__0[0x17U];
                __Vtemp_h349b0658__0[0x18U] = __Vtemp_h4dad2708__0[0x18U];
                __Vtemp_h349b0658__0[0x19U] = __Vtemp_h4dad2708__0[0x19U];
                __Vtemp_h349b0658__0[0x1aU] = __Vtemp_h4dad2708__0[0x1aU];
                __Vtemp_h349b0658__0[0x1bU] = __Vtemp_h4dad2708__0[0x1bU];
                __Vtemp_h349b0658__0[0x1cU] = __Vtemp_h4dad2708__0[0x1cU];
                __Vtemp_h349b0658__0[0x1eU] = ((0x78U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))
                                                ? (IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1fU])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data))))
                                                : __Vtemp_he9197a59__0[0x1eU]);
            }
        } else if ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))) {
            if ((0x78U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset))) {
                __Vtemp_h349b0658__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[2U];
                __Vtemp_h349b0658__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[3U];
                __Vtemp_h349b0658__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[4U];
                __Vtemp_h349b0658__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[5U];
                __Vtemp_h349b0658__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[6U];
                __Vtemp_h349b0658__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[7U];
                __Vtemp_h349b0658__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[8U];
                __Vtemp_h349b0658__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[9U];
                __Vtemp_h349b0658__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xaU];
                __Vtemp_h349b0658__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xbU];
                __Vtemp_h349b0658__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xcU];
                __Vtemp_h349b0658__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xdU];
                __Vtemp_h349b0658__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xeU];
                __Vtemp_h349b0658__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0xfU];
                __Vtemp_h349b0658__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x10U];
                __Vtemp_h349b0658__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x11U];
                __Vtemp_h349b0658__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x12U];
                __Vtemp_h349b0658__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x13U];
                __Vtemp_h349b0658__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x14U];
                __Vtemp_h349b0658__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x15U];
                __Vtemp_h349b0658__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x16U];
                __Vtemp_h349b0658__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x17U];
                __Vtemp_h349b0658__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x18U];
                __Vtemp_h349b0658__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x19U];
                __Vtemp_h349b0658__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1aU];
                __Vtemp_h349b0658__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1bU];
                __Vtemp_h349b0658__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data[0x1cU];
                __Vtemp_h349b0658__0[0x1eU] = (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data);
            } else {
                __Vtemp_h349b0658__0[2U] = __Vtemp_hcb127799__0[2U];
                __Vtemp_h349b0658__0[3U] = __Vtemp_hcb127799__0[3U];
                __Vtemp_h349b0658__0[4U] = __Vtemp_hcb127799__0[4U];
                __Vtemp_h349b0658__0[5U] = __Vtemp_hcb127799__0[5U];
                __Vtemp_h349b0658__0[6U] = __Vtemp_hcb127799__0[6U];
                __Vtemp_h349b0658__0[7U] = __Vtemp_hcb127799__0[7U];
                __Vtemp_h349b0658__0[8U] = __Vtemp_hcb127799__0[8U];
                __Vtemp_h349b0658__0[9U] = __Vtemp_hcb127799__0[9U];
                __Vtemp_h349b0658__0[0xaU] = __Vtemp_hcb127799__0[0xaU];
                __Vtemp_h349b0658__0[0xbU] = __Vtemp_hcb127799__0[0xbU];
                __Vtemp_h349b0658__0[0xcU] = __Vtemp_hcb127799__0[0xcU];
                __Vtemp_h349b0658__0[0xdU] = __Vtemp_hcb127799__0[0xdU];
                __Vtemp_h349b0658__0[0xeU] = __Vtemp_hcb127799__0[0xeU];
                __Vtemp_h349b0658__0[0xfU] = __Vtemp_hcb127799__0[0xfU];
                __Vtemp_h349b0658__0[0x10U] = __Vtemp_hcb127799__0[0x10U];
                __Vtemp_h349b0658__0[0x11U] = __Vtemp_hcb127799__0[0x11U];
                __Vtemp_h349b0658__0[0x12U] = __Vtemp_hcb127799__0[0x12U];
                __Vtemp_h349b0658__0[0x13U] = __Vtemp_hcb127799__0[0x13U];
                __Vtemp_h349b0658__0[0x14U] = __Vtemp_hcb127799__0[0x14U];
                __Vtemp_h349b0658__0[0x15U] = __Vtemp_hcb127799__0[0x15U];
                __Vtemp_h349b0658__0[0x16U] = __Vtemp_hcb127799__0[0x16U];
                __Vtemp_h349b0658__0[0x17U] = __Vtemp_hcb127799__0[0x17U];
                __Vtemp_h349b0658__0[0x18U] = __Vtemp_hcb127799__0[0x18U];
                __Vtemp_h349b0658__0[0x19U] = __Vtemp_hcb127799__0[0x19U];
                __Vtemp_h349b0658__0[0x1aU] = __Vtemp_hcb127799__0[0x1aU];
                __Vtemp_h349b0658__0[0x1bU] = __Vtemp_hcb127799__0[0x1bU];
                __Vtemp_h349b0658__0[0x1cU] = __Vtemp_hcb127799__0[0x1cU];
                __Vtemp_h349b0658__0[0x1eU] = __Vtemp_hcb127799__0[0x1eU];
            }
        } else {
            __Vtemp_h349b0658__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
            __Vtemp_h349b0658__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
            __Vtemp_h349b0658__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
            __Vtemp_h349b0658__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
            __Vtemp_h349b0658__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
            __Vtemp_h349b0658__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
            __Vtemp_h349b0658__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
            __Vtemp_h349b0658__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
            __Vtemp_h349b0658__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
            __Vtemp_h349b0658__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
            __Vtemp_h349b0658__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
            __Vtemp_h349b0658__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
            __Vtemp_h349b0658__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
            __Vtemp_h349b0658__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
            __Vtemp_h349b0658__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
            __Vtemp_h349b0658__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
            __Vtemp_h349b0658__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
            __Vtemp_h349b0658__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
            __Vtemp_h349b0658__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
            __Vtemp_h349b0658__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
            __Vtemp_h349b0658__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
            __Vtemp_h349b0658__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
            __Vtemp_h349b0658__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
            __Vtemp_h349b0658__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
            __Vtemp_h349b0658__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            __Vtemp_h349b0658__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            __Vtemp_h349b0658__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            __Vtemp_h349b0658__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        }
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0U] 
            = __Vtemp_h371e7235__0[0U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[1U] 
            = __Vtemp_h371e7235__0[1U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[2U] 
            = __Vtemp_h349b0658__0[2U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[3U] 
            = __Vtemp_h349b0658__0[3U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[4U] 
            = __Vtemp_h349b0658__0[4U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[5U] 
            = __Vtemp_h349b0658__0[5U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[6U] 
            = __Vtemp_h349b0658__0[6U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[7U] 
            = __Vtemp_h349b0658__0[7U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[8U] 
            = __Vtemp_h349b0658__0[8U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[9U] 
            = __Vtemp_h349b0658__0[9U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xaU] 
            = __Vtemp_h349b0658__0[0xaU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xbU] 
            = __Vtemp_h349b0658__0[0xbU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xcU] 
            = __Vtemp_h349b0658__0[0xcU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xdU] 
            = __Vtemp_h349b0658__0[0xdU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xeU] 
            = __Vtemp_h349b0658__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0xfU] 
            = __Vtemp_h349b0658__0[0xfU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x10U] 
            = __Vtemp_h349b0658__0[0x10U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x11U] 
            = __Vtemp_h349b0658__0[0x11U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x12U] 
            = __Vtemp_h349b0658__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x13U] 
            = __Vtemp_h349b0658__0[0x13U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x14U] 
            = __Vtemp_h349b0658__0[0x14U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x15U] 
            = __Vtemp_h349b0658__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x16U] 
            = __Vtemp_h349b0658__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x17U] 
            = __Vtemp_h349b0658__0[0x17U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x18U] 
            = __Vtemp_h349b0658__0[0x18U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x19U] 
            = __Vtemp_h349b0658__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1aU] 
            = __Vtemp_h349b0658__0[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1bU] 
            = __Vtemp_h349b0658__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1cU] 
            = __Vtemp_h349b0658__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1dU] 
            = __Vtemp_h371e7235__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1eU] 
            = __Vtemp_h349b0658__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data[0x1fU] 
            = __Vtemp_h371e7235__0[0x1fU];
    }
}
