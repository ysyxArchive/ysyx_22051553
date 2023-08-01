// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"

#include "VSoc__Syms.h"
#include "VSoc___024root.h"

void VSoc___024root___ctor_var_reset(VSoc___024root* vlSelf);

VSoc___024root::VSoc___024root(VSoc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSoc___024root___ctor_var_reset(this);
}

void VSoc___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSoc___024root::~VSoc___024root() {
}
