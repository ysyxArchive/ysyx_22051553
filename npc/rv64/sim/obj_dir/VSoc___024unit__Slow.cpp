// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc__Syms.h"
#include "VSoc___024unit.h"

void VSoc___024unit___ctor_var_reset(VSoc___024unit* vlSelf);

VSoc___024unit::VSoc___024unit(VSoc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSoc___024unit___ctor_var_reset(this);
}

void VSoc___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSoc___024unit::~VSoc___024unit() {
}
