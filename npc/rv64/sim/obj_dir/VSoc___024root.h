// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSoc.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"

class VSoc__Syms;
class VSoc___024unit;
class VSoc_Cache;


class VSoc___024root final : public VerilatedModule {
  public:
    // CELLS
    VSoc___024unit* __PVT____024unit;
    VSoc_Cache* __PVT__Soc__DOT__core__DOT__Icache;
    VSoc_Cache* __PVT__Soc__DOT__core__DOT__Dcache;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        CData/*0:0*/ Soc__DOT____Vcellinp__sram__ARESETn;
        VL_IN8(reset,0,0);
        CData/*0:0*/ Soc__DOT___sram_S_AXI_BVALID;
        CData/*7:0*/ Soc__DOT___core_io_AXI_Interface_w_bits_strb;
        CData/*7:0*/ Soc__DOT___core_io_AXI_Interface_ar_bits_len;
        CData/*0:0*/ Soc__DOT__core__DOT___ioformem_io_axi_req_valid;
        CData/*0:0*/ Soc__DOT__core__DOT___ioformem_io_fc_valid;
        CData/*0:0*/ Soc__DOT__core__DOT___arbitor_io_master1_resp_valid;
        CData/*0:0*/ Soc__DOT__core__DOT___arbitor_io_master2_resp_valid;
        CData/*0:0*/ Soc__DOT__core__DOT___trap_io_csrtr_csr_wen;
        CData/*0:0*/ Soc__DOT__core__DOT___fc_io_fcde_flush;
        CData/*0:0*/ Soc__DOT__core__DOT___wb_io_csrs_csr_wen;
        CData/*0:0*/ Soc__DOT__core__DOT___excute_io_fcex_jump_flag;
        CData/*7:0*/ Soc__DOT__core__DOT___excute_io_wmask;
        CData/*0:0*/ Soc__DOT__core__DOT___excute_io_fwex_reg_we;
        CData/*7:0*/ Soc__DOT__core__DOT___excute_io_clex_wmask;
        CData/*4:0*/ Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr;
        CData/*4:0*/ Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr;
        CData/*4:0*/ Soc__DOT__core__DOT___decode_io_deio_reg_waddr;
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
        CData/*0:0*/ Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid;
        CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT__started;
        CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3;
        CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type;
        CData/*1:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type;
        CData/*2:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type;
        CData/*2:0*/ Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type;
        CData/*4:0*/ Soc__DOT__core__DOT__decode__DOT__lu_rd;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT___load_use_T_16;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0;
        CData/*6:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0;
    };
    struct {
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0;
        CData/*0:0*/ Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state;
        CData/*5:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter;
        CData/*5:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0;
        CData/*2:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem;
        CData/*1:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state;
        CData/*6:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10;
        CData/*1:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7;
        CData/*0:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13;
        CData/*7:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1;
        CData/*1:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2;
        CData/*1:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11;
        CData/*1:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2;
        CData/*1:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11;
        CData/*0:0*/ Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer;
        CData/*0:0*/ Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer;
        CData/*0:0*/ Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer;
        CData/*0:0*/ Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7;
        CData/*0:0*/ Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12;
        CData/*0:0*/ Soc__DOT__core__DOT__clint__DOT__valid_buf;
        CData/*0:0*/ Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_1;
        CData/*0:0*/ Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_3;
        CData/*0:0*/ Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5;
        CData/*0:0*/ Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_10;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard;
    };
    struct {
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0;
        CData/*0:0*/ Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT__IO_stall;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT__SFBundle_0;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT__SFBundle_1;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hdaebf54e__0;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0;
        CData/*0:0*/ Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h5fc28a32__0;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5;
        CData/*0:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6;
        CData/*2:0*/ Soc__DOT__core__DOT__trap__DOT__state;
        CData/*0:0*/ Soc__DOT__core__DOT__trap__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__trap__DOT___T_7;
        CData/*0:0*/ Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1;
        CData/*0:0*/ Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2;
        IData/*23:0*/ Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3;
        CData/*3:0*/ Soc__DOT__core__DOT__arbitor__DOT__master_choose;
        CData/*3:0*/ Soc__DOT__core__DOT__arbitor__DOT__choose_buffer;
        CData/*3:0*/ Soc__DOT__core__DOT__arbitor__DOT__burst_len;
        CData/*1:0*/ Soc__DOT__core__DOT__arbitor__DOT__state;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT__aw_comp;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT__w_comp;
        CData/*3:0*/ Soc__DOT__core__DOT__arbitor__DOT__w_count;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___T;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___T_2;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_1;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_2;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_3;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_4;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___T_4;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_5;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_6;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___T_8;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_7;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_8;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_9;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_12;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT___GEN_13;
        CData/*1:0*/ Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_18;
        CData/*1:0*/ Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_19;
        SData/*15:0*/ Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_20;
        CData/*7:0*/ Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_21;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_h4ab110e3__0;
        CData/*0:0*/ Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hc0e633fc__0;
        CData/*1:0*/ Soc__DOT__core__DOT__ioformem__DOT__state;
        CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid;
        CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT___T_1;
        CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT___T;
        CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT___T_4;
        CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT___GEN;
        CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___T_5;
        CData/*0:0*/ Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0;
        CData/*0:0*/ Soc__DOT__core__DOT__interact__DOT__ebreak_flag;
        CData/*5:0*/ Soc__DOT__core__DOT__interact__DOT__over_count;
    };
    struct {
        CData/*3:0*/ Soc__DOT__sram__DOT__w_count;
        CData/*7:0*/ Soc__DOT__sram__DOT__r_count;
        CData/*1:0*/ Soc__DOT__sram__DOT__bresp;
        CData/*0:0*/ Soc__DOT__sram__DOT__bvalid;
        CData/*0:0*/ Soc__DOT__sram__DOT__rlast;
        CData/*1:0*/ Soc__DOT__sram__DOT__rresp;
        CData/*0:0*/ Soc__DOT__sram__DOT__rvalid;
        CData/*0:0*/ Soc__DOT__sram__DOT__need_resp;
        CData/*0:0*/ Soc__DOT__sram__DOT__need_read;
        CData/*7:0*/ Soc__DOT__sram__DOT__r_burst;
        CData/*0:0*/ __VdfgTmp_hae56d818__0;
        CData/*0:0*/ __VdfgTmp_h3db68a5f__0;
        CData/*5:0*/ __VdfgTmp_hd31110f2__0;
        CData/*3:0*/ __VdfgTmp_hd0a2fa80__0;
        CData/*0:0*/ __VdfgTmp_h9d5684c6__0;
        CData/*3:0*/ __Vdly__Soc__DOT__core__DOT__arbitor__DOT__choose_buffer;
        CData/*7:0*/ __Vdly__Soc__DOT__sram__DOT__r_burst;
        CData/*7:0*/ __Vdly__Soc__DOT__sram__DOT__r_count;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __Vtrigrprev__TOP__Soc__DOT____Vcellinp__sram__ARESETn;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ Soc__DOT__core__DOT___trap_io_csrtr_rd;
        SData/*11:0*/ Soc__DOT__core__DOT___decode_io_fwde_csr_raddr;
        SData/*11:0*/ Soc__DOT__core__DOT__dereg_csr_waddr;
        SData/*11:0*/ Soc__DOT__core__DOT__emreg_csr_waddr;
        SData/*11:0*/ Soc__DOT__core__DOT__mwreg_csr_waddr;
        SData/*9:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN;
        SData/*15:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0;
        SData/*11:0*/ Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T;
        IData/*31:0*/ Soc__DOT___core_io_AXI_Interface_aw_bits_addr;
        IData/*31:0*/ Soc__DOT___core_io_AXI_Interface_ar_bits_addr;
        IData/*31:0*/ Soc__DOT__core__DOT___fc_io_fcfe_jump_pc;
        IData/*31:0*/ Soc__DOT__core__DOT___fetch_io_fdio_pc;
        IData/*31:0*/ Soc__DOT__core__DOT__fdreg_pc;
        IData/*31:0*/ Soc__DOT__core__DOT__fetch__DOT__pc;
        IData/*31:0*/ Soc__DOT__core__DOT__fetch__DOT__old_pc;
        IData/*31:0*/ Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7;
        IData/*31:0*/ Soc__DOT__core__DOT__decode__DOT__inst;
        IData/*31:0*/ Soc__DOT__core__DOT__decode__DOT____VdfgTmp_hd891a444__0;
        IData/*16:0*/ Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78;
        VlWide<4>/*126:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87;
        IData/*31:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92;
        VlWide<3>/*66:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg;
        VlWide<5>/*131:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg;
        VlWide<5>/*131:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg;
        VlWide<5>/*132:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1;
        VlWide<5>/*132:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2;
        VlWide<34>/*1063:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3;
        VlWide<17>/*535:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4;
        VlWide<33>/*1055:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5;
        VlWide<4>/*127:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder;
        VlWide<3>/*64:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65;
        VlWide<3>/*65:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66;
        IData/*31:0*/ Soc__DOT__core__DOT__clint__DOT__MSIP;
        IData/*31:0*/ Soc__DOT__core__DOT__trap__DOT__pc;
        IData/*31:0*/ Soc__DOT__core__DOT__arbitor__DOT__addr;
        IData/*31:0*/ Soc__DOT__sram__DOT__awaddr_buffer;
        IData/*31:0*/ Soc__DOT__sram__DOT__awaddr;
        IData/*31:0*/ Soc__DOT__sram__DOT__araddr;
    };
    struct {
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ Soc__DOT___core_io_AXI_Interface_w_bits_data;
        QData/*63:0*/ Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data;
        QData/*63:0*/ Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data;
        QData/*63:0*/ Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT___mem_io_mwio_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT___excute_io_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT___excute_io_fwex_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_a;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_op_b;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_branch_addr;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_reg2_rdata;
        QData/*63:0*/ Soc__DOT__core__DOT__dereg_csr_t;
        QData/*63:0*/ Soc__DOT__core__DOT__emreg_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__emreg_csr_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__mwreg_reg_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT__mwreg_csr_wdata;
        QData/*63:0*/ Soc__DOT__core__DOT___DI_io_mem_addr_T;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T;
        QData/*63:0*/ Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT___alu_io_result;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu_buffer;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient;
        QData/*32:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33;
        QData/*33:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34;
        VlWide<8>/*255:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2;
        QData/*63:0*/ Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3;
        QData/*63:0*/ Soc__DOT__core__DOT__mem__DOT__clmem_buffer;
        QData/*63:0*/ Soc__DOT__core__DOT__mem__DOT__rdata_buffer;
        QData/*63:0*/ Soc__DOT__core__DOT__mem__DOT__rdataio_buffer;
        QData/*63:0*/ Soc__DOT__core__DOT__mem__DOT__get_value;
        VlWide<16>/*511:0*/ Soc__DOT__core__DOT__mem__DOT___GEN_1;
        QData/*63:0*/ Soc__DOT__core__DOT__clint__DOT__MTIMECMP;
        QData/*63:0*/ Soc__DOT__core__DOT__clint__DOT__MTIME;
        QData/*63:0*/ Soc__DOT__core__DOT__clint__DOT__rvalue_buf;
        QData/*63:0*/ Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MTVEC;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MCAUSE;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MEPC;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MIE;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MIP;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MSTATUS;
        QData/*63:0*/ Soc__DOT__core__DOT__csrs__DOT__MSCRATCH;
        QData/*63:0*/ Soc__DOT__core__DOT__trap__DOT__cause;
        QData/*63:0*/ Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits;
    };
    struct {
        QData/*63:0*/ Soc__DOT__sram__DOT__rdata;
        VlUnpacked<QData/*63:0*/, 32> Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
