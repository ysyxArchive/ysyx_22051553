// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


void VSoc___024root__trace_chg_sub_1(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 12088);
    VlWide<8>/*255:0*/ __Vtemp_h26f7ce52__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+0,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xbU))));
        bufp->chgBit(oldp+1,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xbU))));
        bufp->chgBit(oldp+2,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xcU))));
        bufp->chgBit(oldp+3,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xcU))));
        bufp->chgBit(oldp+4,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xdU))));
        bufp->chgBit(oldp+5,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xdU))));
        bufp->chgBit(oldp+6,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xeU))));
        bufp->chgBit(oldp+7,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xeU))));
        bufp->chgBit(oldp+8,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xfU))));
        bufp->chgBit(oldp+9,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                              & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                 >> 0xfU))));
        bufp->chgBit(oldp+10,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x10U))));
        bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x10U))));
        bufp->chgBit(oldp+12,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x11U))));
        bufp->chgBit(oldp+13,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x11U))));
        bufp->chgBit(oldp+14,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x12U))));
        bufp->chgBit(oldp+15,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x12U))));
        bufp->chgBit(oldp+16,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x13U))));
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x13U))));
        bufp->chgBit(oldp+18,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x14U))));
        bufp->chgBit(oldp+19,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x14U))));
        bufp->chgBit(oldp+20,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x15U))));
        bufp->chgBit(oldp+21,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x15U))));
        bufp->chgBit(oldp+22,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x16U))));
        bufp->chgBit(oldp+23,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x16U))));
        bufp->chgBit(oldp+24,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x17U))));
        bufp->chgBit(oldp+25,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x17U))));
        bufp->chgBit(oldp+26,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x18U))));
        bufp->chgBit(oldp+27,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x18U))));
        bufp->chgBit(oldp+28,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x19U))));
        bufp->chgBit(oldp+29,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x19U))));
        bufp->chgBit(oldp+30,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1aU))));
        bufp->chgBit(oldp+31,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1aU))));
        bufp->chgBit(oldp+32,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1bU))));
        bufp->chgBit(oldp+33,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1bU))));
        bufp->chgBit(oldp+34,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1cU))));
        bufp->chgBit(oldp+35,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1cU))));
        bufp->chgBit(oldp+36,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1dU))));
        bufp->chgBit(oldp+37,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1dU))));
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1eU))));
        bufp->chgBit(oldp+39,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1eU))));
        bufp->chgBit(oldp+40,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+41,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[0U] 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+42,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U])));
        bufp->chgBit(oldp+43,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U])));
        bufp->chgBit(oldp+44,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 1U))));
        bufp->chgBit(oldp+45,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 1U))));
        bufp->chgBit(oldp+46,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 2U))));
        bufp->chgBit(oldp+47,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 2U))));
        bufp->chgBit(oldp+48,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 3U))));
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 3U))));
        bufp->chgBit(oldp+50,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 4U))));
        bufp->chgBit(oldp+51,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 4U))));
        bufp->chgBit(oldp+52,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 5U))));
        bufp->chgBit(oldp+53,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 5U))));
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 6U))));
        bufp->chgBit(oldp+55,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 6U))));
        bufp->chgBit(oldp+56,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 7U))));
        bufp->chgBit(oldp+57,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 7U))));
        bufp->chgBit(oldp+58,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 8U))));
        bufp->chgBit(oldp+59,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 8U))));
        bufp->chgBit(oldp+60,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 9U))));
        bufp->chgBit(oldp+61,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 9U))));
        bufp->chgBit(oldp+62,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xaU))));
        bufp->chgBit(oldp+63,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xaU))));
        bufp->chgBit(oldp+64,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xbU))));
        bufp->chgBit(oldp+65,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xbU))));
        bufp->chgBit(oldp+66,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xcU))));
        bufp->chgBit(oldp+67,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xcU))));
        bufp->chgBit(oldp+68,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xdU))));
        bufp->chgBit(oldp+69,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xdU))));
        bufp->chgBit(oldp+70,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xeU))));
        bufp->chgBit(oldp+71,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xeU))));
        bufp->chgBit(oldp+72,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xfU))));
        bufp->chgBit(oldp+73,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0xfU))));
        bufp->chgBit(oldp+74,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x10U))));
        bufp->chgBit(oldp+75,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x10U))));
        bufp->chgBit(oldp+76,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x11U))));
        bufp->chgBit(oldp+77,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x11U))));
        bufp->chgBit(oldp+78,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x12U))));
        bufp->chgBit(oldp+79,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x12U))));
        bufp->chgBit(oldp+80,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x13U))));
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x13U))));
        bufp->chgBit(oldp+82,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x14U))));
        bufp->chgBit(oldp+83,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x14U))));
        bufp->chgBit(oldp+84,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x15U))));
        bufp->chgBit(oldp+85,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x15U))));
        bufp->chgBit(oldp+86,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x16U))));
        bufp->chgBit(oldp+87,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x16U))));
        bufp->chgBit(oldp+88,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x17U))));
        bufp->chgBit(oldp+89,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x17U))));
        bufp->chgBit(oldp+90,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x18U))));
        bufp->chgBit(oldp+91,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x18U))));
        bufp->chgBit(oldp+92,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x19U))));
        bufp->chgBit(oldp+93,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x19U))));
        bufp->chgBit(oldp+94,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x1aU))));
        bufp->chgBit(oldp+95,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x1aU))));
        bufp->chgBit(oldp+96,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x1bU))));
        bufp->chgBit(oldp+97,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x1bU))));
        bufp->chgBit(oldp+98,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x1cU))));
        bufp->chgBit(oldp+99,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                               & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                  >> 0x1cU))));
        bufp->chgBit(oldp+100,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                   >> 0x1dU))));
        bufp->chgBit(oldp+101,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                   >> 0x1dU))));
        bufp->chgBit(oldp+102,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                   >> 0x1eU))));
        bufp->chgBit(oldp+103,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                   >> 0x1eU))));
        bufp->chgBit(oldp+104,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+105,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[1U] 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+106,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U])));
        bufp->chgBit(oldp+107,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U])));
        bufp->chgBit(oldp+108,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 1U))));
        bufp->chgBit(oldp+109,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 1U))));
        bufp->chgBit(oldp+110,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+111,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 2U))));
        bufp->chgBit(oldp+112,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 3U))));
        bufp->chgBit(oldp+113,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 3U))));
        bufp->chgBit(oldp+114,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 4U))));
        bufp->chgBit(oldp+115,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 4U))));
        bufp->chgBit(oldp+116,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 5U))));
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 5U))));
        bufp->chgBit(oldp+118,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 6U))));
        bufp->chgBit(oldp+119,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 6U))));
        bufp->chgBit(oldp+120,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 7U))));
        bufp->chgBit(oldp+121,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 7U))));
        bufp->chgBit(oldp+122,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 8U))));
        bufp->chgBit(oldp+123,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 8U))));
        bufp->chgBit(oldp+124,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 9U))));
        bufp->chgBit(oldp+125,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 9U))));
        bufp->chgBit(oldp+126,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xaU))));
        bufp->chgBit(oldp+127,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xaU))));
        bufp->chgBit(oldp+128,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xbU))));
        bufp->chgBit(oldp+129,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xbU))));
        bufp->chgBit(oldp+130,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xcU))));
        bufp->chgBit(oldp+131,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xcU))));
        bufp->chgBit(oldp+132,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xdU))));
        bufp->chgBit(oldp+133,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xdU))));
        bufp->chgBit(oldp+134,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xeU))));
        bufp->chgBit(oldp+135,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xeU))));
        bufp->chgBit(oldp+136,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xfU))));
        bufp->chgBit(oldp+137,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wmask[2U] 
                                   >> 0xfU))));
        bufp->chgCData(oldp+138,(((0U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__victim))
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h192795fc__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h192795fc__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+139,(((1U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__victim))
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h83e68c2e__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h83e68c2e__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+140,(((2U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__victim))
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h816f05a9__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h816f05a9__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+141,(((3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__victim))
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h8165a582__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h8165a582__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+142,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h192795fc__0)
                                   : 0U)),2);
        bufp->chgCData(oldp+143,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h83e68c2e__0)
                                   : 0U)),2);
        bufp->chgCData(oldp+144,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h816f05a9__0)
                                   : 0U)),2);
        bufp->chgCData(oldp+145,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_h8165a582__0)
                                   : 0U)),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+146,(vlSelf->Soc__DOT__sram__DOT__rvalid));
        bufp->chgQData(oldp+147,(vlSelf->Soc__DOT__sram__DOT__rdata),64);
        bufp->chgBit(oldp+149,(vlSelf->Soc__DOT__sram__DOT__rlast));
        bufp->chgCData(oldp+150,(vlSelf->Soc__DOT__sram__DOT__rresp),2);
        bufp->chgCData(oldp+151,(vlSelf->Soc__DOT__sram__DOT__r_count),8);
        bufp->chgIData(oldp+152,(vlSelf->Soc__DOT__sram__DOT__araddr),32);
        bufp->chgBit(oldp+153,(vlSelf->Soc__DOT__sram__DOT__need_read));
        bufp->chgCData(oldp+154,(vlSelf->Soc__DOT__sram__DOT__r_burst),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgQData(oldp+155,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_data),64);
        bufp->chgCData(oldp+157,(vlSelf->Soc__DOT___core_io_AXI_Interface_w_bits_strb),8);
        bufp->chgIData(oldp+158,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),32);
        bufp->chgBit(oldp+159,(vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen));
        bufp->chgBit(oldp+160,(((IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1))));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_fccache_hit));
        bufp->chgBit(oldp+162,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0));
        bufp->chgBit(oldp+163,(vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1));
        bufp->chgBit(oldp+164,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT__ren));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.io_axi_req_bits_rw));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.io_axi_req_bits_rw));
        bufp->chgBit(oldp+167,(vlSelf->Soc__DOT__core__DOT___ioformem_io_fc_valid));
        bufp->chgBit(oldp+168,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_valid));
        bufp->chgQData(oldp+169,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data),64);
        bufp->chgBit(oldp+171,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_valid));
        bufp->chgQData(oldp+172,(vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data),64);
        bufp->chgCData(oldp+174,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose),4);
        bufp->chgBit(oldp+175,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
        bufp->chgBit(oldp+176,(vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall));
        bufp->chgBit(oldp+177,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN_4));
        bufp->chgBit(oldp+178,(vlSelf->Soc__DOT__core__DOT__ioformem__DOT___GEN));
        bufp->chgIData(oldp+179,(vlSelf->Soc__DOT__sram__DOT__awaddr),32);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit0));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit1));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit2));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit3));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__ren));
        bufp->chgCData(oldp+185,((7U & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                        >> 7U))),3);
        bufp->chgIData(oldp+186,((vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                  >> 0xaU)),22);
        bufp->chgCData(oldp+187,((0x1cU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                           >> 5U))),6);
        bufp->chgCData(oldp+188,((0x3fU & ((IData)(1U) 
                                           + (0x1cU 
                                              & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 5U))))),6);
        bufp->chgCData(oldp+189,((0x3fU & ((IData)(2U) 
                                           + (0x1cU 
                                              & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 5U))))),6);
        bufp->chgCData(oldp+190,((0x3fU & ((IData)(3U) 
                                           + (0x1cU 
                                              & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 5U))))),6);
        bufp->chgWData(oldp+191,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata),1024);
        bufp->chgCData(oldp+223,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__choose_dataway),5);
        bufp->chgCData(oldp+224,((0x1cU & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                           >> 5U))),5);
        bufp->chgCData(oldp+225,((0x1fU & ((IData)(1U) 
                                           + (0x1cU 
                                              & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 5U))))),5);
        bufp->chgCData(oldp+226,((0x1fU & ((IData)(2U) 
                                           + (0x1cU 
                                              & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 5U))))),5);
        bufp->chgCData(oldp+227,((0x1fU & ((IData)(3U) 
                                           + (0x1cU 
                                              & (vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc 
                                                 >> 5U))))),5);
        bufp->chgCData(oldp+228,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U])),8);
        bufp->chgCData(oldp+229,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+230,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+231,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+232,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U])),8);
        bufp->chgCData(oldp+233,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+234,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+235,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+236,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U])),8);
        bufp->chgCData(oldp+237,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+238,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+239,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x14U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+240,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U])),8);
        bufp->chgCData(oldp+241,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+242,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+243,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x15U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+244,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U])),8);
        bufp->chgCData(oldp+245,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+246,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+247,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x16U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+248,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U])),8);
        bufp->chgCData(oldp+249,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+250,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+251,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x17U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+252,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U])),8);
        bufp->chgCData(oldp+253,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+254,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+255,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x18U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+256,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U])),8);
        bufp->chgCData(oldp+257,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+258,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+259,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x19U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+260,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU])),8);
        bufp->chgCData(oldp+261,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+262,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+263,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+264,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU])),8);
        bufp->chgCData(oldp+265,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+266,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+267,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+268,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU])),8);
        bufp->chgCData(oldp+269,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+270,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+271,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+272,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU])),8);
        bufp->chgCData(oldp+273,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+274,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+275,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+276,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU])),8);
        bufp->chgCData(oldp+277,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+278,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+279,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+280,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU])),8);
        bufp->chgCData(oldp+281,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+282,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+283,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x1fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+284,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U])),8);
        bufp->chgCData(oldp+285,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+286,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+287,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+288,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U])),8);
        bufp->chgCData(oldp+289,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+290,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+291,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+292,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U])),8);
        bufp->chgCData(oldp+293,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+294,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+295,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+296,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U])),8);
        bufp->chgCData(oldp+297,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+298,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+299,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+300,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U])),8);
        bufp->chgCData(oldp+301,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+302,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+303,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+304,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U])),8);
        bufp->chgCData(oldp+305,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+306,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+307,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+308,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U])),8);
        bufp->chgCData(oldp+309,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+310,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+311,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+312,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U])),8);
        bufp->chgCData(oldp+313,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+314,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+315,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+316,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU])),8);
        bufp->chgCData(oldp+317,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+318,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+319,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+320,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU])),8);
        bufp->chgCData(oldp+321,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+322,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+323,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+324,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU])),8);
        bufp->chgCData(oldp+325,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+326,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+327,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+328,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU])),8);
        bufp->chgCData(oldp+329,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+330,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+331,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+332,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU])),8);
        bufp->chgCData(oldp+333,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+334,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+335,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+336,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU])),8);
        bufp->chgCData(oldp+337,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+338,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+339,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0xfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+340,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U])),8);
        bufp->chgCData(oldp+341,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+342,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+343,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x10U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+344,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U])),8);
        bufp->chgCData(oldp+345,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+346,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+347,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x11U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+348,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U])),8);
        bufp->chgCData(oldp+349,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+350,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+351,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x12U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+352,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U])),8);
        bufp->chgCData(oldp+353,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+354,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+355,((vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__wdata[0x13U] 
                                  >> 0x18U)),8);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN));
        bufp->chgIData(oldp+357,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___TagArray_ext_R0_data),22);
        bufp->chgIData(oldp+358,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___TagArray_ext_R1_data),22);
        bufp->chgBit(oldp+359,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0));
        bufp->chgCData(oldp+360,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit0)
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hbcb5153c__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hbcb5153c__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+361,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit1)
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hac5f0c6e__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hac5f0c6e__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+362,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit2)
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hae628669__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hae628669__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+363,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT__hit3)
                                   ? 0U : (((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0) 
                                            & (3U == (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hae672642__0)))
                                            ? 3U : 
                                           (3U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                                    ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hae672642__0)
                                                    : 0U)))))),2);
        bufp->chgCData(oldp+364,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hbcb5153c__0)
                                   : 0U)),2);
        bufp->chgCData(oldp+365,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hae672642__0)
                                   : 0U)),2);
        bufp->chgCData(oldp+366,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hac5f0c6e__0)
                                   : 0U)),2);
        bufp->chgCData(oldp+367,(((IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___GEN_0)
                                   ? (IData)(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__VdfgTmp_hae628669__0)
                                   : 0U)),2);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___replace_ext_R16_data),2);
        bufp->chgCData(oldp+369,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___replace_ext_R17_data),2);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___replace_ext_R18_data),2);
        bufp->chgCData(oldp+371,(vlSymsp->TOP__Soc__DOT__core__DOT__Icache.__PVT___replace_ext_R19_data),2);
        bufp->chgWData(oldp+372,(vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata),1024);
        bufp->chgCData(oldp+404,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U])),8);
        bufp->chgCData(oldp+405,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+406,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+407,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+408,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U])),8);
        bufp->chgCData(oldp+409,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+410,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+411,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+412,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U])),8);
        bufp->chgCData(oldp+413,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+414,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+415,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x14U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+416,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U])),8);
        bufp->chgCData(oldp+417,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+418,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+419,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x15U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+420,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U])),8);
        bufp->chgCData(oldp+421,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+422,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+423,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x16U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+424,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U])),8);
        bufp->chgCData(oldp+425,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+426,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+427,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x17U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+428,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U])),8);
        bufp->chgCData(oldp+429,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+430,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+431,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x18U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+432,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U])),8);
        bufp->chgCData(oldp+433,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+434,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+435,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x19U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+436,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU])),8);
        bufp->chgCData(oldp+437,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+438,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+439,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+440,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU])),8);
        bufp->chgCData(oldp+441,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+442,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+443,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+444,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU])),8);
        bufp->chgCData(oldp+445,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+446,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+447,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+448,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU])),8);
        bufp->chgCData(oldp+449,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+450,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+451,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+452,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU])),8);
        bufp->chgCData(oldp+453,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+454,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+455,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+456,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU])),8);
        bufp->chgCData(oldp+457,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+458,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+459,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x1fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+460,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U])),8);
        bufp->chgCData(oldp+461,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+462,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+463,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+464,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U])),8);
        bufp->chgCData(oldp+465,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+466,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+467,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+468,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U])),8);
        bufp->chgCData(oldp+469,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+470,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+471,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+472,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U])),8);
        bufp->chgCData(oldp+473,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+474,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+475,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+476,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U])),8);
        bufp->chgCData(oldp+477,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+478,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+479,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+480,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U])),8);
        bufp->chgCData(oldp+481,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+482,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+483,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+484,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U])),8);
        bufp->chgCData(oldp+485,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+486,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+487,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+488,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U])),8);
        bufp->chgCData(oldp+489,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+490,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+491,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+492,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU])),8);
        bufp->chgCData(oldp+493,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+494,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+495,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+496,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU])),8);
        bufp->chgCData(oldp+497,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+498,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+499,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+500,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU])),8);
        bufp->chgCData(oldp+501,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+502,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+503,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+504,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU])),8);
        bufp->chgCData(oldp+505,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+506,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+507,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+508,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU])),8);
        bufp->chgCData(oldp+509,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+510,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+511,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+512,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU])),8);
        bufp->chgCData(oldp+513,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+514,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+515,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0xfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+516,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U])),8);
        bufp->chgCData(oldp+517,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+518,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+519,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x10U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+520,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U])),8);
        bufp->chgCData(oldp+521,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+522,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+523,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x11U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+524,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U])),8);
        bufp->chgCData(oldp+525,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+526,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+527,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x12U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+528,((0xffU & vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U])),8);
        bufp->chgCData(oldp+529,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+530,((0xffU & (vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+531,((vlSymsp->TOP__Soc__DOT__core__DOT__Dcache.__PVT__wdata[0x13U] 
                                  >> 0x18U)),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+532,(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_7));
        bufp->chgIData(oldp+533,(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_addr),32);
        bufp->chgCData(oldp+534,(vlSelf->Soc__DOT___core_io_AXI_Interface_ar_bits_len),8);
    }
    bufp->chgBit(oldp+535,(vlSelf->clock));
    bufp->chgBit(oldp+536,(vlSelf->reset));
    __Vtemp_h26f7ce52__0[0U] = 0U;
    __Vtemp_h26f7ce52__0[1U] = 0U;
    __Vtemp_h26f7ce52__0[2U] = 0U;
    __Vtemp_h26f7ce52__0[3U] = 0U;
    __Vtemp_h26f7ce52__0[4U] = 0U;
    __Vtemp_h26f7ce52__0[5U] = 0U;
    __Vtemp_h26f7ce52__0[6U] = (IData)(((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                         ? 0ULL : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                        | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)))
                                                     ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                     : 0ULL)
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)
                                                     ? vlSelf->Soc__DOT__sram__DOT__rdata
                                                     : 0ULL))));
    __Vtemp_h26f7ce52__0[7U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_13)
                                          ? 0ULL : 
                                         ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_12)
                                           ? ((1U & 
                                               ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)))
                                               ? vlSelf->Soc__DOT__sram__DOT__rdata
                                               : 0ULL)
                                           : ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_9)
                                               ? vlSelf->Soc__DOT__sram__DOT__rdata
                                               : 0ULL))) 
                                        >> 0x20U));
    bufp->chgQData(oldp+537,((((QData)((IData)(__Vtemp_h26f7ce52__0[
                                               (((IData)(0x3fU) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 6U))) 
                                                >> 5U)])) 
                               << ((0U == (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                            << 6U)))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 6U))))) 
                              | (((0U == (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                   << 6U)))
                                   ? 0ULL : ((QData)((IData)(
                                                             __Vtemp_h26f7ce52__0[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                                   << 6U))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                     << 6U))))) 
                                 | ((QData)((IData)(
                                                    __Vtemp_h26f7ce52__0[
                                                    (6U 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                        << 1U))])) 
                                    >> (0x1fU & ((IData)(vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state) 
                                                 << 6U)))))),64);
    bufp->chgBit(oldp+539,(vlSelf->Soc__DOT____Vcellinp__sram__ARESETn));
}

void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_cleanup\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
