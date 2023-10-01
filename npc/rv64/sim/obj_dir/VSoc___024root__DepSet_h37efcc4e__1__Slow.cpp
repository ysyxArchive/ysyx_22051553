// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc___024root.h"

VL_ATTR_COLD void VSoc___024root___stl_sequent__TOP__0(VSoc___024root* vlSelf);

VL_ATTR_COLD void VSoc___024root___eval_stl(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSoc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge Soc.__Vcellinp__sram__ARESETn or posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge Soc.__Vcellinp__sram__ARESETn or posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSoc___024root___ctor_var_reset(VSoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT___sram_S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT___core_io_AXI_Interface_aw_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT____Vcellinp__sram__ARESETn = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___Dcache_io_cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT___Dcache_io_fccache_axi_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___Icache_io_cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___Icache_io_fccache_axi_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master0_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master1_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___arbitor_io_master2_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_rd = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___trap_io_csrtr_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___wb_io_csrs_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fcex_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_rfio_reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___decode_io_fwde_csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fdreg_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__dereg_op_a = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_op_b = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__dereg_branch_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__dereg_branch_addr = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_alu_op = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__dereg_shamt = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__dereg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__dereg_sd_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_t = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__dereg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__dereg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__emreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__emreg_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__emreg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__mwreg_wb_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__mwreg_has_inst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT___DI_io_mem_addr_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT____Vcellinp__Dcache__io_cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__started = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___next_pc_T_7 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__fetch__DOT___io_pc_bits_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0 = VL_RAND_RESET_I(16);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1 = VL_RAND_RESET_I(17);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h1fd6a75a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0 = 0;
    vlSelf->Soc__DOT__core__DOT__decode__DOT__eximm__DOT____VdfgTmp_h1c2633e7__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_mul_div_outvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__aluvalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___mul_div_type_T_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT___CLINT_type_T_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_h7d5adbc1__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT____VdfgTmp_hf0b5fb69__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_34 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_38 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_47 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_100 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_58 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_65 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_69 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_78 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_81);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_87 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_92 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_97 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___res_T_126 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT___GEN_5 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplier = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__BM__io_multiplicand = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divisor = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_dividend = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____Vcellinp__DIV__io_divw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_h60d3cac5__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT____VdfgTmp_hf1075dbb__0 = 0;
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_hi = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__result_lo = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(67, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplierReg);
    VL_RAND_RESET_W(132, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__multiplicandReg);
    VL_RAND_RESET_W(132, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__resultReg);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__shiftCounter = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__total = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(133, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_1);
    VL_RAND_RESET_W(133, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2);
    VL_RAND_RESET_W(1064, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_3);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___choose_T = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT___T_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(536, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_4);
    VL_RAND_RESET_W(1056, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__BM__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT___GEN_5);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__quotient = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__partial_remainder);
    VL_RAND_RESET_W(65, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub65);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sub33 = VL_RAND_RESET_Q(33);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_quo = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__sign_rem = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__shiftCounter = VL_RAND_RESET_I(7);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_34 = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(66, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__temp_66);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___choose_T = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___divisor_T_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___T_13 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_0);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_3 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_2 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_quo_T_11 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_2 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__excute__DOT__alu__DOT__DIV__DOT__unnamedblk1__DOT__unnamedblk3__DOT___sign_rem_T_11 = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__clmemvalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdatavalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataiovalid_buffer = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__clmem_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdata_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__rdataio_buffer = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__get_value = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__mem__DOT__unnamedblk1__DOT___T_12 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MSIP = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIMECMP = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__MTIME = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__rvalue_buf = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__valid_buf = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__clint__DOT__unnamedblk1__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_hc45d0b05__0 = 0;
    vlSelf->Soc__DOT__core__DOT__fw__DOT____VdfgTmp_h1d0645fa__0 = 0;
    vlSelf->Soc__DOT__core__DOT__regfile__DOT___regs_ext_R0_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Soc__DOT__core__DOT__fc__DOT__IO_stall = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_8 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___T_25 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT___SFBundle_T_14 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT__SFBundle_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_hd527f3ac__0 = 0;
    vlSelf->Soc__DOT__core__DOT__fc__DOT____VdfgTmp_h8e05e725__0 = 0;
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIP = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(12);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__csrs__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__cause = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__trap__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(24);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__master_choose = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__choose_buffer = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___addr_T_6 = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__aw_comp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__w_comp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT__unnamedblk1__DOT___GEN_10 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__arbitor__DOT____VdfgTmp_hfea5ad76__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R1_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R2_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___TagArray_ext_R3_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__tag = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__index = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__offset = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT__valid);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT__dirty);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT__replace);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__hit0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataOneArray = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__inDataOneArray = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__victim = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__inst_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__whitNum = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_4 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_8);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_25 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_16);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_200 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_206 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___T_207 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_22 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_24);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_26);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W4_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____Vcellinp__DataArray_ext__W2_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3);
    VL_RAND_RESET_W(4096, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3);
    VL_RAND_RESET_W(4096, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33);
    VL_RAND_RESET_W(4096, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h1b552381__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h05ff0e1a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h56b90ebc__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7326076__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hc4187582__0 = 0;
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h73247aab__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_ha7cb96a0__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h3a5db4f4__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h461f8267__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h18bd6550__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h7cd24744__0);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8854f984__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h8ecd23a9__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4ca93995__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_hf391aef2__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac087__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21e4b031__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216ac48b__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h21a97bf1__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h216adcb3__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h212e0044__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h27deda75__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h94cbbc53__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Icache__DOT____VdfgTmp_h4b92e988__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__TagArray_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Icache__DOT__DataArray_ext__DOT___GEN_0 = VL_RAND_RESET_I(9);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R0_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R1_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R2_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___TagArray_ext_R3_data = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__tag = VL_RAND_RESET_I(21);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__index = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__offset = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__valid);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__dirty);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__replace);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__hit0 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataOneArray = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__victim = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__inst_type = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__whitNum = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_4 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_8);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_25 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_16);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_200 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_206 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___T_207 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_22 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_24);
    VL_RAND_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_26);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W4_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____Vcellinp__DataArray_ext__W2_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_26);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_19);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_10);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___valid_T_3);
    VL_RAND_RESET_W(4096, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_42);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_35);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_26);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_19);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_10);
    VL_RAND_RESET_W(1024, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___dirty_T_3);
    VL_RAND_RESET_W(4096, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33);
    VL_RAND_RESET_W(4096, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37 = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h02ae5b32__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h1b552381__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h05ff0e1a__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h56b90ebc__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7326076__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hc4187582__0 = 0;
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h73247aab__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_ha7cb96a0__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h3a5db4f4__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h461f8267__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h18bd6550__0);
    VL_ZERO_RESET_W(512, vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h7cd24744__0);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8854f984__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h8ecd23a9__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4ca93995__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_hf391aef2__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac087__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21e4b031__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216ac48b__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h21a97bf1__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h216adcb3__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h212e0044__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h27deda75__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h94cbbc53__0 = 0;
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT____VdfgTmp_h4b92e988__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__TagArray_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__Dcache__DOT__DataArray_ext__DOT___GEN_0 = VL_RAND_RESET_I(9);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__mem_data_bits = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___axi_req_bits_addr_T = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__ioformem__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count = VL_RAND_RESET_I(6);
    vlSelf->Soc__DOT__sram__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__sram__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->Soc__DOT__sram__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->Soc__DOT__sram__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__awaddr_buffer = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__need_resp = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__sram__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__sram__DOT__need_read = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_ha3b20136__0 = 0;
    vlSelf->__VdfgTmp_h315738f9__0 = 0;
    vlSelf->__VdfgTmp_h722d7b58__0 = 0;
    vlSelf->__VdfgTmp_h6dbd61c0__0 = 0;
    vlSelf->__VdfgTmp_h9d5684c6__0 = 0;
    vlSelf->__VdfgTmp_hb3a84c04__0 = 0;
    vlSelf->__VdfgTmp_heb865217__0 = 0;
    vlSelf->__VdfgTmp_hc520a55b__0 = 0;
    vlSelf->__VdfgTmp_h5f294843__0 = 0;
    vlSelf->__VdfgTmp_h2fe899d6__0 = 0;
    vlSelf->__VdfgTmp_h02e5796b__0 = 0;
    vlSelf->__Vdly__Soc__DOT__core__DOT__arbitor__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__inDataOneArray = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Soc__DOT__core__DOT__Icache__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__inDataOneArray = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Soc__DOT__core__DOT__Dcache__DOT__axi_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Soc__DOT__core__DOT__ioformem__DOT__axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__Soc__DOT____Vcellinp__sram__ARESETn = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
