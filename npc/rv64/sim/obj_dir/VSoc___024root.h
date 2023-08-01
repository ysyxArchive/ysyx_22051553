// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSoc.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"

class VSoc__Syms;

class VSoc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT__started;
    CData/*0:0*/ Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_en_pipe_0;
    CData/*7:0*/ Soc__DOT__ram__DOT__SyncMem_io_dataOut_bits_MPORT_addr_pipe_0;
    CData/*0:0*/ Soc__DOT__ram__DOT__inst_valid;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Soc__DOT__ram__DOT__initvar;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT__pc;
    QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT___next_pc_T_1;
    VlUnpacked<QData/*63:0*/, 256> Soc__DOT__ram__DOT__SyncMem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSoc__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSoc___024root(VSoc__Syms* symsp, const char* v__name);
    ~VSoc___024root();
    VL_UNCOPYABLE(VSoc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
