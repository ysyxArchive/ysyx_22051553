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

extern const VlWide<16>/*511:0*/ VSoc__ConstPool__CONST_h93e1b771_0;
extern const VlWide<32>/*1023:0*/ VSoc__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<16>/*511:0*/ VSoc__ConstPool__CONST_h1c449781_0;

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__2(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_he3b10ad1__0;
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_he3b10ad1__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h214d2be6__0;
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h214d2be6__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc4004284__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc4004284__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0;
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Icache__DOT___GEN_13;
    Soc__DOT__core__DOT__Icache__DOT___GEN_13 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Icache__DOT___GEN_15;
    Soc__DOT__core__DOT__Icache__DOT___GEN_15 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Dcache__DOT___GEN_13;
    Soc__DOT__core__DOT__Dcache__DOT___GEN_13 = 0;
    CData/*0:0*/ Soc__DOT__core__DOT__Dcache__DOT___GEN_15;
    Soc__DOT__core__DOT__Dcache__DOT___GEN_15 = 0;
    VlWide<64>/*2047:0*/ __Vtemp_h81294755__0;
    VlWide<96>/*3071:0*/ __Vtemp_h6246bcaf__0;
    VlWide<16>/*511:0*/ __Vtemp_h4589acab__0;
    VlWide<112>/*3583:0*/ __Vtemp_h4b022c66__0;
    VlWide<16>/*511:0*/ __Vtemp_h1b744e70__0;
    VlWide<16>/*511:0*/ __Vtemp_h1b744e70__1;
    VlWide<16>/*511:0*/ __Vtemp_h9d703ac9__0;
    VlWide<128>/*4095:0*/ __Vtemp_h885313f6__0;
    VlWide<64>/*2047:0*/ __Vtemp_hfbea03ae__0;
    VlWide<96>/*3071:0*/ __Vtemp_h22be902c__0;
    VlWide<16>/*511:0*/ __Vtemp_h24e1c136__0;
    VlWide<112>/*3583:0*/ __Vtemp_h7bfb6d9a__0;
    VlWide<16>/*511:0*/ __Vtemp_he80100a8__0;
    VlWide<16>/*511:0*/ __Vtemp_he80100a8__1;
    VlWide<16>/*511:0*/ __Vtemp_h1e7d2d53__0;
    VlWide<128>/*4095:0*/ __Vtemp_hc7e733c4__0;
    VlWide<16>/*511:0*/ __Vtemp_h90dffb35__0;
    VlWide<16>/*511:0*/ __Vtemp_hc4bbf11d__0;
    VlWide<64>/*2047:0*/ __Vtemp_hb7a5a3f7__0;
    VlWide<96>/*3071:0*/ __Vtemp_h1017de5e__0;
    VlWide<16>/*511:0*/ __Vtemp_hb1565afd__0;
    VlWide<112>/*3583:0*/ __Vtemp_hce7a8524__0;
    VlWide<16>/*511:0*/ __Vtemp_h3b94b080__0;
    VlWide<16>/*511:0*/ __Vtemp_h3b94b080__1;
    VlWide<16>/*511:0*/ __Vtemp_hbc09f34c__0;
    VlWide<128>/*4095:0*/ __Vtemp_h805074aa__0;
    VlWide<64>/*2047:0*/ __Vtemp_hf255980f__0;
    VlWide<96>/*3071:0*/ __Vtemp_hc85cfd1a__0;
    VlWide<16>/*511:0*/ __Vtemp_h74456a53__0;
    VlWide<112>/*3583:0*/ __Vtemp_hc22bf567__0;
    VlWide<16>/*511:0*/ __Vtemp_h879ffeb8__0;
    VlWide<16>/*511:0*/ __Vtemp_h879ffeb8__1;
    VlWide<16>/*511:0*/ __Vtemp_h24d20986__0;
    VlWide<128>/*4095:0*/ __Vtemp_hea190ecd__0;
    // Body
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_data;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_data;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h82421030__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state 
        = vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state;
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_2 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)
            ? vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr
            : vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = 
        (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 
        = (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_6 
        = (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & (1U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           | (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)));
    Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc4004284__0 
        = ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp)));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0 
        = (1U & ((~ ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                     & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h82421030__0))) 
                 | (0U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp)) 
           & (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp)) 
           & (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__ar_comp)) 
              & (2U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))));
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0) 
           & ((2U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp)) 
                 & (3U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0))
               : ((IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc4004284__0) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0))));
    vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid 
        = ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
           & ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state))
               ? ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)) 
                  & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4))
               : ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)) 
                  & (IData)(Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc4004284__0))));
    vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0)
            ? 0U : vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_2);
    Soc__DOT__core__DOT__Icache__DOT___GEN_13 = ((IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim));
    Soc__DOT__core__DOT__Icache__DOT___GEN_15 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim)) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_13 = ((IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim));
    Soc__DOT__core__DOT__Dcache__DOT___GEN_15 = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim)) 
                                                 & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_14 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_13));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_13));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_15));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Icache__DOT___GEN_15));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21 
        = (1U & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                    | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__Icache_stall 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid)) 
           & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19)) 
                 & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                        & (IData)(vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid))) 
                    & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state)) 
                       | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)) 
                          & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0)))))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_14 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_13));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_13));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_15));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0) 
           & (IData)(Soc__DOT__core__DOT__Dcache__DOT___GEN_15));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21 
        = (1U & ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                    | (3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)))));
    vlSelf->Soc__DOT__core__DOT__fc__DOT__Dcache_stall 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid)) 
           & ((1U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19)) 
                 & ((~ ((7U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                        & (IData)(vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid))) 
                    & ((0U != (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state)) 
                       | ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h07501b90__0) 
                          & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0) 
                             | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3)))))))));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_21) {
        __Vtemp_h81294755__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h81294755__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h81294755__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h81294755__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h81294755__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h81294755__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h81294755__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h81294755__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h81294755__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h81294755__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h81294755__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h81294755__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h81294755__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h81294755__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h81294755__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h81294755__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_hfbea03ae__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hfbea03ae__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hfbea03ae__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hfbea03ae__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hfbea03ae__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hfbea03ae__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hfbea03ae__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hfbea03ae__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hfbea03ae__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hfbea03ae__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hfbea03ae__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hfbea03ae__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hfbea03ae__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hfbea03ae__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hfbea03ae__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hfbea03ae__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else {
        __Vtemp_h81294755__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_h81294755__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_h81294755__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_h81294755__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_h81294755__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_h81294755__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_h81294755__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_h81294755__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_h81294755__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_h81294755__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_h81294755__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_h81294755__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_h81294755__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_h81294755__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_h81294755__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_h81294755__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU];
        __Vtemp_hfbea03ae__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_hfbea03ae__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_hfbea03ae__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_hfbea03ae__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_hfbea03ae__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_hfbea03ae__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_hfbea03ae__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_hfbea03ae__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_hfbea03ae__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_hfbea03ae__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_hfbea03ae__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_hfbea03ae__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_hfbea03ae__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_hfbea03ae__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_hfbea03ae__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_hfbea03ae__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU];
    }
    __Vtemp_h81294755__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_h81294755__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_h81294755__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_h81294755__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_h81294755__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_h81294755__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_h81294755__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_h81294755__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_h81294755__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_h81294755__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_h81294755__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_h81294755__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_h81294755__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_h81294755__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_h81294755__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_h81294755__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_h81294755__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_h81294755__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_h81294755__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_h81294755__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_h81294755__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_h81294755__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_h81294755__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_h81294755__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_h81294755__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_h81294755__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_h81294755__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_h81294755__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_h81294755__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_h81294755__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_h81294755__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_h81294755__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) {
        __Vtemp_h81294755__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_h81294755__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_h81294755__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_h81294755__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_h81294755__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_h81294755__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_h81294755__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_h81294755__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_h81294755__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_h81294755__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_h81294755__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_h81294755__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_h81294755__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_h81294755__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_h81294755__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_h81294755__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0[0xfU];
    } else {
        __Vtemp_h81294755__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h81294755__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h81294755__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h81294755__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h81294755__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h81294755__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h81294755__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h81294755__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h81294755__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h81294755__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h81294755__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h81294755__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h81294755__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h81294755__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h81294755__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h81294755__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_h6246bcaf__0, __Vtemp_h81294755__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum) {
        __Vtemp_h4589acab__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        __Vtemp_h4589acab__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        __Vtemp_h4589acab__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        __Vtemp_h4589acab__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        __Vtemp_h4589acab__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        __Vtemp_h4589acab__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        __Vtemp_h4589acab__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        __Vtemp_h4589acab__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        __Vtemp_h4589acab__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        __Vtemp_h4589acab__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        __Vtemp_h4589acab__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        __Vtemp_h4589acab__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        __Vtemp_h4589acab__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        __Vtemp_h4589acab__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        __Vtemp_h4589acab__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        __Vtemp_h4589acab__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        __Vtemp_h24e1c136__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0U];
        __Vtemp_h24e1c136__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[1U];
        __Vtemp_h24e1c136__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[2U];
        __Vtemp_h24e1c136__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[3U];
        __Vtemp_h24e1c136__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[4U];
        __Vtemp_h24e1c136__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[5U];
        __Vtemp_h24e1c136__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[6U];
        __Vtemp_h24e1c136__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[7U];
        __Vtemp_h24e1c136__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[8U];
        __Vtemp_h24e1c136__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[9U];
        __Vtemp_h24e1c136__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        __Vtemp_h24e1c136__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        __Vtemp_h24e1c136__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        __Vtemp_h24e1c136__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        __Vtemp_h24e1c136__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        __Vtemp_h24e1c136__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        __Vtemp_h4589acab__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        __Vtemp_h4589acab__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        __Vtemp_h4589acab__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        __Vtemp_h4589acab__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        __Vtemp_h4589acab__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        __Vtemp_h4589acab__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        __Vtemp_h4589acab__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        __Vtemp_h4589acab__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        __Vtemp_h4589acab__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        __Vtemp_h4589acab__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        __Vtemp_h4589acab__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        __Vtemp_h4589acab__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        __Vtemp_h4589acab__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        __Vtemp_h4589acab__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        __Vtemp_h4589acab__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        __Vtemp_h4589acab__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        __Vtemp_h24e1c136__0[0U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0U];
        __Vtemp_h24e1c136__0[1U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[1U];
        __Vtemp_h24e1c136__0[2U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[2U];
        __Vtemp_h24e1c136__0[3U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[3U];
        __Vtemp_h24e1c136__0[4U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[4U];
        __Vtemp_h24e1c136__0[5U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[5U];
        __Vtemp_h24e1c136__0[6U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[6U];
        __Vtemp_h24e1c136__0[7U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[7U];
        __Vtemp_h24e1c136__0[8U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[8U];
        __Vtemp_h24e1c136__0[9U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[9U];
        __Vtemp_h24e1c136__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        __Vtemp_h24e1c136__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        __Vtemp_h24e1c136__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        __Vtemp_h24e1c136__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        __Vtemp_h24e1c136__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        __Vtemp_h24e1c136__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_h4b022c66__0, __Vtemp_h6246bcaf__0, __Vtemp_h4589acab__0);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h1b744e70__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h1b744e70__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & ((IData)((vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                      >> 3U)) << 1U)));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3) {
        __Vtemp_h9d703ac9__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h9d703ac9__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h9d703ac9__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h9d703ac9__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h9d703ac9__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h9d703ac9__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h9d703ac9__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h9d703ac9__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h9d703ac9__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h9d703ac9__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h9d703ac9__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h9d703ac9__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h9d703ac9__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h9d703ac9__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h9d703ac9__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h9d703ac9__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) {
        __Vtemp_h9d703ac9__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
                                       | __Vtemp_h1b744e70__0[0U]));
        __Vtemp_h9d703ac9__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
                                       | __Vtemp_h1b744e70__0[1U]));
        __Vtemp_h9d703ac9__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
                                       | __Vtemp_h1b744e70__0[2U]));
        __Vtemp_h9d703ac9__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
                                       | __Vtemp_h1b744e70__0[3U]));
        __Vtemp_h9d703ac9__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
                                       | __Vtemp_h1b744e70__0[4U]));
        __Vtemp_h9d703ac9__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
                                       | __Vtemp_h1b744e70__0[5U]));
        __Vtemp_h9d703ac9__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
                                       | __Vtemp_h1b744e70__0[6U]));
        __Vtemp_h9d703ac9__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
                                       | __Vtemp_h1b744e70__0[7U]));
        __Vtemp_h9d703ac9__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
                                       | __Vtemp_h1b744e70__0[8U]));
        __Vtemp_h9d703ac9__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
                                       | __Vtemp_h1b744e70__0[9U]));
        __Vtemp_h9d703ac9__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
                                         | __Vtemp_h1b744e70__0[0xaU]));
        __Vtemp_h9d703ac9__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
                                         | __Vtemp_h1b744e70__0[0xbU]));
        __Vtemp_h9d703ac9__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
                                         | __Vtemp_h1b744e70__0[0xcU]));
        __Vtemp_h9d703ac9__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
                                         | __Vtemp_h1b744e70__0[0xdU]));
        __Vtemp_h9d703ac9__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
                                         | __Vtemp_h1b744e70__0[0xeU]));
        __Vtemp_h9d703ac9__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
                                         | __Vtemp_h1b744e70__0[0xfU]));
    } else {
        __Vtemp_h9d703ac9__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
                                    | __Vtemp_h1b744e70__1[0U]);
        __Vtemp_h9d703ac9__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
                                    | __Vtemp_h1b744e70__1[1U]);
        __Vtemp_h9d703ac9__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
                                    | __Vtemp_h1b744e70__1[2U]);
        __Vtemp_h9d703ac9__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
                                    | __Vtemp_h1b744e70__1[3U]);
        __Vtemp_h9d703ac9__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
                                    | __Vtemp_h1b744e70__1[4U]);
        __Vtemp_h9d703ac9__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
                                    | __Vtemp_h1b744e70__1[5U]);
        __Vtemp_h9d703ac9__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
                                    | __Vtemp_h1b744e70__1[6U]);
        __Vtemp_h9d703ac9__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
                                    | __Vtemp_h1b744e70__1[7U]);
        __Vtemp_h9d703ac9__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
                                    | __Vtemp_h1b744e70__1[8U]);
        __Vtemp_h9d703ac9__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
                                    | __Vtemp_h1b744e70__1[9U]);
        __Vtemp_h9d703ac9__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
                                      | __Vtemp_h1b744e70__1[0xaU]);
        __Vtemp_h9d703ac9__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
                                      | __Vtemp_h1b744e70__1[0xbU]);
        __Vtemp_h9d703ac9__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
                                      | __Vtemp_h1b744e70__1[0xcU]);
        __Vtemp_h9d703ac9__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
                                      | __Vtemp_h1b744e70__1[0xdU]);
        __Vtemp_h9d703ac9__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
                                      | __Vtemp_h1b744e70__1[0xeU]);
        __Vtemp_h9d703ac9__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
                                      | __Vtemp_h1b744e70__1[0xfU]);
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_h885313f6__0, __Vtemp_h4b022c66__0, __Vtemp_h9d703ac9__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_23[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h885313f6__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h885313f6__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    __Vtemp_hfbea03ae__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_hfbea03ae__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_hfbea03ae__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_hfbea03ae__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_hfbea03ae__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_hfbea03ae__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_hfbea03ae__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_hfbea03ae__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_hfbea03ae__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_hfbea03ae__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_hfbea03ae__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_hfbea03ae__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_hfbea03ae__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_hfbea03ae__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_hfbea03ae__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_hfbea03ae__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_hfbea03ae__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_hfbea03ae__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_hfbea03ae__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_hfbea03ae__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_hfbea03ae__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_hfbea03ae__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_hfbea03ae__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_hfbea03ae__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_hfbea03ae__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_hfbea03ae__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_hfbea03ae__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_hfbea03ae__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_hfbea03ae__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_hfbea03ae__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_hfbea03ae__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_hfbea03ae__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid) {
        __Vtemp_hfbea03ae__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_hfbea03ae__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_hfbea03ae__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_hfbea03ae__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_hfbea03ae__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_hfbea03ae__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_hfbea03ae__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_hfbea03ae__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_hfbea03ae__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_hfbea03ae__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_hfbea03ae__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_hfbea03ae__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_hfbea03ae__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_hfbea03ae__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_hfbea03ae__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_hfbea03ae__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0[0xfU];
    } else {
        __Vtemp_hfbea03ae__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hfbea03ae__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hfbea03ae__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hfbea03ae__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hfbea03ae__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hfbea03ae__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hfbea03ae__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hfbea03ae__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hfbea03ae__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hfbea03ae__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hfbea03ae__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hfbea03ae__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hfbea03ae__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hfbea03ae__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hfbea03ae__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hfbea03ae__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_h22be902c__0, __Vtemp_hfbea03ae__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_h7bfb6d9a__0, __Vtemp_h22be902c__0, __Vtemp_h24e1c136__0);
    VL_SHIFTL_WWI(512,512,10, __Vtemp_he80100a8__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_he80100a8__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & ((IData)(
                                                       (vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T 
                                                        >> 3U)) 
                                               << 1U)))));
    if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3) {
        __Vtemp_h1e7d2d53__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h1e7d2d53__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h1e7d2d53__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h1e7d2d53__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h1e7d2d53__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h1e7d2d53__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h1e7d2d53__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h1e7d2d53__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h1e7d2d53__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h1e7d2d53__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h1e7d2d53__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h1e7d2d53__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h1e7d2d53__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h1e7d2d53__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h1e7d2d53__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h1e7d2d53__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0) {
        __Vtemp_h1e7d2d53__0[0U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U] 
                                    | __Vtemp_he80100a8__0[0U]);
        __Vtemp_h1e7d2d53__0[1U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U] 
                                    | __Vtemp_he80100a8__0[1U]);
        __Vtemp_h1e7d2d53__0[2U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U] 
                                    | __Vtemp_he80100a8__0[2U]);
        __Vtemp_h1e7d2d53__0[3U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U] 
                                    | __Vtemp_he80100a8__0[3U]);
        __Vtemp_h1e7d2d53__0[4U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U] 
                                    | __Vtemp_he80100a8__0[4U]);
        __Vtemp_h1e7d2d53__0[5U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U] 
                                    | __Vtemp_he80100a8__0[5U]);
        __Vtemp_h1e7d2d53__0[6U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U] 
                                    | __Vtemp_he80100a8__0[6U]);
        __Vtemp_h1e7d2d53__0[7U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U] 
                                    | __Vtemp_he80100a8__0[7U]);
        __Vtemp_h1e7d2d53__0[8U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U] 
                                    | __Vtemp_he80100a8__0[8U]);
        __Vtemp_h1e7d2d53__0[9U] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U] 
                                    | __Vtemp_he80100a8__0[9U]);
        __Vtemp_h1e7d2d53__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU] 
                                      | __Vtemp_he80100a8__0[0xaU]);
        __Vtemp_h1e7d2d53__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU] 
                                      | __Vtemp_he80100a8__0[0xbU]);
        __Vtemp_h1e7d2d53__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU] 
                                      | __Vtemp_he80100a8__0[0xcU]);
        __Vtemp_h1e7d2d53__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU] 
                                      | __Vtemp_he80100a8__0[0xdU]);
        __Vtemp_h1e7d2d53__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU] 
                                      | __Vtemp_he80100a8__0[0xeU]);
        __Vtemp_h1e7d2d53__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU] 
                                      | __Vtemp_he80100a8__0[0xfU]);
    } else {
        __Vtemp_h1e7d2d53__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0U]) 
                                       | __Vtemp_he80100a8__1[0U]));
        __Vtemp_h1e7d2d53__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[1U]) 
                                       | __Vtemp_he80100a8__1[1U]));
        __Vtemp_h1e7d2d53__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[2U]) 
                                       | __Vtemp_he80100a8__1[2U]));
        __Vtemp_h1e7d2d53__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[3U]) 
                                       | __Vtemp_he80100a8__1[3U]));
        __Vtemp_h1e7d2d53__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[4U]) 
                                       | __Vtemp_he80100a8__1[4U]));
        __Vtemp_h1e7d2d53__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[5U]) 
                                       | __Vtemp_he80100a8__1[5U]));
        __Vtemp_h1e7d2d53__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[6U]) 
                                       | __Vtemp_he80100a8__1[6U]));
        __Vtemp_h1e7d2d53__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[7U]) 
                                       | __Vtemp_he80100a8__1[7U]));
        __Vtemp_h1e7d2d53__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[8U]) 
                                       | __Vtemp_he80100a8__1[8U]));
        __Vtemp_h1e7d2d53__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[9U]) 
                                       | __Vtemp_he80100a8__1[9U]));
        __Vtemp_h1e7d2d53__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xaU]) 
                                         | __Vtemp_he80100a8__1[0xaU]));
        __Vtemp_h1e7d2d53__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xbU]) 
                                         | __Vtemp_he80100a8__1[0xbU]));
        __Vtemp_h1e7d2d53__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xcU]) 
                                         | __Vtemp_he80100a8__1[0xcU]));
        __Vtemp_h1e7d2d53__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xdU]) 
                                         | __Vtemp_he80100a8__1[0xdU]));
        __Vtemp_h1e7d2d53__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xeU]) 
                                         | __Vtemp_he80100a8__1[0xeU]));
        __Vtemp_h1e7d2d53__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace[0xfU]) 
                                         | __Vtemp_he80100a8__1[0xfU]));
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_hc7e733c4__0, __Vtemp_h7bfb6d9a__0, __Vtemp_h1e7d2d53__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_25[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hc7e733c4__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hc7e733c4__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state) 
                           << 9U))));
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h214d2be6__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__Icache_stall) 
           | (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__Dcache_stall));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_flush 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__Icache_stall)) 
              & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__Dcache_stall)) 
                 & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                    | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0)) 
                       & ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
                          | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                             | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag))))))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_stall 
        = ((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
           & (IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h214d2be6__0));
    Soc__DOT__core__DOT__fc__DOT____VdfgTmp_he3b10ad1__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16) 
           | (IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h214d2be6__0));
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_fdio_pc_T_2 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_flush) 
           & (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_he3b10ad1__0) 
           | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3) 
              | ((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0) 
                 | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
                    & (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)))));
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall 
        = ((IData)(Soc__DOT__core__DOT__fc__DOT____VdfgTmp_he3b10ad1__0) 
           | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_21_0)));
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
        = ((IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall)
            ? vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc
            : ((IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_fdio_pc_T_2)
                ? vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc
                : vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h90dffb35__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                             >> 2U)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0 
        = ((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
            [(0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                        >> 2U))] == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                     >> 0xbU)) & __Vtemp_h90dffb35__0[0U]);
    VL_SHIFTR_WWI(512,512,10, __Vtemp_hc4bbf11d__0, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) 
           | ((vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory
               [(0x1ffU & ((IData)(1U) + (0x1feU & 
                                          (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                           >> 2U))))] 
               == (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                   >> 0xbU)) & __Vtemp_hc4bbf11d__0[0U]));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h46ce278a__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h07501b90__0) 
           & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0)) 
              & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3)));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3 
        = (1U & ((~ (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started)) 
                 | (~ (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h300e9d2f__0 
        = ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h46ce278a__0) 
           & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_21) {
        __Vtemp_hb7a5a3f7__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hb7a5a3f7__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hb7a5a3f7__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hb7a5a3f7__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hb7a5a3f7__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hb7a5a3f7__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hb7a5a3f7__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hb7a5a3f7__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hb7a5a3f7__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hb7a5a3f7__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hb7a5a3f7__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hb7a5a3f7__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hb7a5a3f7__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hb7a5a3f7__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hb7a5a3f7__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hb7a5a3f7__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_hf255980f__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hf255980f__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hf255980f__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hf255980f__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hf255980f__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hf255980f__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hf255980f__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hf255980f__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hf255980f__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hf255980f__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hf255980f__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hf255980f__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hf255980f__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hf255980f__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hf255980f__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hf255980f__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else {
        __Vtemp_hb7a5a3f7__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_hb7a5a3f7__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_hb7a5a3f7__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_hb7a5a3f7__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_hb7a5a3f7__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_hb7a5a3f7__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_hb7a5a3f7__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_hb7a5a3f7__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_hb7a5a3f7__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_hb7a5a3f7__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_hb7a5a3f7__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_hb7a5a3f7__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_hb7a5a3f7__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_hb7a5a3f7__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_hb7a5a3f7__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_hb7a5a3f7__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU];
        __Vtemp_hf255980f__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_hf255980f__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_hf255980f__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_hf255980f__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_hf255980f__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_hf255980f__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_hf255980f__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_hf255980f__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_hf255980f__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_hf255980f__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_hf255980f__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_hf255980f__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_hf255980f__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_hf255980f__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_hf255980f__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_hf255980f__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU];
    }
    __Vtemp_hb7a5a3f7__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_hb7a5a3f7__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_hb7a5a3f7__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_hb7a5a3f7__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_hb7a5a3f7__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_hb7a5a3f7__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_hb7a5a3f7__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_hb7a5a3f7__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_hb7a5a3f7__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_hb7a5a3f7__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_hb7a5a3f7__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_hb7a5a3f7__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_hb7a5a3f7__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_hb7a5a3f7__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_hb7a5a3f7__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_hb7a5a3f7__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_hb7a5a3f7__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_hb7a5a3f7__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_hb7a5a3f7__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_hb7a5a3f7__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_hb7a5a3f7__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_hb7a5a3f7__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_hb7a5a3f7__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_hb7a5a3f7__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_hb7a5a3f7__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_hb7a5a3f7__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_hb7a5a3f7__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_hb7a5a3f7__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_hb7a5a3f7__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_hb7a5a3f7__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_hb7a5a3f7__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_hb7a5a3f7__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) {
        __Vtemp_hb7a5a3f7__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0U];
        __Vtemp_hb7a5a3f7__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[1U];
        __Vtemp_hb7a5a3f7__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[2U];
        __Vtemp_hb7a5a3f7__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[3U];
        __Vtemp_hb7a5a3f7__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[4U];
        __Vtemp_hb7a5a3f7__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[5U];
        __Vtemp_hb7a5a3f7__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[6U];
        __Vtemp_hb7a5a3f7__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[7U];
        __Vtemp_hb7a5a3f7__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[8U];
        __Vtemp_hb7a5a3f7__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[9U];
        __Vtemp_hb7a5a3f7__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xaU];
        __Vtemp_hb7a5a3f7__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xbU];
        __Vtemp_hb7a5a3f7__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xcU];
        __Vtemp_hb7a5a3f7__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xdU];
        __Vtemp_hb7a5a3f7__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xeU];
        __Vtemp_hb7a5a3f7__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0[0xfU];
    } else {
        __Vtemp_hb7a5a3f7__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hb7a5a3f7__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hb7a5a3f7__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hb7a5a3f7__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hb7a5a3f7__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hb7a5a3f7__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hb7a5a3f7__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hb7a5a3f7__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hb7a5a3f7__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hb7a5a3f7__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hb7a5a3f7__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hb7a5a3f7__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hb7a5a3f7__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hb7a5a3f7__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hb7a5a3f7__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hb7a5a3f7__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_h1017de5e__0, __Vtemp_hb7a5a3f7__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum) {
        __Vtemp_hb1565afd__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0U];
        __Vtemp_hb1565afd__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[1U];
        __Vtemp_hb1565afd__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[2U];
        __Vtemp_hb1565afd__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[3U];
        __Vtemp_hb1565afd__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[4U];
        __Vtemp_hb1565afd__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[5U];
        __Vtemp_hb1565afd__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[6U];
        __Vtemp_hb1565afd__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[7U];
        __Vtemp_hb1565afd__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[8U];
        __Vtemp_hb1565afd__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[9U];
        __Vtemp_hb1565afd__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xaU];
        __Vtemp_hb1565afd__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xbU];
        __Vtemp_hb1565afd__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xcU];
        __Vtemp_hb1565afd__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xdU];
        __Vtemp_hb1565afd__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xeU];
        __Vtemp_hb1565afd__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0[0xfU];
        __Vtemp_h74456a53__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0U];
        __Vtemp_h74456a53__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[1U];
        __Vtemp_h74456a53__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[2U];
        __Vtemp_h74456a53__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[3U];
        __Vtemp_h74456a53__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[4U];
        __Vtemp_h74456a53__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[5U];
        __Vtemp_h74456a53__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[6U];
        __Vtemp_h74456a53__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[7U];
        __Vtemp_h74456a53__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[8U];
        __Vtemp_h74456a53__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[9U];
        __Vtemp_h74456a53__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xaU];
        __Vtemp_h74456a53__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xbU];
        __Vtemp_h74456a53__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xcU];
        __Vtemp_h74456a53__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xdU];
        __Vtemp_h74456a53__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xeU];
        __Vtemp_h74456a53__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0[0xfU];
    } else {
        __Vtemp_hb1565afd__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0U];
        __Vtemp_hb1565afd__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[1U];
        __Vtemp_hb1565afd__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[2U];
        __Vtemp_hb1565afd__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[3U];
        __Vtemp_hb1565afd__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[4U];
        __Vtemp_hb1565afd__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[5U];
        __Vtemp_hb1565afd__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[6U];
        __Vtemp_hb1565afd__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[7U];
        __Vtemp_hb1565afd__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[8U];
        __Vtemp_hb1565afd__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[9U];
        __Vtemp_hb1565afd__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xaU];
        __Vtemp_hb1565afd__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xbU];
        __Vtemp_hb1565afd__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xcU];
        __Vtemp_hb1565afd__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xdU];
        __Vtemp_hb1565afd__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xeU];
        __Vtemp_hb1565afd__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0[0xfU];
        __Vtemp_h74456a53__0[0U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0U];
        __Vtemp_h74456a53__0[1U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[1U];
        __Vtemp_h74456a53__0[2U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[2U];
        __Vtemp_h74456a53__0[3U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[3U];
        __Vtemp_h74456a53__0[4U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[4U];
        __Vtemp_h74456a53__0[5U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[5U];
        __Vtemp_h74456a53__0[6U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[6U];
        __Vtemp_h74456a53__0[7U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[7U];
        __Vtemp_h74456a53__0[8U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[8U];
        __Vtemp_h74456a53__0[9U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[9U];
        __Vtemp_h74456a53__0[0xaU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xaU];
        __Vtemp_h74456a53__0[0xbU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xbU];
        __Vtemp_h74456a53__0[0xcU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xcU];
        __Vtemp_h74456a53__0[0xdU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xdU];
        __Vtemp_h74456a53__0[0xeU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xeU];
        __Vtemp_h74456a53__0[0xfU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0[0xfU];
    }
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_hce7a8524__0, __Vtemp_h1017de5e__0, __Vtemp_hb1565afd__0);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h3b94b080__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                             >> 2U)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h3b94b080__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x1feU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                             >> 2U)));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3) {
        __Vtemp_hbc09f34c__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hbc09f34c__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hbc09f34c__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hbc09f34c__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hbc09f34c__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hbc09f34c__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hbc09f34c__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hbc09f34c__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hbc09f34c__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hbc09f34c__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hbc09f34c__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hbc09f34c__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hbc09f34c__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hbc09f34c__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hbc09f34c__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hbc09f34c__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) {
        __Vtemp_hbc09f34c__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
                                       | __Vtemp_h3b94b080__0[0U]));
        __Vtemp_hbc09f34c__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
                                       | __Vtemp_h3b94b080__0[1U]));
        __Vtemp_hbc09f34c__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
                                       | __Vtemp_h3b94b080__0[2U]));
        __Vtemp_hbc09f34c__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
                                       | __Vtemp_h3b94b080__0[3U]));
        __Vtemp_hbc09f34c__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
                                       | __Vtemp_h3b94b080__0[4U]));
        __Vtemp_hbc09f34c__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
                                       | __Vtemp_h3b94b080__0[5U]));
        __Vtemp_hbc09f34c__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
                                       | __Vtemp_h3b94b080__0[6U]));
        __Vtemp_hbc09f34c__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
                                       | __Vtemp_h3b94b080__0[7U]));
        __Vtemp_hbc09f34c__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
                                       | __Vtemp_h3b94b080__0[8U]));
        __Vtemp_hbc09f34c__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
                                       | __Vtemp_h3b94b080__0[9U]));
        __Vtemp_hbc09f34c__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
                                         | __Vtemp_h3b94b080__0[0xaU]));
        __Vtemp_hbc09f34c__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
                                         | __Vtemp_h3b94b080__0[0xbU]));
        __Vtemp_hbc09f34c__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
                                         | __Vtemp_h3b94b080__0[0xcU]));
        __Vtemp_hbc09f34c__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
                                         | __Vtemp_h3b94b080__0[0xdU]));
        __Vtemp_hbc09f34c__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
                                         | __Vtemp_h3b94b080__0[0xeU]));
        __Vtemp_hbc09f34c__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
                                         | __Vtemp_h3b94b080__0[0xfU]));
    } else {
        __Vtemp_hbc09f34c__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
                                    | __Vtemp_h3b94b080__1[0U]);
        __Vtemp_hbc09f34c__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
                                    | __Vtemp_h3b94b080__1[1U]);
        __Vtemp_hbc09f34c__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
                                    | __Vtemp_h3b94b080__1[2U]);
        __Vtemp_hbc09f34c__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
                                    | __Vtemp_h3b94b080__1[3U]);
        __Vtemp_hbc09f34c__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
                                    | __Vtemp_h3b94b080__1[4U]);
        __Vtemp_hbc09f34c__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
                                    | __Vtemp_h3b94b080__1[5U]);
        __Vtemp_hbc09f34c__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
                                    | __Vtemp_h3b94b080__1[6U]);
        __Vtemp_hbc09f34c__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
                                    | __Vtemp_h3b94b080__1[7U]);
        __Vtemp_hbc09f34c__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
                                    | __Vtemp_h3b94b080__1[8U]);
        __Vtemp_hbc09f34c__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
                                    | __Vtemp_h3b94b080__1[9U]);
        __Vtemp_hbc09f34c__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
                                      | __Vtemp_h3b94b080__1[0xaU]);
        __Vtemp_hbc09f34c__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
                                      | __Vtemp_h3b94b080__1[0xbU]);
        __Vtemp_hbc09f34c__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
                                      | __Vtemp_h3b94b080__1[0xcU]);
        __Vtemp_hbc09f34c__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
                                      | __Vtemp_h3b94b080__1[0xdU]);
        __Vtemp_hbc09f34c__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
                                      | __Vtemp_h3b94b080__1[0xeU]);
        __Vtemp_hbc09f34c__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
                                      | __Vtemp_h3b94b080__1[0xfU]);
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_h805074aa__0, __Vtemp_hce7a8524__0, __Vtemp_hbc09f34c__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_23[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_h805074aa__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_h805074aa__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    __Vtemp_hf255980f__0[0x10U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0U];
    __Vtemp_hf255980f__0[0x11U] = VSoc__ConstPool__CONST_hd6b7ba52_0[1U];
    __Vtemp_hf255980f__0[0x12U] = VSoc__ConstPool__CONST_hd6b7ba52_0[2U];
    __Vtemp_hf255980f__0[0x13U] = VSoc__ConstPool__CONST_hd6b7ba52_0[3U];
    __Vtemp_hf255980f__0[0x14U] = VSoc__ConstPool__CONST_hd6b7ba52_0[4U];
    __Vtemp_hf255980f__0[0x15U] = VSoc__ConstPool__CONST_hd6b7ba52_0[5U];
    __Vtemp_hf255980f__0[0x16U] = VSoc__ConstPool__CONST_hd6b7ba52_0[6U];
    __Vtemp_hf255980f__0[0x17U] = VSoc__ConstPool__CONST_hd6b7ba52_0[7U];
    __Vtemp_hf255980f__0[0x18U] = VSoc__ConstPool__CONST_hd6b7ba52_0[8U];
    __Vtemp_hf255980f__0[0x19U] = VSoc__ConstPool__CONST_hd6b7ba52_0[9U];
    __Vtemp_hf255980f__0[0x1aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xaU];
    __Vtemp_hf255980f__0[0x1bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xbU];
    __Vtemp_hf255980f__0[0x1cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xcU];
    __Vtemp_hf255980f__0[0x1dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xdU];
    __Vtemp_hf255980f__0[0x1eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xeU];
    __Vtemp_hf255980f__0[0x1fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0xfU];
    __Vtemp_hf255980f__0[0x20U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x10U];
    __Vtemp_hf255980f__0[0x21U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x11U];
    __Vtemp_hf255980f__0[0x22U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x12U];
    __Vtemp_hf255980f__0[0x23U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x13U];
    __Vtemp_hf255980f__0[0x24U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x14U];
    __Vtemp_hf255980f__0[0x25U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x15U];
    __Vtemp_hf255980f__0[0x26U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x16U];
    __Vtemp_hf255980f__0[0x27U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x17U];
    __Vtemp_hf255980f__0[0x28U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x18U];
    __Vtemp_hf255980f__0[0x29U] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x19U];
    __Vtemp_hf255980f__0[0x2aU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    __Vtemp_hf255980f__0[0x2bU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    __Vtemp_hf255980f__0[0x2cU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    __Vtemp_hf255980f__0[0x2dU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    __Vtemp_hf255980f__0[0x2eU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    __Vtemp_hf255980f__0[0x2fU] = VSoc__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid) {
        __Vtemp_hf255980f__0[0x30U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0U];
        __Vtemp_hf255980f__0[0x31U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[1U];
        __Vtemp_hf255980f__0[0x32U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[2U];
        __Vtemp_hf255980f__0[0x33U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[3U];
        __Vtemp_hf255980f__0[0x34U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[4U];
        __Vtemp_hf255980f__0[0x35U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[5U];
        __Vtemp_hf255980f__0[0x36U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[6U];
        __Vtemp_hf255980f__0[0x37U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[7U];
        __Vtemp_hf255980f__0[0x38U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[8U];
        __Vtemp_hf255980f__0[0x39U] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[9U];
        __Vtemp_hf255980f__0[0x3aU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xaU];
        __Vtemp_hf255980f__0[0x3bU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xbU];
        __Vtemp_hf255980f__0[0x3cU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xcU];
        __Vtemp_hf255980f__0[0x3dU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xdU];
        __Vtemp_hf255980f__0[0x3eU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xeU];
        __Vtemp_hf255980f__0[0x3fU] = vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0[0xfU];
    } else {
        __Vtemp_hf255980f__0[0x30U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_hf255980f__0[0x31U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_hf255980f__0[0x32U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_hf255980f__0[0x33U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_hf255980f__0[0x34U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_hf255980f__0[0x35U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_hf255980f__0[0x36U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_hf255980f__0[0x37U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_hf255980f__0[0x38U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_hf255980f__0[0x39U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_hf255980f__0[0x3aU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_hf255980f__0[0x3bU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_hf255980f__0[0x3cU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_hf255980f__0[0x3dU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_hf255980f__0[0x3eU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_hf255980f__0[0x3fU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_CONCAT_WWW(3072,2048,1024, __Vtemp_hc85cfd1a__0, __Vtemp_hf255980f__0, VSoc__ConstPool__CONST_hd6b7ba52_0);
    VL_CONCAT_WWW(3584,3072,512, __Vtemp_hc22bf567__0, __Vtemp_hc85cfd1a__0, __Vtemp_h74456a53__0);
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h879ffeb8__0, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    VL_SHIFTL_WWI(512,512,10, __Vtemp_h879ffeb8__1, VSoc__ConstPool__CONST_h1c449781_0, 
                  (0x3ffU & ((IData)(1U) + (0x1feU 
                                            & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                               >> 2U)))));
    if (vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3) {
        __Vtemp_h24d20986__0[0U] = VSoc__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h24d20986__0[1U] = VSoc__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h24d20986__0[2U] = VSoc__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h24d20986__0[3U] = VSoc__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h24d20986__0[4U] = VSoc__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h24d20986__0[5U] = VSoc__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h24d20986__0[6U] = VSoc__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h24d20986__0[7U] = VSoc__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h24d20986__0[8U] = VSoc__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h24d20986__0[9U] = VSoc__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h24d20986__0[0xaU] = VSoc__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h24d20986__0[0xbU] = VSoc__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h24d20986__0[0xcU] = VSoc__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h24d20986__0[0xdU] = VSoc__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h24d20986__0[0xeU] = VSoc__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h24d20986__0[0xfU] = VSoc__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0) {
        __Vtemp_h24d20986__0[0U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U] 
                                    | __Vtemp_h879ffeb8__0[0U]);
        __Vtemp_h24d20986__0[1U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U] 
                                    | __Vtemp_h879ffeb8__0[1U]);
        __Vtemp_h24d20986__0[2U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U] 
                                    | __Vtemp_h879ffeb8__0[2U]);
        __Vtemp_h24d20986__0[3U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U] 
                                    | __Vtemp_h879ffeb8__0[3U]);
        __Vtemp_h24d20986__0[4U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U] 
                                    | __Vtemp_h879ffeb8__0[4U]);
        __Vtemp_h24d20986__0[5U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U] 
                                    | __Vtemp_h879ffeb8__0[5U]);
        __Vtemp_h24d20986__0[6U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U] 
                                    | __Vtemp_h879ffeb8__0[6U]);
        __Vtemp_h24d20986__0[7U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U] 
                                    | __Vtemp_h879ffeb8__0[7U]);
        __Vtemp_h24d20986__0[8U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U] 
                                    | __Vtemp_h879ffeb8__0[8U]);
        __Vtemp_h24d20986__0[9U] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U] 
                                    | __Vtemp_h879ffeb8__0[9U]);
        __Vtemp_h24d20986__0[0xaU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU] 
                                      | __Vtemp_h879ffeb8__0[0xaU]);
        __Vtemp_h24d20986__0[0xbU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU] 
                                      | __Vtemp_h879ffeb8__0[0xbU]);
        __Vtemp_h24d20986__0[0xcU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU] 
                                      | __Vtemp_h879ffeb8__0[0xcU]);
        __Vtemp_h24d20986__0[0xdU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU] 
                                      | __Vtemp_h879ffeb8__0[0xdU]);
        __Vtemp_h24d20986__0[0xeU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU] 
                                      | __Vtemp_h879ffeb8__0[0xeU]);
        __Vtemp_h24d20986__0[0xfU] = (vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU] 
                                      | __Vtemp_h879ffeb8__0[0xfU]);
    } else {
        __Vtemp_h24d20986__0[0U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0U]) 
                                       | __Vtemp_h879ffeb8__1[0U]));
        __Vtemp_h24d20986__0[1U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[1U]) 
                                       | __Vtemp_h879ffeb8__1[1U]));
        __Vtemp_h24d20986__0[2U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[2U]) 
                                       | __Vtemp_h879ffeb8__1[2U]));
        __Vtemp_h24d20986__0[3U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[3U]) 
                                       | __Vtemp_h879ffeb8__1[3U]));
        __Vtemp_h24d20986__0[4U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[4U]) 
                                       | __Vtemp_h879ffeb8__1[4U]));
        __Vtemp_h24d20986__0[5U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[5U]) 
                                       | __Vtemp_h879ffeb8__1[5U]));
        __Vtemp_h24d20986__0[6U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[6U]) 
                                       | __Vtemp_h879ffeb8__1[6U]));
        __Vtemp_h24d20986__0[7U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[7U]) 
                                       | __Vtemp_h879ffeb8__1[7U]));
        __Vtemp_h24d20986__0[8U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[8U]) 
                                       | __Vtemp_h879ffeb8__1[8U]));
        __Vtemp_h24d20986__0[9U] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[9U]) 
                                       | __Vtemp_h879ffeb8__1[9U]));
        __Vtemp_h24d20986__0[0xaU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xaU]) 
                                         | __Vtemp_h879ffeb8__1[0xaU]));
        __Vtemp_h24d20986__0[0xbU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xbU]) 
                                         | __Vtemp_h879ffeb8__1[0xbU]));
        __Vtemp_h24d20986__0[0xcU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xcU]) 
                                         | __Vtemp_h879ffeb8__1[0xcU]));
        __Vtemp_h24d20986__0[0xdU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xdU]) 
                                         | __Vtemp_h879ffeb8__1[0xdU]));
        __Vtemp_h24d20986__0[0xeU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xeU]) 
                                         | __Vtemp_h879ffeb8__1[0xeU]));
        __Vtemp_h24d20986__0[0xfU] = (~ ((~ vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace[0xfU]) 
                                         | __Vtemp_h879ffeb8__1[0xfU]));
    }
    VL_CONCAT_WWW(4096,3584,512, __Vtemp_hea190ecd__0, __Vtemp_hc22bf567__0, __Vtemp_h24d20986__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(1U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[(0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                             << 4U))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(2U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(1U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(3U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(2U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(4U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(3U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[4U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(5U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(4U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[5U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(6U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(5U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[6U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(7U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(6U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[7U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(8U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(7U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[8U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(9U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(8U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[9U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(0xaU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(9U) + (0x70U 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[0xaU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(0xbU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(0xaU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[0xbU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(0xcU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(0xbU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[0xcU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(0xdU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(0xcU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[0xdU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(0xeU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(0xdU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[0xeU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(0xeU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_25[0xfU] 
        = (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                             << 9U))) ? 0U : (__Vtemp_hea190ecd__0[
                                              ((IData)(0x10U) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                     << 4U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                                      << 9U))))) 
           | (__Vtemp_hea190ecd__0[((IData)(0xfU) + 
                                    (0x70U & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                                              << 4U)))] 
              >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__state) 
                           << 9U))));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h1528adf9__0;
    VlWide<8>/*255:0*/ __Vtemp_h8be1a9ec__0;
    // Body
    __Vtemp_h1528adf9__0[0U] = 0U;
    __Vtemp_h1528adf9__0[1U] = 0U;
    __Vtemp_h1528adf9__0[2U] = 0U;
    __Vtemp_h1528adf9__0[3U] = 0U;
    __Vtemp_h1528adf9__0[4U] = 0U;
    __Vtemp_h1528adf9__0[5U] = 0U;
    __Vtemp_h1528adf9__0[6U] = (IData)(((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0) 
                                               | ((~ (IData)(
                                                             (3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))) 
                                                  | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp)) 
                                                     | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)))))
                                         ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata));
    __Vtemp_h1528adf9__0[7U] = (IData)((((1U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0) 
                                                | ((~ (IData)(
                                                              (3U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)))) 
                                                   | ((~ (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp)) 
                                                      | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)))))
                                          ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data 
        = (((QData)((IData)(__Vtemp_h1528adf9__0[(((IData)(0x3fU) 
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
                                                                   __Vtemp_h1528adf9__0[
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
              | ((QData)((IData)(__Vtemp_h1528adf9__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    __Vtemp_h8be1a9ec__0[0U] = 0U;
    __Vtemp_h8be1a9ec__0[1U] = 0U;
    __Vtemp_h8be1a9ec__0[2U] = 0U;
    __Vtemp_h8be1a9ec__0[3U] = 0U;
    __Vtemp_h8be1a9ec__0[4U] = 0U;
    __Vtemp_h8be1a9ec__0[5U] = 0U;
    __Vtemp_h8be1a9ec__0[6U] = (IData)(((1U & ((~ (
                                                   (3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp) 
                                                      & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)))) 
                                               | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0)))
                                         ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata));
    __Vtemp_h8be1a9ec__0[7U] = (IData)((((1U & ((~ 
                                                 ((3U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state)) 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__r_comp) 
                                                     & (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h02c05ceb__0)))) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0)))
                                          ? 0ULL : vlSelf->Soc__DOT__sram__DOT__rdata) 
                                        >> 0x20U));
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
        = (((QData)((IData)(__Vtemp_h8be1a9ec__0[(((IData)(0x3fU) 
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
                                                                   __Vtemp_h8be1a9ec__0[
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
              | ((QData)((IData)(__Vtemp_h8be1a9ec__0[
                                 (6U & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                        << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                              << 6U)))));
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
            ? ((0xffffffffffffff00ULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data) 
               | (QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))))
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
                ? ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))))
                : ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
                    ? (((QData)((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data)))
                    : ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask))
                        ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_bits_data
                        : 0ULL))));
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data 
        = ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
            ? ((0xffffffffffffff00ULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data) 
               | (QData)((IData)((0xffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))))
            : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                ? ((0xffffffffffff0000ULL & vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data) 
                   | (QData)((IData)((0xffffU & (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))))
                : ((0xfU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                    ? (((QData)((IData)((vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__data)))
                    : ((0xffU == (IData)(vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask))
                        ? vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data
                        : 0ULL))));
}

void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf);

void VSoc___024root___eval_nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSoc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSoc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSoc___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VSoc___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
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
                VL_FATAL_MT("vsrc/Soc.v", 3008, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("vsrc/Soc.v", 3008, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/Soc.v", 3008, "", "NBA region did not converge.");
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
