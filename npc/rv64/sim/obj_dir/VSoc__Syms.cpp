// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSoc__Syms.h"
#include "VSoc.h"
#include "VSoc___024root.h"
#include "VSoc___024unit.h"
#include "VSoc_Cache.h"

// FUNCTIONS
VSoc__Syms::~VSoc__Syms()
{
}

VSoc__Syms::VSoc__Syms(VerilatedContext* contextp, const char* namep, VSoc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Soc__DOT__core__DOT__Dcache{this, Verilated::catName(namep, "Soc.core.Dcache")}
    , TOP__Soc__DOT__core__DOT__Icache{this, Verilated::catName(namep, "Soc.core.Icache")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__Soc__DOT__core__DOT__Dcache = &TOP__Soc__DOT__core__DOT__Dcache;
    TOP.__PVT__Soc__DOT__core__DOT__Icache = &TOP__Soc__DOT__core__DOT__Icache;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Soc__DOT__core__DOT__Dcache.__Vconfigure(true);
    TOP__Soc__DOT__core__DOT__Icache.__Vconfigure(false);
    TOP____024unit.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
