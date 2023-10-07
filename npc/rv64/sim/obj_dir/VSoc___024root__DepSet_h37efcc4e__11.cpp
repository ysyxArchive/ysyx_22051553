// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

extern const VlWide<31>/*991:0*/ VSoc__ConstPool__CONST_h6a1ad899_0;
extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_ha6228237_0;
extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<30>/*959:0*/ VSoc__ConstPool__CONST_he1416729_0;
extern const VlWide<28>/*895:0*/ VSoc__ConstPool__CONST_hdbe32996_0;
extern const VlWide<29>/*927:0*/ VSoc__ConstPool__CONST_hd4c94b97_0;
extern const VlWide<27>/*863:0*/ VSoc__ConstPool__CONST_hdde329d1_0;
extern const VlWide<26>/*831:0*/ VSoc__ConstPool__CONST_h2dcfa7ce_0;
extern const VlWide<25>/*799:0*/ VSoc__ConstPool__CONST_h7dfaa27a_0;
extern const VlWide<8>/*255:0*/ VSoc__ConstPool__CONST_h5b889007_0;
extern const VlWide<24>/*767:0*/ VSoc__ConstPool__CONST_h547365de_0;
extern const VlWide<9>/*287:0*/ VSoc__ConstPool__CONST_h52841b67_0;
extern const VlWide<10>/*319:0*/ VSoc__ConstPool__CONST_h3c9e891d_0;
extern const VlWide<23>/*735:0*/ VSoc__ConstPool__CONST_hc4d3a2ae_0;
extern const VlWide<21>/*671:0*/ VSoc__ConstPool__CONST_h3bb70343_0;
extern const VlWide<11>/*351:0*/ VSoc__ConstPool__CONST_hfcc3ede4_0;
extern const VlWide<22>/*703:0*/ VSoc__ConstPool__CONST_h93aae58d_0;
extern const VlWide<12>/*383:0*/ VSoc__ConstPool__CONST_h1ba38564_0;
extern const VlWide<20>/*639:0*/ VSoc__ConstPool__CONST_h3422a097_0;
extern const VlWide<13>/*415:0*/ VSoc__ConstPool__CONST_h1ab850d3_0;
extern const VlWide<14>/*447:0*/ VSoc__ConstPool__CONST_h86280a92_0;
extern const VlWide<18>/*575:0*/ VSoc__ConstPool__CONST_h6e9da94f_0;
extern const VlWide<19>/*607:0*/ VSoc__ConstPool__CONST_h7b100ceb_0;
extern const VlWide<15>/*479:0*/ VSoc__ConstPool__CONST_h9eabd8e6_0;
extern const VlWide<16>/*511:0*/ VSoc__ConstPool__CONST_h8b2c9f06_0;
extern const VlWide<17>/*543:0*/ VSoc__ConstPool__CONST_h00a443f1_0;

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__12__PROF__Soc__l2844(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__12__PROF__Soc__l2844\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h33df66e8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h09391a71__0;
    VlWide<32>/*1023:0*/ __Vtemp_h11899016__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc0a9dbed__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3bbf0aa8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h646e5d8b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2b892b99__0;
    VlWide<32>/*1023:0*/ __Vtemp_h81c0fec4__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1cef4313__0;
    VlWide<32>/*1023:0*/ __Vtemp_h8d97ca56__0;
    VlWide<32>/*1023:0*/ __Vtemp_h11e45ba0__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb66a0ed4__0;
    VlWide<32>/*1023:0*/ __Vtemp_h59ee0969__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3ae6ebf4__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3f251c01__0;
    VlWide<32>/*1023:0*/ __Vtemp_h20e7a257__0;
    VlWide<32>/*1023:0*/ __Vtemp_he49ccd7f__0;
    VlWide<32>/*1023:0*/ __Vtemp_h8a091050__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6ffddd14__0;
    VlWide<32>/*1023:0*/ __Vtemp_h68f875e6__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3cebbe12__0;
    VlWide<32>/*1023:0*/ __Vtemp_he3523fd1__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd50c546c__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha0811969__0;
    VlWide<32>/*1023:0*/ __Vtemp_hcc59df9e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h506095d1__0;
    VlWide<32>/*1023:0*/ __Vtemp_h75f2f96b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5297cacf__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5d6716be__0;
    VlWide<32>/*1023:0*/ __Vtemp_he67f9ded__0;
    VlWide<32>/*1023:0*/ __Vtemp_h35f56f93__0;
    VlWide<32>/*1023:0*/ __Vtemp_h674275a3__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha533429a__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha5ec06e7__0;
    VlWide<32>/*1023:0*/ __Vtemp_hdf309363__0;
    VlWide<32>/*1023:0*/ __Vtemp_he9876133__0;
    VlWide<32>/*1023:0*/ __Vtemp_h47286188__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2c109b0a__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1d2be4cf__0;
    VlWide<32>/*1023:0*/ __Vtemp_hdf387b5f__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf5aa7334__0;
    VlWide<32>/*1023:0*/ __Vtemp_hfaf00f96__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2423cd47__0;
    VlWide<32>/*1023:0*/ __Vtemp_hdfa5d9fa__0;
    VlWide<32>/*1023:0*/ __Vtemp_hea27914f__0;
    // Body
    if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h33df66e8__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))) 
                                             << 0x30U) 
                                            | (0xffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]))))));
        __Vtemp_h33df66e8__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))) 
                                              << 0x30U) 
                                             | (0xffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]))))) 
                                            >> 0x20U));
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h33df66e8__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h33df66e8__0[1U] = ((0xffff0000U & 
                                     ((VSoc__ConstPool__CONST_h6a1ad899_0[0U] 
                                       << 0x10U) & 
                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                    | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h33df66e8__0[0U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]));
        __Vtemp_h33df66e8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h33df66e8__0[0U] = ((0xffff0000U & 
                                     ((VSoc__ConstPool__CONST_ha6228237_0[0U] 
                                       << 0x10U) & 
                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U])) 
                                    | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h33df66e8__0[1U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])));
    } else {
        __Vtemp_h33df66e8__0[0U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vtemp_h33df66e8__0[1U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    }
    if ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09391a71__0[2U] = ((0xffff0000U & 
                                     ((VSoc__ConstPool__CONST_he1416729_0[0U] 
                                       << 0x10U) & 
                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])) 
                                    | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h09391a71__0[3U] = ((0xffffU & ((VSoc__ConstPool__CONST_he1416729_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_he1416729_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U])));
        __Vtemp_h09391a71__0[4U] = ((0xffffU & ((VSoc__ConstPool__CONST_he1416729_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_he1416729_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])));
        __Vtemp_h09391a71__0[5U] = ((0xffffU & ((VSoc__ConstPool__CONST_he1416729_0[2U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_he1416729_0[3U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])));
        __Vtemp_h09391a71__0[6U] = ((0xffffU & ((VSoc__ConstPool__CONST_he1416729_0[3U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_he1416729_0[4U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])));
        __Vtemp_h09391a71__0[7U] = ((0xffffU & ((VSoc__ConstPool__CONST_he1416729_0[4U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_he1416729_0[5U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])));
        __Vtemp_h09391a71__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_he1416729_0[5U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_he1416729_0[6U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h09391a71__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_he1416729_0[6U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_he1416729_0[7U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h09391a71__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_he1416729_0[7U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_he1416729_0[8U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h09391a71__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_he1416729_0[8U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_he1416729_0[9U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h09391a71__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_he1416729_0[9U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_he1416729_0[0xaU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h09391a71__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_he1416729_0[0xaU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_he1416729_0[0xbU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h09391a71__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_he1416729_0[0xbU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_he1416729_0[0xcU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h09391a71__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_he1416729_0[0xcU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_he1416729_0[0xdU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h09391a71__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h09391a71__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h09391a71__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h09391a71__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h09391a71__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h09391a71__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h09391a71__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h09391a71__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h09391a71__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h09391a71__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h09391a71__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x18U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h09391a71__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x18U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x19U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h09391a71__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x19U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x1aU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h09391a71__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x1aU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x1bU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h09391a71__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x1bU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x1cU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
        __Vtemp_h09391a71__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_he1416729_0[0x1cU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_he1416729_0[0x1dU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09391a71__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h09391a71__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h09391a71__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h09391a71__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h09391a71__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h09391a71__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h09391a71__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h09391a71__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h09391a71__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h09391a71__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h09391a71__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h09391a71__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h09391a71__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h09391a71__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h09391a71__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h09391a71__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h09391a71__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h09391a71__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h09391a71__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h09391a71__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h09391a71__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h09391a71__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h09391a71__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h09391a71__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h09391a71__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h09391a71__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h09391a71__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h09391a71__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h09391a71__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h09391a71__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09391a71__0[2U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])));
        __Vtemp_h09391a71__0[3U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U])));
        __Vtemp_h09391a71__0[4U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[2U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[3U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])));
        __Vtemp_h09391a71__0[5U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[3U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[4U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])));
        __Vtemp_h09391a71__0[6U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[4U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[5U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])));
        __Vtemp_h09391a71__0[7U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[5U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[6U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])));
        __Vtemp_h09391a71__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[6U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[7U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h09391a71__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_h6a1ad899_0[7U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6a1ad899_0[8U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h09391a71__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h6a1ad899_0[8U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h6a1ad899_0[9U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h09391a71__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h6a1ad899_0[9U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h6a1ad899_0[0xaU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h09391a71__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h6a1ad899_0[0xaU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h6a1ad899_0[0xbU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h09391a71__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h6a1ad899_0[0xbU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h6a1ad899_0[0xcU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h09391a71__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h6a1ad899_0[0xcU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h6a1ad899_0[0xdU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h09391a71__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h6a1ad899_0[0xdU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h6a1ad899_0[0xeU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h09391a71__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h09391a71__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h09391a71__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h09391a71__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h09391a71__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h09391a71__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h09391a71__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h09391a71__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h09391a71__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h09391a71__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x18U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h09391a71__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x18U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x19U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h09391a71__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x19U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x1aU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h09391a71__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x1aU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x1bU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h09391a71__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x1bU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x1cU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h09391a71__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x1cU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x1dU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
        __Vtemp_h09391a71__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6a1ad899_0[0x1dU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6a1ad899_0[0x1eU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09391a71__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_h09391a71__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h09391a71__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h09391a71__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h09391a71__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h09391a71__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h09391a71__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h09391a71__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h09391a71__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h09391a71__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h09391a71__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h09391a71__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h09391a71__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h09391a71__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h09391a71__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h09391a71__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h09391a71__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h09391a71__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h09391a71__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h09391a71__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h09391a71__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h09391a71__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h09391a71__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h09391a71__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h09391a71__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h09391a71__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h09391a71__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h09391a71__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h09391a71__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_h09391a71__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h09391a71__0[2U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])));
        __Vtemp_h09391a71__0[3U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[2U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[3U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U])));
        __Vtemp_h09391a71__0[4U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[3U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[4U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])));
        __Vtemp_h09391a71__0[5U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[4U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[5U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])));
        __Vtemp_h09391a71__0[6U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[5U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[6U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])));
        __Vtemp_h09391a71__0[7U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[6U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[7U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])));
        __Vtemp_h09391a71__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[7U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[8U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h09391a71__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_ha6228237_0[8U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_ha6228237_0[9U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h09391a71__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_ha6228237_0[9U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_ha6228237_0[0xaU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h09391a71__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_ha6228237_0[0xaU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_ha6228237_0[0xbU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h09391a71__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_ha6228237_0[0xbU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_ha6228237_0[0xcU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h09391a71__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_ha6228237_0[0xcU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_ha6228237_0[0xdU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h09391a71__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_ha6228237_0[0xdU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_ha6228237_0[0xeU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h09391a71__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_ha6228237_0[0xeU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_ha6228237_0[0xfU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h09391a71__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h09391a71__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h09391a71__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h09391a71__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h09391a71__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h09391a71__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h09391a71__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h09391a71__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h09391a71__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x18U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h09391a71__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x18U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x19U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h09391a71__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x19U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x1aU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h09391a71__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x1aU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x1bU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h09391a71__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x1bU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x1cU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h09391a71__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x1cU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x1dU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h09391a71__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x1dU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x1eU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
        __Vtemp_h09391a71__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_ha6228237_0[0x1eU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_ha6228237_0[0x1fU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else {
        __Vtemp_h09391a71__0[2U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_h09391a71__0[3U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_h09391a71__0[4U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_h09391a71__0[5U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_h09391a71__0[6U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_h09391a71__0[7U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_h09391a71__0[8U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_h09391a71__0[9U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_h09391a71__0[0xaU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_h09391a71__0[0xbU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_h09391a71__0[0xcU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_h09391a71__0[0xdU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_h09391a71__0[0xeU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_h09391a71__0[0xfU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_h09391a71__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_h09391a71__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_h09391a71__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_h09391a71__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_h09391a71__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_h09391a71__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_h09391a71__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_h09391a71__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_h09391a71__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_h09391a71__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_h09391a71__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_h09391a71__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_h09391a71__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_h09391a71__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_h09391a71__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_h09391a71__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    }
    if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11899016__0[4U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]));
        __Vtemp_h11899016__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h11899016__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h11899016__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h11899016__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h11899016__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h11899016__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h11899016__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h11899016__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h11899016__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h11899016__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h11899016__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h11899016__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h11899016__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h11899016__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h11899016__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h11899016__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h11899016__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h11899016__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h11899016__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h11899016__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h11899016__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h11899016__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h11899016__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h11899016__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h11899016__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h11899016__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11899016__0[4U] = ((0xffff0000U & 
                                     ((VSoc__ConstPool__CONST_hdbe32996_0[0U] 
                                       << 0x10U) & 
                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])) 
                                    | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h11899016__0[5U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdbe32996_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdbe32996_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])));
        __Vtemp_h11899016__0[6U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdbe32996_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdbe32996_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])));
        __Vtemp_h11899016__0[7U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdbe32996_0[2U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdbe32996_0[3U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])));
        __Vtemp_h11899016__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdbe32996_0[3U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdbe32996_0[4U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h11899016__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdbe32996_0[4U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdbe32996_0[5U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h11899016__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdbe32996_0[5U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdbe32996_0[6U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h11899016__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdbe32996_0[6U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdbe32996_0[7U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h11899016__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdbe32996_0[7U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdbe32996_0[8U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h11899016__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdbe32996_0[8U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdbe32996_0[9U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h11899016__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdbe32996_0[9U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdbe32996_0[0xaU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h11899016__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdbe32996_0[0xaU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdbe32996_0[0xbU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h11899016__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h11899016__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h11899016__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h11899016__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h11899016__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h11899016__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h11899016__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h11899016__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h11899016__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h11899016__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h11899016__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h11899016__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h11899016__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x18U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h11899016__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x18U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x19U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h11899016__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdbe32996_0[0x19U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdbe32996_0[0x1aU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11899016__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h11899016__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h11899016__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h11899016__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h11899016__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h11899016__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h11899016__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h11899016__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h11899016__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h11899016__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h11899016__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h11899016__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h11899016__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h11899016__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h11899016__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h11899016__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h11899016__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h11899016__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h11899016__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h11899016__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h11899016__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h11899016__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h11899016__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h11899016__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h11899016__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h11899016__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h11899016__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11899016__0[4U] = ((0xffffU & ((VSoc__ConstPool__CONST_hd4c94b97_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hd4c94b97_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])));
        __Vtemp_h11899016__0[5U] = ((0xffffU & ((VSoc__ConstPool__CONST_hd4c94b97_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hd4c94b97_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])));
        __Vtemp_h11899016__0[6U] = ((0xffffU & ((VSoc__ConstPool__CONST_hd4c94b97_0[2U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hd4c94b97_0[3U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])));
        __Vtemp_h11899016__0[7U] = ((0xffffU & ((VSoc__ConstPool__CONST_hd4c94b97_0[3U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hd4c94b97_0[4U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])));
        __Vtemp_h11899016__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_hd4c94b97_0[4U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hd4c94b97_0[5U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h11899016__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_hd4c94b97_0[5U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hd4c94b97_0[6U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h11899016__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hd4c94b97_0[6U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hd4c94b97_0[7U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h11899016__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hd4c94b97_0[7U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hd4c94b97_0[8U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h11899016__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hd4c94b97_0[8U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hd4c94b97_0[9U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h11899016__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hd4c94b97_0[9U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hd4c94b97_0[0xaU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h11899016__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hd4c94b97_0[0xaU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hd4c94b97_0[0xbU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h11899016__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hd4c94b97_0[0xbU] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hd4c94b97_0[0xcU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h11899016__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h11899016__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h11899016__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h11899016__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h11899016__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h11899016__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h11899016__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h11899016__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h11899016__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h11899016__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h11899016__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h11899016__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x18U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h11899016__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x18U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x19U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h11899016__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x19U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x1aU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h11899016__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hd4c94b97_0[0x1aU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x1bU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11899016__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h11899016__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h11899016__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h11899016__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h11899016__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h11899016__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h11899016__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h11899016__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h11899016__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h11899016__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h11899016__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h11899016__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h11899016__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h11899016__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h11899016__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h11899016__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h11899016__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h11899016__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h11899016__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h11899016__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h11899016__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h11899016__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h11899016__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h11899016__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h11899016__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h11899016__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h11899016__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else {
        __Vtemp_h11899016__0[4U] = __Vtemp_h09391a71__0[4U];
        __Vtemp_h11899016__0[5U] = __Vtemp_h09391a71__0[5U];
        __Vtemp_h11899016__0[6U] = __Vtemp_h09391a71__0[6U];
        __Vtemp_h11899016__0[7U] = __Vtemp_h09391a71__0[7U];
        __Vtemp_h11899016__0[8U] = __Vtemp_h09391a71__0[8U];
        __Vtemp_h11899016__0[9U] = __Vtemp_h09391a71__0[9U];
        __Vtemp_h11899016__0[0xaU] = __Vtemp_h09391a71__0[0xaU];
        __Vtemp_h11899016__0[0xbU] = __Vtemp_h09391a71__0[0xbU];
        __Vtemp_h11899016__0[0xcU] = __Vtemp_h09391a71__0[0xcU];
        __Vtemp_h11899016__0[0xdU] = __Vtemp_h09391a71__0[0xdU];
        __Vtemp_h11899016__0[0xeU] = __Vtemp_h09391a71__0[0xeU];
        __Vtemp_h11899016__0[0xfU] = __Vtemp_h09391a71__0[0xfU];
        __Vtemp_h11899016__0[0x10U] = __Vtemp_h09391a71__0[0x10U];
        __Vtemp_h11899016__0[0x11U] = __Vtemp_h09391a71__0[0x11U];
        __Vtemp_h11899016__0[0x12U] = __Vtemp_h09391a71__0[0x12U];
        __Vtemp_h11899016__0[0x13U] = __Vtemp_h09391a71__0[0x13U];
        __Vtemp_h11899016__0[0x14U] = __Vtemp_h09391a71__0[0x14U];
        __Vtemp_h11899016__0[0x15U] = __Vtemp_h09391a71__0[0x15U];
        __Vtemp_h11899016__0[0x16U] = __Vtemp_h09391a71__0[0x16U];
        __Vtemp_h11899016__0[0x17U] = __Vtemp_h09391a71__0[0x17U];
        __Vtemp_h11899016__0[0x18U] = __Vtemp_h09391a71__0[0x18U];
        __Vtemp_h11899016__0[0x19U] = __Vtemp_h09391a71__0[0x19U];
        __Vtemp_h11899016__0[0x1aU] = __Vtemp_h09391a71__0[0x1aU];
        __Vtemp_h11899016__0[0x1bU] = __Vtemp_h09391a71__0[0x1bU];
        __Vtemp_h11899016__0[0x1cU] = __Vtemp_h09391a71__0[0x1cU];
        __Vtemp_h11899016__0[0x1dU] = __Vtemp_h09391a71__0[0x1dU];
        __Vtemp_h11899016__0[0x1eU] = __Vtemp_h09391a71__0[0x1eU];
    }
    __Vtemp_hc0a9dbed__0[0x1fU] = ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                    ? ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x19U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x1aU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])))
                                    : ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                        ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]
                                        : ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                            ? ((0xffffU 
                                                & ((VSoc__ConstPool__CONST_hdbe32996_0[0x1aU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                               | (0xffff0000U 
                                                  & ((VSoc__ConstPool__CONST_hdbe32996_0[0x1bU] 
                                                      << 0x10U) 
                                                     & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])))
                                            : ((0xeU 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   ((0xffffU 
                                                     & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x1bU] 
                                                         >> 0x10U) 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                    | (0xffff0000U 
                                                       & ((VSoc__ConstPool__CONST_hd4c94b97_0[0x1cU] 
                                                           << 0x10U) 
                                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])))
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]
                                                     : 
                                                    __Vtemp_h09391a71__0[0x1fU]))))));
    if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3bbf0aa8__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3bbf0aa8__0[6U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]));
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3bbf0aa8__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3bbf0aa8__0[6U] = ((0xffff0000U & 
                                     ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0U] 
                                       << 0x10U) & 
                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])) 
                                    | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3bbf0aa8__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3bbf0aa8__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3bbf0aa8__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3bbf0aa8__0[6U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdde329d1_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdde329d1_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U])));
    } else {
        if ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h3bbf0aa8__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        } else if ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h3bbf0aa8__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        } else if ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h3bbf0aa8__0[3U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]));
        } else if ((0xcU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h3bbf0aa8__0[3U] = ((0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hd4c94b97_0[0U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U])) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        } else if ((0xaU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h3bbf0aa8__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h3bbf0aa8__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        } else {
            __Vtemp_h3bbf0aa8__0[1U] = ((8U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]))) 
                                                    >> 0x20U))
                                         : __Vtemp_h33df66e8__0[1U]);
            __Vtemp_h3bbf0aa8__0[3U] = __Vtemp_h09391a71__0[3U];
        }
        __Vtemp_h3bbf0aa8__0[6U] = __Vtemp_h11899016__0[6U];
    }
    if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h646e5d8b__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h646e5d8b__0[7U] = ((0xffff0000U & 
                                     ((VSoc__ConstPool__CONST_h7dfaa27a_0[0U] 
                                       << 0x10U) & 
                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h646e5d8b__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h7dfaa27a_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h646e5d8b__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_h7dfaa27a_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h7dfaa27a_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h646e5d8b__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7dfaa27a_0[2U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7dfaa27a_0[3U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h646e5d8b__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7dfaa27a_0[3U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7dfaa27a_0[4U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h646e5d8b__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7dfaa27a_0[4U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7dfaa27a_0[5U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h646e5d8b__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7dfaa27a_0[5U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7dfaa27a_0[6U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h646e5d8b__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7dfaa27a_0[6U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7dfaa27a_0[7U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h646e5d8b__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7dfaa27a_0[7U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7dfaa27a_0[8U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h646e5d8b__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h646e5d8b__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h646e5d8b__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h646e5d8b__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h646e5d8b__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h646e5d8b__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h646e5d8b__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h646e5d8b__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h646e5d8b__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h646e5d8b__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h646e5d8b__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h646e5d8b__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h646e5d8b__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h646e5d8b__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h646e5d8b__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7dfaa27a_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h646e5d8b__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h646e5d8b__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h646e5d8b__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h646e5d8b__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h646e5d8b__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h646e5d8b__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h646e5d8b__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h646e5d8b__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h646e5d8b__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h646e5d8b__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h646e5d8b__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h646e5d8b__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h646e5d8b__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h646e5d8b__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h646e5d8b__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h646e5d8b__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h646e5d8b__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h646e5d8b__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h646e5d8b__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h646e5d8b__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h646e5d8b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h646e5d8b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h646e5d8b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h646e5d8b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h646e5d8b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x18U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h646e5d8b__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h646e5d8b__0[7U] = ((0xffffU & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])));
        __Vtemp_h646e5d8b__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h646e5d8b__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[2U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[3U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h646e5d8b__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h2dcfa7ce_0[3U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[4U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h646e5d8b__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h2dcfa7ce_0[4U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[5U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h646e5d8b__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h2dcfa7ce_0[5U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[6U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h646e5d8b__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h2dcfa7ce_0[6U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[7U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h646e5d8b__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h2dcfa7ce_0[7U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[8U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h646e5d8b__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h2dcfa7ce_0[8U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[9U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h646e5d8b__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h646e5d8b__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h646e5d8b__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h646e5d8b__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h646e5d8b__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h646e5d8b__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h646e5d8b__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h646e5d8b__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h646e5d8b__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h646e5d8b__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h646e5d8b__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h646e5d8b__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h646e5d8b__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h646e5d8b__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h646e5d8b__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x18U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x16U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h646e5d8b__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h646e5d8b__0[7U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        __Vtemp_h646e5d8b__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h646e5d8b__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h646e5d8b__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h646e5d8b__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h646e5d8b__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h646e5d8b__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h646e5d8b__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h646e5d8b__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h646e5d8b__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h646e5d8b__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h646e5d8b__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h646e5d8b__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h646e5d8b__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h646e5d8b__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h646e5d8b__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h646e5d8b__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h646e5d8b__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h646e5d8b__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h646e5d8b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h646e5d8b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h646e5d8b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h646e5d8b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h646e5d8b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x14U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h646e5d8b__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h646e5d8b__0[7U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdde329d1_0[1U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdde329d1_0[2U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])));
        __Vtemp_h646e5d8b__0[8U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdde329d1_0[2U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdde329d1_0[3U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])));
        __Vtemp_h646e5d8b__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_hdde329d1_0[3U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_hdde329d1_0[4U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h646e5d8b__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdde329d1_0[4U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdde329d1_0[5U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h646e5d8b__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdde329d1_0[5U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdde329d1_0[6U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h646e5d8b__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdde329d1_0[6U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdde329d1_0[7U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h646e5d8b__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdde329d1_0[7U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdde329d1_0[8U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h646e5d8b__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdde329d1_0[8U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdde329d1_0[9U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h646e5d8b__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hdde329d1_0[9U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hdde329d1_0[0xaU] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h646e5d8b__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h646e5d8b__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h646e5d8b__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h646e5d8b__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h646e5d8b__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h646e5d8b__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h646e5d8b__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h646e5d8b__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h646e5d8b__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h646e5d8b__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h646e5d8b__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h646e5d8b__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h646e5d8b__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h646e5d8b__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x18U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h646e5d8b__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hdde329d1_0[0x18U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hdde329d1_0[0x19U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else {
        __Vtemp_h646e5d8b__0[0U] = ((0x12U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                     : ((0x10U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                         : ((0xeU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                             : ((0xcU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                 : 
                                                ((0xaU 
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
                                                  __Vtemp_h33df66e8__0[0U]))))));
        __Vtemp_h646e5d8b__0[7U] = __Vtemp_h11899016__0[7U];
        __Vtemp_h646e5d8b__0[8U] = __Vtemp_h11899016__0[8U];
        __Vtemp_h646e5d8b__0[9U] = __Vtemp_h11899016__0[9U];
        __Vtemp_h646e5d8b__0[0xaU] = __Vtemp_h11899016__0[0xaU];
        __Vtemp_h646e5d8b__0[0xbU] = __Vtemp_h11899016__0[0xbU];
        __Vtemp_h646e5d8b__0[0xcU] = __Vtemp_h11899016__0[0xcU];
        __Vtemp_h646e5d8b__0[0xdU] = __Vtemp_h11899016__0[0xdU];
        __Vtemp_h646e5d8b__0[0xeU] = __Vtemp_h11899016__0[0xeU];
        __Vtemp_h646e5d8b__0[0xfU] = __Vtemp_h11899016__0[0xfU];
        __Vtemp_h646e5d8b__0[0x10U] = __Vtemp_h11899016__0[0x10U];
        __Vtemp_h646e5d8b__0[0x11U] = __Vtemp_h11899016__0[0x11U];
        __Vtemp_h646e5d8b__0[0x12U] = __Vtemp_h11899016__0[0x12U];
        __Vtemp_h646e5d8b__0[0x13U] = __Vtemp_h11899016__0[0x13U];
        __Vtemp_h646e5d8b__0[0x14U] = __Vtemp_h11899016__0[0x14U];
        __Vtemp_h646e5d8b__0[0x15U] = __Vtemp_h11899016__0[0x15U];
        __Vtemp_h646e5d8b__0[0x16U] = __Vtemp_h11899016__0[0x16U];
        __Vtemp_h646e5d8b__0[0x17U] = __Vtemp_h11899016__0[0x17U];
        __Vtemp_h646e5d8b__0[0x18U] = __Vtemp_h11899016__0[0x18U];
        __Vtemp_h646e5d8b__0[0x19U] = __Vtemp_h11899016__0[0x19U];
        __Vtemp_h646e5d8b__0[0x1aU] = __Vtemp_h11899016__0[0x1aU];
        __Vtemp_h646e5d8b__0[0x1bU] = __Vtemp_h11899016__0[0x1bU];
        __Vtemp_h646e5d8b__0[0x1cU] = __Vtemp_h11899016__0[0x1cU];
        __Vtemp_h646e5d8b__0[0x1dU] = __Vtemp_h11899016__0[0x1dU];
        __Vtemp_h646e5d8b__0[0x1eU] = __Vtemp_h11899016__0[0x1eU];
    }
    __Vtemp_h2b892b99__0[2U] = ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? (VSoc__ConstPool__CONST_h5b889007_0[2U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                 : ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                     : ((0x1aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                         : ((0x18U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                             : ((0x16U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                 : 
                                                ((0x14U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                  : 
                                                 ((0x12U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]))
                                                       : 
                                                      __Vtemp_h09391a71__0[2U])))))))))));
    __Vtemp_h81c0fec4__0[0x1fU] = ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                    ? ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0x16U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x17U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])))
                                    : ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                        ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]
                                        : ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                            ? ((0xffffU 
                                                & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x17U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                               | (0xffff0000U 
                                                  & ((VSoc__ConstPool__CONST_h7dfaa27a_0[0x18U] 
                                                      << 0x10U) 
                                                     & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])))
                                            : ((0x1aU 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   ((0xffffU 
                                                     & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x18U] 
                                                         >> 0x10U) 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                                    | (0xffff0000U 
                                                       & ((VSoc__ConstPool__CONST_h2dcfa7ce_0[0x19U] 
                                                           << 0x10U) 
                                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])))
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]
                                                     : 
                                                    __Vtemp_hc0a9dbed__0[0x1fU]))))));
    __Vtemp_h1cef4313__0[5U] = ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? (VSoc__ConstPool__CONST_h52841b67_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                 : ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                     : ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_h5b889007_0[5U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                         : ((0x1cU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                             : ((0x1aU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                  : 
                                                 ((0x16U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]))
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & ((VSoc__ConstPool__CONST_hdde329d1_0[0U] 
                                                         << 0x10U) 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])) 
                                                    | (0xffffU 
                                                       & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                    : 
                                                   __Vtemp_h11899016__0[5U]))))))));
    if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8d97ca56__0[9U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                     << 0x10U) | (VSoc__ConstPool__CONST_h3c9e891d_0[9U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]));
        __Vtemp_h8d97ca56__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8d97ca56__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8d97ca56__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8d97ca56__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8d97ca56__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h8d97ca56__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h8d97ca56__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h8d97ca56__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h8d97ca56__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h8d97ca56__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h8d97ca56__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h8d97ca56__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h8d97ca56__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h8d97ca56__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h8d97ca56__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h8d97ca56__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h8d97ca56__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h8d97ca56__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h8d97ca56__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h8d97ca56__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h8d97ca56__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8d97ca56__0[9U] = ((0xffff0000U & 
                                     ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0U] 
                                       << 0x10U) & 
                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h8d97ca56__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hc4d3a2ae_0[0U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[1U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h8d97ca56__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hc4d3a2ae_0[1U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[2U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h8d97ca56__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hc4d3a2ae_0[2U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[3U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h8d97ca56__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hc4d3a2ae_0[3U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[4U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h8d97ca56__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hc4d3a2ae_0[4U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[5U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h8d97ca56__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_hc4d3a2ae_0[5U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[6U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h8d97ca56__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h8d97ca56__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h8d97ca56__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h8d97ca56__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h8d97ca56__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h8d97ca56__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h8d97ca56__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h8d97ca56__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h8d97ca56__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h8d97ca56__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h8d97ca56__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h8d97ca56__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h8d97ca56__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h8d97ca56__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h8d97ca56__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8d97ca56__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8d97ca56__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8d97ca56__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8d97ca56__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8d97ca56__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8d97ca56__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h8d97ca56__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h8d97ca56__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h8d97ca56__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h8d97ca56__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h8d97ca56__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h8d97ca56__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h8d97ca56__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h8d97ca56__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h8d97ca56__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h8d97ca56__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h8d97ca56__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h8d97ca56__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h8d97ca56__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h8d97ca56__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h8d97ca56__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h8d97ca56__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8d97ca56__0[9U] = ((0xffffU & ((VSoc__ConstPool__CONST_h547365de_0[0U] 
                                                 >> 0x10U) 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])) 
                                    | (0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h547365de_0[1U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])));
        __Vtemp_h8d97ca56__0[0xaU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h547365de_0[1U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h547365de_0[2U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])));
        __Vtemp_h8d97ca56__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h547365de_0[2U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h547365de_0[3U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
        __Vtemp_h8d97ca56__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h547365de_0[3U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h547365de_0[4U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h8d97ca56__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h547365de_0[4U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h547365de_0[5U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h8d97ca56__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h547365de_0[5U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h547365de_0[6U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h8d97ca56__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h547365de_0[6U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h547365de_0[7U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h8d97ca56__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h8d97ca56__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h8d97ca56__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h8d97ca56__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h8d97ca56__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h8d97ca56__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h8d97ca56__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h8d97ca56__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h8d97ca56__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h8d97ca56__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h8d97ca56__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h8d97ca56__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h8d97ca56__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h8d97ca56__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h8d97ca56__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h547365de_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h547365de_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8d97ca56__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_h8d97ca56__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h8d97ca56__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h8d97ca56__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h8d97ca56__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h8d97ca56__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h8d97ca56__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h8d97ca56__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h8d97ca56__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h8d97ca56__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h8d97ca56__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h8d97ca56__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h8d97ca56__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h8d97ca56__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h8d97ca56__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h8d97ca56__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h8d97ca56__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h8d97ca56__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h8d97ca56__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h8d97ca56__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h8d97ca56__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h8d97ca56__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else {
        __Vtemp_h8d97ca56__0[9U] = __Vtemp_h646e5d8b__0[9U];
        __Vtemp_h8d97ca56__0[0xaU] = __Vtemp_h646e5d8b__0[0xaU];
        __Vtemp_h8d97ca56__0[0xbU] = __Vtemp_h646e5d8b__0[0xbU];
        __Vtemp_h8d97ca56__0[0xcU] = __Vtemp_h646e5d8b__0[0xcU];
        __Vtemp_h8d97ca56__0[0xdU] = __Vtemp_h646e5d8b__0[0xdU];
        __Vtemp_h8d97ca56__0[0xeU] = __Vtemp_h646e5d8b__0[0xeU];
        __Vtemp_h8d97ca56__0[0xfU] = __Vtemp_h646e5d8b__0[0xfU];
        __Vtemp_h8d97ca56__0[0x10U] = __Vtemp_h646e5d8b__0[0x10U];
        __Vtemp_h8d97ca56__0[0x11U] = __Vtemp_h646e5d8b__0[0x11U];
        __Vtemp_h8d97ca56__0[0x12U] = __Vtemp_h646e5d8b__0[0x12U];
        __Vtemp_h8d97ca56__0[0x13U] = __Vtemp_h646e5d8b__0[0x13U];
        __Vtemp_h8d97ca56__0[0x14U] = __Vtemp_h646e5d8b__0[0x14U];
        __Vtemp_h8d97ca56__0[0x15U] = __Vtemp_h646e5d8b__0[0x15U];
        __Vtemp_h8d97ca56__0[0x16U] = __Vtemp_h646e5d8b__0[0x16U];
        __Vtemp_h8d97ca56__0[0x17U] = __Vtemp_h646e5d8b__0[0x17U];
        __Vtemp_h8d97ca56__0[0x18U] = __Vtemp_h646e5d8b__0[0x18U];
        __Vtemp_h8d97ca56__0[0x19U] = __Vtemp_h646e5d8b__0[0x19U];
        __Vtemp_h8d97ca56__0[0x1aU] = __Vtemp_h646e5d8b__0[0x1aU];
        __Vtemp_h8d97ca56__0[0x1bU] = __Vtemp_h646e5d8b__0[0x1bU];
        __Vtemp_h8d97ca56__0[0x1cU] = __Vtemp_h646e5d8b__0[0x1cU];
        __Vtemp_h8d97ca56__0[0x1dU] = __Vtemp_h646e5d8b__0[0x1dU];
        __Vtemp_h8d97ca56__0[0x1eU] = __Vtemp_h646e5d8b__0[0x1eU];
    }
    if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11e45ba0__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h11e45ba0__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11e45ba0__0[4U] = (VSoc__ConstPool__CONST_hfcc3ede4_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_h11e45ba0__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11e45ba0__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h11e45ba0__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0x14U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0x15U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11e45ba0__0[4U] = (VSoc__ConstPool__CONST_h3c9e891d_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_h11e45ba0__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11e45ba0__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_h11e45ba0__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x15U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hc4d3a2ae_0[0x16U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h11e45ba0__0[4U] = (VSoc__ConstPool__CONST_h52841b67_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_h11e45ba0__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else {
        __Vtemp_h11e45ba0__0[4U] = ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]
                                     : ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_h5b889007_0[4U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])
                                         : ((0x1cU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]
                                             : ((0x1aU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]
                                                  : 
                                                 ((0x16U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]
                                                    : 
                                                   __Vtemp_h11899016__0[4U])))))));
        __Vtemp_h11e45ba0__0[0x1fU] = __Vtemp_h81c0fec4__0[0x1fU];
    }
    if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb66a0ed4__0[8U] = (VSoc__ConstPool__CONST_h1ba38564_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_hb66a0ed4__0[0xbU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      (VSoc__ConstPool__CONST_h1ba38564_0[0xbU] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]));
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb66a0ed4__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_hb66a0ed4__0[0xbU] = ((0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h3bb70343_0[0U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb66a0ed4__0[8U] = (VSoc__ConstPool__CONST_hfcc3ede4_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_hb66a0ed4__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hb66a0ed4__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_hb66a0ed4__0[0xbU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h93aae58d_0[0U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h93aae58d_0[1U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU])));
    } else {
        __Vtemp_hb66a0ed4__0[8U] = ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? (VSoc__ConstPool__CONST_h3c9e891d_0[8U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])
                                     : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]
                                         : ((0x22U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                 << 0x10U) 
                                                | (VSoc__ConstPool__CONST_h52841b67_0[8U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]))
                                             : ((0x20U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                ((0xffff0000U 
                                                  & ((VSoc__ConstPool__CONST_h547365de_0[0U] 
                                                      << 0x10U) 
                                                     & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U])) 
                                                 | (0xffffU 
                                                    & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]
                                                  : 
                                                 __Vtemp_h646e5d8b__0[8U])))));
        __Vtemp_hb66a0ed4__0[0xbU] = __Vtemp_h8d97ca56__0[0xbU];
    }
    if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h59ee0969__0[0xcU] = ((0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h3422a097_0[0U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h59ee0969__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h3422a097_0[0U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h3422a097_0[1U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h59ee0969__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h3422a097_0[1U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h3422a097_0[2U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h59ee0969__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h3422a097_0[2U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h3422a097_0[3U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h59ee0969__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h59ee0969__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h59ee0969__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h59ee0969__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h59ee0969__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h59ee0969__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h59ee0969__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h59ee0969__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h59ee0969__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h59ee0969__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h59ee0969__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h59ee0969__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h59ee0969__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h59ee0969__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h59ee0969__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h59ee0969__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h59ee0969__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h59ee0969__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h59ee0969__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h59ee0969__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h59ee0969__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h59ee0969__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h59ee0969__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h59ee0969__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h59ee0969__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h59ee0969__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h59ee0969__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h59ee0969__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h59ee0969__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h59ee0969__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h59ee0969__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h59ee0969__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h59ee0969__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h59ee0969__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h59ee0969__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h3bb70343_0[0U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h3bb70343_0[1U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h59ee0969__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h3bb70343_0[1U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h3bb70343_0[2U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h59ee0969__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h3bb70343_0[2U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h3bb70343_0[3U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h59ee0969__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h3bb70343_0[3U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h3bb70343_0[4U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h59ee0969__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h59ee0969__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h59ee0969__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h59ee0969__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h59ee0969__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h59ee0969__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h59ee0969__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h59ee0969__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h59ee0969__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h59ee0969__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h59ee0969__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h59ee0969__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h59ee0969__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h59ee0969__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h59ee0969__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3bb70343_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3bb70343_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h59ee0969__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        __Vtemp_h59ee0969__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h59ee0969__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h59ee0969__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h59ee0969__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h59ee0969__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h59ee0969__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h59ee0969__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h59ee0969__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h59ee0969__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h59ee0969__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h59ee0969__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h59ee0969__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h59ee0969__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h59ee0969__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h59ee0969__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h59ee0969__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h59ee0969__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h59ee0969__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h59ee0969__0[0xcU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h93aae58d_0[1U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h93aae58d_0[2U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU])));
        __Vtemp_h59ee0969__0[0xdU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h93aae58d_0[2U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h93aae58d_0[3U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])));
        __Vtemp_h59ee0969__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h93aae58d_0[3U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h93aae58d_0[4U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h59ee0969__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h93aae58d_0[4U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h93aae58d_0[5U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h59ee0969__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h59ee0969__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h59ee0969__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h59ee0969__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h59ee0969__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h59ee0969__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h59ee0969__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h59ee0969__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h59ee0969__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h59ee0969__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h59ee0969__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h59ee0969__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h59ee0969__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h59ee0969__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h59ee0969__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0x13U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h93aae58d_0[0x14U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else {
        __Vtemp_h59ee0969__0[0xcU] = __Vtemp_h8d97ca56__0[0xcU];
        __Vtemp_h59ee0969__0[0xdU] = __Vtemp_h8d97ca56__0[0xdU];
        __Vtemp_h59ee0969__0[0xeU] = __Vtemp_h8d97ca56__0[0xeU];
        __Vtemp_h59ee0969__0[0xfU] = __Vtemp_h8d97ca56__0[0xfU];
        __Vtemp_h59ee0969__0[0x10U] = __Vtemp_h8d97ca56__0[0x10U];
        __Vtemp_h59ee0969__0[0x11U] = __Vtemp_h8d97ca56__0[0x11U];
        __Vtemp_h59ee0969__0[0x12U] = __Vtemp_h8d97ca56__0[0x12U];
        __Vtemp_h59ee0969__0[0x13U] = __Vtemp_h8d97ca56__0[0x13U];
        __Vtemp_h59ee0969__0[0x14U] = __Vtemp_h8d97ca56__0[0x14U];
        __Vtemp_h59ee0969__0[0x15U] = __Vtemp_h8d97ca56__0[0x15U];
        __Vtemp_h59ee0969__0[0x16U] = __Vtemp_h8d97ca56__0[0x16U];
        __Vtemp_h59ee0969__0[0x17U] = __Vtemp_h8d97ca56__0[0x17U];
        __Vtemp_h59ee0969__0[0x18U] = __Vtemp_h8d97ca56__0[0x18U];
        __Vtemp_h59ee0969__0[0x19U] = __Vtemp_h8d97ca56__0[0x19U];
        __Vtemp_h59ee0969__0[0x1aU] = __Vtemp_h8d97ca56__0[0x1aU];
        __Vtemp_h59ee0969__0[0x1bU] = __Vtemp_h8d97ca56__0[0x1bU];
        __Vtemp_h59ee0969__0[0x1cU] = __Vtemp_h8d97ca56__0[0x1cU];
        __Vtemp_h59ee0969__0[0x1dU] = __Vtemp_h8d97ca56__0[0x1dU];
        __Vtemp_h59ee0969__0[0x1eU] = __Vtemp_h8d97ca56__0[0x1eU];
    }
    __Vtemp_h3ae6ebf4__0[7U] = ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? (VSoc__ConstPool__CONST_h1ab850d3_0[7U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                 : ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                     : ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_h1ba38564_0[7U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                         : ((0x2cU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                             : ((0x2aU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                (VSoc__ConstPool__CONST_hfcc3ede4_0[7U] 
                                                 & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                 : 
                                                ((0x28U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                  : 
                                                 ((0x26U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  (VSoc__ConstPool__CONST_h3c9e891d_0[7U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                   : 
                                                  ((0x24U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    (VSoc__ConstPool__CONST_h52841b67_0[7U] 
                                                     & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                     : 
                                                    ((0x20U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                      : 
                                                     ((0x1eU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                        << 0x10U) 
                                                       | (VSoc__ConstPool__CONST_h5b889007_0[7U] 
                                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]))
                                                       : 
                                                      __Vtemp_h646e5d8b__0[7U])))))))))));
    if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3f251c01__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3f251c01__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = (VSoc__ConstPool__CONST_h1ab850d3_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h3f251c01__0[3U] = (VSoc__ConstPool__CONST_h1ab850d3_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h3f251c01__0[6U] = (VSoc__ConstPool__CONST_h1ab850d3_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3f251c01__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3f251c01__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = (VSoc__ConstPool__CONST_h1ba38564_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h3f251c01__0[3U] = (VSoc__ConstPool__CONST_h1ba38564_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h3f251c01__0[6U] = (VSoc__ConstPool__CONST_h1ba38564_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3f251c01__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3f251c01__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = (VSoc__ConstPool__CONST_hfcc3ede4_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h3f251c01__0[3U] = (VSoc__ConstPool__CONST_hfcc3ede4_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h3f251c01__0[6U] = (VSoc__ConstPool__CONST_hfcc3ede4_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3f251c01__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3f251c01__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else if ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = (VSoc__ConstPool__CONST_h3c9e891d_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h3f251c01__0[3U] = (VSoc__ConstPool__CONST_h3c9e891d_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h3f251c01__0[6U] = (VSoc__ConstPool__CONST_h3c9e891d_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
    } else if ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3f251c01__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3f251c01__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else if ((0x22U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = (VSoc__ConstPool__CONST_h52841b67_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h3f251c01__0[3U] = (VSoc__ConstPool__CONST_h52841b67_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h3f251c01__0[6U] = (VSoc__ConstPool__CONST_h52841b67_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
    } else if ((0x20U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3f251c01__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3f251c01__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else if ((0x1eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = (VSoc__ConstPool__CONST_h5b889007_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h3f251c01__0[3U] = (VSoc__ConstPool__CONST_h5b889007_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h3f251c01__0[6U] = (VSoc__ConstPool__CONST_h5b889007_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
    } else if ((0x1cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3f251c01__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h3f251c01__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h3f251c01__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
    } else {
        __Vtemp_h3f251c01__0[1U] = __Vtemp_h3bbf0aa8__0[1U];
        __Vtemp_h3f251c01__0[3U] = __Vtemp_h3bbf0aa8__0[3U];
        __Vtemp_h3f251c01__0[6U] = __Vtemp_h3bbf0aa8__0[6U];
    }
    if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = (VSoc__ConstPool__CONST_h86280a92_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_h20e7a257__0[0xaU] = (VSoc__ConstPool__CONST_h86280a92_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h20e7a257__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = (VSoc__ConstPool__CONST_h1ab850d3_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_h20e7a257__0[0xaU] = (VSoc__ConstPool__CONST_h1ab850d3_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h20e7a257__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = (VSoc__ConstPool__CONST_h1ba38564_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_h20e7a257__0[0xaU] = (VSoc__ConstPool__CONST_h1ba38564_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
    } else if ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h20e7a257__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
    } else if ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = (VSoc__ConstPool__CONST_hfcc3ede4_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_h20e7a257__0[0xaU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      (VSoc__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]));
    } else if ((0x28U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h20e7a257__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h20e7a257__0[0xaU] = ((0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h93aae58d_0[0U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU])) 
                                      | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else {
        __Vtemp_h20e7a257__0[0U] = ((0x26U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? (VSoc__ConstPool__CONST_h3c9e891d_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U])
                                     : ((0x24U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                         : ((0x22U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? (VSoc__ConstPool__CONST_h52841b67_0[0U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U])
                                             : ((0x20U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 (VSoc__ConstPool__CONST_h5b889007_0[0U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U])
                                                  : 
                                                 __Vtemp_h646e5d8b__0[0U])))));
        __Vtemp_h20e7a257__0[0xaU] = __Vtemp_h8d97ca56__0[0xaU];
    }
    if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he49ccd7f__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_he49ccd7f__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he49ccd7f__0[2U] = (VSoc__ConstPool__CONST_h86280a92_0[2U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
        __Vtemp_he49ccd7f__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he49ccd7f__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_he49ccd7f__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0x11U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0x12U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he49ccd7f__0[2U] = (VSoc__ConstPool__CONST_h1ab850d3_0[2U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
        __Vtemp_he49ccd7f__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he49ccd7f__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_he49ccd7f__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3422a097_0[0x12U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3422a097_0[0x13U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he49ccd7f__0[2U] = (VSoc__ConstPool__CONST_h1ba38564_0[2U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
        __Vtemp_he49ccd7f__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else {
        __Vtemp_he49ccd7f__0[2U] = ((0x2cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                     : ((0x2aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_hfcc3ede4_0[2U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                         : ((0x28U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                             : ((0x26U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                (VSoc__ConstPool__CONST_h3c9e891d_0[2U] 
                                                 & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                 : 
                                                ((0x24U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                  : 
                                                 ((0x22U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  (VSoc__ConstPool__CONST_h52841b67_0[2U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                   : 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                    : 
                                                   __Vtemp_h2b892b99__0[2U])))))));
        __Vtemp_he49ccd7f__0[0x1fU] = __Vtemp_h11e45ba0__0[0x1fU];
    }
    if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8a091050__0[0xeU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      (VSoc__ConstPool__CONST_h9eabd8e6_0[0xeU] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]));
        __Vtemp_h8a091050__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h8a091050__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h8a091050__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h8a091050__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h8a091050__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h8a091050__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h8a091050__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h8a091050__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h8a091050__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h8a091050__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h8a091050__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h8a091050__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h8a091050__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h8a091050__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h8a091050__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h8a091050__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8a091050__0[0xeU] = ((0xffff0000U 
                                       & ((VSoc__ConstPool__CONST_h6e9da94f_0[0U] 
                                           << 0x10U) 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h8a091050__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h6e9da94f_0[0U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h6e9da94f_0[1U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h8a091050__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h8a091050__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h8a091050__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h8a091050__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h8a091050__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h8a091050__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h8a091050__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h8a091050__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h8a091050__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h8a091050__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h8a091050__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h8a091050__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h8a091050__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h8a091050__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h8a091050__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h6e9da94f_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h6e9da94f_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8a091050__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h8a091050__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h8a091050__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h8a091050__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h8a091050__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h8a091050__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h8a091050__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h8a091050__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h8a091050__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h8a091050__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h8a091050__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h8a091050__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h8a091050__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h8a091050__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h8a091050__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h8a091050__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h8a091050__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8a091050__0[0xeU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7b100ceb_0[0U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7b100ceb_0[1U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])));
        __Vtemp_h8a091050__0[0xfU] = ((0xffffU & ((
                                                   VSoc__ConstPool__CONST_h7b100ceb_0[1U] 
                                                   >> 0x10U) 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                      | (0xffff0000U 
                                         & ((VSoc__ConstPool__CONST_h7b100ceb_0[2U] 
                                             << 0x10U) 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])));
        __Vtemp_h8a091050__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
        __Vtemp_h8a091050__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_h8a091050__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_h8a091050__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h8a091050__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h8a091050__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h8a091050__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h8a091050__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h8a091050__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h8a091050__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h8a091050__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h8a091050__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h8a091050__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h8a091050__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h8a091050__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0x10U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h7b100ceb_0[0x11U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h8a091050__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h8a091050__0[0xfU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        __Vtemp_h8a091050__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_h8a091050__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_h8a091050__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h8a091050__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h8a091050__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h8a091050__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h8a091050__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h8a091050__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h8a091050__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h8a091050__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h8a091050__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h8a091050__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h8a091050__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h8a091050__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h8a091050__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else {
        __Vtemp_h8a091050__0[0xeU] = __Vtemp_h59ee0969__0[0xeU];
        __Vtemp_h8a091050__0[0xfU] = __Vtemp_h59ee0969__0[0xfU];
        __Vtemp_h8a091050__0[0x10U] = __Vtemp_h59ee0969__0[0x10U];
        __Vtemp_h8a091050__0[0x11U] = __Vtemp_h59ee0969__0[0x11U];
        __Vtemp_h8a091050__0[0x12U] = __Vtemp_h59ee0969__0[0x12U];
        __Vtemp_h8a091050__0[0x13U] = __Vtemp_h59ee0969__0[0x13U];
        __Vtemp_h8a091050__0[0x14U] = __Vtemp_h59ee0969__0[0x14U];
        __Vtemp_h8a091050__0[0x15U] = __Vtemp_h59ee0969__0[0x15U];
        __Vtemp_h8a091050__0[0x16U] = __Vtemp_h59ee0969__0[0x16U];
        __Vtemp_h8a091050__0[0x17U] = __Vtemp_h59ee0969__0[0x17U];
        __Vtemp_h8a091050__0[0x18U] = __Vtemp_h59ee0969__0[0x18U];
        __Vtemp_h8a091050__0[0x19U] = __Vtemp_h59ee0969__0[0x19U];
        __Vtemp_h8a091050__0[0x1aU] = __Vtemp_h59ee0969__0[0x1aU];
        __Vtemp_h8a091050__0[0x1bU] = __Vtemp_h59ee0969__0[0x1bU];
        __Vtemp_h8a091050__0[0x1cU] = __Vtemp_h59ee0969__0[0x1cU];
        __Vtemp_h8a091050__0[0x1dU] = __Vtemp_h59ee0969__0[0x1dU];
        __Vtemp_h8a091050__0[0x1eU] = __Vtemp_h59ee0969__0[0x1eU];
    }
    __Vtemp_h6ffddd14__0[5U] = ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                 : ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? (VSoc__ConstPool__CONST_h9eabd8e6_0[5U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                     : ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                         : ((0x36U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? (VSoc__ConstPool__CONST_h86280a92_0[5U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                             : ((0x34U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                 : 
                                                ((0x32U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 (VSoc__ConstPool__CONST_h1ab850d3_0[5U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                                  : 
                                                 ((0x30U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                   : 
                                                  ((0x2eU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[5U] 
                                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                     : 
                                                    ((0x2aU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     (VSoc__ConstPool__CONST_hfcc3ede4_0[5U] 
                                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                                      : 
                                                     ((0x28U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                       : 
                                                      ((0x26U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       (VSoc__ConstPool__CONST_h3c9e891d_0[5U] 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                                        : 
                                                       ((0x24U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                         : 
                                                        __Vtemp_h1cef4313__0[5U])))))))))))));
    __Vtemp_h68f875e6__0[9U] = ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                 : ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? (VSoc__ConstPool__CONST_h8b2c9f06_0[9U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])
                                     : ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                         : ((0x3aU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? (VSoc__ConstPool__CONST_h9eabd8e6_0[9U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])
                                             : ((0x38U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                                 : 
                                                ((0x36U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 (VSoc__ConstPool__CONST_h86280a92_0[9U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])
                                                  : 
                                                 ((0x34U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[9U] 
                                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])
                                                    : 
                                                   ((0x30U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                                     : 
                                                    ((0x2eU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     (VSoc__ConstPool__CONST_h1ba38564_0[9U] 
                                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])
                                                      : 
                                                     ((0x2cU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       (VSoc__ConstPool__CONST_hfcc3ede4_0[9U] 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])
                                                        : 
                                                       ((0x28U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                                         : 
                                                        __Vtemp_h8d97ca56__0[9U])))))))))))));
    if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3cebbe12__0[0xdU] = (VSoc__ConstPool__CONST_h00a443f1_0[0xdU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
        __Vtemp_h3cebbe12__0[0x10U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       (VSoc__ConstPool__CONST_h00a443f1_0[0x10U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]));
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3cebbe12__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h3cebbe12__0[0x10U] = ((0xffff0000U 
                                        & ((VSoc__ConstPool__CONST_h8b2c9f06_0[0U] 
                                            << 0x10U) 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3cebbe12__0[0xdU] = (VSoc__ConstPool__CONST_h8b2c9f06_0[0xdU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
        __Vtemp_h3cebbe12__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h3cebbe12__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_h3cebbe12__0[0x10U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U])));
    } else {
        __Vtemp_h3cebbe12__0[0xdU] = ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? (VSoc__ConstPool__CONST_h9eabd8e6_0[0xdU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])
                                       : ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]
                                           : ((0x36U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                   << 0x10U) 
                                                  | (VSoc__ConstPool__CONST_h86280a92_0[0xdU] 
                                                     & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]))
                                               : ((0x34U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  ((0xffff0000U 
                                                    & ((VSoc__ConstPool__CONST_h7b100ceb_0[0U] 
                                                        << 0x10U) 
                                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU])) 
                                                   | (0xffffU 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]
                                                    : 
                                                   __Vtemp_h59ee0969__0[0xdU])))));
        __Vtemp_h3cebbe12__0[0x10U] = __Vtemp_h8a091050__0[0x10U];
    }
    if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3523fd1__0[0x11U] = ((0xffff0000U 
                                        & ((VSoc__ConstPool__CONST_h9eabd8e6_0[0U] 
                                            << 0x10U) 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_he3523fd1__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_he3523fd1__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_he3523fd1__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_he3523fd1__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_he3523fd1__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_he3523fd1__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_he3523fd1__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_he3523fd1__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_he3523fd1__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_he3523fd1__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_he3523fd1__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_he3523fd1__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_he3523fd1__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
        __Vtemp_he3523fd1__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h9eabd8e6_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h9eabd8e6_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3523fd1__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_he3523fd1__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_he3523fd1__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_he3523fd1__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_he3523fd1__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_he3523fd1__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_he3523fd1__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_he3523fd1__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_he3523fd1__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_he3523fd1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_he3523fd1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_he3523fd1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_he3523fd1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_he3523fd1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_he3523fd1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3523fd1__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_he3523fd1__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_he3523fd1__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_he3523fd1__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_he3523fd1__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_he3523fd1__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_he3523fd1__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_he3523fd1__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_he3523fd1__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_he3523fd1__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_he3523fd1__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_he3523fd1__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_he3523fd1__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_he3523fd1__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
        __Vtemp_he3523fd1__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h8b2c9f06_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3523fd1__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        __Vtemp_he3523fd1__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_he3523fd1__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_he3523fd1__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_he3523fd1__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_he3523fd1__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_he3523fd1__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_he3523fd1__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_he3523fd1__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_he3523fd1__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_he3523fd1__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_he3523fd1__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_he3523fd1__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_he3523fd1__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        __Vtemp_he3523fd1__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he3523fd1__0[0x11U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U])));
        __Vtemp_he3523fd1__0[0x12U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])));
        __Vtemp_he3523fd1__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_he3523fd1__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_he3523fd1__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_he3523fd1__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_he3523fd1__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_he3523fd1__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_he3523fd1__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_he3523fd1__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_he3523fd1__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_he3523fd1__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_he3523fd1__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[0xdU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[0xeU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_he3523fd1__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[0xeU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[0xfU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
        __Vtemp_he3523fd1__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h00a443f1_0[0xfU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h00a443f1_0[0x10U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else {
        __Vtemp_he3523fd1__0[0x11U] = __Vtemp_h8a091050__0[0x11U];
        __Vtemp_he3523fd1__0[0x12U] = __Vtemp_h8a091050__0[0x12U];
        __Vtemp_he3523fd1__0[0x13U] = __Vtemp_h8a091050__0[0x13U];
        __Vtemp_he3523fd1__0[0x14U] = __Vtemp_h8a091050__0[0x14U];
        __Vtemp_he3523fd1__0[0x15U] = __Vtemp_h8a091050__0[0x15U];
        __Vtemp_he3523fd1__0[0x16U] = __Vtemp_h8a091050__0[0x16U];
        __Vtemp_he3523fd1__0[0x17U] = __Vtemp_h8a091050__0[0x17U];
        __Vtemp_he3523fd1__0[0x18U] = __Vtemp_h8a091050__0[0x18U];
        __Vtemp_he3523fd1__0[0x19U] = __Vtemp_h8a091050__0[0x19U];
        __Vtemp_he3523fd1__0[0x1aU] = __Vtemp_h8a091050__0[0x1aU];
        __Vtemp_he3523fd1__0[0x1bU] = __Vtemp_h8a091050__0[0x1bU];
        __Vtemp_he3523fd1__0[0x1cU] = __Vtemp_h8a091050__0[0x1cU];
        __Vtemp_he3523fd1__0[0x1dU] = __Vtemp_h8a091050__0[0x1dU];
        __Vtemp_he3523fd1__0[0x1eU] = __Vtemp_h8a091050__0[0x1eU];
        __Vtemp_he3523fd1__0[0x1fU] = ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                        ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]
                                        : __Vtemp_he49ccd7f__0[0x1fU]);
    }
    if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = (VSoc__ConstPool__CONST_h6e9da94f_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_hd50c546c__0[0xcU] = (VSoc__ConstPool__CONST_h6e9da94f_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_hd50c546c__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = (VSoc__ConstPool__CONST_h00a443f1_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_hd50c546c__0[0xcU] = (VSoc__ConstPool__CONST_h00a443f1_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_hd50c546c__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = (VSoc__ConstPool__CONST_h8b2c9f06_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_hd50c546c__0[0xcU] = (VSoc__ConstPool__CONST_h8b2c9f06_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_hd50c546c__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = (VSoc__ConstPool__CONST_h9eabd8e6_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_hd50c546c__0[0xcU] = (VSoc__ConstPool__CONST_h9eabd8e6_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_hd50c546c__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = (VSoc__ConstPool__CONST_h86280a92_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_hd50c546c__0[0xcU] = (VSoc__ConstPool__CONST_h86280a92_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_hd50c546c__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hd50c546c__0[4U] = (VSoc__ConstPool__CONST_h1ab850d3_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_hd50c546c__0[0xcU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                       << 0x10U) | 
                                      (VSoc__ConstPool__CONST_h1ab850d3_0[0xcU] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]));
    } else {
        __Vtemp_hd50c546c__0[4U] = ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]
                                     : ((0x2eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_h1ba38564_0[4U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U])
                                         : __Vtemp_h11e45ba0__0[4U]));
        __Vtemp_hd50c546c__0[0xcU] = __Vtemp_h59ee0969__0[0xcU];
    }
    if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_ha0811969__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = (VSoc__ConstPool__CONST_h6e9da94f_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_ha0811969__0[0xbU] = (VSoc__ConstPool__CONST_h6e9da94f_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
    } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_ha0811969__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = (VSoc__ConstPool__CONST_h00a443f1_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_ha0811969__0[0xbU] = (VSoc__ConstPool__CONST_h00a443f1_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
    } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_ha0811969__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = (VSoc__ConstPool__CONST_h8b2c9f06_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_ha0811969__0[0xbU] = (VSoc__ConstPool__CONST_h8b2c9f06_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
    } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_ha0811969__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = (VSoc__ConstPool__CONST_h9eabd8e6_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_ha0811969__0[0xbU] = (VSoc__ConstPool__CONST_h9eabd8e6_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
    } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_ha0811969__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = (VSoc__ConstPool__CONST_h86280a92_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_ha0811969__0[0xbU] = (VSoc__ConstPool__CONST_h86280a92_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
    } else if ((0x34U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_ha0811969__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else if ((0x32U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = (VSoc__ConstPool__CONST_h1ab850d3_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_ha0811969__0[0xbU] = (VSoc__ConstPool__CONST_h1ab850d3_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
    } else if ((0x30U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha0811969__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_ha0811969__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
    } else {
        __Vtemp_ha0811969__0[8U] = __Vtemp_hb66a0ed4__0[8U];
        __Vtemp_ha0811969__0[0xbU] = __Vtemp_hb66a0ed4__0[0xbU];
    }
    __Vtemp_hcc59df9e__0[0xfU] = ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? (VSoc__ConstPool__CONST_h7b100ceb_0[0xfU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                   : ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                       : ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? (VSoc__ConstPool__CONST_h6e9da94f_0[0xfU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                           : ((0x44U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                               : ((0x42U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  (VSoc__ConstPool__CONST_h00a443f1_0[0xfU] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                                   : 
                                                  ((0x40U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                    : 
                                                   ((0x3eU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                      << 0x10U) 
                                                     | (VSoc__ConstPool__CONST_h8b2c9f06_0[0xfU] 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]))
                                                     : 
                                                    ((0x3cU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     ((0xffff0000U 
                                                       & ((VSoc__ConstPool__CONST_h00a443f1_0[0U] 
                                                           << 0x10U) 
                                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])) 
                                                      | (0xffffU 
                                                         & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                      : 
                                                     __Vtemp_h8a091050__0[0xfU]))))))));
    __Vtemp_h506095d1__0[7U] = ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                 : ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? (VSoc__ConstPool__CONST_h7b100ceb_0[7U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                     : ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                         : ((0x46U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? (VSoc__ConstPool__CONST_h6e9da94f_0[7U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                             : ((0x44U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                 : 
                                                ((0x42U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 (VSoc__ConstPool__CONST_h00a443f1_0[7U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                  : 
                                                 ((0x40U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                   : 
                                                  ((0x3eU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   (VSoc__ConstPool__CONST_h8b2c9f06_0[7U] 
                                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                     : 
                                                    ((0x3aU 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     (VSoc__ConstPool__CONST_h9eabd8e6_0[7U] 
                                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                      : 
                                                     ((0x38U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                       : 
                                                      ((0x36U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       (VSoc__ConstPool__CONST_h86280a92_0[7U] 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                         : 
                                                        __Vtemp_h3ae6ebf4__0[7U])))))))))))));
    if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h75f2f96b__0[1U] = (VSoc__ConstPool__CONST_h3422a097_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h75f2f96b__0[3U] = (VSoc__ConstPool__CONST_h3422a097_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h75f2f96b__0[6U] = (VSoc__ConstPool__CONST_h3422a097_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        __Vtemp_h75f2f96b__0[0x13U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       (VSoc__ConstPool__CONST_h3422a097_0[0x13U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]));
        __Vtemp_h75f2f96b__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h75f2f96b__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h75f2f96b__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h75f2f96b__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h75f2f96b__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h75f2f96b__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h75f2f96b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h75f2f96b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h75f2f96b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h75f2f96b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h75f2f96b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h75f2f96b__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h75f2f96b__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h75f2f96b__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h75f2f96b__0[0x13U] = ((0xffff0000U 
                                        & ((VSoc__ConstPool__CONST_h1ab850d3_0[0U] 
                                            << 0x10U) 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h75f2f96b__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h75f2f96b__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h75f2f96b__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h75f2f96b__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h75f2f96b__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h75f2f96b__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h75f2f96b__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h75f2f96b__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h75f2f96b__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h75f2f96b__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h75f2f96b__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h75f2f96b__0[1U] = (VSoc__ConstPool__CONST_h7b100ceb_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h75f2f96b__0[3U] = (VSoc__ConstPool__CONST_h7b100ceb_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h75f2f96b__0[6U] = (VSoc__ConstPool__CONST_h7b100ceb_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        __Vtemp_h75f2f96b__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h75f2f96b__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h75f2f96b__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h75f2f96b__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h75f2f96b__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h75f2f96b__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h75f2f96b__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h75f2f96b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h75f2f96b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h75f2f96b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h75f2f96b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h75f2f96b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h75f2f96b__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_h75f2f96b__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_h75f2f96b__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_h75f2f96b__0[0x13U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U])));
        __Vtemp_h75f2f96b__0[0x14U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])));
        __Vtemp_h75f2f96b__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
        __Vtemp_h75f2f96b__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h75f2f96b__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h75f2f96b__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h75f2f96b__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h75f2f96b__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h75f2f96b__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h75f2f96b__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h75f2f96b__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h75f2f96b__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h75f2f96b__0[1U] = (VSoc__ConstPool__CONST_h6e9da94f_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_h75f2f96b__0[3U] = (VSoc__ConstPool__CONST_h6e9da94f_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_h75f2f96b__0[6U] = (VSoc__ConstPool__CONST_h6e9da94f_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        __Vtemp_h75f2f96b__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_h75f2f96b__0[0x14U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        __Vtemp_h75f2f96b__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
        __Vtemp_h75f2f96b__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h75f2f96b__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h75f2f96b__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h75f2f96b__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h75f2f96b__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h75f2f96b__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h75f2f96b__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h75f2f96b__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h75f2f96b__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else {
        if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h75f2f96b__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h75f2f96b__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = (VSoc__ConstPool__CONST_h00a443f1_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_h75f2f96b__0[3U] = (VSoc__ConstPool__CONST_h00a443f1_0[3U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            __Vtemp_h75f2f96b__0[6U] = (VSoc__ConstPool__CONST_h00a443f1_0[6U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h75f2f96b__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h75f2f96b__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = (VSoc__ConstPool__CONST_h8b2c9f06_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_h75f2f96b__0[3U] = (VSoc__ConstPool__CONST_h8b2c9f06_0[3U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            __Vtemp_h75f2f96b__0[6U] = (VSoc__ConstPool__CONST_h8b2c9f06_0[6U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h75f2f96b__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h75f2f96b__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = (VSoc__ConstPool__CONST_h9eabd8e6_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_h75f2f96b__0[3U] = (VSoc__ConstPool__CONST_h9eabd8e6_0[3U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            __Vtemp_h75f2f96b__0[6U] = (VSoc__ConstPool__CONST_h9eabd8e6_0[6U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_h75f2f96b__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_h75f2f96b__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        } else if ((0x36U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h75f2f96b__0[1U] = (VSoc__ConstPool__CONST_h86280a92_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_h75f2f96b__0[3U] = (VSoc__ConstPool__CONST_h86280a92_0[3U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            __Vtemp_h75f2f96b__0[6U] = (VSoc__ConstPool__CONST_h86280a92_0[6U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        } else {
            __Vtemp_h75f2f96b__0[1U] = __Vtemp_h3f251c01__0[1U];
            __Vtemp_h75f2f96b__0[3U] = __Vtemp_h3f251c01__0[3U];
            __Vtemp_h75f2f96b__0[6U] = __Vtemp_h3f251c01__0[6U];
        }
        __Vtemp_h75f2f96b__0[0x13U] = __Vtemp_he3523fd1__0[0x13U];
        __Vtemp_h75f2f96b__0[0x14U] = __Vtemp_he3523fd1__0[0x14U];
        __Vtemp_h75f2f96b__0[0x15U] = __Vtemp_he3523fd1__0[0x15U];
        __Vtemp_h75f2f96b__0[0x16U] = __Vtemp_he3523fd1__0[0x16U];
        __Vtemp_h75f2f96b__0[0x17U] = __Vtemp_he3523fd1__0[0x17U];
        __Vtemp_h75f2f96b__0[0x18U] = __Vtemp_he3523fd1__0[0x18U];
        __Vtemp_h75f2f96b__0[0x19U] = __Vtemp_he3523fd1__0[0x19U];
        __Vtemp_h75f2f96b__0[0x1aU] = __Vtemp_he3523fd1__0[0x1aU];
        __Vtemp_h75f2f96b__0[0x1bU] = __Vtemp_he3523fd1__0[0x1bU];
        __Vtemp_h75f2f96b__0[0x1cU] = __Vtemp_he3523fd1__0[0x1cU];
        __Vtemp_h75f2f96b__0[0x1dU] = __Vtemp_he3523fd1__0[0x1dU];
        __Vtemp_h75f2f96b__0[0x1eU] = __Vtemp_he3523fd1__0[0x1eU];
    }
    if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5297cacf__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h5297cacf__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h5297cacf__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[0xaU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[0xbU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5297cacf__0[0U] = (VSoc__ConstPool__CONST_h3422a097_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_h5297cacf__0[0xaU] = (VSoc__ConstPool__CONST_h3422a097_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        __Vtemp_h5297cacf__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5297cacf__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h5297cacf__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h5297cacf__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ab850d3_0[0xbU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ab850d3_0[0xcU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5297cacf__0[0U] = (VSoc__ConstPool__CONST_h7b100ceb_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_h5297cacf__0[0xaU] = (VSoc__ConstPool__CONST_h7b100ceb_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        __Vtemp_h5297cacf__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5297cacf__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_h5297cacf__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_h5297cacf__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h86280a92_0[0xcU] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h86280a92_0[0xdU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h5297cacf__0[0U] = (VSoc__ConstPool__CONST_h6e9da94f_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_h5297cacf__0[0xaU] = (VSoc__ConstPool__CONST_h6e9da94f_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        __Vtemp_h5297cacf__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else {
        if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5297cacf__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_h5297cacf__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        } else if ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5297cacf__0[0U] = (VSoc__ConstPool__CONST_h00a443f1_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_h5297cacf__0[0xaU] = (VSoc__ConstPool__CONST_h00a443f1_0[0xaU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        } else if ((0x40U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5297cacf__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_h5297cacf__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        } else if ((0x3eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5297cacf__0[0U] = (VSoc__ConstPool__CONST_h8b2c9f06_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_h5297cacf__0[0xaU] = (VSoc__ConstPool__CONST_h8b2c9f06_0[0xaU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        } else if ((0x3cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5297cacf__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_h5297cacf__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        } else if ((0x3aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5297cacf__0[0U] = (VSoc__ConstPool__CONST_h9eabd8e6_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_h5297cacf__0[0xaU] = (VSoc__ConstPool__CONST_h9eabd8e6_0[0xaU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        } else if ((0x38U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h5297cacf__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_h5297cacf__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        } else {
            __Vtemp_h5297cacf__0[0U] = __Vtemp_h20e7a257__0[0U];
            __Vtemp_h5297cacf__0[0xaU] = __Vtemp_h20e7a257__0[0xaU];
        }
        __Vtemp_h5297cacf__0[0x1fU] = __Vtemp_he3523fd1__0[0x1fU];
    }
    __Vtemp_h5d6716be__0[2U] = ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? (VSoc__ConstPool__CONST_h3bb70343_0[2U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                 : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                     : ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_h3422a097_0[2U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                         : ((0x4cU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                             : ((0x4aU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                (VSoc__ConstPool__CONST_h7b100ceb_0[2U] 
                                                 & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                 : 
                                                ((0x48U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                  : 
                                                 ((0x46U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  (VSoc__ConstPool__CONST_h6e9da94f_0[2U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                   : 
                                                  ((0x44U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                    : 
                                                   ((0x42U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    (VSoc__ConstPool__CONST_h00a443f1_0[2U] 
                                                     & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                      : 
                                                     ((0x3eU 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      (VSoc__ConstPool__CONST_h8b2c9f06_0[2U] 
                                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                       : 
                                                      ((0x3cU 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                        : 
                                                       ((0x3aU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        (VSoc__ConstPool__CONST_h9eabd8e6_0[2U] 
                                                         & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                         : 
                                                        __Vtemp_he49ccd7f__0[2U])))))))))))));
    __Vtemp_he67f9ded__0[0xeU] = ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                   : ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? (VSoc__ConstPool__CONST_h3bb70343_0[0xeU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])
                                       : ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                           : ((0x4eU 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? (VSoc__ConstPool__CONST_h3422a097_0[0xeU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])
                                               : ((0x4cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                                   : 
                                                  ((0x4aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   (VSoc__ConstPool__CONST_h7b100ceb_0[0xeU] 
                                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])
                                                    : 
                                                   ((0x48U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                                     : 
                                                    ((0x46U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     (VSoc__ConstPool__CONST_h6e9da94f_0[0xeU] 
                                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])
                                                      : 
                                                     ((0x44U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                                       : 
                                                      ((0x42U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       (VSoc__ConstPool__CONST_h00a443f1_0[0xeU] 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])
                                                        : 
                                                       ((0x40U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                                         : 
                                                        ((0x3eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         (VSoc__ConstPool__CONST_h8b2c9f06_0[0xeU] 
                                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])
                                                          : 
                                                         ((0x3cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                                           : 
                                                          __Vtemp_h8a091050__0[0xeU])))))))))))));
    if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h35f56f93__0[5U] = (VSoc__ConstPool__CONST_h93aae58d_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_h35f56f93__0[0x12U] = (VSoc__ConstPool__CONST_h93aae58d_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_h35f56f93__0[0x15U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       (VSoc__ConstPool__CONST_h93aae58d_0[0x15U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]));
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h35f56f93__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h35f56f93__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h35f56f93__0[0x15U] = ((0xffff0000U 
                                        & ((VSoc__ConstPool__CONST_hfcc3ede4_0[0U] 
                                            << 0x10U) 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h35f56f93__0[5U] = (VSoc__ConstPool__CONST_h3bb70343_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_h35f56f93__0[0x12U] = (VSoc__ConstPool__CONST_h3bb70343_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_h35f56f93__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h35f56f93__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_h35f56f93__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_h35f56f93__0[0x15U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U])));
    } else {
        if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h35f56f93__0[5U] = (VSoc__ConstPool__CONST_h3422a097_0[5U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
            __Vtemp_h35f56f93__0[0x12U] = (VSoc__ConstPool__CONST_h3422a097_0[0x12U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h35f56f93__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h35f56f93__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h35f56f93__0[5U] = (VSoc__ConstPool__CONST_h7b100ceb_0[5U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
            __Vtemp_h35f56f93__0[0x12U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                            << 0x10U) 
                                           | (VSoc__ConstPool__CONST_h7b100ceb_0[0x12U] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]));
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h35f56f93__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
            __Vtemp_h35f56f93__0[0x12U] = ((0xffff0000U 
                                            & ((VSoc__ConstPool__CONST_h86280a92_0[0U] 
                                                << 0x10U) 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U])) 
                                           | (0xffffU 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h35f56f93__0[5U] = (VSoc__ConstPool__CONST_h6e9da94f_0[5U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
            __Vtemp_h35f56f93__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        } else {
            __Vtemp_h35f56f93__0[5U] = ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                         : ((0x42U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? (VSoc__ConstPool__CONST_h00a443f1_0[5U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                             : ((0x40U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]
                                                 : 
                                                ((0x3eU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 (VSoc__ConstPool__CONST_h8b2c9f06_0[5U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U])
                                                  : 
                                                 __Vtemp_h6ffddd14__0[5U]))));
            __Vtemp_h35f56f93__0[0x12U] = __Vtemp_he3523fd1__0[0x12U];
        }
        __Vtemp_h35f56f93__0[0x15U] = __Vtemp_h75f2f96b__0[0x15U];
    }
    if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h674275a3__0[0x16U] = ((0xffff0000U 
                                        & ((VSoc__ConstPool__CONST_h3c9e891d_0[0U] 
                                            << 0x10U) 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h674275a3__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h674275a3__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h674275a3__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h674275a3__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h674275a3__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h674275a3__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h674275a3__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h674275a3__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h674275a3__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h674275a3__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h674275a3__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h674275a3__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h674275a3__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h674275a3__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h674275a3__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h674275a3__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h674275a3__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h674275a3__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h674275a3__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h674275a3__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h674275a3__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h674275a3__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h674275a3__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h674275a3__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h674275a3__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h674275a3__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h674275a3__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        __Vtemp_h674275a3__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_h674275a3__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h674275a3__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h674275a3__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h674275a3__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h674275a3__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h674275a3__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h674275a3__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h674275a3__0[0x16U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U])));
        __Vtemp_h674275a3__0[0x17U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])));
        __Vtemp_h674275a3__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h674275a3__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h674275a3__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h674275a3__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h674275a3__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h674275a3__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h674275a3__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h1ba38564_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h1ba38564_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else {
        __Vtemp_h674275a3__0[0x16U] = __Vtemp_h75f2f96b__0[0x16U];
        __Vtemp_h674275a3__0[0x17U] = __Vtemp_h75f2f96b__0[0x17U];
        __Vtemp_h674275a3__0[0x18U] = __Vtemp_h75f2f96b__0[0x18U];
        __Vtemp_h674275a3__0[0x19U] = __Vtemp_h75f2f96b__0[0x19U];
        __Vtemp_h674275a3__0[0x1aU] = __Vtemp_h75f2f96b__0[0x1aU];
        __Vtemp_h674275a3__0[0x1bU] = __Vtemp_h75f2f96b__0[0x1bU];
        __Vtemp_h674275a3__0[0x1cU] = __Vtemp_h75f2f96b__0[0x1cU];
        __Vtemp_h674275a3__0[0x1dU] = __Vtemp_h75f2f96b__0[0x1dU];
        __Vtemp_h674275a3__0[0x1eU] = __Vtemp_h75f2f96b__0[0x1eU];
    }
    if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[9U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        __Vtemp_ha533429a__0[0x11U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x11U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_ha533429a__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = (VSoc__ConstPool__CONST_h93aae58d_0[9U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        __Vtemp_ha533429a__0[0x11U] = (VSoc__ConstPool__CONST_h93aae58d_0[0x11U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_ha533429a__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = (VSoc__ConstPool__CONST_h3bb70343_0[9U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        __Vtemp_ha533429a__0[0x11U] = (VSoc__ConstPool__CONST_h3bb70343_0[0x11U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_ha533429a__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = (VSoc__ConstPool__CONST_h3422a097_0[9U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        __Vtemp_ha533429a__0[0x11U] = (VSoc__ConstPool__CONST_h3422a097_0[0x11U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_ha533429a__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = (VSoc__ConstPool__CONST_h7b100ceb_0[9U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        __Vtemp_ha533429a__0[0x11U] = (VSoc__ConstPool__CONST_h7b100ceb_0[0x11U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        __Vtemp_ha533429a__0[0x11U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
    } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha533429a__0[9U] = (VSoc__ConstPool__CONST_h6e9da94f_0[9U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        __Vtemp_ha533429a__0[0x11U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       (VSoc__ConstPool__CONST_h6e9da94f_0[0x11U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]));
    } else {
        __Vtemp_ha533429a__0[9U] = ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]
                                     : ((0x42U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_h00a443f1_0[9U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U])
                                         : __Vtemp_h68f875e6__0[9U]));
        __Vtemp_ha533429a__0[0x11U] = __Vtemp_he3523fd1__0[0x11U];
    }
    if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha5ec06e7__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_ha5ec06e7__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_ha5ec06e7__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[7U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[8U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha5ec06e7__0[0xdU] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xdU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
        __Vtemp_ha5ec06e7__0[0x10U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x10U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        __Vtemp_ha5ec06e7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha5ec06e7__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_ha5ec06e7__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_ha5ec06e7__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h3c9e891d_0[8U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h3c9e891d_0[9U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha5ec06e7__0[0xdU] = (VSoc__ConstPool__CONST_h93aae58d_0[0xdU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
        __Vtemp_ha5ec06e7__0[0x10U] = (VSoc__ConstPool__CONST_h93aae58d_0[0x10U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        __Vtemp_ha5ec06e7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha5ec06e7__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        __Vtemp_ha5ec06e7__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        __Vtemp_ha5ec06e7__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_hfcc3ede4_0[9U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_hfcc3ede4_0[0xaU] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_ha5ec06e7__0[0xdU] = (VSoc__ConstPool__CONST_h3bb70343_0[0xdU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
        __Vtemp_ha5ec06e7__0[0x10U] = (VSoc__ConstPool__CONST_h3bb70343_0[0x10U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        __Vtemp_ha5ec06e7__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else {
        if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_ha5ec06e7__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_ha5ec06e7__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_ha5ec06e7__0[0xdU] = (VSoc__ConstPool__CONST_h3422a097_0[0xdU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
            __Vtemp_ha5ec06e7__0[0x10U] = (VSoc__ConstPool__CONST_h3422a097_0[0x10U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_ha5ec06e7__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_ha5ec06e7__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_ha5ec06e7__0[0xdU] = (VSoc__ConstPool__CONST_h7b100ceb_0[0xdU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
            __Vtemp_ha5ec06e7__0[0x10U] = (VSoc__ConstPool__CONST_h7b100ceb_0[0x10U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_ha5ec06e7__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_ha5ec06e7__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        } else if ((0x46U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_ha5ec06e7__0[0xdU] = (VSoc__ConstPool__CONST_h6e9da94f_0[0xdU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
            __Vtemp_ha5ec06e7__0[0x10U] = (VSoc__ConstPool__CONST_h6e9da94f_0[0x10U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        } else if ((0x44U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_ha5ec06e7__0[0xdU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
            __Vtemp_ha5ec06e7__0[0x10U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        } else {
            __Vtemp_ha5ec06e7__0[0xdU] = __Vtemp_h3cebbe12__0[0xdU];
            __Vtemp_ha5ec06e7__0[0x10U] = __Vtemp_h3cebbe12__0[0x10U];
        }
        __Vtemp_ha5ec06e7__0[0x1fU] = __Vtemp_h5297cacf__0[0x1fU];
    }
    __Vtemp_hdf309363__0[0x14U] = ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                    ? (VSoc__ConstPool__CONST_h547365de_0[0x14U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])
                                    : ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                        ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]
                                        : ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                            ? (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x14U] 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])
                                            : ((0x58U 
                                                == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]
                                                : (
                                                   (0x56U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[0x14U] 
                                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])
                                                    : 
                                                   ((0x54U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]
                                                     : 
                                                    ((0x52U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                       << 0x10U) 
                                                      | (VSoc__ConstPool__CONST_h3bb70343_0[0x14U] 
                                                         & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]))
                                                      : 
                                                     ((0x50U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      ((0xffff0000U 
                                                        & ((VSoc__ConstPool__CONST_h1ba38564_0[0U] 
                                                            << 0x10U) 
                                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U])) 
                                                       | (0xffffU 
                                                          & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                                                       : 
                                                      __Vtemp_h75f2f96b__0[0x14U]))))))));
    if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_he9876133__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = (VSoc__ConstPool__CONST_h547365de_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_he9876133__0[0xcU] = (VSoc__ConstPool__CONST_h547365de_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_he9876133__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_he9876133__0[0xcU] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_he9876133__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = (VSoc__ConstPool__CONST_h93aae58d_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_he9876133__0[0xcU] = (VSoc__ConstPool__CONST_h93aae58d_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_he9876133__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = (VSoc__ConstPool__CONST_h3bb70343_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_he9876133__0[0xcU] = (VSoc__ConstPool__CONST_h3bb70343_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_he9876133__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = (VSoc__ConstPool__CONST_h3422a097_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_he9876133__0[0xcU] = (VSoc__ConstPool__CONST_h3422a097_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_he9876133__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = (VSoc__ConstPool__CONST_h7b100ceb_0[4U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        __Vtemp_he9876133__0[0xcU] = (VSoc__ConstPool__CONST_h7b100ceb_0[0xcU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
    } else if ((0x48U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_he9876133__0[4U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        __Vtemp_he9876133__0[0xcU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
    } else {
        __Vtemp_he9876133__0[4U] = __Vtemp_hd50c546c__0[4U];
        __Vtemp_he9876133__0[0xcU] = __Vtemp_hd50c546c__0[0xcU];
    }
    if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h47286188__0[8U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_h47286188__0[0xbU] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        __Vtemp_h47286188__0[0x18U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       (VSoc__ConstPool__CONST_h7dfaa27a_0[0x18U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]));
        __Vtemp_h47286188__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h47286188__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h47286188__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h47286188__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h47286188__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h47286188__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h47286188__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h47286188__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h47286188__0[0x18U] = ((0xffff0000U 
                                        & ((VSoc__ConstPool__CONST_h5b889007_0[0U] 
                                            << 0x10U) 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_h47286188__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h5b889007_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h5b889007_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h47286188__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h5b889007_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h5b889007_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h47286188__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h5b889007_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h5b889007_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h47286188__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h5b889007_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h5b889007_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h47286188__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h5b889007_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h5b889007_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h47286188__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h5b889007_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h5b889007_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h47286188__0[8U] = (VSoc__ConstPool__CONST_h547365de_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_h47286188__0[0xbU] = (VSoc__ConstPool__CONST_h547365de_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        __Vtemp_h47286188__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h47286188__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h47286188__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h47286188__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h47286188__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h47286188__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h47286188__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h47286188__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        __Vtemp_h47286188__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        __Vtemp_h47286188__0[0x18U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[0U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[1U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U])));
        __Vtemp_h47286188__0[0x19U] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[1U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[2U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U])));
        __Vtemp_h47286188__0[0x1aU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[2U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[3U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU])));
        __Vtemp_h47286188__0[0x1bU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[3U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[4U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU])));
        __Vtemp_h47286188__0[0x1cU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[4U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[5U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU])));
        __Vtemp_h47286188__0[0x1dU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[5U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[6U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU])));
        __Vtemp_h47286188__0[0x1eU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h52841b67_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h52841b67_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU])));
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h47286188__0[8U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[8U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        __Vtemp_h47286188__0[0xbU] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xbU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        __Vtemp_h47286188__0[0x18U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        __Vtemp_h47286188__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        __Vtemp_h47286188__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        __Vtemp_h47286188__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_h47286188__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_h47286188__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_h47286188__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else {
        if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h47286188__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = (VSoc__ConstPool__CONST_h93aae58d_0[8U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
            __Vtemp_h47286188__0[0xbU] = (VSoc__ConstPool__CONST_h93aae58d_0[0xbU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h47286188__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = (VSoc__ConstPool__CONST_h3bb70343_0[8U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
            __Vtemp_h47286188__0[0xbU] = (VSoc__ConstPool__CONST_h3bb70343_0[0xbU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h47286188__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        } else if ((0x4eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = (VSoc__ConstPool__CONST_h3422a097_0[8U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
            __Vtemp_h47286188__0[0xbU] = (VSoc__ConstPool__CONST_h3422a097_0[0xbU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        } else if ((0x4cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
            __Vtemp_h47286188__0[0xbU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        } else if ((0x4aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_h47286188__0[8U] = (VSoc__ConstPool__CONST_h7b100ceb_0[8U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
            __Vtemp_h47286188__0[0xbU] = (VSoc__ConstPool__CONST_h7b100ceb_0[0xbU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        } else {
            __Vtemp_h47286188__0[8U] = __Vtemp_ha0811969__0[8U];
            __Vtemp_h47286188__0[0xbU] = __Vtemp_ha0811969__0[0xbU];
        }
        __Vtemp_h47286188__0[0x18U] = __Vtemp_h674275a3__0[0x18U];
        __Vtemp_h47286188__0[0x19U] = __Vtemp_h674275a3__0[0x19U];
        __Vtemp_h47286188__0[0x1aU] = __Vtemp_h674275a3__0[0x1aU];
        __Vtemp_h47286188__0[0x1bU] = __Vtemp_h674275a3__0[0x1bU];
        __Vtemp_h47286188__0[0x1cU] = __Vtemp_h674275a3__0[0x1cU];
        __Vtemp_h47286188__0[0x1dU] = __Vtemp_h674275a3__0[0x1dU];
        __Vtemp_h47286188__0[0x1eU] = __Vtemp_h674275a3__0[0x1eU];
    }
    __Vtemp_h2c109b0a__0[0xfU] = ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                   ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                   : ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? (VSoc__ConstPool__CONST_h7dfaa27a_0[0xfU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                       : ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                           : ((0x5eU 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                               ? (VSoc__ConstPool__CONST_h547365de_0[0xfU] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                               : ((0x5cU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                   : 
                                                  ((0x5aU 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xfU] 
                                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                                    : 
                                                   ((0x58U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                     : 
                                                    ((0x56U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     (VSoc__ConstPool__CONST_h93aae58d_0[0xfU] 
                                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                                      : 
                                                     ((0x54U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                       : 
                                                      ((0x52U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       (VSoc__ConstPool__CONST_h3bb70343_0[0xfU] 
                                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                                        : 
                                                       ((0x50U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                         : 
                                                        ((0x4eU 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                          ? 
                                                         (VSoc__ConstPool__CONST_h3422a097_0[0xfU] 
                                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU])
                                                          : 
                                                         ((0x4cU 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                           ? 
                                                          vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]
                                                           : 
                                                          __Vtemp_hcc59df9e__0[0xfU])))))))))))));
    __Vtemp_h1d2be4cf__0[7U] = ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                 ? (VSoc__ConstPool__CONST_h2dcfa7ce_0[7U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                 : ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                     : ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? (VSoc__ConstPool__CONST_h7dfaa27a_0[7U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                         : ((0x60U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                             : ((0x5eU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                (VSoc__ConstPool__CONST_h547365de_0[7U] 
                                                 & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                 : 
                                                ((0x5cU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                  : 
                                                 ((0x5aU 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  (VSoc__ConstPool__CONST_hc4d3a2ae_0[7U] 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                   : 
                                                  ((0x58U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                    : 
                                                   ((0x56U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    (VSoc__ConstPool__CONST_h93aae58d_0[7U] 
                                                     & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                     : 
                                                    ((0x54U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                      ? 
                                                     vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                      : 
                                                     ((0x52U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                       ? 
                                                      (VSoc__ConstPool__CONST_h3bb70343_0[7U] 
                                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                       : 
                                                      ((0x50U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                        ? 
                                                       vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]
                                                        : 
                                                       ((0x4eU 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                         ? 
                                                        (VSoc__ConstPool__CONST_h3422a097_0[7U] 
                                                         & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U])
                                                         : 
                                                        __Vtemp_h506095d1__0[7U])))))))))))));
    if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdf387b5f__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_hdf387b5f__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_hdf387b5f__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_hdf387b5f__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_hdf387b5f__0[0x1fU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]));
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdf387b5f__0[1U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_hdf387b5f__0[3U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_hdf387b5f__0[6U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        __Vtemp_hdf387b5f__0[0x13U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x13U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        __Vtemp_hdf387b5f__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdf387b5f__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_hdf387b5f__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_hdf387b5f__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_hdf387b5f__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_hdf387b5f__0[0x1fU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]));
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdf387b5f__0[1U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_hdf387b5f__0[3U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_hdf387b5f__0[6U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        __Vtemp_hdf387b5f__0[0x13U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x13U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        __Vtemp_hdf387b5f__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdf387b5f__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        __Vtemp_hdf387b5f__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        __Vtemp_hdf387b5f__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        __Vtemp_hdf387b5f__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        __Vtemp_hdf387b5f__0[0x1fU] = ((0xffffU & (
                                                   (VSoc__ConstPool__CONST_h5b889007_0[6U] 
                                                    >> 0x10U) 
                                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])) 
                                       | (0xffff0000U 
                                          & ((VSoc__ConstPool__CONST_h5b889007_0[7U] 
                                              << 0x10U) 
                                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU])));
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdf387b5f__0[1U] = (VSoc__ConstPool__CONST_h547365de_0[1U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        __Vtemp_hdf387b5f__0[3U] = (VSoc__ConstPool__CONST_h547365de_0[3U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        __Vtemp_hdf387b5f__0[6U] = (VSoc__ConstPool__CONST_h547365de_0[6U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        __Vtemp_hdf387b5f__0[0x13U] = (VSoc__ConstPool__CONST_h547365de_0[0x13U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        __Vtemp_hdf387b5f__0[0x1fU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else {
        if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hdf387b5f__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_hdf387b5f__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_hdf387b5f__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_hdf387b5f__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hdf387b5f__0[1U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_hdf387b5f__0[3U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[3U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            __Vtemp_hdf387b5f__0[6U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[6U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
            __Vtemp_hdf387b5f__0[0x13U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x13U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hdf387b5f__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_hdf387b5f__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_hdf387b5f__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_hdf387b5f__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hdf387b5f__0[1U] = (VSoc__ConstPool__CONST_h93aae58d_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_hdf387b5f__0[3U] = (VSoc__ConstPool__CONST_h93aae58d_0[3U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            __Vtemp_hdf387b5f__0[6U] = (VSoc__ConstPool__CONST_h93aae58d_0[6U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
            __Vtemp_hdf387b5f__0[0x13U] = (VSoc__ConstPool__CONST_h93aae58d_0[0x13U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hdf387b5f__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_hdf387b5f__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_hdf387b5f__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_hdf387b5f__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hdf387b5f__0[1U] = (VSoc__ConstPool__CONST_h3bb70343_0[1U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            __Vtemp_hdf387b5f__0[3U] = (VSoc__ConstPool__CONST_h3bb70343_0[3U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            __Vtemp_hdf387b5f__0[6U] = (VSoc__ConstPool__CONST_h3bb70343_0[6U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
            __Vtemp_hdf387b5f__0[0x13U] = (VSoc__ConstPool__CONST_h3bb70343_0[0x13U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        } else if ((0x50U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hdf387b5f__0[1U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
            __Vtemp_hdf387b5f__0[3U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
            __Vtemp_hdf387b5f__0[6U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
            __Vtemp_hdf387b5f__0[0x13U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        } else {
            __Vtemp_hdf387b5f__0[1U] = __Vtemp_h75f2f96b__0[1U];
            __Vtemp_hdf387b5f__0[3U] = __Vtemp_h75f2f96b__0[3U];
            __Vtemp_hdf387b5f__0[6U] = __Vtemp_h75f2f96b__0[6U];
            __Vtemp_hdf387b5f__0[0x13U] = __Vtemp_h75f2f96b__0[0x13U];
        }
        __Vtemp_hdf387b5f__0[0x1fU] = __Vtemp_ha5ec06e7__0[0x1fU];
    }
    if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf5aa7334__0[0U] = (VSoc__ConstPool__CONST_hdde329d1_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_hf5aa7334__0[0xaU] = (VSoc__ConstPool__CONST_hdde329d1_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        __Vtemp_hf5aa7334__0[0x17U] = (VSoc__ConstPool__CONST_hdde329d1_0[0x17U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
        __Vtemp_hf5aa7334__0[0x1aU] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       (VSoc__ConstPool__CONST_hdde329d1_0[0x1aU] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]));
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf5aa7334__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_hf5aa7334__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_hf5aa7334__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_hf5aa7334__0[0x1aU] = ((0xffff0000U 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf5aa7334__0[0U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        __Vtemp_hf5aa7334__0[0xaU] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xaU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        __Vtemp_hf5aa7334__0[0x17U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x17U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
        __Vtemp_hf5aa7334__0[0x1aU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hf5aa7334__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        __Vtemp_hf5aa7334__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        __Vtemp_hf5aa7334__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        __Vtemp_hf5aa7334__0[0x1aU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]));
    } else {
        if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hf5aa7334__0[0U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_hf5aa7334__0[0xaU] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0xaU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
            __Vtemp_hf5aa7334__0[0x17U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x17U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
        } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hf5aa7334__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_hf5aa7334__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_hf5aa7334__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hf5aa7334__0[0U] = (VSoc__ConstPool__CONST_h547365de_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_hf5aa7334__0[0xaU] = (VSoc__ConstPool__CONST_h547365de_0[0xaU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
            __Vtemp_hf5aa7334__0[0x17U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                            << 0x10U) 
                                           | (VSoc__ConstPool__CONST_h547365de_0[0x17U] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]));
        } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hf5aa7334__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
            __Vtemp_hf5aa7334__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            __Vtemp_hf5aa7334__0[0x17U] = ((0xffff0000U 
                                            & ((VSoc__ConstPool__CONST_h52841b67_0[0U] 
                                                << 0x10U) 
                                               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U])) 
                                           | (0xffffU 
                                              & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hf5aa7334__0[0U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
            __Vtemp_hf5aa7334__0[0xaU] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xaU] 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
            __Vtemp_hf5aa7334__0[0x17U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        } else {
            if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hf5aa7334__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
                __Vtemp_hf5aa7334__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            } else if ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hf5aa7334__0[0U] = (VSoc__ConstPool__CONST_h93aae58d_0[0U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
                __Vtemp_hf5aa7334__0[0xaU] = (VSoc__ConstPool__CONST_h93aae58d_0[0xaU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
            } else if ((0x54U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hf5aa7334__0[0U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
                __Vtemp_hf5aa7334__0[0xaU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
            } else if ((0x52U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hf5aa7334__0[0U] = (VSoc__ConstPool__CONST_h3bb70343_0[0U] 
                                            & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
                __Vtemp_hf5aa7334__0[0xaU] = (VSoc__ConstPool__CONST_h3bb70343_0[0xaU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
            } else {
                __Vtemp_hf5aa7334__0[0U] = __Vtemp_h5297cacf__0[0U];
                __Vtemp_hf5aa7334__0[0xaU] = __Vtemp_h5297cacf__0[0xaU];
            }
            __Vtemp_hf5aa7334__0[0x17U] = __Vtemp_h674275a3__0[0x17U];
        }
        __Vtemp_hf5aa7334__0[0x1aU] = __Vtemp_h47286188__0[0x1aU];
    }
    if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfaf00f96__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_hfaf00f96__0[0x1bU] = ((0xffff0000U 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]) 
                                       | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        __Vtemp_hfaf00f96__0[0x1cU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]));
        __Vtemp_hfaf00f96__0[0x1dU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]));
        __Vtemp_hfaf00f96__0[0x1eU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]));
    } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfaf00f96__0[2U] = (VSoc__ConstPool__CONST_hdde329d1_0[2U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
        __Vtemp_hfaf00f96__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_hfaf00f96__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_hfaf00f96__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_hfaf00f96__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfaf00f96__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_hfaf00f96__0[0x1bU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]));
        __Vtemp_hfaf00f96__0[0x1cU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]));
        __Vtemp_hfaf00f96__0[0x1dU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]));
        __Vtemp_hfaf00f96__0[0x1eU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]));
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfaf00f96__0[2U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[2U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
        __Vtemp_hfaf00f96__0[0x1bU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        __Vtemp_hfaf00f96__0[0x1cU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        __Vtemp_hfaf00f96__0[0x1dU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        __Vtemp_hfaf00f96__0[0x1eU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hfaf00f96__0[2U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        __Vtemp_hfaf00f96__0[0x1bU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]));
        __Vtemp_hfaf00f96__0[0x1cU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]));
        __Vtemp_hfaf00f96__0[0x1dU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]));
        __Vtemp_hfaf00f96__0[0x1eU] = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]) 
                                       | (0xffff0000U 
                                          & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]));
    } else {
        __Vtemp_hfaf00f96__0[2U] = ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                     ? (VSoc__ConstPool__CONST_h7dfaa27a_0[2U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                     : ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                         ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                         : ((0x5eU 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                             ? (VSoc__ConstPool__CONST_h547365de_0[2U] 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                             : ((0x5cU 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                 ? 
                                                vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                 : 
                                                ((0x5aU 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                  ? 
                                                 (VSoc__ConstPool__CONST_hc4d3a2ae_0[2U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                  : 
                                                 ((0x58U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                   ? 
                                                  vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                   : 
                                                  ((0x56U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                    ? 
                                                   (VSoc__ConstPool__CONST_h93aae58d_0[2U] 
                                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U])
                                                    : 
                                                   ((0x54U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                                     ? 
                                                    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]
                                                     : 
                                                    __Vtemp_h5d6716be__0[2U]))))))));
        __Vtemp_hfaf00f96__0[0x1bU] = __Vtemp_h47286188__0[0x1bU];
        __Vtemp_hfaf00f96__0[0x1cU] = __Vtemp_h47286188__0[0x1cU];
        __Vtemp_hfaf00f96__0[0x1dU] = __Vtemp_h47286188__0[0x1dU];
        __Vtemp_hfaf00f96__0[0x1eU] = __Vtemp_h47286188__0[0x1eU];
    }
    if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = (VSoc__ConstPool__CONST_hdbe32996_0[0xeU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
        __Vtemp_h2423cd47__0[0x16U] = (VSoc__ConstPool__CONST_hdbe32996_0[0x16U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h2423cd47__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
    } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = (VSoc__ConstPool__CONST_hdde329d1_0[0xeU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
        __Vtemp_h2423cd47__0[0x16U] = (VSoc__ConstPool__CONST_hdde329d1_0[0x16U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h2423cd47__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xeU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
        __Vtemp_h2423cd47__0[0x16U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x16U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h2423cd47__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0xeU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
        __Vtemp_h2423cd47__0[0x16U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x16U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h2423cd47__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = (VSoc__ConstPool__CONST_h547365de_0[0xeU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
        __Vtemp_h2423cd47__0[0x16U] = (VSoc__ConstPool__CONST_h547365de_0[0x16U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        __Vtemp_h2423cd47__0[0x16U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_h2423cd47__0[0xeU] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0xeU] 
                                      & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
        __Vtemp_h2423cd47__0[0x16U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                        << 0x10U) | 
                                       (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x16U] 
                                        & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]));
    } else {
        __Vtemp_h2423cd47__0[0xeU] = ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                       ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]
                                       : ((0x56U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))
                                           ? (VSoc__ConstPool__CONST_h93aae58d_0[0xeU] 
                                              & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU])
                                           : __Vtemp_he67f9ded__0[0xeU]));
        __Vtemp_h2423cd47__0[0x16U] = __Vtemp_h674275a3__0[0x16U];
    }
    if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = (VSoc__ConstPool__CONST_hdbe32996_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_hdfa5d9fa__0[0x12U] = (VSoc__ConstPool__CONST_hdbe32996_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_hdfa5d9fa__0[0x15U] = (VSoc__ConstPool__CONST_hdbe32996_0[0x15U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = (VSoc__ConstPool__CONST_hdde329d1_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_hdfa5d9fa__0[0x12U] = (VSoc__ConstPool__CONST_hdde329d1_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_hdfa5d9fa__0[0x15U] = (VSoc__ConstPool__CONST_hdde329d1_0[0x15U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
    } else if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_hdfa5d9fa__0[0x12U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_hdfa5d9fa__0[0x15U] = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x15U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
    } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_hdfa5d9fa__0[0x12U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_hdfa5d9fa__0[0x15U] = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x15U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
    } else if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = (VSoc__ConstPool__CONST_h547365de_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_hdfa5d9fa__0[0x12U] = (VSoc__ConstPool__CONST_h547365de_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_hdfa5d9fa__0[0x15U] = (VSoc__ConstPool__CONST_h547365de_0[0x15U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
    } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else if ((0x5aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[5U] 
                                    & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        __Vtemp_hdfa5d9fa__0[0x12U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x12U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        __Vtemp_hdfa5d9fa__0[0x15U] = (VSoc__ConstPool__CONST_hc4d3a2ae_0[0x15U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
    } else if ((0x58U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hdfa5d9fa__0[5U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U];
    } else {
        __Vtemp_hdfa5d9fa__0[5U] = __Vtemp_h35f56f93__0[5U];
        __Vtemp_hdfa5d9fa__0[0x12U] = __Vtemp_h35f56f93__0[0x12U];
        __Vtemp_hdfa5d9fa__0[0x15U] = __Vtemp_h35f56f93__0[0x15U];
    }
    if ((0x72U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hea27914f__0[0x19U] = (VSoc__ConstPool__CONST_hd4c94b97_0[0x19U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[1U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[1U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[2U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[2U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[3U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[3U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[4U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[5U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[5U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[6U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[7U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[8U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[9U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0xaU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0xbU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0xcU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0xdU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0xeU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0xfU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x10U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x11U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x12U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x12U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x13U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x14U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x15U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x15U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x16U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x17U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x18U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x19U] 
            = __Vtemp_hea27914f__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1aU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x1aU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1bU] 
            = (VSoc__ConstPool__CONST_hd4c94b97_0[0x1bU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1cU] 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                << 0x10U) | (VSoc__ConstPool__CONST_hd4c94b97_0[0x1cU] 
                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x70U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hea27914f__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[1U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[2U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[3U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
            = __Vtemp_hdfa5d9fa__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
            = __Vtemp_hdfa5d9fa__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
            = __Vtemp_hdfa5d9fa__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x19U] 
            = __Vtemp_hea27914f__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1bU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1cU] 
            = ((0xffff0000U & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU]) 
               | (0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1dU] 
            = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]) 
               | (0xffff0000U & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU]));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1eU] 
            = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]) 
               | (0xffff0000U & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU]));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1fU] 
            = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]) 
               | (0xffff0000U & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]));
    } else if ((0x6eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hea27914f__0[0x19U] = (VSoc__ConstPool__CONST_hdbe32996_0[0x19U] 
                                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[1U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[1U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[2U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[2U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[2U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[3U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[3U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[4U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
            = __Vtemp_hdfa5d9fa__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[6U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[7U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[8U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[9U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0xaU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0xbU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0xcU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0xdU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
            = __Vtemp_h2423cd47__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0xfU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0x10U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0x11U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
            = __Vtemp_hdfa5d9fa__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0x13U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0x14U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
            = __Vtemp_hdfa5d9fa__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
            = __Vtemp_h2423cd47__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0x17U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0x18U] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x19U] 
            = __Vtemp_hea27914f__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1aU] 
            = (VSoc__ConstPool__CONST_hdbe32996_0[0x1aU] 
               & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU]);
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1bU] 
            = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                << 0x10U) | (VSoc__ConstPool__CONST_hdbe32996_0[0x1bU] 
                             & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1bU]));
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1cU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1dU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1eU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1fU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
    } else if ((0x6cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
        __Vtemp_hea27914f__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[1U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[2U] 
            = __Vtemp_hfaf00f96__0[2U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[3U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
            = __Vtemp_hdfa5d9fa__0[5U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xaU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
            = __Vtemp_h2423cd47__0[0xeU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
            = __Vtemp_hdfa5d9fa__0[0x12U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
            = __Vtemp_hdfa5d9fa__0[0x15U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
            = __Vtemp_h2423cd47__0[0x16U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x17U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x19U] 
            = __Vtemp_hea27914f__0[0x19U];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1aU] 
            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1aU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1bU] 
            = __Vtemp_hfaf00f96__0[0x1bU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1cU] 
            = __Vtemp_hfaf00f96__0[0x1cU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1dU] 
            = __Vtemp_hfaf00f96__0[0x1dU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1eU] 
            = __Vtemp_hfaf00f96__0[0x1eU];
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1fU] 
            = ((0xffffU & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]) 
               | (0xffff0000U & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU]));
    } else {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0U] 
            = __Vtemp_hf5aa7334__0[0U];
        if ((0x6aU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
            __Vtemp_hea27914f__0[0x19U] = (VSoc__ConstPool__CONST_hdde329d1_0[0x19U] 
                                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[1U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[1U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[1U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[2U] 
                = __Vtemp_hfaf00f96__0[2U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[3U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[3U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[3U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[4U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
                = __Vtemp_hdfa5d9fa__0[5U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[6U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[6U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[7U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[8U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[9U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                = __Vtemp_hf5aa7334__0[0xaU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0xbU] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0xcU] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0xdU] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                = __Vtemp_h2423cd47__0[0xeU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0xfU] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0x10U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0x11U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
                = __Vtemp_hdfa5d9fa__0[0x12U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0x13U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x13U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0x14U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
                = __Vtemp_hdfa5d9fa__0[0x15U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
                = __Vtemp_h2423cd47__0[0x16U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
                = __Vtemp_hf5aa7334__0[0x17U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
                = (VSoc__ConstPool__CONST_hdde329d1_0[0x18U] 
                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]);
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x19U] 
                = __Vtemp_hea27914f__0[0x19U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1aU] 
                = __Vtemp_hf5aa7334__0[0x1aU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1bU] 
                = __Vtemp_hfaf00f96__0[0x1bU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1cU] 
                = __Vtemp_hfaf00f96__0[0x1cU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1dU] 
                = __Vtemp_hfaf00f96__0[0x1dU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1eU] 
                = __Vtemp_hfaf00f96__0[0x1eU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1fU] 
                = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x1fU];
        } else {
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[1U] 
                = __Vtemp_hdf387b5f__0[1U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[2U] 
                = __Vtemp_hfaf00f96__0[2U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[3U] 
                = __Vtemp_hdf387b5f__0[3U];
            if ((0x68U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea27914f__0[0x19U] = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
                    = __Vtemp_hdfa5d9fa__0[5U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
                    = __Vtemp_hdf387b5f__0[6U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[7U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                    = __Vtemp_hf5aa7334__0[0xaU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                    = __Vtemp_h2423cd47__0[0xeU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
                    = __Vtemp_hdfa5d9fa__0[0x12U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
                    = __Vtemp_hdf387b5f__0[0x13U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
                    = __Vtemp_hdfa5d9fa__0[0x15U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
                    = __Vtemp_h2423cd47__0[0x16U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
                    = __Vtemp_hf5aa7334__0[0x17U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            } else if ((0x66U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea27914f__0[0x19U] = (((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data) 
                                                << 0x10U) 
                                               | (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x19U] 
                                                  & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[4U] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
                    = __Vtemp_hdfa5d9fa__0[5U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
                    = __Vtemp_hdf387b5f__0[6U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
                    = __Vtemp_h1d2be4cf__0[7U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[8U] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[9U] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                    = __Vtemp_hf5aa7334__0[0xaU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xbU] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xcU] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xdU] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                    = __Vtemp_h2423cd47__0[0xeU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0xfU] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xfU]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x10U] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x11U] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
                    = __Vtemp_hdfa5d9fa__0[0x12U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
                    = __Vtemp_hdf387b5f__0[0x13U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x14U] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
                    = __Vtemp_hdfa5d9fa__0[0x15U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
                    = __Vtemp_h2423cd47__0[0x16U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
                    = __Vtemp_hf5aa7334__0[0x17U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
                    = (VSoc__ConstPool__CONST_h2dcfa7ce_0[0x18U] 
                       & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U]);
            } else if ((0x64U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                __Vtemp_hea27914f__0[0x19U] = ((0xffff0000U 
                                                & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x19U]) 
                                               | (0xffffU 
                                                  & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)));
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
                    = __Vtemp_hdfa5d9fa__0[5U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
                    = __Vtemp_hdf387b5f__0[6U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
                    = __Vtemp_h1d2be4cf__0[7U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[8U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                    = __Vtemp_hf5aa7334__0[0xaU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xbU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                    = __Vtemp_h2423cd47__0[0xeU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                    = __Vtemp_h2c109b0a__0[0xfU];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
                    = __Vtemp_hdfa5d9fa__0[0x12U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
                    = __Vtemp_hdf387b5f__0[0x13U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
                    = __Vtemp_hdfa5d9fa__0[0x15U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
                    = __Vtemp_h2423cd47__0[0x16U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
                    = __Vtemp_hf5aa7334__0[0x17U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
                    = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x18U];
            } else {
                __Vtemp_hea27914f__0[0x19U] = __Vtemp_h47286188__0[0x19U];
                if ((0x62U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
                        = (VSoc__ConstPool__CONST_h7dfaa27a_0[4U] 
                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[4U]);
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
                        = __Vtemp_hdfa5d9fa__0[5U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
                        = __Vtemp_hdf387b5f__0[6U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
                        = __Vtemp_h1d2be4cf__0[7U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
                        = __Vtemp_h47286188__0[8U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                        = (VSoc__ConstPool__CONST_h7dfaa27a_0[9U] 
                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                        = __Vtemp_hf5aa7334__0[0xaU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                        = __Vtemp_h47286188__0[0xbU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                        = (VSoc__ConstPool__CONST_h7dfaa27a_0[0xcU] 
                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xcU]);
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                        = (VSoc__ConstPool__CONST_h7dfaa27a_0[0xdU] 
                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                        = __Vtemp_h2423cd47__0[0xeU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                        = __Vtemp_h2c109b0a__0[0xfU];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                        = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x10U] 
                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                        = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x11U] 
                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
                        = __Vtemp_hdfa5d9fa__0[0x12U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
                        = __Vtemp_hdf387b5f__0[0x13U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
                        = (VSoc__ConstPool__CONST_h7dfaa27a_0[0x14U] 
                           & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U]);
                } else {
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[4U] 
                        = __Vtemp_he9876133__0[4U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[5U] 
                        = __Vtemp_hdfa5d9fa__0[5U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[6U] 
                        = __Vtemp_hdf387b5f__0[6U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[7U] 
                        = __Vtemp_h1d2be4cf__0[7U];
                    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[8U] 
                        = __Vtemp_h47286188__0[8U];
                    if ((0x60U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                            = __Vtemp_hf5aa7334__0[0xaU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                            = __Vtemp_h47286188__0[0xbU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                            = __Vtemp_he9876133__0[0xcU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                            = __Vtemp_h2423cd47__0[0xeU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                            = __Vtemp_h2c109b0a__0[0xfU];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
                            = __Vtemp_hdfa5d9fa__0[0x12U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
                            = __Vtemp_hdf387b5f__0[0x13U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
                            = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x14U];
                    } else {
                        if ((0x5eU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                                = (VSoc__ConstPool__CONST_h547365de_0[9U] 
                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U]);
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                                = __Vtemp_hf5aa7334__0[0xaU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                                = __Vtemp_h47286188__0[0xbU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                                = __Vtemp_he9876133__0[0xcU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                                = (VSoc__ConstPool__CONST_h547365de_0[0xdU] 
                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0xdU]);
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                                = __Vtemp_h2423cd47__0[0xeU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                                = __Vtemp_h2c109b0a__0[0xfU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                                = (VSoc__ConstPool__CONST_h547365de_0[0x10U] 
                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x10U]);
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                                = (VSoc__ConstPool__CONST_h547365de_0[0x11U] 
                                   & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U]);
                        } else if ((0x5cU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset))) {
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                                = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[9U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                                = __Vtemp_hf5aa7334__0[0xaU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                                = __Vtemp_h47286188__0[0xbU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                                = __Vtemp_he9876133__0[0xcU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                                = __Vtemp_ha5ec06e7__0[0xdU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                                = __Vtemp_h2423cd47__0[0xeU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                                = __Vtemp_h2c109b0a__0[0xfU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                                = __Vtemp_ha5ec06e7__0[0x10U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                                = vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data[0x11U];
                        } else {
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[9U] 
                                = __Vtemp_ha533429a__0[9U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xaU] 
                                = __Vtemp_hf5aa7334__0[0xaU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xbU] 
                                = __Vtemp_h47286188__0[0xbU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xcU] 
                                = __Vtemp_he9876133__0[0xcU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xdU] 
                                = __Vtemp_ha5ec06e7__0[0xdU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xeU] 
                                = __Vtemp_h2423cd47__0[0xeU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0xfU] 
                                = __Vtemp_h2c109b0a__0[0xfU];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x10U] 
                                = __Vtemp_ha5ec06e7__0[0x10U];
                            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x11U] 
                                = __Vtemp_ha533429a__0[0x11U];
                        }
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x12U] 
                            = __Vtemp_hdfa5d9fa__0[0x12U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x13U] 
                            = __Vtemp_hdf387b5f__0[0x13U];
                        vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x14U] 
                            = __Vtemp_hdf309363__0[0x14U];
                    }
                }
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x15U] 
                    = __Vtemp_hdfa5d9fa__0[0x15U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x16U] 
                    = __Vtemp_h2423cd47__0[0x16U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x17U] 
                    = __Vtemp_hf5aa7334__0[0x17U];
                vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x18U] 
                    = __Vtemp_h47286188__0[0x18U];
            }
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x19U] 
                = __Vtemp_hea27914f__0[0x19U];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1aU] 
                = __Vtemp_hf5aa7334__0[0x1aU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1bU] 
                = __Vtemp_hfaf00f96__0[0x1bU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1cU] 
                = __Vtemp_hfaf00f96__0[0x1cU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1dU] 
                = __Vtemp_hfaf00f96__0[0x1dU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1eU] 
                = __Vtemp_hfaf00f96__0[0x1eU];
            vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4058[0x1fU] 
                = __Vtemp_hdf387b5f__0[0x1fU];
        }
    }
}
