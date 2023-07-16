// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRam.h for the primary calling header

#include "verilated.h"

#include "VRam__Syms.h"
#include "VRam___024root.h"

void VRam___024root___ctor_var_reset(VRam___024root* vlSelf);

VRam___024root::VRam___024root(VRam__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRam___024root___ctor_var_reset(this);
}

void VRam___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRam___024root::~VRam___024root() {
}
