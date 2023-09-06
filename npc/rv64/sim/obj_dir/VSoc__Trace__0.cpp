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
    VlWide<3>/*95:0*/ __Vtemp_hcd8b8aff__0;
    VlWide<8>/*255:0*/ __Vtemp_hc41d1282__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Soc__DOT___tm_inst),64);
        bufp->chgQData(oldp+2,(vlSelf->Soc__DOT___tm_rdata),64);
        bufp->chgQData(oldp+4,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
        bufp->chgBit(oldp+6,(((~ (IData)(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall)) 
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
        bufp->chgBit(oldp+34,(vlSelf->Soc__DOT__core__DOT__dereg_has_inst));
        bufp->chgQData(oldp+35,(vlSelf->Soc__DOT__core__DOT__emreg_reg_wdata),64);
        bufp->chgCData(oldp+37,(vlSelf->Soc__DOT__core__DOT__emreg_reg_waddr),5);
        bufp->chgCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+39,(vlSelf->Soc__DOT__core__DOT__emreg_ld_type),3);
        bufp->chgCData(oldp+40,(vlSelf->Soc__DOT__core__DOT__emreg_ld_addr_lowbit),3);
        bufp->chgQData(oldp+41,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata),64);
        bufp->chgBit(oldp+43,(vlSelf->Soc__DOT__core__DOT__emreg_csr_wen));
        bufp->chgSData(oldp+44,(vlSelf->Soc__DOT__core__DOT__emreg_csr_waddr),12);
        bufp->chgBit(oldp+45,(vlSelf->Soc__DOT__core__DOT__emreg_has_inst));
        bufp->chgQData(oldp+46,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata),64);
        bufp->chgCData(oldp+48,(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr),5);
        bufp->chgCData(oldp+49,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgQData(oldp+50,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata),64);
        bufp->chgBit(oldp+52,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_wen));
        bufp->chgSData(oldp+53,(vlSelf->Soc__DOT__core__DOT__mwreg_csr_waddr),12);
        bufp->chgBit(oldp+54,(vlSelf->Soc__DOT__core__DOT__mwreg_has_inst));
        bufp->chgIData(oldp+55,(vlSelf->Soc__DOT__core__DOT__decode__DOT__inst),32);
        bufp->chgQData(oldp+56,(((IData)(vlSelf->Soc__DOT__core__DOT__dereg_csr_wen)
                                  ? vlSelf->Soc__DOT__core__DOT__dereg_csr_t
                                  : vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result)),64);
        bufp->chgBit(oldp+58,(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag));
        bufp->chgBit(oldp+59,((0U != ((IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type) 
                                      | (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))));
        bufp->chgQData(oldp+60,((vlSelf->Soc__DOT__core__DOT__excute__DOT___io_raddr_T_1 
                                 | vlSelf->Soc__DOT__core__DOT___excute_io_waddr)),64);
        bufp->chgBit(oldp+62,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgSData(oldp+63,((vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                 >> 0x14U)),12);
        __Vtemp_hcd8b8aff__0[0U] = 0x41000000U;
        __Vtemp_hcd8b8aff__0[1U] = 0x3003423U;
        __Vtemp_hcd8b8aff__0[2U] = 0U;
        bufp->chgSData(oldp+64,(((0x5fU >= (0x7fU & 
                                            ((IData)(0xcU) 
                                             * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                  ? (0xfffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_hcd8b8aff__0[
                                                 (((IData)(0xbU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0xcU) 
                                                       * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)))))) 
                                               | (__Vtemp_hcd8b8aff__0[
                                                  (3U 
                                                   & (((IData)(0xcU) 
                                                       * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      * (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))))))
                                  : 0U)),12);
        bufp->chgQData(oldp+65,(((0x340U == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                             >> 0x14U))
                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH
                                  : ((0x300U == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                 >> 0x14U))
                                      ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS
                                      : ((0x304U == 
                                          (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                           >> 0x14U))
                                          ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE
                                          : ((0x341U 
                                              == (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0x14U))
                                              ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                              : ((0x342U 
                                                  == 
                                                  (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                   >> 0x14U))
                                                  ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                    >> 0x14U))
                                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                                   : 0ULL))))))),64);
        bufp->chgQData(oldp+67,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC),64);
        bufp->chgQData(oldp+69,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC),64);
        bufp->chgQData(oldp+71,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MCAUSE),64);
        bufp->chgQData(oldp+73,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MIE),64);
        bufp->chgQData(oldp+75,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSTATUS),64);
        bufp->chgQData(oldp+77,(vlSelf->Soc__DOT__core__DOT__csrs__DOT__MSCRATCH),64);
        bufp->chgQData(oldp+79,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0xfU)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                            >> 0xfU))]
                                  : 0ULL)),64);
        bufp->chgQData(oldp+81,(((0U != (0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                  >> 0x14U)))
                                  ? vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                            >> 0x14U))]
                                  : 0ULL)),64);
        bufp->chgBit(oldp+83,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)))));
        bufp->chgBit(oldp+84,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)))));
        bufp->chgQData(oldp+85,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                          : 0ULL)))),64);
        bufp->chgQData(oldp+87,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard)
                                  ? vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard)
                                      ? vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                          : 0ULL)))),64);
        bufp->chgBit(oldp+89,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard) 
                               | ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)))));
        bufp->chgQData(oldp+90,(((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard)
                                  ? vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result
                                  : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard)
                                      ? vlSelf->Soc__DOT__core__DOT__emreg_csr_wdata
                                      : ((IData)(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard)
                                          ? vlSelf->Soc__DOT__core__DOT__mwreg_csr_wdata
                                          : 0ULL)))),64);
        bufp->chgCData(oldp+92,((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+93,((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                          >> 0x14U))),5);
        __Vtemp_hc41d1282__0[0U] = 0U;
        __Vtemp_hc41d1282__0[1U] = 0U;
        __Vtemp_hc41d1282__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__fdreg_pc);
        __Vtemp_hc41d1282__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                            >> 0x20U));
        __Vtemp_hc41d1282__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4);
        __Vtemp_hc41d1282__0[5U] = (IData)((vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                            >> 0x20U));
        __Vtemp_hc41d1282__0[6U] = (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm);
        __Vtemp_hc41d1282__0[7U] = (IData)((vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                            >> 0x20U));
        bufp->chgQData(oldp+94,((((QData)((IData)(__Vtemp_hc41d1282__0[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_hc41d1282__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_hc41d1282__0[
                                                       (6U 
                                                        & ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type) 
                                            << 6U)))))),64);
        bufp->chgQData(oldp+96,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type))
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
        bufp->chgCData(oldp+98,((0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+99,(((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst) 
                               & ((0x17U != (0x7fU 
                                             & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
                                  & ((0x37U != (0x7fU 
                                                & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
                                     & ((0x6fU != (0x7fU 
                                                   & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)) 
                                        & ((0x67U != (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                           & (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5))))))));
        bufp->chgQData(oldp+100,((vlSelf->Soc__DOT__core__DOT__fdreg_pc 
                                  + (((- (QData)((IData)(
                                                         (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                                                           >> 7U))))))))),64);
        bufp->chgCData(oldp+102,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_alu_op),6);
        bufp->chgCData(oldp+103,((0x3fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                           >> 0x14U))),6);
        bufp->chgCData(oldp+104,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_10)
                                            ? 1U : 
                                           ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_5)
                                             ? 0U : 
                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hb0fa7988__0)
                                              ? 2U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                               ? 0U
                                               : (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
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
                                                  (((0xf3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                    | ((0x173U 
                                                        == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                       | ((0x1f3U 
                                                           == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                          | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0))))
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x3f3U 
                                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))),2);
        bufp->chgCData(oldp+105,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0)
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
        bufp->chgQData(oldp+106,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_reg2_rdata_T),64);
        bufp->chgCData(oldp+108,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_ld_type),3);
        bufp->chgQData(oldp+109,(vlSelf->Soc__DOT__core__DOT__decode__DOT___io_deio_csr_t_T),64);
        bufp->chgSData(oldp+111,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen)
                                   ? (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                      >> 0x14U) : 0U)),12);
        bufp->chgBit(oldp+112,(vlSelf->Soc__DOT__core__DOT___decode_io_deio_csr_wen));
        bufp->chgBit(oldp+113,((0x13U != vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)));
        bufp->chgBit(oldp+114,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgQData(oldp+115,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                      + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                                   : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                       ? (0xfffffffffffffffeULL 
                                          & (vlSelf->Soc__DOT__core__DOT__decode__DOT___io_jump_pc_T_4 
                                             + vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm))
                                       : 0x80000000ULL))),64);
        bufp->chgCData(oldp+117,(vlSelf->Soc__DOT__core__DOT__decode__DOT__lu_rd),5);
        bufp->chgCData(oldp+118,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgCData(oldp+119,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+120,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opb_type),3);
        bufp->chgCData(oldp+121,(((0x13U == vlSelf->Soc__DOT__core__DOT__decode__DOT__inst)
                                   ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_6)
                                            ? 1U : 
                                           ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->Soc__DOT__core__DOT__decode__DOT__inst))
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
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_9)
                                               ? 3U
                                               : ((1U 
                                                   & (((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_11) 
                                                       | ((0x4b3U 
                                                           == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                          | (0x533U 
                                                             == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1))) 
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
                                                                     | ((0x1bU 
                                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                        | ((0x9bU 
                                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                           | ((0x29bU 
                                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                              | ((0x429bU 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)) 
                                                                                | ((0x3bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x803bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xbbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x2bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x82bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x43bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x63bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x6bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x73bU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0x7bbU 
                                                                                == vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_1) 
                                                                                | ((0xf3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((0x173U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h3343c1ff__0) 
                                                                                | (0x3f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                                                | (0x1f3U 
                                                                                == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))))))))))))))))))))))))
                                                   ? 0U
                                                   : 5U))))))),3);
        bufp->chgCData(oldp+122,(((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h90ba5b66__0) 
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
                                            ((0x1f3U 
                                              == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                              ? 3U : 
                                             ((0x2f3U 
                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                               ? 1U
                                               : ((0x373U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (0x3f3U 
                                                                 == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))))),2);
        bufp->chgQData(oldp+123,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
        bufp->chgCData(oldp+125,(((0U != (IData)(vlSelf->Soc__DOT__core__DOT__dereg_ld_type))
                                   ? ((0x3fU == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_alu_op))
                                       ? 0U : (7U & (IData)(vlSelf->__VdfgTmp_h6a80e86b__0)))
                                   : 0U)),3);
        bufp->chgQData(oldp+126,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgQData(oldp+128,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_wdata),64);
        bufp->chgBit(oldp+130,(vlSelf->Soc__DOT__core__DOT___excute_io_fwex_reg_we));
        bufp->chgBit(oldp+131,(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_pop_NOP));
        bufp->chgBit(oldp+132,(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag));
        bufp->chgQData(oldp+133,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                   ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MTVEC
                                   : ((6U == (IData)(vlSelf->Soc__DOT__core__DOT__trap__DOT__state))
                                       ? vlSelf->Soc__DOT__core__DOT__csrs__DOT__MEPC
                                       : 0ULL))),64);
        bufp->chgBit(oldp+135,(((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                | ((IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag) 
                                   | (IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag)))));
        bufp->chgQData(oldp+136,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
        bufp->chgBit(oldp+138,(((~ (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___load_use_T_16)) 
                                & ((~ (IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_pop_NOP)) 
                                   & ((IData)(vlSelf->Soc__DOT__core__DOT___trap_io_fctr_jump_flag) 
                                      | ((IData)(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag) 
                                         | (IData)(vlSelf->Soc__DOT__core__DOT___excute_io_jump_flag)))))));
        bufp->chgBit(oldp+139,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_stall));
        bufp->chgBit(oldp+140,(vlSelf->Soc__DOT__core__DOT___fc_io_fcde_flush));
        bufp->chgBit(oldp+141,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+142,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
        bufp->chgQData(oldp+144,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__old_pc),64);
        bufp->chgQData(oldp+146,(vlSelf->Soc__DOT__core__DOT___mem_io_mwio_reg_wdata),64);
        bufp->chgBit(oldp+148,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__emreg_wb_type))));
        bufp->chgBit(oldp+149,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_ex_hazard));
        bufp->chgBit(oldp+150,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_ex_hazard));
        bufp->chgBit(oldp+151,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_mem_hazard));
        bufp->chgBit(oldp+152,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_mem_hazard));
        bufp->chgBit(oldp+153,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg1_wb_hazard));
        bufp->chgBit(oldp+154,(vlSelf->Soc__DOT__core__DOT__fw__DOT__reg2_wb_hazard));
        bufp->chgBit(oldp+155,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_ex_harzard));
        bufp->chgBit(oldp+156,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_mem_harzard));
        bufp->chgBit(oldp+157,(vlSelf->Soc__DOT__core__DOT__fw__DOT__csr_wb_harzard));
        bufp->chgBit(oldp+158,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+159,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgQData(oldp+160,((((QData)((IData)(
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
        bufp->chgQData(oldp+162,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                   & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr)))
                                   ? vlSelf->Soc__DOT__core__DOT__mwreg_reg_wdata
                                   : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                  [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr])),64);
        bufp->chgQData(oldp+164,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_reg_waddr]),64);
        bufp->chgQData(oldp+166,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+168,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [(0x1fU & (vlSelf->Soc__DOT__core__DOT__decode__DOT__inst 
                                            >> 0x14U))]),64);
        bufp->chgQData(oldp+170,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+172,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+174,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+176,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+178,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+180,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+182,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+184,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+186,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+188,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+190,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+192,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+194,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+196,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+198,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+200,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+202,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+204,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+206,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+208,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+210,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+212,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+214,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+216,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+218,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+220,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+222,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+224,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+226,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+228,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+230,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+232,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgCData(oldp+234,(vlSelf->Soc__DOT__core__DOT__trap__DOT__state),3);
        bufp->chgQData(oldp+235,(vlSelf->Soc__DOT__tm__DOT__old_inst),64);
    }
    bufp->chgBit(oldp+237,(vlSelf->clock));
    bufp->chgBit(oldp+238,(vlSelf->reset));
    bufp->chgQData(oldp+239,(vlSelf->io_next_pc),64);
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
