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
    CData/*4:0*/ Soc__DOT__core__DOT__dereg_rd;
    CData/*4:0*/ Soc__DOT__core__DOT__dereg_alu_op;
    CData/*1:0*/ Soc__DOT__core__DOT__dereg_wb_type;
    CData/*1:0*/ Soc__DOT__core__DOT__emreg_wb_type;
    CData/*4:0*/ Soc__DOT__core__DOT__emreg_rd;
    CData/*1:0*/ Soc__DOT__core__DOT__mwreg_wb_type;
    CData/*4:0*/ Soc__DOT__core__DOT__mwreg_rd;
    CData/*0:0*/ Soc__DOT__core__DOT__interact__DOT__ebreak_flag;
    CData/*2:0*/ Soc__DOT__core__DOT__interact__DOT__over_count;
    CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT__started;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___controlsig_T_9;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h166f560e__0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0;
    CData/*7:0*/ Soc__DOT__ram__DOT___SyncMem_ext_R0_data;
    CData/*7:0*/ Soc__DOT__ram__DOT___SyncMem_ext_R1_data;
    CData/*0:0*/ Soc__DOT__ram__DOT__inst_valid;
    CData/*0:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN;
    CData/*7:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_0;
    CData/*0:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_1;
    CData/*7:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_2;
    CData/*0:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_3;
    CData/*7:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_4;
    CData/*0:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_5;
    CData/*7:0*/ Soc__DOT__ram__DOT__SyncMem_ext__DOT___GEN_6;
    CData/*0:0*/ __VdfgTmp_h490969a2__0;
    CData/*7:0*/ __VdfgTmp_h483daa03__0;
    CData/*7:0*/ __VdfgTmp_hae2d2759__0;
    CData/*4:0*/ __VdfgTmp_h049a0a75__0;
    CData/*7:0*/ __VdfgTmp_h7cec4c01__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgTmp_h50f8190e__0;
    IData/*31:0*/ Soc__DOT___ram_io_dataOut_bits;
    IData/*31:0*/ Soc__DOT__core__DOT__decode__DOT___inst_T;
    IData/*23:0*/ __VdfgTmp_h7f65c8dc__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ Soc__DOT__core__DOT__fdreg_pc;
    QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_a;
    QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_b;
    QData/*63:0*/ Soc__DOT__core__DOT__emreg_alu_res;
    QData/*63:0*/ Soc__DOT__core__DOT__mwreg_alu_res;
    QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT__pc;
    QData/*63:0*/ Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data;
    VlUnpacked<QData/*63:0*/, 32> Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory;
    VlUnpacked<CData/*7:0*/, 256> Soc__DOT__ram__DOT__SyncMem_ext__DOT__Memory;
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
