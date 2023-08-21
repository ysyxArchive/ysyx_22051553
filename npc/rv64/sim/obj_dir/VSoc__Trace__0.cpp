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
    VlWide<8>/*255:0*/ __Vtemp_h1de70962__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Soc__DOT__core__DOT___decode_io_jump_flag));
        bufp->chgCData(oldp+1,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type),2);
        bufp->chgQData(oldp+2,(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+4,(vlSelf->Soc__DOT___tm_inst),32);
        bufp->chgQData(oldp+5,(vlSelf->Soc__DOT__core__DOT___fetch_io_fdio_pc),64);
        bufp->chgQData(oldp+7,(vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata),64);
        bufp->chgQData(oldp+9,(vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata),64);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->Soc__DOT___tm_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->Soc__DOT___tm_inst 
                                          >> 0x14U))),5);
        __Vtemp_h1de70962__0[0U] = 0U;
        __Vtemp_h1de70962__0[1U] = 0U;
        __Vtemp_h1de70962__0[2U] = (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm);
        __Vtemp_h1de70962__0[3U] = (IData)((vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                            >> 0x20U));
        __Vtemp_h1de70962__0[4U] = (IData)(vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata);
        __Vtemp_h1de70962__0[5U] = (IData)((vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg2_rdata 
                                            >> 0x20U));
        __Vtemp_h1de70962__0[6U] = 4U;
        __Vtemp_h1de70962__0[7U] = 0U;
        bufp->chgQData(oldp+13,((((QData)((IData)(__Vtemp_h1de70962__0[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0xffU 
                                                     & (((0x13U 
                                                          == vlSelf->Soc__DOT___tm_inst)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                           ? 1U
                                                           : 
                                                          ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                            ? 3U
                                                            : 
                                                           (0x1a3U 
                                                            == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                        << 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & (((0x13U 
                                                   == vlSelf->Soc__DOT___tm_inst)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                     ? 3U
                                                     : 
                                                    (0x1a3U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                 << 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((0x13U 
                                                        == vlSelf->Soc__DOT___tm_inst)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                          ? 3U
                                                          : 
                                                         (0x1a3U 
                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                      << 6U))))) 
                                 | (((0U == (0x1fU 
                                             & (((0x13U 
                                                  == vlSelf->Soc__DOT___tm_inst)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                    ? 3U
                                                    : 
                                                   (0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                << 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_h1de70962__0[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & (((0x13U 
                                                                        == vlSelf->Soc__DOT___tm_inst)
                                                                        ? 0U
                                                                        : 
                                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                                         ? 1U
                                                                         : 
                                                                        ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                                          ? 3U
                                                                          : 
                                                                         (0x1a3U 
                                                                          == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                                      << 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((0x13U 
                                                       == vlSelf->Soc__DOT___tm_inst)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                         ? 3U
                                                         : 
                                                        (0x1a3U 
                                                         == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                     << 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_h1de70962__0[
                                                       (6U 
                                                        & (((0x13U 
                                                             == vlSelf->Soc__DOT___tm_inst)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                                              ? 1U
                                                              : 
                                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                               ? 3U
                                                               : 
                                                              (0x1a3U 
                                                               == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                                           << 1U))])) 
                                       >> (0x1fU & 
                                           (((0x13U 
                                              == vlSelf->Soc__DOT___tm_inst)
                                              ? 0U : 
                                             ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                               ? 1U
                                               : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                   ? 3U
                                                   : 
                                                  (0x1a3U 
                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))))) 
                                            << 6U)))))),64);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->Soc__DOT___tm_inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+16,((0x1fU & (- (IData)(
                                                    (1U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0) 
                                                          | (0x1a3U 
                                                             == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))) 
                                                        | (0x13U 
                                                           == vlSelf->Soc__DOT___tm_inst))))))),5);
        bufp->chgCData(oldp+17,(((0x13U == vlSelf->Soc__DOT___tm_inst)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hbf1f1a09__0)
                                           ? 1U : (
                                                   (0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                                   << 1U)))),2);
        bufp->chgCData(oldp+18,((((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_ha79e1490__0) 
                                  | (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0))
                                  ? 0U : ((0x1a3U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)) 
                                          << 2U))),3);
        bufp->chgCData(oldp+19,(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type),2);
        bufp->chgCData(oldp+20,(((0x13U == vlSelf->Soc__DOT___tm_inst)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h73d7e1c7__0)
                                           ? 1U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN_0)
                                                    ? 3U
                                                    : 
                                                   (0x1a3U 
                                                    == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))),2);
        bufp->chgCData(oldp+21,(((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_hd7167e15__0)
                                  ? 0U : ((IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT____VdfgTmp_h86e6c972__0)
                                           ? 1U : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Soc__DOT___tm_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN))
                                                     ? 0U
                                                     : 
                                                    (3U 
                                                     & (- (IData)(
                                                                  (0x1a3U 
                                                                   == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT__cu__DOT___GEN)))))))))),2);
        bufp->chgQData(oldp+22,(vlSelf->Soc__DOT__core__DOT___fc_io_fcfe_jump_pc),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+24,(vlSelf->Soc__DOT___core_io_waddr),64);
        bufp->chgQData(oldp+26,(vlSelf->Soc__DOT__core__DOT__dereg_reg2_rdata),64);
        bufp->chgCData(oldp+28,(((4U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                  ? 0xffU : ((3U == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                              ? 0xfU
                                              : ((2U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type))
                                                  ? 3U
                                                  : 
                                                 (1U 
                                                  == (IData)(vlSelf->Soc__DOT__core__DOT__dereg_sd_type)))))),8);
        bufp->chgQData(oldp+29,(vlSelf->Soc__DOT__core__DOT__fdreg_pc),64);
        bufp->chgQData(oldp+31,(vlSelf->Soc__DOT__core__DOT__dereg_op_a),64);
        bufp->chgQData(oldp+33,(vlSelf->Soc__DOT__core__DOT__dereg_op_b),64);
        bufp->chgCData(oldp+35,(vlSelf->Soc__DOT__core__DOT__dereg_rd),5);
        bufp->chgCData(oldp+36,(vlSelf->Soc__DOT__core__DOT__dereg_alu_op),5);
        bufp->chgCData(oldp+37,(vlSelf->Soc__DOT__core__DOT__dereg_wb_type),2);
        bufp->chgCData(oldp+38,(vlSelf->Soc__DOT__core__DOT__dereg_sd_type),3);
        bufp->chgQData(oldp+39,(vlSelf->Soc__DOT__core__DOT__emreg_alu_res),64);
        bufp->chgCData(oldp+41,(vlSelf->Soc__DOT__core__DOT__emreg_wb_type),2);
        bufp->chgCData(oldp+42,(vlSelf->Soc__DOT__core__DOT__emreg_rd),5);
        bufp->chgQData(oldp+43,(vlSelf->Soc__DOT__core__DOT__mwreg_alu_res),64);
        bufp->chgCData(oldp+45,(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type),2);
        bufp->chgCData(oldp+46,(vlSelf->Soc__DOT__core__DOT__mwreg_rd),5);
        bufp->chgBit(oldp+47,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__started));
        bufp->chgQData(oldp+48,(vlSelf->Soc__DOT__core__DOT__excute__DOT___alu_io_result),64);
        bufp->chgQData(oldp+50,((((2U == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                  | (1U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))
                                  ? 0ULL : vlSelf->Soc__DOT__core__DOT__mwreg_alu_res)),64);
        bufp->chgBit(oldp+52,((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type))));
        bufp->chgQData(oldp+53,(vlSelf->Soc__DOT__core__DOT__fetch__DOT__pc),64);
        bufp->chgBit(oldp+55,(vlSelf->Soc__DOT__core__DOT__interact__DOT__ebreak_flag));
        bufp->chgCData(oldp+56,(vlSelf->Soc__DOT__core__DOT__interact__DOT__over_count),3);
        bufp->chgQData(oldp+57,((((0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                  & (0U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_rd)))
                                  ? (((2U == (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)) 
                                      | (1U != (IData)(vlSelf->Soc__DOT__core__DOT__mwreg_wb_type)))
                                      ? 0ULL : vlSelf->Soc__DOT__core__DOT__mwreg_alu_res)
                                  : vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                 [vlSelf->Soc__DOT__core__DOT__mwreg_rd])),64);
        bufp->chgQData(oldp+59,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                                [vlSelf->Soc__DOT__core__DOT__mwreg_rd]),64);
        bufp->chgQData(oldp+61,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[0]),64);
        bufp->chgQData(oldp+63,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[1]),64);
        bufp->chgQData(oldp+65,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[2]),64);
        bufp->chgQData(oldp+67,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[3]),64);
        bufp->chgQData(oldp+69,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[4]),64);
        bufp->chgQData(oldp+71,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[5]),64);
        bufp->chgQData(oldp+73,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[6]),64);
        bufp->chgQData(oldp+75,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[7]),64);
        bufp->chgQData(oldp+77,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[8]),64);
        bufp->chgQData(oldp+79,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[9]),64);
        bufp->chgQData(oldp+81,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[10]),64);
        bufp->chgQData(oldp+83,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[11]),64);
        bufp->chgQData(oldp+85,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[12]),64);
        bufp->chgQData(oldp+87,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[13]),64);
        bufp->chgQData(oldp+89,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[14]),64);
        bufp->chgQData(oldp+91,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[15]),64);
        bufp->chgQData(oldp+93,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[16]),64);
        bufp->chgQData(oldp+95,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[17]),64);
        bufp->chgQData(oldp+97,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[18]),64);
        bufp->chgQData(oldp+99,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[19]),64);
        bufp->chgQData(oldp+101,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[20]),64);
        bufp->chgQData(oldp+103,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[21]),64);
        bufp->chgQData(oldp+105,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[22]),64);
        bufp->chgQData(oldp+107,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[23]),64);
        bufp->chgQData(oldp+109,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[24]),64);
        bufp->chgQData(oldp+111,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[25]),64);
        bufp->chgQData(oldp+113,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[26]),64);
        bufp->chgQData(oldp+115,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[27]),64);
        bufp->chgQData(oldp+117,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[28]),64);
        bufp->chgQData(oldp+119,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[29]),64);
        bufp->chgQData(oldp+121,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[30]),64);
        bufp->chgQData(oldp+123,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory[31]),64);
        bufp->chgQData(oldp+125,(vlSelf->Soc__DOT__tm__DOT__temp_inst),64);
    }
    bufp->chgBit(oldp+127,(vlSelf->clock));
    bufp->chgBit(oldp+128,(vlSelf->reset));
    bufp->chgQData(oldp+129,(((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                               ? vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata
                               : ((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_opa_type))
                                   ? vlSelf->Soc__DOT__core__DOT__fdreg_pc
                                   : 0ULL))),64);
    bufp->chgQData(oldp+131,(((1U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                               ? (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                  + vlSelf->Soc__DOT__core__DOT__fdreg_pc)
                               : ((2U == (IData)(vlSelf->Soc__DOT__core__DOT__decode__DOT___cu_io_jump_type))
                                   ? (0xfffffffffffffffeULL 
                                      & (vlSelf->Soc__DOT__core__DOT__decode__DOT___eximm_io_eximm 
                                         + vlSelf->Soc__DOT__core__DOT___regfile_io_RfDe_reg1_rdata))
                                   : 0x80000000ULL))),64);
    bufp->chgQData(oldp+133,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [(0x1fU & (vlSelf->Soc__DOT___tm_inst 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+135,(vlSelf->Soc__DOT__core__DOT__regfile__DOT__regs_ext__DOT__Memory
                             [(0x1fU & (vlSelf->Soc__DOT___tm_inst 
                                        >> 0x14U))]),64);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
