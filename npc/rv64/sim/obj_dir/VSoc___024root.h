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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ Soc__DOT__core__DOT___fc_io_fcfe_jump_flag;
        CData/*0:0*/ Soc__DOT__core__DOT___fc_io_fcfe_stall;
        CData/*0:0*/ Soc__DOT__core__DOT___fc_io_fcde_flush;
        CData/*0:0*/ Soc__DOT__core__DOT___mem_io_fwmem_reg_we;
        CData/*0:0*/ Soc__DOT__core__DOT___excute_io_jump_flag;
        CData/*5:0*/ Soc__DOT__core__DOT___decode_io_deio_alu_op;
        CData/*0:0*/ Soc__DOT__core__DOT___decode_io_jump_flag;
        CData/*0:0*/ Soc__DOT__core__DOT___decode_io_load_use;
        CData/*4:0*/ Soc__DOT__core__DOT__dereg_rd;
        CData/*0:0*/ Soc__DOT__core__DOT__dereg_branch_type;
        CData/*5:0*/ Soc__DOT__core__DOT__dereg_alu_op;
        CData/*5:0*/ Soc__DOT__core__DOT__dereg_shamt;
        CData/*1:0*/ Soc__DOT__core__DOT__dereg_wb_type;
        CData/*2:0*/ Soc__DOT__core__DOT__dereg_sd_type;
        CData/*2:0*/ Soc__DOT__core__DOT__dereg_ld_type;
        CData/*1:0*/ Soc__DOT__core__DOT__emreg_wb_type;
        CData/*4:0*/ Soc__DOT__core__DOT__emreg_rd;
        CData/*2:0*/ Soc__DOT__core__DOT__emreg_ld_type;
        CData/*2:0*/ Soc__DOT__core__DOT__emreg_ld_addr_lowbit;
        CData/*1:0*/ Soc__DOT__core__DOT__mwreg_wb_type;
        CData/*4:0*/ Soc__DOT__core__DOT__mwreg_rd;
        CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT__started;
        CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type;
        CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type;
        CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type;
        CData/*2:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type;
        CData/*4:0*/ Soc__DOT__core__DOT__decode__DOT__lu_rd;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h238a4b90__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h5984ecb1__0;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__interact__DOT__ebreak_flag;
        CData/*2:0*/ Soc__DOT__core__DOT__interact__DOT__over_count;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN;
        IData/*31:0*/ Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits;
        IData/*16:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0;
        VlWide<4>/*126:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80;
        VlWide<4>/*127:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5;
        VlWide<4>/*127:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6;
        VlWide<3>/*64:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_96;
        VlWide<4>/*126:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_99;
        VlWide<4>/*126:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_168;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_next_pc,63,0);
        QData/*63:0*/ Soc__DOT___tm_inst;
    };
    struct {
        QData/*63:0*/ Soc__DOT___tm_rdata;
        QData/*63:0*/ Soc__DOT___core_io_waddr;
        QData/*63:0*/ Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
        QData/*63:0*/ Soc__DOT__core__DOT___mem_io_mwio_wb_data;
        QData/*63:0*/ Soc__DOT__core__DOT___fetch_io_fdio_pc;
        QData/*63:0*/ Soc__DOT__core__DOT__fdreg_pc;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_a;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_b;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_branch_addr;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_reg2_rdata;
        QData/*63:0*/ Soc__DOT__core__DOT__emreg_alu_res;
        QData/*63:0*/ Soc__DOT__core__DOT__mwreg_wb_data;
        QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT__pc;
        QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT__old_pc;
        QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT___alu_io_result;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_83;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_119;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_127;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_124;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_150;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_10;
        VlWide<16>/*511:0*/ Soc__DOT__core__DOT__mem__DOT___GEN_1;
        QData/*63:0*/ Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data;
        QData/*63:0*/ Soc__DOT__tm__DOT__old_inst;
        QData/*63:0*/ __VdfgTmp_hfec920a8__0;
        VlUnpacked<QData/*63:0*/, 32> Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
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
