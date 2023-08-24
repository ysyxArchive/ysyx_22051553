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
    VlWide<8>/*255:0*/ __Vtemp_h073bfb9e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Soc__DOT___tm_inst),64);
        bufp->chgQData(oldp+2,(vlSelf->Soc__DOT___tm_rdata),64);
        bufp->chgQData(oldp+4,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
        bufp->chgBit(oldp+6,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+7,(vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1),64);
        bufp->chgQData(oldp+9,(vlSelf->Soc__DOT___core_io_waddr),64);
        bufp->chgQData(oldp+11,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
        bufp->chgCData(oldp+13,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                  ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                              ? 0xfU
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                  ? 3U
                                                  : 
                                                 (1U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))))),8);
        bufp->chgQData(oldp+14,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
        bufp->chgQData(oldp+16,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
        bufp->chgQData(oldp+18,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
        bufp->chgCData(oldp+20,(vlSelf->Soc__DOT__core__DOT__dereg_rd),5);
        bufp->chgBit(oldp+21,(vlSelf->Soc__DOT__core__DOT__dereg_branch_type));
        bufp->chgQData(oldp+22,(vlSelf->Soc__DOT__core__DOT__dereg_branch_addr),64);
        bufp->chgCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
        bufp->chgCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),5);
        bufp->chgCData(oldp+26,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
        bufp->chgCData(oldp+27,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
        bufp->chgCData(oldp+28,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
        bufp->chgQData(oldp+29,(vlSelf->Soc__DOT__core__DOT__emreg_alu_res),64);
        bufp->chgCData(oldp+31,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+32,(vlSelf->Soc__DOT__core__DOT__emreg_rd),5);
        bufp->chgCData(oldp+33,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
        bufp->chgCData(oldp+34,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
        bufp->chgCData(oldp+35,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgQData(oldp+36,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_data),64);
        bufp->chgCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__mwreg_rd),5);
        bufp->chgIData(oldp+39,(vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits),32);
        bufp->chgQData(oldp+40,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgBit(oldp+42,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgQData(oldp+43,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                  >> 0xfU)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0xfU))]
                                  : 0ULL)),64);
        bufp->chgQData(oldp+45,(vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata),64);
        bufp->chgBit(oldp+47,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+48,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgQData(oldp+49,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                          : 0ULL)))),64);
        bufp->chgQData(oldp+51,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                          : 0ULL)))),64);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0x14U))),5);
        bufp->chgQData(oldp+55,(((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                  ? vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4
                                  : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                      ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                      : 0ULL))),64);
        __Vtemp_h073bfb9e__0[0U] = 0U;
        __Vtemp_h073bfb9e__0[1U] = 0U;
        __Vtemp_h073bfb9e__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm);
        __Vtemp_h073bfb9e__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                            >> 0x20U));
        __Vtemp_h073bfb9e__0[4U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                             | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                                | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
                                             ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                                 ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                                 : 
                                                ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                                  ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                                   : 0ULL)))
                                             : vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata));
        __Vtemp_h073bfb9e__0[5U] = (IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                                              | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                                 | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))
                                              ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                                   ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                                    ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                                    : 0ULL)))
                                              : vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata) 
                                            >> 0x20U));
        __Vtemp_h073bfb9e__0[6U] = 4U;
        __Vtemp_h073bfb9e__0[7U] = 0U;
        bufp->chgQData(oldp+57,((((QData)((IData)(__Vtemp_h073bfb9e__0[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_h073bfb9e__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_h073bfb9e__0[
                                                       (6U 
                                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                            << 6U)))))),64);
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 7U))),5);
        bufp->chgBit(oldp+60,(((0x13U != vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                  & ((0x37U != (0x7fU 
                                                & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                     & ((0x6fU != (0x7fU 
                                                   & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)) 
                                        & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4))))))));
        bufp->chgQData(oldp+61,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgCData(oldp+63,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+64,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_7)
                                           ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                     ? 2U
                                                     : 
                                                    ((0x23U 
                                                      != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                     & ((0xa3U 
                                                         != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                        & ((0x123U 
                                                            != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                           & ((0x1a3U 
                                                               != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                              & (((0x13U 
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
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x293U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x8293U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x33U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x8033U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0xb3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x133U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x1b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x233U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x2b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x82b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x333U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x3b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | (0x433U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)))))))))))))))))))) 
                                                                 | ((0x4b3U 
                                                                     == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                    | ((0x533U 
                                                                        == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                       | ((0x5b3U 
                                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                          | ((0x633U 
                                                                              == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                             | ((0x6b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x733U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x7b3U 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x1bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x9bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x29bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x829bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0) 
                                                                                | (0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))))))))))))))))))))))))))))))),2);
        bufp->chgCData(oldp+65,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                           ? 4U : (
                                                   (0x23U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0xa3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x123U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                      ? 3U
                                                      : 
                                                     ((0x1a3U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                      << 2U))))))),3);
        bufp->chgCData(oldp+66,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                  ? 0U : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                           ? 1U : (
                                                   (0x83U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                    ? 2U
                                                    : 
                                                   ((0x103U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 3U
                                                     : 
                                                    ((0x203U 
                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                      ? 5U
                                                      : 
                                                     ((0x283U 
                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                       ? 6U
                                                       : 
                                                      ((0x303U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                        ? 7U
                                                        : 
                                                       ((0x183U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                        << 2U))))))))),3);
        bufp->chgBit(oldp+67,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgQData(oldp+68,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                  ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                     + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                  : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                      ? (0xfffffffffffffffeULL 
                                         & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                            + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                      : 0x80000000ULL))),64);
        bufp->chgCData(oldp+70,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgCData(oldp+71,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+72,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),2);
        bufp->chgCData(oldp+73,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                           ? 1U : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_4)
                                                      ? 4U
                                                      : 
                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                                       ? 0U
                                                       : 
                                                      (((0x23U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                        | ((0xa3U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                           | (0x123U 
                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))
                                                        ? 3U
                                                        : 
                                                       (3U 
                                                        & (- (IData)(
                                                                     (0x1a3U 
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))),3);
        bufp->chgCData(oldp+74,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                                  ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h0601aa63__0)))
                                  : 0U)),3);
        bufp->chgBit(oldp+75,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_flush));
        bufp->chgBit(oldp+76,((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                               | (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_flush))));
        bufp->chgQData(oldp+78,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
        bufp->chgQData(oldp+80,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
        bufp->chgQData(oldp+82,(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata),64);
        bufp->chgBit(oldp+84,(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_we));
        bufp->chgBit(oldp+85,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+86,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+87,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+88,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+89,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+90,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgIData(oldp+91,((IData)(vlSelf->Soc__DOT___tm_inst)),32);
        bufp->chgBit(oldp+92,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+93,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgQData(oldp+94,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                                  ? vlSelf->Soc__DOT__core__DOT__emreg_alu_res
                                  : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
                                      ? (((QData)((IData)(
                                                          vlSelf->Soc__DOT__core__DOT__mem__DOT___GEN_1[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
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
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__emreg_ld_type) 
                                                      << 6U)))))
                                      : 0ULL))),64);
        bufp->chgQData(oldp+96,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                  & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                                  ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                  : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
        bufp->chgQData(oldp+98,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
        bufp->chgQData(oldp+100,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+102,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+104,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+108,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+112,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+114,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+116,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+118,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+120,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+122,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+124,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+126,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+128,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+130,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+132,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+134,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+136,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+138,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+140,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+142,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+144,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+146,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+148,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+150,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+152,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+154,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+156,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+158,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+160,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+162,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+164,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+166,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    }
    bufp->chgBit(oldp+168,(vlSelf->clock));
    bufp->chgBit(oldp+169,(vlSelf->reset));
    bufp->chgQData(oldp+170,(vlSelf->io_next_pc),64);
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
