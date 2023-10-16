// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc__Syms.h"
#include "VSoc___024root.h"

void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__0(VSoc_Cache* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__1(VSoc_Cache* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__2(VSoc_Cache* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__0(VSoc_Cache* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__1(VSoc_Cache* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__2(VSoc_Cache* vlSelf);
void VSoc___024root___nba_sequent__TOP__2(VSoc___024root* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__3(VSoc_Cache* vlSelf);
void VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3(VSoc_Cache* vlSelf);
void VSoc___024root___nba_sequent__TOP__3(VSoc___024root* vlSelf);
void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf);
void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__0(VSoc_Cache* vlSelf);
void VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Dcache__0(VSoc_Cache* vlSelf);
void VSoc___024root___nba_sequent__TOP__4(VSoc___024root* vlSelf);

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
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__0((&vlSymsp->TOP__Soc__DOT__core__DOT__Dcache));
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__1((&vlSymsp->TOP__Soc__DOT__core__DOT__Dcache));
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__2((&vlSymsp->TOP__Soc__DOT__core__DOT__Dcache));
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__0((&vlSymsp->TOP__Soc__DOT__core__DOT__Icache));
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__1((&vlSymsp->TOP__Soc__DOT__core__DOT__Icache));
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__2((&vlSymsp->TOP__Soc__DOT__core__DOT__Icache));
        VSoc___024root___nba_sequent__TOP__2(vlSelf);
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Dcache__3((&vlSymsp->TOP__Soc__DOT__core__DOT__Dcache));
        VSoc_Cache___nba_sequent__TOP__Soc__DOT__core__DOT__Icache__3((&vlSymsp->TOP__Soc__DOT__core__DOT__Icache));
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSoc___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VSoc___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Icache__0((&vlSymsp->TOP__Soc__DOT__core__DOT__Icache));
        VSoc_Cache___nba_comb__TOP__Soc__DOT__core__DOT__Dcache__0((&vlSymsp->TOP__Soc__DOT__core__DOT__Dcache));
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSoc___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}
