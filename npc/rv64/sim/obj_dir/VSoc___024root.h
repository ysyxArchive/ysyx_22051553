// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSoc.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"

class VSoc__Syms;
class VSoc___024unit;


class VSoc___024root final : public VerilatedModule {
  public:
    // CELLS
    VSoc___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ Soc__DOT__core__DOT___fc_io_fcfe_jump_flag;
    CData/*4:0*/ Soc__DOT__core__DOT__dereg_rd;
    CData/*4:0*/ Soc__DOT__core__DOT__dereg_alu_op;
    CData/*1:0*/ Soc__DOT__core__DOT__dereg_wb_type;
    CData/*2:0*/ Soc__DOT__core__DOT__dereg_sd_type;
    CData/*1:0*/ Soc__DOT__core__DOT__emreg_wb_type;
    CData/*4:0*/ Soc__DOT__core__DOT__emreg_rd;
    CData/*1:0*/ Soc__DOT__core__DOT__mwreg_wb_type;
    CData/*4:0*/ Soc__DOT__core__DOT__mwreg_rd;
    CData/*0:0*/ Soc__DOT__core__DOT__interact__DOT__ebreak_flag;
    CData/*2:0*/ Soc__DOT__core__DOT__interact__DOT__over_count;
    CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT__started;
    CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type;
    CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0;
    CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN;
    IData/*31:0*/ Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(io_next_pc,63,0);
    QData/*63:0*/ Soc__DOT___tm_inst;
    QData/*63:0*/ Soc__DOT___tm_rdata;
    QData/*63:0*/ Soc__DOT___core_io_waddr;
    QData/*63:0*/ Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
    QData/*63:0*/ Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata;
    QData/*63:0*/ Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata;
    QData/*63:0*/ Soc__DOT__core__DOT___fetch_io_fdio_pc;
    QData/*63:0*/ Soc__DOT__core__DOT__fdreg_pc;
    QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_a;
    QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_b;
    QData/*63:0*/ Soc__DOT__core__DOT__dereg_reg2_rdata;
    QData/*63:0*/ Soc__DOT__core__DOT__emreg_alu_res;
    QData/*63:0*/ Soc__DOT__core__DOT__mwreg_alu_res;
    QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT__pc;
    QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
    QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm;
    QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT___alu_io_result;
    QData/*63:0*/ Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data;
    VlUnpacked<QData/*63:0*/, 32> Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory;
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
