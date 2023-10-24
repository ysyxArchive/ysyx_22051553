// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSoc.h for the primary calling header

#ifndef VERILATED_VSOC___024UNIT_H_
#define VERILATED_VSOC___024UNIT_H_  // guard

#include "verilated.h"

class VSoc__Syms;

class VSoc___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VSoc__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSoc___024unit(VSoc__Syms* symsp, const char* v__name);
    ~VSoc___024unit();
    VL_UNCOPYABLE(VSoc___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
