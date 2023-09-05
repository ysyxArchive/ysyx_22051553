// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


void VSoc___024root__trace_chg_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSoc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_top_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSoc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSoc___024root__trace_chg_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Soc__DOT___tm_inst),64);
        bufp->chgQData(oldp+2,(vlSelf->Soc__DOT___tm_rdata),64);
        bufp->chgQData(oldp+4,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
        bufp->chgBit(oldp+6,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                              & (IData)(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started))));
        bufp->chgBit(oldp+7,(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16));
        bufp->chgQData(oldp+8,(vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1),64);
        bufp->chgQData(oldp+10,(vlSelf->Soc__DOT__core__DOT___excute_io_waddr),64);
        bufp->chgQData(oldp+12,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
        bufp->chgCData(oldp+14,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                  ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                              ? 0xfU
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                  ? 3U
                                                  : 
                                                 (1U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))))),8);
        bufp->chgQData(oldp+15,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
        bufp->chgQData(oldp+17,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
        bufp->chgQData(oldp+19,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
        bufp->chgCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__dereg_reg_waddr),5);
        bufp->chgBit(oldp+22,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
        bufp->chgQData(oldp+23,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
        bufp->chgCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
        bufp->chgCData(oldp+26,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),6);
        bufp->chgCData(oldp+27,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
        bufp->chgCData(oldp+28,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
        bufp->chgCData(oldp+29,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
        bufp->chgQData(oldp+30,(vlSelf->Soc__DOT__core__DOT__dereg_csr_t),64);
        bufp->chgSData(oldp+32,(vlSelf->Soc__DOT__core__DOT__dereg_csr_waddr),12);
        bufp->chgBit(oldp+33,(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen));
        bufp->chgQData(oldp+34,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
        bufp->chgCData(oldp+36,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
        bufp->chgCData(oldp+37,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
        bufp->chgCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
        bufp->chgQData(oldp+40,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
        bufp->chgBit(oldp+42,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
        bufp->chgSData(oldp+43,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
        bufp->chgQData(oldp+44,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
        bufp->chgCData(oldp+46,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
        bufp->chgCData(oldp+47,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgQData(oldp+48,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
        bufp->chgBit(oldp+50,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
        bufp->chgSData(oldp+51,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
        bufp->chgIData(oldp+52,(vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits),32);
        bufp->chgQData(oldp+53,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                  ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                  : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
        bufp->chgBit(oldp+55,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
        bufp->chgBit(oldp+56,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
        bufp->chgQData(oldp+57,((vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1 
                                 | vlSelf->Soc__DOT__core__DOT___excute_io_waddr)),64);
        bufp->chgBit(oldp+59,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgSData(oldp+60,((vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                 >> 0x14U)),12);
        bufp->chgQData(oldp+61,(((0x340U == (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                             >> 0x14U))
                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                  : ((0x300U == (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                 >> 0x14U))
                                      ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                      : ((0x304U == 
                                          (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                           >> 0x14U))
                                          ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                          : ((0x341U 
                                              == (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                  >> 0x14U))
                                              ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                              : ((0x342U 
                                                  == 
                                                  (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                   >> 0x14U))
                                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                    >> 0x14U))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                   : 0ULL))))))),64);
        bufp->chgQData(oldp+63,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
        bufp->chgQData(oldp+65,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
        bufp->chgQData(oldp+67,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
        bufp->chgQData(oldp+69,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
        bufp->chgQData(oldp+71,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
        bufp->chgQData(oldp+73,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
        bufp->chgQData(oldp+75,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                  >> 0xfU)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0xfU))]
                                  : 0ULL)),64);
        bufp->chgQData(oldp+77,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                  >> 0x14U)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0x14U))]
                                  : 0ULL)),64);
        bufp->chgBit(oldp+79,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+80,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgQData(oldp+81,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                          : 0ULL)))),64);
        bufp->chgQData(oldp+83,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                          : 0ULL)))),64);
        bufp->chgBit(oldp+85,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
        bufp->chgQData(oldp+86,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                      ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                          : 0ULL)))),64);
        bufp->chgCData(oldp+88,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+89,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0x14U))),5);
        bufp->chgQData(oldp+90,(((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                                  : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                      ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                      : 0ULL))),64);
        bufp->chgQData(oldp+92,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T
                                  : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                      ? 4ULL : ((2U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                 ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
                                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm
                                                  : 0ULL))))),64);
        bufp->chgCData(oldp+94,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 7U))),5);
        bufp->chgBit(oldp+95,(((0x13U != vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                  & ((0x37U != (0x7fU 
                                                & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                     & ((0x6fU != (0x7fU 
                                                   & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                        & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
        bufp->chgQData(oldp+96,((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                 + (((- (QData)((IData)(
                                                        (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                          >> 7U))))))))),64);
        bufp->chgCData(oldp+98,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+99,((0x3fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0x14U))),6);
        bufp->chgCData(oldp+100,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_7)
                                            ? 1U : 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                             ? 0U : 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
                                              ? 2U : 
                                             (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd8cc4529__0) 
                                               | (0x1a3U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))
                                               ? 0U
                                               : ((
                                                   ((0x13U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | ((0x113U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0x193U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | ((0x213U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x313U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | ((0x393U 
                                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                   | ((0x93U 
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                      | ((0x293U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                         | ((0x4293U 
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                            | ((0x33U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                               | ((0x8033U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xb3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x133U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x1b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x233U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x333U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x3b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | (0x433U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1)))))))))))))))))))) 
                                                   | ((0x4b3U 
                                                       == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                      | ((0x533U 
                                                          == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                         | ((0x5b3U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                            | ((0x633U 
                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                               | ((0x6b3U 
                                                                   == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                  | ((0x733U 
                                                                      == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                     | ((0x7b3U 
                                                                         == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                        | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))))))))
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h7292fcd1__0)
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x1f3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))),2);
        bufp->chgCData(oldp+101,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
                                   ? 0U : ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                            ? 1U : 
                                           ((0xa3U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                             ? 2U : 
                                            ((0x123U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                              ? 3U : 
                                             ((0x1a3U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                              << 2U)))))),3);
        bufp->chgQData(oldp+102,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
        bufp->chgCData(oldp+104,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
        bufp->chgQData(oldp+105,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
        bufp->chgBit(oldp+107,(((~ (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
                                     | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                        | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                           | ((0x123U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                              | ((0x1a3U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                 | ((0x13U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))))))) 
                                    | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0) 
                                       | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))) 
                                & ((0xf3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                   | ((0x173U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                      | (0U != (3U 
                                                & (- (IData)(
                                                             (0x1f3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))));
        bufp->chgBit(oldp+108,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgQData(oldp+109,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                      + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                   : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                       ? (0xfffffffffffffffeULL 
                                          & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                             + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                       : 0x80000000ULL))),64);
        bufp->chgCData(oldp+111,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
        bufp->chgCData(oldp+112,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgCData(oldp+113,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+114,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
        bufp->chgCData(oldp+115,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                            ? 1U : 
                                           ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                             ? 2U : 
                                            (((0x67U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                              | ((0x63U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                 | ((0xe3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | ((0x263U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0x2e3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | ((0x363U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                             | ((0x3e3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0))))))))
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd8cc4529__0)
                                               ? 3U
                                               : (3U 
                                                  & (- (IData)(
                                                               (0x1a3U 
                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))),3);
        bufp->chgCData(oldp+116,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
                                    | ((0x23U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                       | ((0xa3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                          | ((0x123U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                             | ((0x1a3U 
                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                | ((0x13U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_he9100215__0))))))) 
                                   | ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h567a98b8__0) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h156a9c0e__0)))
                                   ? 0U : ((0xf3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                            ? 1U : 
                                           ((0x173U 
                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                             ? 2U : 
                                            (3U & (- (IData)(
                                                             (0x1f3U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))),2);
        bufp->chgQData(oldp+117,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgCData(oldp+119,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                                   ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                       ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                   : 0U)),3);
        bufp->chgQData(oldp+120,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgQData(oldp+122,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
        bufp->chgBit(oldp+124,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
        bufp->chgBit(oldp+125,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag));
        bufp->chgQData(oldp+126,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
        bufp->chgBit(oldp+128,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                & (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_flag))));
        bufp->chgBit(oldp+129,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
        bufp->chgBit(oldp+130,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+131,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
        bufp->chgQData(oldp+133,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),64);
        bufp->chgQData(oldp+135,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
        bufp->chgBit(oldp+137,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
        bufp->chgBit(oldp+138,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+139,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+140,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+141,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+142,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+143,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgBit(oldp+144,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
        bufp->chgBit(oldp+145,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
        bufp->chgBit(oldp+146,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
        bufp->chgBit(oldp+147,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+148,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgQData(oldp+149,((((QData)((IData)(
                                                   vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                         << 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                  << 6U)))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                       << 6U))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                 << 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U))))) 
                                     | ((QData)((IData)(
                                                        vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                        (0xeU 
                                                         & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                            << 1U))])) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                             << 6U)))))),64);
        bufp->chgQData(oldp+151,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                   & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                   : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
        bufp->chgQData(oldp+153,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
        bufp->chgQData(oldp+155,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+157,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+159,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+161,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+163,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+165,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+167,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+169,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+171,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+173,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+175,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+177,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+179,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+181,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+183,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+185,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+187,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+189,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+191,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+193,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+195,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+197,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+199,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+201,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+203,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+205,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+207,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+209,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+211,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+213,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+215,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+217,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+219,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+221,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+223,(vlSelf->Soc__DOT__tm__DOT__old_inst),64);
    }
    bufp->chgBit(oldp+225,(vlSelf->clock));
    bufp->chgBit(oldp+226,(vlSelf->reset));
    bufp->chgQData(oldp+227,(vlSelf->io_next_pc),64);
}

void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_cleanup\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
