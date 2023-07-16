// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRam.h for the primary calling header

#ifndef VERILATED_VRAM___024ROOT_H_
#define VERILATED_VRAM___024ROOT_H_  // guard

#include "verilated.h"

class VRam__Syms;

class VRam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(io_inst_ready,0,0);
    VL_IN8(io_pc_valid,0,0);
    VL_OUT8(io_inst_valid,0,0);
    VL_OUT8(io_pc_ready,0,0);
    CData/*0:0*/ Ram__DOT__inst_valid;
    CData/*0:0*/ Ram__DOT__SyncMem_ext__DOT___GEN;
    CData/*7:0*/ Ram__DOT__SyncMem_ext__DOT___GEN_0;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_pc_bits,31,0);
    VL_OUT(io_inst_bits,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> Ram__DOT__SyncMem_ext__DOT__Memory;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRam___024root(VRam__Syms* symsp, const char* v__name);
    ~VRam___024root();
    VL_UNCOPYABLE(VRam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
