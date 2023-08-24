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
    VlWide<16>/*511:0*/ __Vtemp_h5997f164__0;
    VlWide<6>/*191:0*/ __Vtemp_h6fe8e4b5__0;
    VlWide<8>/*255:0*/ __Vtemp_hc02d9dc0__0;
    VlWide<16>/*511:0*/ __Vtemp_h2a7095c3__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Soc__DOT___tm_inst),64);
        bufp->chgQData(oldp+2,(vlSelf->Soc__DOT___tm_rdata),64);
        bufp->chgQData(oldp+4,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
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
        bufp->chgCData(oldp+21,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),6);
        bufp->chgCData(oldp+22,(vlSelf->Soc__DOT__core__DOT__dereg_shamt),5);
        bufp->chgCData(oldp+23,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
        bufp->chgCData(oldp+24,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
        bufp->chgCData(oldp+25,(vlSelf->Soc__DOT__core__DOT__dereg_ld_type),3);
        bufp->chgQData(oldp+26,(vlSelf->Soc__DOT__core__DOT__emreg_alu_res),64);
        bufp->chgCData(oldp+28,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+29,(vlSelf->Soc__DOT__core__DOT__emreg_rd),5);
        bufp->chgCData(oldp+30,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
        bufp->chgCData(oldp+31,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
        bufp->chgCData(oldp+32,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgQData(oldp+33,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_data),64);
        bufp->chgCData(oldp+35,(vlSelf->Soc__DOT__core__DOT__mwreg_rd),5);
        bufp->chgIData(oldp+36,(vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits),32);
        bufp->chgQData(oldp+37,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgBit(oldp+39,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgQData(oldp+40,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                  >> 0xfU)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0xfU))]
                                  : 0ULL)),64);
        bufp->chgQData(oldp+42,(vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata),64);
        bufp->chgBit(oldp+44,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+45,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgQData(oldp+46,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                          : 0ULL)))),64);
        bufp->chgQData(oldp+48,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                          : 0ULL)))),64);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+51,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 0x14U))),5);
        bufp->chgQData(oldp+52,(((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                  ? (((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                                      | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                         | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))
                                      ? ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                          : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                              ? vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata
                                              : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                                  ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                                  : 0ULL)))
                                      : ((0U != (0x1fU 
                                                 & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                    >> 0xfU)))
                                          ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                         [(0x1fU & 
                                           (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                            >> 0xfU))]
                                          : 0ULL)) : 
                                 ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                   ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                   : 0ULL))),64);
        __Vtemp_h5997f164__0[0U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU) | (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                 >> 0x14U));
        __Vtemp_h5997f164__0[1U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0xfffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h5997f164__0[2U] = ((0xfffff000U & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                                    | ((IData)(((0xfffffffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                       >> 0x1fU))))) 
                                                >> 0x20U)) 
                                       >> 0x14U));
        __Vtemp_h5997f164__0[3U] = (- (IData)((vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                               >> 0x1fU)));
        __Vtemp_h5997f164__0[4U] = (((IData)((0xfffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0x14U) | ((0xff000U 
                                                   & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                                                  | ((0x800U 
                                                      & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                           >> 0x14U)))));
        __Vtemp_h5997f164__0[5U] = (((IData)((0xfffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0xcU) | ((IData)(
                                                         ((0xfffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_h5997f164__0[6U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU) | ((0xfe0U 
                                                  & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                       >> 7U))));
        __Vtemp_h5997f164__0[7U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0xfffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h5997f164__0[8U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU) | ((0x800U 
                                                  & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                          >> 7U)))));
        __Vtemp_h5997f164__0[9U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0xfffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h5997f164__0[0xaU] = 0U;
        __Vtemp_h5997f164__0[0xbU] = 0U;
        __Vtemp_h5997f164__0[0xcU] = 0U;
        __Vtemp_h5997f164__0[0xdU] = 0U;
        __Vtemp_h5997f164__0[0xeU] = 0U;
        __Vtemp_h5997f164__0[0xfU] = 0U;
        __Vtemp_h6fe8e4b5__0[0U] = (IData)((((QData)((IData)(
                                                             __Vtemp_h5997f164__0[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               (0x1ffU 
                                                                & (((0x13U 
                                                                     == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                     ? 0U
                                                                     : 
                                                                    ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                                      ? 1U
                                                                      : 
                                                                     ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                                   << 6U))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((0x6fU 
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
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                      << 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((0x6fU 
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
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                      << 6U))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (((0x13U 
                                                       == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                        ? 1U
                                                        : 
                                                       ((0x6fU 
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
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                     << 6U)))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 __Vtemp_h5997f164__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & (((0x13U 
                                                                         == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                                          ? 1U
                                                                          : 
                                                                         ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((0x6fU 
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
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                      << 6U))))) 
                                               | ((QData)((IData)(
                                                                  __Vtemp_h5997f164__0[
                                                                  (0xeU 
                                                                   & (((0x13U 
                                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                        ? 0U
                                                                        : 
                                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                                         ? 1U
                                                                         : 
                                                                        ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                                      << 1U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((0x6fU 
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
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                      << 6U))))));
        __Vtemp_h6fe8e4b5__0[1U] = (IData)(((((QData)((IData)(
                                                              __Vtemp_h5997f164__0[
                                                              (((IData)(0x3fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((0x13U 
                                                                      == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                      ? 0U
                                                                      : 
                                                                     ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                                       ? 1U
                                                                       : 
                                                                      ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                                    << 6U))) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
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
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                       << 6U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
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
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                       << 6U))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((0x6fU 
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
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                      << 6U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  __Vtemp_h5997f164__0[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & (((0x13U 
                                                                          == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                                           ? 1U
                                                                           : 
                                                                          ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                                        << 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
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
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                       << 6U))))) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_h5997f164__0[
                                                                   (0xeU 
                                                                    & (((0x13U 
                                                                         == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                                          ? 1U
                                                                          : 
                                                                         ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                                       << 1U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & (((0x13U 
                                                         == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                          ? 1U
                                                          : 
                                                         ((0x6fU 
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
                                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                       << 6U))))) 
                                            >> 0x20U));
        __Vtemp_hc02d9dc0__0[0U] = 0U;
        __Vtemp_hc02d9dc0__0[1U] = 0U;
        __Vtemp_hc02d9dc0__0[2U] = __Vtemp_h6fe8e4b5__0[0U];
        __Vtemp_hc02d9dc0__0[3U] = __Vtemp_h6fe8e4b5__0[1U];
        __Vtemp_hc02d9dc0__0[4U] = (IData)((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
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
        __Vtemp_hc02d9dc0__0[5U] = (IData)(((((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
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
        __Vtemp_hc02d9dc0__0[6U] = 4U;
        __Vtemp_hc02d9dc0__0[7U] = 0U;
        bufp->chgQData(oldp+54,((((QData)((IData)(__Vtemp_hc02d9dc0__0[
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
                                                                __Vtemp_hc02d9dc0__0[
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
                                                       __Vtemp_hc02d9dc0__0[
                                                       (6U 
                                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type) 
                                            << 6U)))))),64);
        bufp->chgCData(oldp+56,((0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                          >> 7U))),5);
        bufp->chgCData(oldp+57,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+58,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
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
        bufp->chgCData(oldp+59,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
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
        bufp->chgCData(oldp+60,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
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
        bufp->chgCData(oldp+61,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+62,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),2);
        bufp->chgCData(oldp+63,(((0x13U == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
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
        __Vtemp_h2a7095c3__0[0U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU) | (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                 >> 0x14U));
        __Vtemp_h2a7095c3__0[1U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0xfffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h2a7095c3__0[2U] = ((0xfffff000U & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                                    | ((IData)(((0xfffffffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                       >> 0x1fU))))) 
                                                >> 0x20U)) 
                                       >> 0x14U));
        __Vtemp_h2a7095c3__0[3U] = (- (IData)((vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                               >> 0x1fU)));
        __Vtemp_h2a7095c3__0[4U] = (((IData)((0xfffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0x14U) | ((0xff000U 
                                                   & vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits) 
                                                  | ((0x800U 
                                                      & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                           >> 0x14U)))));
        __Vtemp_h2a7095c3__0[5U] = (((IData)((0xfffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0xcU) | ((IData)(
                                                         ((0xfffffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_h2a7095c3__0[6U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU) | ((0xfe0U 
                                                  & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                       >> 7U))));
        __Vtemp_h2a7095c3__0[7U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0xfffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h2a7095c3__0[8U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU) | ((0x800U 
                                                  & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                          >> 7U)))));
        __Vtemp_h2a7095c3__0[9U] = (((IData)((0xfffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                    >> 0x1fU)))))) 
                                     >> 0x14U) | ((IData)(
                                                          ((0xfffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                                                                >> 0x1fU))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h2a7095c3__0[0xaU] = 0U;
        __Vtemp_h2a7095c3__0[0xbU] = 0U;
        __Vtemp_h2a7095c3__0[0xcU] = 0U;
        __Vtemp_h2a7095c3__0[0xdU] = 0U;
        __Vtemp_h2a7095c3__0[0xeU] = 0U;
        __Vtemp_h2a7095c3__0[0xfU] = 0U;
        bufp->chgQData(oldp+64,((((QData)((IData)(__Vtemp_h2a7095c3__0[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0x1ffU 
                                                     & (((0x13U 
                                                          == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                           ? 1U
                                                           : 
                                                          ((0x6fU 
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
                                                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & (((0x13U 
                                                   == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                    ? 1U
                                                    : 
                                                   ((0x6fU 
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
                                                                       == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((0x6fU 
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
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & (((0x13U 
                                                  == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                   ? 1U
                                                   : 
                                                  ((0x6fU 
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
                                                                      == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_h2a7095c3__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & (((0x13U 
                                                                        == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                                        ? 0U
                                                                        : 
                                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                                         ? 1U
                                                                         : 
                                                                        ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((0x13U 
                                                       == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                        ? 1U
                                                        : 
                                                       ((0x6fU 
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
                                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_h2a7095c3__0[
                                                       (0xeU 
                                                        & (((0x13U 
                                                             == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                                              ? 1U
                                                              : 
                                                             ((0x6fU 
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
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           (((0x13U 
                                              == vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                               ? 1U
                                               : ((0x6fU 
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
                                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))) 
                                            << 6U)))))),64);
        bufp->chgCData(oldp+66,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                                  ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                      ? 0U : (3U & (IData)(vlSelf->__VdfgTmp_h0601aa63__0)))
                                  : 0U)),3);
        bufp->chgBit(oldp+67,((1U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_wb_type))));
        bufp->chgQData(oldp+68,(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_wdata),64);
        bufp->chgBit(oldp+70,(vlSelf->Soc__DOT__core__DOT___mem_io_fwmem_reg_we));
        bufp->chgBit(oldp+71,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+72,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+73,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+74,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+75,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+76,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgIData(oldp+77,((IData)(vlSelf->Soc__DOT___tm_inst)),32);
        bufp->chgBit(oldp+78,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+79,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgQData(oldp+80,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))
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
        bufp->chgQData(oldp+82,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                  & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                                  ? vlSelf->Soc__DOT__core__DOT__mwreg_wb_data
                                  : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
        bufp->chgQData(oldp+84,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
        bufp->chgQData(oldp+86,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                           >> 0xfU))]),64);
        bufp->chgQData(oldp+88,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [(0x1fU & (vlSelf->Soc__DOT__core__DOT____Vcellinp__decode__io_inst_bits 
                                           >> 0x14U))]),64);
        bufp->chgQData(oldp+90,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+92,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+94,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+96,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+98,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+100,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+102,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+104,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+108,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+110,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+112,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+114,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+116,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+118,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+120,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+122,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+124,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+126,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+128,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+130,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+132,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+134,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+136,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+138,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+140,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+142,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+144,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+146,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+148,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+150,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+152,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
    }
    bufp->chgBit(oldp+154,(vlSelf->clock));
    bufp->chgBit(oldp+155,(vlSelf->reset));
    bufp->chgQData(oldp+156,(vlSelf->io_next_pc),64);
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
