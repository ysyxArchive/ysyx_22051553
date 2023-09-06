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
        CData/*0:0*/ Soc__DOT__core__DOT___trap_io_fctr_pop_NOP;
        CData/*0:0*/ Soc__DOT__core__DOT___trap_io_fctr_jump_flag;
        CData/*0:0*/ Soc__DOT__core__DOT___fc_io_fcfe_stall;
        CData/*0:0*/ Soc__DOT__core__DOT___fc_io_fcde_flush;
        CData/*0:0*/ Soc__DOT__core__DOT___excute_io_jump_flag;
        CData/*0:0*/ Soc__DOT__core__DOT___excute_io_fwex_reg_we;
        CData/*5:0*/ Soc__DOT__core__DOT___decode_io_deio_alu_op;
        CData/*0:0*/ Soc__DOT__core__DOT___decode_io_deio_csr_wen;
        CData/*0:0*/ Soc__DOT__core__DOT___decode_io_jump_flag;
        CData/*4:0*/ Soc__DOT__core__DOT__dereg_reg_waddr;
        CData/*0:0*/ Soc__DOT__core__DOT__dereg_branch_type;
        CData/*5:0*/ Soc__DOT__core__DOT__dereg_alu_op;
        CData/*5:0*/ Soc__DOT__core__DOT__dereg_shamt;
        CData/*1:0*/ Soc__DOT__core__DOT__dereg_wb_type;
        CData/*2:0*/ Soc__DOT__core__DOT__dereg_sd_type;
        CData/*2:0*/ Soc__DOT__core__DOT__dereg_ld_type;
        CData/*0:0*/ Soc__DOT__core__DOT__dereg_csr_wen;
        CData/*0:0*/ Soc__DOT__core__DOT__dereg_has_inst;
        CData/*4:0*/ Soc__DOT__core__DOT__emreg_reg_waddr;
        CData/*1:0*/ Soc__DOT__core__DOT__emreg_wb_type;
        CData/*2:0*/ Soc__DOT__core__DOT__emreg_ld_type;
        CData/*2:0*/ Soc__DOT__core__DOT__emreg_ld_addr_lowbit;
        CData/*0:0*/ Soc__DOT__core__DOT__emreg_csr_wen;
        CData/*0:0*/ Soc__DOT__core__DOT__emreg_has_inst;
        CData/*4:0*/ Soc__DOT__core__DOT__mwreg_reg_waddr;
        CData/*1:0*/ Soc__DOT__core__DOT__mwreg_wb_type;
        CData/*0:0*/ Soc__DOT__core__DOT__mwreg_csr_wen;
        CData/*0:0*/ Soc__DOT__core__DOT__mwreg_has_inst;
        CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT__started;
        CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2;
        CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type;
        CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type;
        CData/*2:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type;
        CData/*2:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type;
        CData/*4:0*/ Soc__DOT__core__DOT__decode__DOT__lu_rd;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_12;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_8;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_16;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_3;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h69b28aa1__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h83c98ea0__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hdd103720__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h32d1be8b__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3c60961a__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5;
        CData/*2:0*/ Soc__DOT__core__DOT__trap__DOT__state;
    };
    struct {
        CData/*0:0*/ Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_0;
        IData/*23:0*/ Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard;
        CData/*0:0*/ Soc__DOT__core__DOT__interact__DOT__ebreak_flag;
        CData/*2:0*/ Soc__DOT__core__DOT__interact__DOT__over_count;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ Soc__DOT__core__DOT__dereg_csr_waddr;
        SData/*11:0*/ Soc__DOT__core__DOT__emreg_csr_waddr;
        SData/*11:0*/ Soc__DOT__core__DOT__mwreg_csr_waddr;
        SData/*9:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN;
        SData/*15:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0;
        SData/*11:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T;
        IData/*31:0*/ Soc__DOT__core__DOT__decode__DOT__inst;
        IData/*16:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1;
        VlWide<4>/*126:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_80;
        VlWide<4>/*127:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5;
        VlWide<4>/*127:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_6;
        VlWide<3>/*64:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_68;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_85;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_89;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_98;
        VlWide<4>/*126:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_101;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_107;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_112;
        VlWide<4>/*126:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_177;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_next_pc,63,0);
        QData/*63:0*/ Soc__DOT___tm_inst;
        QData/*63:0*/ Soc__DOT___tm_rdata;
        QData/*63:0*/ Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
        QData/*63:0*/ Soc__DOT__core__DOT___mem_io_mwio_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT___excute_io_waddr;
        QData/*63:0*/ Soc__DOT__core__DOT___excute_io_fwex_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT___fetch_io_fdio_pc;
        QData/*63:0*/ Soc__DOT__core__DOT__fdreg_pc;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_a;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_b;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_branch_addr;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_reg2_rdata;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_csr_t;
        QData/*63:0*/ Soc__DOT__core__DOT__emreg_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__emreg_csr_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__mwreg_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__mwreg_csr_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT__pc;
        QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT__old_pc;
        QData/*63:0*/ Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT___alu_io_result;
    };
    struct {
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_41;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_44;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_123;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_131;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_128;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_157;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_12;
        VlWide<16>/*511:0*/ Soc__DOT__core__DOT__mem__DOT___GEN_1;
        QData/*63:0*/ Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MTVEC;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MCAUSE;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MEPC;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MIE;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MSTATUS;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MSCRATCH;
        QData/*63:0*/ Soc__DOT__tm__DOT__old_inst;
        QData/*63:0*/ __VdfgTmp_h6a80e86b__0;
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
