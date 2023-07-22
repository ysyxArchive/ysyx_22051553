// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"

class VCore__Syms;

class VCore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_ramio_dataOut_valid,0,0);
    VL_OUT8(io_ramio_pc_valid,0,0);
    CData/*4:0*/ Core__DOT__dereg_rd;
    CData/*4:0*/ Core__DOT__dereg_alu_op;
    CData/*1:0*/ Core__DOT__dereg_wb_type;
    CData/*1:0*/ Core__DOT__emreg_wb_type;
    CData/*4:0*/ Core__DOT__emreg_rd;
    CData/*1:0*/ Core__DOT__mwreg_wb_type;
    CData/*4:0*/ Core__DOT__mwreg_rd;
    CData/*0:0*/ Core__DOT__fetch__DOT__started;
    CData/*0:0*/ Core__DOT__decode__DOT___cu_io_opa_type;
    CData/*0:0*/ Core__DOT__decode__DOT__cu__DOT___controlsig_T_9;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_ramio_dataOut_bits,31,0);
    IData/*31:0*/ Core__DOT__decode__DOT___inst_T;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(io_ramio_pc_bits,63,0);
    QData/*63:0*/ Core__DOT__fdreg_pc;
    QData/*63:0*/ Core__DOT__dereg_op_a;
    QData/*63:0*/ Core__DOT__dereg_op_b;
    QData/*63:0*/ Core__DOT__emreg_alu_res;
    QData/*63:0*/ Core__DOT__mwreg_alu_res;
    QData/*63:0*/ Core__DOT__fetch__DOT__pc;
    QData/*63:0*/ Core__DOT__regfile__DOT___regs_ext_R0_data;
    VlUnpacked<QData/*63:0*/, 32> Core__DOT__regfile__DOT__regs_ext__DOT__Memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCore__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCore___024root(VCore__Syms* symsp, const char* v__name);
    ~VCore___024root();
    VL_UNCOPYABLE(VCore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
