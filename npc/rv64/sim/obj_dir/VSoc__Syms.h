// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOC__SYMS_H_
#define VERILATED_VSOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSoc.h"

// INCLUDE MODULE CLASSES
#include "VSoc___024root.h"
#include "VSoc___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VSoc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSoc* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSoc___024root                 TOP;
    VSoc___024unit                 TOP____024unit;

    // CONSTRUCTORS
    VSoc__Syms(VerilatedContext* contextp, const char* namep, VSoc* modelp);
    ~VSoc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
