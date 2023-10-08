// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc_Cache.h"
#include "VSoc__Syms.h"

void VSoc_Cache___ctor_var_reset(VSoc_Cache* vlSelf);

VSoc_Cache::VSoc_Cache(VSoc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSoc_Cache___ctor_var_reset(this);
}

void VSoc_Cache::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSoc_Cache::~VSoc_Cache() {
}
